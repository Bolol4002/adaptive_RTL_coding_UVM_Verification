# Adaptive Control Unit - Presentation Content

## Slide 1: Title Slide
- **Project Title:** Adaptive Control Unit
- **Subtitle:** Dynamic RTL Design for Power-Performance Trade-off
- **Presented by:*
- **Date:** [Date]

---

## Slide 2: Abstract
- RTL design implementing runtime-adaptive hardware control unit
- Dynamically switches between low-power & high-performance modes
- Based on runtime configuration signal (mode_i)
- Demonstrates power-efficiency vs speed trade-off optimization

---

## Slide 3: Objective
- Design a reconfigurable control unit with dual execution paths
- Achieve power optimization when speed is not critical
- Achieve performance optimization when faster execution needed
- Support dynamic switching between modes at runtime
- Verify functionality through UVM-style testbench

---

## Slide 4: Introduction
- Traditional hardware: fixed power/performance tradeoff
- Need for adaptive systems in modern processors
- Control unit: decodes instructions & generates control signals
- Two modes: Low-Power (registered outputs) vs High-Performance (parallel combinational)
- Mode selection via external input signal

---

## Slide 5: Architecture & Hierarchy
```
top_adaptive_control
└── adaptive_control_unit
    ├── low_power_control_unit (mode=0)
    └── high_perf_control_unit (mode=1)
```
- **Top Module:** I/O synchronization wrapper
- **Adaptive Module:** Mode selector between control units
- **Low-Power:** Power-efficient decoder (pipelined, registered)
- **High-Perf:** High-speed decoder (parallel, combinational)

---

## Slide 6: Working Principle
- Input: clk, rst_n, opcode(3-bit), valid, mode
- Output: reg_write, mem_read, mem_write, alu_src, alu_op, branch, jump
- Mode=0: Uses Low-Power control unit (slower, less power)
- Mode=1: Uses High-Perf control unit (faster, more power)
- Supports 5 opcodes: NOP, ADD, SUB, AND, OR
- LED indicators show current mode

---

## Slide 7: Advantages
- **Flexibility:** Dynamic runtime mode switching
- **Power Saving:** Use low-power mode for simple tasks
- **Performance:** Use high-perf mode for critical operations
- **Scalability:** Architecture easily extensible
- **Verification:** UVM-style testbench with comprehensive coverage

---

## Slide 8: Disadvantages
- **Area Overhead:** Duplicate control path logic
- **Complexity:** Mode switching introduces timing considerations
- **Latency:** Low-power mode adds pipeline register delay
- **Design Effort:** Need to maintain two control units

---

## Slide 9: Verification & Results
- UVM-style testbench with Driver, Monitor, Scoreboard
- Test Phases:
  - Phase 1: Low-Power Mode (all 5 opcodes)
  - Phase 2: High-Performance Mode (all 5 opcodes)
  - Phase 3: Dynamic Mode Switching
- **Result: 14/14 tests passed (100% success)**

---

## Slide 10: Conclusion
- Successfully implemented adaptive control unit in SystemVerilog
- Demonstrated power-performance tradeoff via dual-mode design
- Verified functionality through comprehensive testbench
- Future work: Add more control modes, integrate with processor pipeline