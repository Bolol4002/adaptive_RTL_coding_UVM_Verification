# Adaptive Control Unit - Complete Project Guide

This guide explains the Adaptive Control Unit project from A to Z, covering every source file, testbench, Makefile command, and verification flow.

---

## Table of Contents

1. [Project Overview](#project-overview)
2. [Source Files (src/)](#source-files-src)
3. [Testbench Files (tb/)](#testbench-files-tb)
4. [Makefile Explanation](#makefile-explanation)
5. [Running the Project](#running-the-project)
6. [Verification Flow](#verification-flow)

---

## Project Overview

The **Adaptive Control Unit** is an RTL design that demonstrates runtime adaptability - the ability to dynamically switch between two different control unit implementations based on a mode signal:

| Mode | Control Unit | Optimization Goal |
|------|-------------|------------------|
| 0 | Low-Power | Power efficiency, registered outputs |
| 1 | High-Perf | Speed, parallel combinational logic |

This is useful in processors that need to balance power consumption vs performance based on workload.

---

## Source Files (src/)

### 1. `top_adaptive_control.sv` - Top-Level Wrapper

**Purpose:** Main synthesis top-level module with I/O buffering and metastability protection.

**Key Features:**
- Input synchronizers (2-stage flip-flops) to prevent metastability issues
- Direct instantiation of `adaptive_control_unit`
- Output assignment to external pins
- Mode status LEDs

**I/O Signals:**
```
Inputs:
  - clk_i      : System clock
  - rst_n_i   : Active-low reset (synchronous)
  - opcode_i  : 3-bit instruction opcode
  - valid_i   : Instruction valid strobe
  - mode_i    : 0=LowPower, 1=HighPerf

Outputs:
  - reg_write_o  : Register write enable
  - mem_read_o   : Memory read enable
  - mem_write_o  : Memory write enable
  - alu_src_o    : ALU source selection
  - alu_op_o     : 3-bit ALU operation code
  - branch_o     : Branch control
  - jump_o       : Jump control
  - led_power_mode : Power mode LED
  - led_perf_mode  : Performance mode LED
```

**Internal Logic (lines 56-67):**
```systemverilog
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        opcode_sync <= 3'b0;
        valid_sync  <= 1'b0;
        mode_sync   <= 1'b0;
    end
    else begin
        opcode_sync <= opcode_i;
        valid_sync  <= valid_i;
        mode_sync   <= mode_i;
    end
end
```
This creates a 2-stage synchronizer pipeline to safely capture async inputs.

---

### 2. `adaptive_control_unit.sv` - Adaptive Mode Switcher

**Purpose:** Core module that selects between Low-Power and High-Perf control units.

**Key Features:**
- Instantiates BOTH control units continuously
- Combinational multiplexer selects outputs based on `mode`
- Provides status signals for monitoring

**Architecture:**
```
                    +------------------+
  opcode ----------> | low_power_       |----> lp_reg_write
  valid  --------> | control_unit    |----> lp_alu_op
                   +------------------+     ...
                            |
                    +------------------+
  opcode ----------> | high_perf_      |----> hp_reg_write
  valid  --------> | control_unit    |----> hp_alu_op
                   +------------------+     ...
                            |
                     +------v-------+
                     |always_comb   |
                     | if (mode)    |
                     |   select HP |
                     | else        |
                     |   select LP |
                     +-------------+
```

**Mode Selection Logic (lines 94-115):**
```systemverilog
always_comb begin
    if (mode) begin  // High-Performance Mode
        reg_write = hp_reg_write;
        mem_read  = hp_mem_read;
        alu_op    = hp_alu_op;
        // ... other outputs
    end
    else begin     // Low-Power Mode
        reg_write = lp_reg_write;
        mem_read  = lp_mem_read;
        alu_op    = lp_alu_op;
        // ... other outputs
    end
end
```

---

### 3. `low_power_control_unit.sv` - Power-Efficient Decoder

**Purpose:** Control unit optimized for LOW POWER consumption.

**Design Philosophy:**
- **Registered outputs** - Prevents combinational glitches, reducing dynamic power
- **Sequential decoding** - Uses case statement for predictable power
- ** hold values** when not valid - Minimizes switching activity

**Key Differences from High-Perf:**
| Aspect | Low-Power | High-Perf |
|--------|-----------|-----------|
| Output type | Registered (flip-flop) | Combinational (wire) |
| Decoding | Sequential case | Parallel assign |
| Power behavior | Holds previous value | Computes fresh each cycle |
| Glitches | Minimal | More likely |

**Internal Registers (lines 40-41):**
```systemverilog
logic        reg_write_q;   // Quarter-cycle register
logic [2:0]  alu_op_q;     // ALU operation register
```

**Logic Flow (lines 43-77):**
```systemverilog
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        reg_write_q <= 1'b0;
        alu_op_q   <= ALU_NOP;
    end
    else if (valid) begin
        case (opcode)
            OPCODE_ADD: begin reg_write_q <= 1'b1; alu_op_q <= ALU_ADD; end
            OPCODE_SUB: begin reg_write_q <= 1'b1; alu_op_q <= ALU_SUB; end
            // ... AND, OR
            default:   begin reg_write_q <= 1'b0; alu_op_q <= ALU_NOP; end
        endcase
    end
    else begin
        reg_write_q <= 1'b0;  // Hold nothing when invalid
        alu_op_q   <= ALU_NOP;
    end
end
```

---

### 4. `high_perf_control_unit.sv` - Speed-Optimized Decoder

**Purpose:** Control unit optimized for HIGH PERFORMANCE / speed.

**Design Philosophy:**
- **Parallel combinational logic** - Decodes in single cycle without waiting
- **OR-MUX structure** - Uses parallel select for minimum latency
- **Direct assignment** - Output computes immediately with inputs

**Key Differences from Low-Power:**
| Aspect | High-Perf | Low-Power |
|--------|-----------|----------|
| Output type | Combinational (wire) | Registered (flip-flop) |
| Latency | 0 cycles (combinational) | 1 cycle (registered) |
| Power behavior | Computes every cycle | Holds value |
| Glitches | More likely | Minimal |

**Parallel Decoding (lines 40-45):**
```systemverilog
logic is_add, is_sub, is_and, is_or;

assign is_add = (opcode == OPCODE_ADD);
assign is_sub = (opcode == OPCODE_SUB);
assign is_and = (opcode == OPCODE_AND);
assign is_or  = (opcode == OPCODE_OR);
```

**ALU Operation Selection (lines 53-58):**
```systemverilog
assign alu_op_comb = ({3{is_add}} & ALU_ADD) |
                    ({3{is_sub}} & ALU_SUB) |
                    ({3{is_and}} & ALU_AND) |
                    ({3{is_or}}  & ALU_OR)  |
                    ({3{~(is_add|is_sub|is_and|is_or)}} & ALU_NOP);
```
This is a **parallel OR-MUX** - all operations compute simultaneously, then one is selected.

---

## Testbench Files (tb/)

### `tb_adaptive_verilator.sv` - UVM-Style Verification Testbench

**Purpose:** Comprehensive testbench with driver, monitor, and scoreboard for verification.

**Structure:**

```
+----------------------------------------------------------+
|                    TESTBENCH ARCHITECTURE                   |
+----------------------------------------------------------+
|                                                         |
|  +---------+    +------+    +---------+                   |
|  | STIMULUS|--->|DRIVER|--->|  DUT    |                   |
|  | (tasks)|    |(task)|    |(adaptive|                   |
|  +--------+    +------+    |_control_)                   |
|                            |    |                       |
|                            v    v                       |
|                     +---------+                       |
|                     |MONITOR  |                       |
|                     |(task)   |                       |
|                     +----+----+                       |
|                          |                             |
|                          v                             |
|                   +------------+                      |
|                   |SCOREBOARD  |                      |
|                   |(comparison|                      |
|                   +------+-----+                      |
|                          |                             |
|                          v                             |
|                   +------------+                      |
|                   | TEST REPORT|                      |
|                   +------------+                      |
+----------------------------------------------------------+
```

---

### Components Explained:

#### 1. Clock Generation (lines 61-65)

```systemverilog
initial begin
    clk = 0;
    forever #(CLK_PERIOD/2) clk = ~clk;
end
```
- Generates 100MHz clock (10ns period)
- Runs for entire simulation

#### 2. DUT Instantiation (lines 43-59)

```systemverilog
adaptive_control_unit u_dut (
    .clk              (clk),
    .rst_n            (rst_n),
    .opcode           (opcode),
    .valid            (valid),
    .mode             (mode),
    .reg_write        (reg_write),
    .alu_op           (alu_op),
    // ... other connections
);
```
- Instantiates the design under test
- Connects all input/output signals

#### 3. Driver Task (lines 67-73)

```systemverilog
task drive_input(input [2:0] op, input m);
    opcode = op;
    mode = m;
    valid = 1;
    #(CLK_PERIOD);
endtask
```
**Purpose:** Applies test stimulus to DUT inputs
- Sets opcode and mode
- Asserts valid signal
- Waits one clock cycle

#### 4. Monitor/Scoreboard Task (lines 75-114)

```systemverilog
task monitor_outputs(string test_name);
    // 1. Calculate expected values
    expected_reg_write = (opcode != OPCODE_NOP) ? 1'b1 : 1'b0;
    case (opcode)
        OPCODE_ADD: expected_alu_op = 3'b000;
        // ... other opcodes
    endcase
    
    // 2. Wait for DUT to process
    @(posedge clk);
    
    // 3. Compare actual vs expected
    if (reg_write == expected_reg_write && alu_op == expected_alu_op) begin
        pass_count++;
        $display("[PASS] ...");
    end else begin
        fail_count++;
        $display("[FAIL] ...");
    end
endtask
```
**Purpose:** 
- Reads DUT outputs
- Compares with expected values
- Logs pass/fail results

#### 5. Test Sequence - Phase 1: Low-Power Mode (lines 139-162)

```systemverilog
test_phase = 1;
mode = 0;  // Select Low-Power mode

drive_input(OPCODE_NOP, 0);
monitor_outputs("NOP");

drive_input(OPCODE_ADD, 0);
monitor_outputs("ADD");

// ... SUB, AND, OR
```

#### 6. Test Sequence - Phase 2: High-Performance Mode (lines 165-189)

```systemverilog
test_phase = 2;
mode = 1;  // Select High-Performance mode

drive_input(OPCODE_NOP, 1);
monitor_outputs("NOP");

drive_input(OPCODE_ADD, 1);
monitor_outputs("ADD");

// ... SUB, AND, OR
```

#### 7. Test Sequence - Phase 3: Dynamic Mode Switching (lines 191-214)

```systemverilog
test_phase = 3;
// Test switching between modes at runtime

mode = 0;
drive_input(OPCODE_ADD, 0);
monitor_outputs("ADD_LP");  // ADD in Low-Power mode

mode = 1;
drive_input(OPCODE_ADD, 1);
monitor_outputs("ADD_HP");  // ADD in High-Perf mode

// Switch back
mode = 0;
drive_input(OPCODE_SUB, 0);
monitor_outputs("SUB_LP");

mode = 1;
drive_input(OPCODE_SUB, 1);
monitor_outputs("SUB_HP");
```

#### 8. Test Summary (lines 217-232)

```systemverilog
$display("  Total Tests:  %0d", test_count);
$display("  Passed:     %0d", pass_count);
$display("  Failed:     %0d", fail_count);

if (fail_count == 0)
    $display("  *** ALL TESTS PASSED! ***");
```

#### 9. Waveform Dumping (lines 246-250)

```systemverilog
initial begin
    $dumpfile("waveform.fst");
    $dumpvars(0, tb_adaptive_control_unit);
end
```
- Generates FST format waveform for GTKWave
- Records all signals in hierarchy

---

## Makefile Explanation

### Variables (lines 6-23)

```makefile
SRC_DIR = src          # RTL source directory
TB_DIR = tb            # Testbench directory  
VERILATOR = verilator # Simulator command
WORK_DIR = work        # Build output directory
FST_FILE = waveform.fst # Waveform file name
```

### Make Targets

#### 1. `make sim` - Build and Compile

**Command:** `verilator [options] --cc top.sv testbench.sv --exe`

**What it does:**
```
1. Read RTL from src/
2. Read testbench from tb/
3. Generate C++ model
4. Compile to binary
5. Create Makefile for building
```

**Verilator Flags Explained:**

| Flag | Purpose |
|------|---------|
| `-Isrc` | Add src/ to include search path |
| `-Itb` | Add tb/ to include search path |
| `--cc` | Compile to C++ (create model) |
| `--trace` | Enable waveform tracing |
| `--trace-fst` | Generate FST format (smaller than VCD) |
| `--trace-structs` | Trace struct types |
| `--timing` | Support delays `#` in testbench |
| `--main` | Generate main() function |
| `-Wall` | Enable all warnings |
| `-Wno-xxx` | Disable specific warnings |
| `--exe` | Create executable |
| `-Mdir work` | Output to work/ directory |

#### 2. `make run` - Run Simulation

**Command:** `./work/Vtop_adaptive_control`

**What it does:**
```
1. Execute compiled binary
2. Run test sequence
3. Generate waveform file
4. Print test results
```

#### 3. `make wave` - View Waveform

**Command:** `gtkwave work/waveform.fst`

**What it does:**
```
1. Open GTKWave viewer
2. Load waveform file
3. Display signal hierarchy
```

#### 4. `make comp` - Full Flow

**Command:** `make sim && make run && make wave`

**What it does:**
```
1. Build testbench
2. Run simulation  
3. Open waveform viewer
```

#### 5. `make clean` - Clean Build

**Command:** `rm -rf work/`

**What it does:**
```
1. Remove work/ directory
2. Remove waveform files
```

---

## Running the Project

### Quick Start

```bash
cd adaptive_RTL_coding
make comp
```

This runs ALL steps: build, simulate, view waveform.

### Step-by-Step

```bash
# 1. Build and compile
make sim

# 2. Run simulation
make run

# 3. View waveform (optional)
make wave

# 4. Clean build files
make clean
```

### Expected Output

```
============================================================
    ADAPTIVE CONTROL UNIT - VERIFICATION TESTBENCH
============================================================

-----------------------------------------------------------
  PHASE 1: LOW-POWER MODE (mode=0)
-----------------------------------------------------------
[PASS] NOP: opcode=000 valid=1 mode=0 -> reg_write=0 alu_op=111
[PASS] ADD: opcode=001 valid=1 mode=0 -> reg_write=1 alu_op=000
[PASS] SUB: opcode=010 valid=1 mode=0 -> reg_write=1 alu_op=001
[PASS] AND: opcode=011 valid=1 mode=0 -> reg_write=1 alu_op=010
[PASS] OR: opcode=100 valid=1 mode=0 -> reg_write=1 alu_op=011

-----------------------------------------------------------
  PHASE 2: HIGH-PERFORMANCE MODE (mode=1)
-----------------------------------------------------------
[PASS] NOP: opcode=000 valid=1 mode=1 -> reg_write=0 alu_op=111
[PASS] ADD: opcode=001 valid=1 mode=1 -> reg_write=1 alu_op=000
[PASS] SUB: opcode=010 valid=1 mode=1 -> reg_write=1 alu_op=001
[PASS] AND: opcode=011 valid=1 mode=1 -> reg_write=1 alu_op=010
[PASS] OR: opcode=100 valid=1 mode=1 -> reg_write=1 alu_op=011

-----------------------------------------------------------
  PHASE 3: DYNAMIC MODE SWITCHING
-----------------------------------------------------------
[PASS] ADD_LP: opcode=001 valid=1 mode=0 -> reg_write=1 alu_op=000
[PASS] ADD_HP: opcode=001 valid=1 mode=1 -> reg_write=1 alu_op=000
[PASS] SUB_LP: opcode=010 valid=1 mode=0 -> reg_write=1 alu_op=001
[PASS] SUB_HP: opcode=010 valid=1 mode=1 -> reg_write=1 alu_op=001

============================================================
    TEST SUMMARY
============================================================
  Total Tests:  14
  Passed:     14
  Failed:     0
============================================================
  *** ALL TESTS PASSED! ***
```

---

## Verification Flow

### Test Coverage

| Test Category | Description | Tests |
|----------------|-------------|-------|
| Phase 1: Low-Power | All 5 opcodes in mode=0 | 5 |
| Phase 2: High-Perf | All 5 opcodes in mode=1 | 5 |
| Phase 3: Switching | Mode toggle during operation | 4 |
| **Total** | | **14** |

### Verification Strategy

1. **Stimulus Generation:** Driver task applies opcode/valid/mode
2. **DUT Processing:** Design computes outputs based on mode
3. **Output Capture:** Monitor reads reg_write, alu_op
4. **Result Comparison:** Scoreboard compares with expected
5. **Logging:** Pass/fail displayed to console

### Why This Is UVM-Style

While not full UVM (Verilator compatibility limitation), this follows UVM principles:

| UVM Concept | Implementation |
|-------------|-----------------|
| Sequence | test_sequence (driver task) |
| Driver | drive_input task |
| Monitor | monitor_outputs task |
| Scoreboard | Comparison logic |
| Agent | Testbench module |
| Environment | Full tb_adaptive_control_unit |
| Coverage | Pass/fail counters |

---

## File Summary

```
adaptive_RTL_coding/
├── src/
│   ├── top_adaptive_control.sv      # Top-level with I/O buffers
│   ├── adaptive_control_unit.sv     # Mode switcher
│   ├── low_power_control_unit.sv   # Power-optimized decoder
│   └── high_perf_control_unit.sv   # Speed-optimized decoder
├── tb/
│   └── tb_adaptive_verilator.sv      # UVM-style testbench
├── Makefile                          # Build commands
└── README.md                        # Quick reference
```

---

## Key Takeaways

1. **Two Control Units:** One optimized for power, one for speed
2. **Runtime Switching:** Mode signal selects at runtime without reset
3. **Same Interface:** Both control units have identical I/O
4. **Verification:** 14 tests cover all opcodes + mode switching
5. **Waveform:** FST format for efficient waveform viewing