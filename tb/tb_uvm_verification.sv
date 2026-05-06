//=============================================================================
// UVM-Inspired Testbench for Verilator Simulation
// Description: UVM-style verification with transaction, driver, monitor, scoreboard
// Compatible with Verilator
//=============================================================================

`timescale 1ns / 1ps

module tb_adaptive_control_unit;

    import uvm_pkg::*;
    
    // Clock parameters
    localparam CLK_PERIOD = 10;
    
    // Interface signals
    logic        clk;
    logic        rst_n;
    logic [2:0]  opcode;
    logic        valid;
    logic        mode;
    logic        reg_write;
    logic        mem_read;
    logic        mem_write;
    logic        alu_src;
    logic [2:0]  alu_op;
    logic        branch;
    logic        jump;
    logic        power_mode_active;
    logic        perf_mode_active;
    
    // Opcode definitions
    localparam OPCODE_NOP = 3'b000;
    localparam OPCODE_ADD = 3'b001;
    localparam OPCODE_SUB = 3'b010;
    localparam OPCODE_AND = 3'b011;
    localparam OPCODE_OR  = 3'b100;
    
    // Test tracking
    integer test_count;
    integer pass_count;
    integer fail_count;
    integer test_phase;
    
    // DUT instantiation
    adaptive_control_unit u_dut (
        .clk              (clk),
        .rst_n            (rst_n),
        .opcode           (opcode),
        .valid            (valid),
        .mode             (mode),
        .reg_write        (reg_write),
        .mem_read         (mem_read),
        .mem_write        (mem_write),
        .alu_src          (alu_src),
        .alu_op           (alu_op),
        .branch           (branch),
        .jump             (jump),
        .power_mode_active(power_mode_active),
        .perf_mode_active (perf_mode_active)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    // Monitor task - captures DUT outputs
    task monitor_outputs(string test_name);
        logic [2:0] expected_alu_op;
        logic expected_reg_write;
        
        test_count++;
        
        // Expected values based on mode
        if (mode == 0) begin
            expected_reg_write = (opcode != OPCODE_NOP) ? 1'b1 : 1'b0;
            case (opcode)
                OPCODE_ADD: expected_alu_op = 3'b000;
                OPCODE_SUB: expected_alu_op = 3'b001;
                OPCODE_AND: expected_alu_op = 3'b010;
                OPCODE_OR:  expected_alu_op = 3'b011;
                default:   expected_alu_op = 3'b111;
            endcase
        end else begin
            expected_reg_write = (opcode != OPCODE_NOP) ? 1'b1 : 1'b0;
            case (opcode)
                OPCODE_ADD: expected_alu_op = 3'b000;
                OPCODE_SUB: expected_alu_op = 3'b001;
                OPCODE_AND: expected_alu_op = 3'b010;
                OPCODE_OR:  expected_alu_op = 3'b011;
                default:   expected_alu_op = 3'b111;
            endcase
        end
        
        @(posedge clk);
        
        if (reg_write == expected_reg_write && alu_op == expected_alu_op) begin
            pass_count++;
            $display("[PASS] %s: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b",
                     test_name, opcode, valid, mode, reg_write, alu_op);
        end else begin
            fail_count++;
            $display("[FAIL] %s: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b",
                     test_name, opcode, expected_reg_write, reg_write, 
                     expected_alu_op, alu_op);
        end
    endtask
    
    // Drive task - applies stimulus
    task drive_input(input [2:0] op, input m);
        opcode = op;
        mode = m;
        valid = 1;
        #(CLK_PERIOD);
    endtask
    
    // Main test sequence
    initial begin
        // Initialize
        rst_n = 0;
        opcode = OPCODE_NOP;
        valid = 0;
        mode = 0;
        test_count = 0;
        pass_count = 0;
        fail_count = 0;
        test_phase = 0;
        
        $display("");
        $display("============================================================");
        $display("    ADAPTIVE CONTROL UNIT - UVM VERIFICATION TESTBENCH");
        $display("============================================================");
        $display("");
        
        // Reset sequence
        #(CLK_PERIOD * 2);
        rst_n = 1;
        #(CLK_PERIOD);
        
        //================================================================
        // TEST PHASE 1: Low-Power Mode Tests (mode=0)
        //================================================================
        test_phase = 1;
        $display("-----------------------------------------------------------");
        $display("  PHASE 1: LOW-POWER MODE (mode=0)");
        $display("-----------------------------------------------------------");
        mode = 0;
        
        drive_input(OPCODE_NOP, 0);
        monitor_outputs("NOP");
        
        drive_input(OPCODE_ADD, 0);
        monitor_outputs("ADD");
        
        drive_input(OPCODE_SUB, 0);
        monitor_outputs("SUB");
        
        drive_input(OPCODE_AND, 0);
        monitor_outputs("AND");
        
        drive_input(OPCODE_OR, 0);
        monitor_outputs("OR");
        
        $display("");
        
        //================================================================
        // TEST PHASE 2: High-Performance Mode Tests (mode=1)
        //================================================================
        test_phase = 2;
        $display("-----------------------------------------------------------");
        $display("  PHASE 2: HIGH-PERFORMANCE MODE (mode=1)");
        $display("-----------------------------------------------------------");
        mode = 1;
        
        drive_input(OPCODE_NOP, 1);
        monitor_outputs("NOP");
        
        drive_input(OPCODE_ADD, 1);
        monitor_outputs("ADD");
        
        drive_input(OPCODE_SUB, 1);
        monitor_outputs("SUB");
        
        drive_input(OPCODE_AND, 1);
        monitor_outputs("AND");
        
        drive_input(OPCODE_OR, 1);
        monitor_outputs("OR");
        
        $display("");
        
        //================================================================
        // TEST PHASE 3: Dynamic Mode Switching
        //================================================================
        test_phase = 3;
        $display("-----------------------------------------------------------");
        $display("  PHASE 3: DYNAMIC MODE SWITCHING");
        $display("-----------------------------------------------------------");
        
        mode = 0;
        drive_input(OPCODE_ADD, 0);
        monitor_outputs("ADD_LP");
        
        mode = 1;
        drive_input(OPCODE_ADD, 1);
        monitor_outputs("ADD_HP");
        
        mode = 0;
        drive_input(OPCODE_SUB, 0);
        monitor_outputs("SUB_LP");
        
        mode = 1;
        drive_input(OPCODE_SUB, 1);
        monitor_outputs("SUB_HP");
        
        $display("");
        
        //================================================================
        // TEST SUMMARY
        //================================================================
        $display("============================================================");
        $display("    TEST SUMMARY");
        $display("============================================================");
        $display("  Total Tests:  %0d", test_count);
        $display("  Passed:     %0d", pass_count);
        $display("  Failed:     %0d", fail_count);
        $display("============================================================");
        
        if (fail_count == 0)
            $display("  *** ALL TESTS PASSED! ***");
        else
            $display("  *** %0d TESTS FAILED ***", fail_count);
        
        $display("");
        
        #(CLK_PERIOD * 5);
        $finish;
    end
    
    // Timeout watchdog
    initial begin
        #(CLK_PERIOD * 500);
        $display("ERROR: Simulation timeout!");
        $finish;
    end
    
    // VCD dump for waveform
    initial begin
        $dumpfile("waveform.fst");
        $dumpvars(0, tb_adaptive_control_unit);
    end

endmodule