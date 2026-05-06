// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_adaptive_control.h for the primary calling header

#ifndef VERILATED_VTOP_ADAPTIVE_CONTROL___024ROOT_H_
#define VERILATED_VTOP_ADAPTIVE_CONTROL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_adaptive_control__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_adaptive_control___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_n_i,0,0);
    VL_IN8(opcode_i,2,0);
    VL_IN8(valid_i,0,0);
    VL_IN8(mode_i,0,0);
    VL_OUT8(reg_write_o,0,0);
    VL_OUT8(mem_read_o,0,0);
    VL_OUT8(mem_write_o,0,0);
    VL_OUT8(alu_src_o,0,0);
    VL_OUT8(alu_op_o,2,0);
    VL_OUT8(branch_o,0,0);
    VL_OUT8(jump_o,0,0);
    VL_OUT8(led_power_mode,0,0);
    VL_OUT8(led_perf_mode,0,0);
    CData/*2:0*/ top_adaptive_control__DOT__opcode_sync;
    CData/*0:0*/ top_adaptive_control__DOT__valid_sync;
    CData/*0:0*/ top_adaptive_control__DOT__mode_sync;
    CData/*0:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write;
    CData/*0:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read;
    CData/*2:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op;
    CData/*0:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q;
    CData/*2:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q;
    CData/*0:0*/ top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__clk;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__rst_n;
    CData/*2:0*/ tb_adaptive_control_unit__DOT__opcode;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__valid;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__mode;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__reg_write;
    CData/*2:0*/ tb_adaptive_control_unit__DOT__alu_op;
    CData/*2:0*/ tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_read;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_write;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_src;
    CData/*2:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_branch;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__hp_jump;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q;
    CData/*2:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q;
    CData/*0:0*/ tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_adaptive_control_unit__DOT__test_count;
    IData/*31:0*/ tb_adaptive_control_unit__DOT__pass_count;
    IData/*31:0*/ tb_adaptive_control_unit__DOT__fail_count;
    IData/*31:0*/ tb_adaptive_control_unit__DOT__test_phase;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__1__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__3__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__5__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__7__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__9__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__11__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__13__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__15__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__17__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__19__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__21__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__23__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__25__test_name;
    std::string __Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__27__test_name;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h574d39e9__0;

    // INTERNAL VARIABLES
    Vtop_adaptive_control__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_adaptive_control___024root(Vtop_adaptive_control__Syms* symsp, const char* namep);
    ~Vtop_adaptive_control___024root();
    VL_UNCOPYABLE(Vtop_adaptive_control___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
