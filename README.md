# Adaptive Control Unit

RTL design implementing an adaptive control unit that dynamically switches between low-power and high-performance modes based on runtime configuration.

## Project Overview

This project demonstrates a runtime-adaptive hardware control unit that can dynamically switch between power-efficient and performance-optimized execution paths.

### Hierarchy

```
top_adaptive_control
    └── adaptive_control_unit
            ├── low_power_control_unit      (mode=0)
            └── high_perf_control_unit     (mode=1)
```

### Module Descriptions

| Module | Description |
|--------|-------------|
| `top_adaptive_control` | Top-level wrapper with I/O synchronization |
| `adaptive_control_unit` | Mode selector switching between control units |
| `low_power_control_unit` | Power-efficient decoder (registered outputs) |
| `high_perf_control_unit` | High-speed decoder (parallel combinational) |

### I/O Signals

| Signal | Width | Direction | Description |
|--------|-------|-----------|-------------|
| `clk_i` | 1 | Input | System clock |
| `rst_n_i` | 1 | Input | Active-low reset |
| `opcode_i` | 3 | Input | Instruction opcode |
| `valid_i` | 1 | Input | Valid instruction strobe |
| `mode_i` | 1 | Input | Mode: 0=LowPower, 1=HighPerf |
| `reg_write_o` | 1 | Output | Register write enable |
| `mem_read_o` | 1 | Output | Memory read enable |
| `mem_write_o` | 1 | Output | Memory write enable |
| `alu_src_o` | 1 | Output | ALU source selection |
| `alu_op_o` | 3 | Output | ALU operation code |
| `branch_o` | 1 | Output | Branch flag |
| `jump_o` | 1 | Output | Jump flag |
| `led_power_mode` | 1 | Output | Power mode status LED |
| `led_perf_mode` | 1 | Output | Performance mode status LED |

### Supported Opcodes

| Opcode | Instruction | ALU Operation |
|--------|-------------|---------------|
| 3'b000 | NOP | NOP (3'b111) |
| 3'b001 | ADD | ADD (3'b000) |
| 3'b010 | SUB | SUB (3'b001) |
| 3'b011 | AND | AND (3'b010) |
| 3'b100 | OR  | OR  (3'b011) |

## Verification Environment

UVM-style verification with driver, monitor, and scoreboard components.

### Testbench Structure

- **Driver**: Applies test stimuli to DUT
- **Monitor**: Captures DUT outputs
- **Scoreboard**: Compares actual vs expected results

### Test Phases

1. **Phase 1**: Low-Power Mode (mode=0) - Tests all 5 opcodes
2. **Phase 2**: High-Performance Mode (mode=1) - Tests all 5 opcodes
3. **Phase 3**: Dynamic Mode Switching - Tests runtime adaptability

## Build & Simulation

### Prerequisites

```bash
# Install Verilator and GTKWave
sudo apt install verilator gtkwave
```

### Commands

| Command | Description |
|---------|-------------|
| `make sim` | Build and compile testbench |
| `make run` | Run simulation |
| `make wave` | Open GTKWave viewer |
| `make comp` | Full flow: compile + run + view |
| `make clean` | Remove build artifacts |

### Run Full Verification

```bash
# Navigate to project directory
cd adaptive_RTL_coding

# Full verification with waveform viewing
make comp
```

Or step by step:

```bash
# Build and compile
make sim

# Run simulation
make run

# View waveform (optional - opens GTKWave)
make wave
```

## Output Files

- `work/` - Build directory
- `work/waveform.fst` - Fast Signal Trace (FST) for GTKWave

## Waveform Viewing

After running simulation, open the waveform:

```bash
make wave
```

In GTKWave:
1. Open the waveform file: `work/waveform.fst`
2. Add signals from the left panel:
   - `tb_adaptive_control_unit.u_dut.*` - DUT internal signals
   - Input signals: `opcode`, `valid`, `mode`
   - Output signals: `reg_write`, `alu_op`

## Project Structure

```
adaptive_RTL_coding/
├── src/
│   ├── top_adaptive_control.sv
│   ├── adaptive_control_unit.sv
│   ├── low_power_control_unit.sv
│   └── high_perf_control_unit.sv
├── tb/
│   └── tb_adaptive_verilator.sv
├── uvm_testbench/
│   └── tb_adaptive_control_unit.sv
├── Makefile
└── README.md
```

## Verification Results

The testbench verifies:
- All opcodes in Low-Power Mode (mode=0)
- All opcodes in High-Performance Mode (mode=1)
- Dynamic mode switching at runtime

```
============================================================
    TEST SUMMARY
============================================================
  Total Tests:  14
  Passed:     14
  Failed:     0
============================================================
  *** ALL TESTS PASSED! ***
```

All tests produce pass/fail results logged to console and waveform recording for debug.