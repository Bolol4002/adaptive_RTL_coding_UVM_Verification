
`timescale 1ns / 1ps

module tb_adaptive_control_unit;

    localparam CLK_PERIOD = 10;

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

    localparam OPCODE_NOP = 3'b000;
    localparam OPCODE_ADD = 3'b001;
    localparam OPCODE_SUB = 3'b010;
    localparam OPCODE_AND = 3'b011;
    localparam OPCODE_OR  = 3'b100;

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

    always begin
        clk = 0;
        #(CLK_PERIOD/2);
        clk = 1;
        #(CLK_PERIOD/2);
    end

    initial begin
        rst_n = 0;
        opcode = OPCODE_NOP;
        valid = 0;
        mode = 0;

        $display("    ADAPTIVE CONTROL UNIT - TESTBENCH");
        
        #(CLK_PERIOD * 2);
        rst_n = 1;
        #(CLK_PERIOD);

        $display("--- Low-Power Mode Tests (mode=0) ---");
        mode = 0;

        opcode = OPCODE_NOP; valid = 1; #(CLK_PERIOD * 3);
        $display("NOP: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 0 && alu_op == 3'b111) else $display("FAIL: NOP");

        opcode = OPCODE_ADD; valid = 1; #(CLK_PERIOD * 3);
        $display("ADD: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b000) else $display("FAIL: ADD");

        opcode = OPCODE_SUB; valid = 1; #(CLK_PERIOD * 3);
        $display("SUB: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b001) else $display("FAIL: SUB");

        opcode = OPCODE_AND; valid = 1; #(CLK_PERIOD * 3);
        $display("AND: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b010) else $display("FAIL: AND");

        opcode = OPCODE_OR; valid = 1; #(CLK_PERIOD * 3);
        $display("OR: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b011) else $display("FAIL: OR");

        $display("");
        $display("--- High-Performance Mode Tests (mode=1) ---");
        mode = 1;

        opcode = OPCODE_NOP; valid = 1; #(CLK_PERIOD * 3);
        $display("NOP: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 0 && alu_op == 3'b111) else $display("FAIL: NOP");

        opcode = OPCODE_ADD; valid = 1; #(CLK_PERIOD * 3);
        $display("ADD: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b000) else $display("FAIL: ADD");

        opcode = OPCODE_SUB; valid = 1; #(CLK_PERIOD * 3);
        $display("SUB: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b001) else $display("FAIL: SUB");

        opcode = OPCODE_AND; valid = 1; #(CLK_PERIOD * 3);
        $display("AND: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b010) else $display("FAIL: AND");

        opcode = OPCODE_OR; valid = 1; #(CLK_PERIOD * 3);
        $display("OR: reg_write=%b alu_op=%b", reg_write, alu_op);
        assert (reg_write == 1 && alu_op == 3'b011) else $display("FAIL: OR");

        $display("");
        $display("--- Dynamic Mode Switching ---");
        mode = 0;
        opcode = OPCODE_ADD; valid = 1; #(CLK_PERIOD * 3);
        $display("ADD_LP: reg_write=%b alu_op=%b power=%b", reg_write, alu_op, power_mode_active);
        mode = 1; #(CLK_PERIOD * 3);
        $display("ADD_HP: reg_write=%b alu_op=%b perf=%b", reg_write, alu_op, perf_mode_active);
        mode = 0; #(CLK_PERIOD * 3);
        $display("SUB_LP: reg_write=%b alu_op=%b power=%b", reg_write, alu_op, power_mode_active);
        mode = 1; #(CLK_PERIOD * 3);
        $display("SUB_HP: reg_write=%b alu_op=%b perf=%b", reg_write, alu_op, perf_mode_active);

        #(CLK_PERIOD * 5);
        $finish;
    end

    initial begin
        $dumpfile("waveform.fst");
        $dumpvars(0, tb_adaptive_control_unit);
    end

endmodule