
`timescale 1ns / 1ps
`include "uvm_macros.svh"

import uvm_pkg::*;

//=============================================================================
// Transaction Definition
//=============================================================================
class adaptive_transaction extends uvm_sequence_item;
    rand bit [2:0] opcode;
    rand bit       valid;
    rand bit       mode;
    
    bit         reg_write;
    bit         mem_read;
    bit         mem_write;
    bit         alu_src;
    bit [2:0]  alu_op;
    bit        branch;
    bit        jump;
    bit        power_mode_active;
    bit        perf_mode_active;
    
    function new(string name = "adaptive_transaction");
        super.new(name);
    endfunction
    
    function string convert2string();
        return $sformatf("opcode=%b valid=%b mode=%b reg_write=%b alu_op=%b",
                        opcode, valid, mode, reg_write, alu_op);
    endfunction
    
    `uvm_object_utils(adaptive_transaction)
endclass

//=============================================================================
// Sequencer
//=============================================================================
class adaptive_sequencer extends uvm_sequencer #(adaptive_transaction);
    `uvm_component_utils(adaptive_sequencer)
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

//=============================================================================
// Driver
//=============================================================================
class adaptive_driver extends uvm_driver #(adaptive_transaction);
    `uvm_component_utils(adaptive_driver)
    
    virtual adaptive_if vif;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual adaptive_if)::get(this, "", "vif", vif))
            `uvm_fatal("NOVIF", "Virtual interface not found")
    endfunction
    
    task run_phase(uvm_phase phase);
        forever begin
            seq_item_port.get_next_item(req);
            drive_item(req);
            seq_item_port.item_done();
        end
    endtask
    
    task drive_item(adaptive_transaction tx);
        vif.opcode = tx.opcode;
        vif.valid = tx.valid;
        vif.mode = tx.mode;
        @(posedge vif.clk);
    endtask
endclass

//=============================================================================
// Monitor
//=============================================================================
class adaptive_monitor extends uvm_monitor;
    `uvm_component_utils(adaptive_monitor)
    
    uvm_analysis_port #(adaptive_transaction) ap;
    virtual adaptive_if vif;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap = new("ap", this);
        if (!uvm_config_db#(virtual adaptive_if)::get(this, "", "vif", vif))
            `uvm_fatal("NOVIF", "Virtual interface not found")
    endfunction
    
    task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif.clk);
            if (vif.rst_n && vif.valid) begin
                adaptive_transaction tx = adaptive_transaction::type_id::create("tx");
                tx.opcode = vif.opcode;
                tx.valid = vif.valid;
                tx.mode = vif.mode;
                tx.reg_write = vif.reg_write;
                tx.alu_op = vif.alu_op;
                tx.power_mode_active = vif.power_mode_active;
                tx.perf_mode_active = vif.perf_mode_active;
                ap.write(tx);
            end
        end
    endtask
endclass

//=============================================================================
// Agent
//=============================================================================
class adaptive_agent extends uvm_agent;
    `uvm_component_utils(adaptive_agent)
    
    adaptive_driver    driver;
    adaptive_monitor monitor;
    adaptive_sequencer sequencer;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver    = adaptive_driver::type_id::create("driver", this);
        monitor  = adaptive_monitor::type_id::create("monitor", this);
        sequencer = adaptive_sequencer::type_id::create("sequencer", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
    
    task run_phase(uvm_phase phase);
        driver.vif = monitor.vif;
    endtask
endclass

//=============================================================================
// Scoreboard
//=============================================================================
class adaptive_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(adaptive_scoreboard)
    
    uvm_analysis_imp #(adaptive_transaction, adaptive_scoreboard) imp;
    integer expected_count;
    integer actual_count;
    integer pass_count;
    integer fail_count;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        imp = new("imp", this);
        expected_count = 0;
        actual_count = 0;
        pass_count = 0;
        fail_count = 0;
    endfunction
    
    function void write(adaptive_transaction tx);
        actual_count++;
        
        bit [2:0] expected_alu_op;
        bit expected_reg_write;
        
        if (tx.mode == 0) begin
            expected_reg_write = (tx.opcode != 3'b000) ? 1'b1 : 1'b0;
            case (tx.opcode)
                3'b001: expected_alu_op = 3'b000;  // ADD
                3'b010: expected_alu_op = 3'b001;  // SUB
                3'b011: expected_alu_op = 3'b010;  // AND
                3'b100: expected_alu_op = 3'b011;  // OR
                default: expected_alu_op = 3'b111; // NOP
            endcase
        end else begin
            expected_reg_write = (tx.opcode != 3'b000) ? 1'b1 : 1'b0;
            case (tx.opcode)
                3'b001: expected_alu_op = 3'b000;
                3'b010: expected_alu_op = 3'b001;
                3'b011: expected_alu_op = 3'b010;
                3'b100: expected_alu_op = 3'b011;
                default: expected_alu_op = 3'b111;
            endcase
        end
        
        if (tx.reg_write == expected_reg_write && tx.alu_op == expected_alu_op) begin
            pass_count++;
            `uvm_info("SCOREBOARD", $sformatf("[PASS] %s", tx.convert2string()), UVM_LOW)
        end else begin
            fail_count++;
            `uvm_error("SCOREBOARD", $sformatf("[FAIL] %s Expected: rw=%b, alu=%b",
                                           tx.convert2string(), expected_reg_write, expected_alu_op))
        end
    endfunction
    
    function void report_phase(uvm_phase phase);
        `uvm_info("SCOREBOARD", $sformatf("\n=== TEST RESULTS ===\nPassed: %0d\nFailed: %0d\n Total: %0d",
                                        pass_count, fail_count, pass_count + fail_count), UVM_LOW)
    endfunction
endclass

//=============================================================================
// Environment
//=============================================================================
class adaptive_env extends uvm_env;
    `uvm_component_utils(adaptive_env)
    
    adaptive_agent    agent;
    adaptive_scoreboard scoreboard;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        agent     = adaptive_agent::type_id::create("agent", this);
        scoreboard = adaptive_scoreboard::type_id::create("scoreboard", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        agent.monitor.ap.connect(scoreboard.imp);
    endfunction
endclass

//=============================================================================
// Test Sequence
//=============================================================================
class test_sequence extends uvm_sequence #(adaptive_transaction);
    `uvm_object_utils(test_sequence)
    
    function new(string name = "test_sequence");
        super.new(name);
    endfunction
    
    task body();
        `uvm_info("TEST_SEQ", "Starting adaptive control unit test sequence", UVM_LOW)
        
        repeat(5) begin
            req = adaptive_transaction::type_id::create("req");
            start_item(req);
            req.randomize() with {valid == 1;};
            finish_item(req);
            @(posedge 1);
        end
        
        `uvm_info("TEST_SEQ", "Test sequence completed", UVM_LOW)
    endtask
endclass

//=============================================================================
// Base Test
//=============================================================================
class base_test extends uvm_test;
    `uvm_component_utils(base_test)
    
    adaptive_env env;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = adaptive_env::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        #1000;
        phase.drop_objection(this);
    endtask
endclass

//=============================================================================
// Main Testbench Module
//=============================================================================
module tb_adaptive_control_unit;
    import uvm_pkg::*;
    
    logic clk;
    logic rst_n;
    logic [2:0] opcode;
    logic valid;
    logic mode;
    logic reg_write;
    logic mem_read;
    logic mem_write;
    logic alu_src;
    logic [2:0] alu_op;
    logic branch;
    logic jump;
    logic power_mode_active;
    logic perf_mode_active;
    
    typedef struct packed {
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
    } adaptive_if_t;
    
    virtual interface adaptive_if_t vif;
    
    initial begin
        vif = new;
        uvm_config_db#(virtual adaptive_if_t)::set(null, "*", "vif", vif);
        run_test("base_test");
    end
    
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    initial begin
        rst_n = 0;
        #20 rst_n = 1;
    end
    
    always @(posedge clk) begin
        if (rst_n) begin
            if ($random % 10 == 0) begin
                valid = 1;
                opcode = $random % 5;
                mode = $random % 2;
            end else begin
                valid = 0;
            end
        end
    end
    
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
    
    initial begin
        #10000;
        $display("Simulation completed!");
        $finish;
    end
    
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_adaptive_control_unit);
    end

endmodule