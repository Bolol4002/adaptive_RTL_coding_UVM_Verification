// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_adaptive_control.h for the primary calling header

#include "Vtop_adaptive_control__pch.h"

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_initial__TOP(Vtop_adaptive_control___024root* vlSelf);
VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__0(Vtop_adaptive_control___024root* vlSelf);
VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__1(Vtop_adaptive_control___024root* vlSelf);
VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__2(Vtop_adaptive_control___024root* vlSelf);

void Vtop_adaptive_control___024root___eval_initial(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_initial\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_adaptive_control___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__0(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_adaptive_control_unit__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/tb_adaptive_verilator.sv", 
                                             64);
        vlSelfRef.tb_adaptive_control_unit__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__clk)));
    }
    co_return;
}

void Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(Vtop_adaptive_control___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__1(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__m = 0;
    CData/*2:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__op;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__op = 0;
    CData/*0:0*/ __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__m;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__m = 0;
    // Body
    vlSelfRef.tb_adaptive_control_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__pass_count = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__fail_count = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_phase = 0U;
    VL_WRITEF_NX("\n============================================================\n    ADAPTIVE CONTROL UNIT - VERIFICATION TESTBENCH\n============================================================\n\n",0);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         135);
    vlSelfRef.tb_adaptive_control_unit__DOT__rst_n = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         137);
    vlSelfRef.tb_adaptive_control_unit__DOT__test_phase = 1U;
    VL_WRITEF_NX("-----------------------------------------------------------\n  PHASE 1: LOW-POWER MODE (mode=0)\n-----------------------------------------------------------\n",0);
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__op = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__0__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__1__test_name = "NOP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__1__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__1__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__op = 1U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__2__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__3__test_name = "ADD"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__3__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__3__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__op = 2U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__4__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__5__test_name = "SUB"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__5__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__5__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__op = 3U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__6__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__7__test_name = "AND"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__7__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__7__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__op = 4U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__8__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__9__test_name = "OR"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__9__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__9__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.tb_adaptive_control_unit__DOT__test_phase = 2U;
    VL_WRITEF_NX("-----------------------------------------------------------\n  PHASE 2: HIGH-PERFORMANCE MODE (mode=1)\n-----------------------------------------------------------\n",0);
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__op = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__10__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__11__test_name = "NOP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__11__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__11__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__op = 1U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__12__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__13__test_name = "ADD"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__13__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__13__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__op = 2U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__14__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__15__test_name = "SUB"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__15__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__15__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__op = 3U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__16__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__17__test_name = "AND"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__17__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__17__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__op = 4U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__18__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__19__test_name = "OR"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__19__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__19__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.tb_adaptive_control_unit__DOT__test_phase = 3U;
    VL_WRITEF_NX("-----------------------------------------------------------\n  PHASE 3: DYNAMIC MODE SWITCHING\n-----------------------------------------------------------\n",0);
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__op = 1U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__20__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__21__test_name = "ADD_LP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__21__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__21__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__op = 1U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__22__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__23__test_name = "ADD_HP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__23__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__23__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__m = 0U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__op = 2U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__24__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__25__test_name = "SUB_LP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__25__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__25__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__m = 1U;
    __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__op = 2U;
    vlSelfRef.tb_adaptive_control_unit__DOT__opcode 
        = __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__op;
    vlSelfRef.tb_adaptive_control_unit__DOT__mode = __Vtask_tb_adaptive_control_unit__DOT__drive_input__26__m;
    vlSelfRef.tb_adaptive_control_unit__DOT__valid = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         72);
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write 
            = (0U != (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode));
        vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op 
            = ((4U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                    ? 7U : ((1U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                             ? 7U : 3U)) : ((2U & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))
                                                 ? 0U
                                                 : 7U)));
    }
    vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__27__test_name = "SUB_HP"s;
    vlSelfRef.tb_adaptive_control_unit__DOT__test_count 
        = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__test_count);
    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(vlSelf, 
                                                                "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h574d39e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_adaptive_control_unit.clk)", 
                                                         "tb/tb_adaptive_verilator.sv", 
                                                         102);
    if ((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write) 
          == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write)) 
         & ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op) 
            == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op)))) {
        vlSelfRef.tb_adaptive_control_unit__DOT__pass_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: opcode=%b valid=%b mode=%b -> reg_write=%b alu_op=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__27__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__valid,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__reg_write,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__fail_count 
            = ((IData)(1U) + vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
        VL_WRITEF_NX("[FAIL] %@: opcode=%b expected_rw=%b got_rw=%b expected_alu=%b got_alu=%b\n",0,
                     -1,&(vlSelfRef.__Vtask_tb_adaptive_control_unit__DOT__monitor_outputs__27__test_name),
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),
                     1,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write,
                     1,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__reg_write),
                     3,vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op,
                     3,(IData)(vlSelfRef.tb_adaptive_control_unit__DOT__alu_op));
    }
    VL_WRITEF_NX("\n============================================================\n    TEST SUMMARY\n============================================================\n  Total Tests:  %0d\n  Passed:     %0d\n  Failed:     %0d\n============================================================\n",0,
                 32,vlSelfRef.tb_adaptive_control_unit__DOT__test_count,
                 32,vlSelfRef.tb_adaptive_control_unit__DOT__pass_count,
                 32,vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
    if ((0U == vlSelfRef.tb_adaptive_control_unit__DOT__fail_count)) {
        VL_WRITEF_NX("  *** ALL TESTS PASSED! ***\n",0);
    } else {
        VL_WRITEF_NX("  *** %0d TESTS FAILED ***\n",0,
                     32,vlSelfRef.tb_adaptive_control_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("\n",0);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         235);
    VL_FINISH_MT("tb/tb_adaptive_verilator.sv", 236, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__2(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000004c4b40ULL, 
                                         nullptr, "tb/tb_adaptive_verilator.sv", 
                                         241);
    VL_WRITEF_NX("ERROR: Simulation timeout!\n",0);
    VL_FINISH_MT("tb/tb_adaptive_verilator.sv", 243, "");
    co_return;
}

void Vtop_adaptive_control___024root___eval_triggers_vec__act(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_triggers_vec__act\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 4U) 
                                                     | (((((~ (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__rst_n__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0))) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.rst_n_i)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.clk_i) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0 = vlSelfRef.rst_n_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0 
        = vlSelfRef.tb_adaptive_control_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__rst_n__0 
        = vlSelfRef.tb_adaptive_control_unit__DOT__rst_n;
}

bool Vtop_adaptive_control___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop_adaptive_control___024root___act_comb__TOP__0(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___act_comb__TOP__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 
        = ((1U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
           | ((2U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
              | ((3U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
                 | (4U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)))));
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__reg_write 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write;
        vlSelfRef.tb_adaptive_control_unit__DOT__alu_op 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op;
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__reg_write 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q;
        vlSelfRef.tb_adaptive_control_unit__DOT__alu_op 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q;
    }
}

void Vtop_adaptive_control___024root___eval_act(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_act\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000014ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtop_adaptive_control___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop_adaptive_control__ConstPool__TABLE_h61e9631a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop_adaptive_control__ConstPool__TABLE_h50e26ca7_0;

void Vtop_adaptive_control___024root___nba_sequent__TOP__0(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___nba_sequent__TOP__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_write = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_branch = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_read = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_src = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_jump = 0U;
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write 
        = ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__rst_n) 
           && ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__valid) 
               & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)));
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op 
        = ((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__rst_n)
            ? (7U & ((1U & (- (IData)((2U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                     | ((2U & (- (IData)((3U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                        | ((3U & (- (IData)((4U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                           | (- (IData)((1U & (~ (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)))))))))
            : 7U);
    __Vtableidx2 = (((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode) 
                     << 2U) | (((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__valid) 
                                << 1U) | (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__rst_n)));
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q 
        = Vtop_adaptive_control__ConstPool__TABLE_h61e9631a_0
        [__Vtableidx2];
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q 
        = Vtop_adaptive_control__ConstPool__TABLE_h50e26ca7_0
        [__Vtableidx2];
}

void Vtop_adaptive_control___024root___nba_sequent__TOP__1(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___nba_sequent__TOP__1\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read = 0U;
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write 
        = ((IData)(vlSelfRef.rst_n_i) && ((IData)(vlSelfRef.top_adaptive_control__DOT__valid_sync) 
                                          & (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)));
    vlSelfRef.top_adaptive_control__DOT__mode_sync 
        = ((IData)(vlSelfRef.rst_n_i) && (IData)(vlSelfRef.mode_i));
    __Vtableidx1 = (((IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync) 
                     << 2U) | (((IData)(vlSelfRef.top_adaptive_control__DOT__valid_sync) 
                                << 1U) | (IData)(vlSelfRef.rst_n_i)));
    if (vlSelfRef.rst_n_i) {
        vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op 
            = (7U & ((1U & (- (IData)((2U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                     | ((2U & (- (IData)((3U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                        | ((3U & (- (IData)((4U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                           | (- (IData)((1U & (~ (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)))))))));
        vlSelfRef.top_adaptive_control__DOT__opcode_sync 
            = vlSelfRef.opcode_i;
    } else {
        vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op = 7U;
        vlSelfRef.top_adaptive_control__DOT__opcode_sync = 0U;
    }
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q 
        = Vtop_adaptive_control__ConstPool__TABLE_h61e9631a_0
        [__Vtableidx1];
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q 
        = Vtop_adaptive_control__ConstPool__TABLE_h50e26ca7_0
        [__Vtableidx1];
    vlSelfRef.led_power_mode = (1U & (~ (IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync)));
    vlSelfRef.led_perf_mode = vlSelfRef.top_adaptive_control__DOT__mode_sync;
    vlSelfRef.mem_read_o = ((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                            && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
    vlSelfRef.mem_write_o = ((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                             && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
    vlSelfRef.alu_src_o = ((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                           && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
    vlSelfRef.branch_o = ((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                          && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
    vlSelfRef.jump_o = ((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                        && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
    if (vlSelfRef.top_adaptive_control__DOT__mode_sync) {
        vlSelfRef.reg_write_o = vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write;
        vlSelfRef.alu_op_o = vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op;
    } else {
        vlSelfRef.reg_write_o = vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q;
        vlSelfRef.alu_op_o = vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q;
    }
    vlSelfRef.top_adaptive_control__DOT__valid_sync 
        = ((IData)(vlSelfRef.rst_n_i) && (IData)(vlSelfRef.valid_i));
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 
        = ((1U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
           | ((2U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
              | ((3U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
                 | (4U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)))));
}

void Vtop_adaptive_control___024root___nba_comb__TOP__0(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___nba_comb__TOP__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 
        = ((1U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
           | ((2U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
              | ((3U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
                 | (4U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)))));
}

void Vtop_adaptive_control___024root___nba_comb__TOP__1(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___nba_comb__TOP__1\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_adaptive_control_unit__DOT__mode) {
        vlSelfRef.tb_adaptive_control_unit__DOT__reg_write 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write;
        vlSelfRef.tb_adaptive_control_unit__DOT__alu_op 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op;
    } else {
        vlSelfRef.tb_adaptive_control_unit__DOT__reg_write 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q;
        vlSelfRef.tb_adaptive_control_unit__DOT__alu_op 
            = vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q;
    }
}

void Vtop_adaptive_control___024root___eval_nba(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_nba\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_adaptive_control___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_adaptive_control___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_adaptive_control___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_adaptive_control___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtop_adaptive_control___024root___timing_ready(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___timing_ready\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h574d39e9__0.ready("@(posedge tb_adaptive_control_unit.clk)");
    }
}

void Vtop_adaptive_control___024root___timing_resume(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___timing_resume\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h574d39e9__0.moveToResumeQueue(
                                                          "@(posedge tb_adaptive_control_unit.clk)");
    vlSelfRef.__VtrigSched_h574d39e9__0.resume("@(posedge tb_adaptive_control_unit.clk)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop_adaptive_control___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_adaptive_control___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop_adaptive_control___024root___eval_phase__act(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_phase__act\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_adaptive_control___024root___eval_triggers_vec__act(vlSelf);
    Vtop_adaptive_control___024root___timing_ready(vlSelf);
    Vtop_adaptive_control___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_adaptive_control___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop_adaptive_control___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop_adaptive_control___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtop_adaptive_control___024root___timing_resume(vlSelf);
        Vtop_adaptive_control___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_adaptive_control___024root___eval_phase__inact(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_phase__inact\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("src/top_adaptive_control.sv", 9, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtop_adaptive_control___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_adaptive_control___024root___eval_phase__nba(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_phase__nba\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_adaptive_control___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_adaptive_control___024root___eval_nba(vlSelf);
        Vtop_adaptive_control___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_adaptive_control___024root___eval(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_adaptive_control___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/top_adaptive_control.sv", 9, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("src/top_adaptive_control.sv", 9, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtop_adaptive_control___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("src/top_adaptive_control.sv", 9, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtop_adaptive_control___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtop_adaptive_control___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop_adaptive_control___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0(Vtop_adaptive_control___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root____VbeforeTrig_h574d39e9__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0))) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0 
        = vlSelfRef.tb_adaptive_control_unit__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h574d39e9__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtop_adaptive_control___024root___eval_debug_assertions(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_debug_assertions\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n_i & 0xfeU)))) {
        Verilated::overWidthError("rst_n_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.opcode_i & 0xf8U)))) {
        Verilated::overWidthError("opcode_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.valid_i & 0xfeU)))) {
        Verilated::overWidthError("valid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode_i & 0xfeU)))) {
        Verilated::overWidthError("mode_i");
    }
}
#endif  // VL_DEBUG
