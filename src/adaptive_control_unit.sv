
`timescale 1ns / 1ps

module adaptive_control_unit (
    input  logic        clk,
    input  logic        rst_n,
    input  logic [2:0]  opcode,      
    input  logic        valid,       // Valid instruction signal
    input  logic        mode,        // Mode select: 0=Low Power, 1=High Performance
    
    // Control outputs
    output logic        reg_write,
    output logic        mem_read,
    output logic        mem_write,
    output logic        alu_src,
    output logic [2:0]  alu_op,
    output logic        branch,
    output logic        jump,
    
    // Status outputs for monitoring
    output logic        power_mode_active,
    output logic        perf_mode_active
);

    
    // Low-Power Control Unit outputs
    logic        lp_reg_write;
    logic        lp_mem_read;
    logic        lp_mem_write;
    logic        lp_alu_src;
    logic [2:0]  lp_alu_op;
    logic        lp_branch;
    logic        lp_jump;
    
    // High-Performance Control Unit outputs
    logic        hp_reg_write;
    logic        hp_mem_read;
    logic        hp_mem_write;
    logic        hp_alu_src;
    logic [2:0]  hp_alu_op;
    logic        hp_branch;
    logic        hp_jump;
    
    
    // Low-Power Control Unit Instance
    low_power_control_unit u_low_power (
        .clk        (clk),
        .rst_n      (rst_n),
        .opcode     (opcode),
        .valid      (valid),
        .reg_write  (lp_reg_write),
        .mem_read   (lp_mem_read),
        .mem_write  (lp_mem_write),
        .alu_src    (lp_alu_src),
        .alu_op     (lp_alu_op),
        .branch     (lp_branch),
        .jump       (lp_jump)
    );
    
    // High-Performance Control Unit Instance
    high_perf_control_unit u_high_perf (
        .clk        (clk),
        .rst_n      (rst_n),
        .opcode     (opcode),
        .valid      (valid),
        .reg_write  (hp_reg_write),
        .mem_read   (hp_mem_read),
        .mem_write  (hp_mem_write),
        .alu_src    (hp_alu_src),
        .alu_op     (hp_alu_op),
        .branch     (hp_branch),
        .jump       (hp_jump)
    );
    
    // Adaptive Mode Selection Logic
    // mode = 0: Select Low-Power Control Unit (power-efficient)
    // mode = 1: Select High-Performance Control Unit (speed-optimized)
    
    always_comb begin
        if (mode) begin
            reg_write = hp_reg_write;
            mem_read  = hp_mem_read;
            mem_write = hp_mem_write;
            alu_src   = hp_alu_src;
            alu_op    = hp_alu_op;
            branch    = hp_branch;
            jump      = hp_jump;
        end
        else begin
            reg_write = lp_reg_write;
            mem_read  = lp_mem_read;
            mem_write = lp_mem_write;
            alu_src   = lp_alu_src;
            alu_op    = lp_alu_op;
            branch    = lp_branch;
            jump      = lp_jump;
        end
    end
    
    assign power_mode_active = ~mode;
    assign perf_mode_active  = mode;

endmodule
