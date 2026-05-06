// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_adaptive_control.h for the primary calling header

#include "Vtop_adaptive_control__pch.h"

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_static__TOP(Vtop_adaptive_control___024root* vlSelf);
void Vtop_adaptive_control___024root___timing_ready(Vtop_adaptive_control___024root* vlSelf);

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_static(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_static\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_adaptive_control___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n_i__0 = vlSelfRef.rst_n_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0 
        = vlSelfRef.tb_adaptive_control_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__rst_n__0 
        = vlSelfRef.tb_adaptive_control_unit__DOT__rst_n;
    Vtop_adaptive_control___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_static__TOP(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_static__TOP\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8856137762900124647ull);
    vlSelf->tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16439437680337425832ull);
}

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_initial__TOP(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_initial__TOP\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waveform.fst"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_final(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_final\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_adaptive_control___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_adaptive_control___024root___eval_phase__stl(Vtop_adaptive_control___024root* vlSelf);

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_settle(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_settle\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_adaptive_control___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/top_adaptive_control.sv", 9, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop_adaptive_control___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_triggers_vec__stl(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_triggers_vec__stl\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop_adaptive_control___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_adaptive_control___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_adaptive_control___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_adaptive_control___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop_adaptive_control___024root___stl_sequent__TOP__0(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___stl_sequent__TOP__0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.led_power_mode = (1U & (~ (IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync)));
    vlSelfRef.led_perf_mode = vlSelfRef.top_adaptive_control__DOT__mode_sync;
    vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 
        = ((1U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
           | ((2U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
              | ((3U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)) 
                 | (4U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync)))));
    vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 
        = ((1U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
           | ((2U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
              | ((3U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)) 
                 | (4U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode)))));
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

VL_ATTR_COLD void Vtop_adaptive_control___024root____Vm_traceActivitySetAll(Vtop_adaptive_control___024root* vlSelf);

VL_ATTR_COLD void Vtop_adaptive_control___024root___eval_stl(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_stl\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_adaptive_control___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_adaptive_control___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_adaptive_control___024root___eval_phase__stl(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___eval_phase__stl\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_adaptive_control___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_adaptive_control___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop_adaptive_control___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_adaptive_control___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_adaptive_control___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_adaptive_control___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_adaptive_control___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_adaptive_control_unit.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_adaptive_control_unit.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_adaptive_control___024root____Vm_traceActivitySetAll(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root____Vm_traceActivitySetAll\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop_adaptive_control___024root___ctor_var_reset(Vtop_adaptive_control___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root___ctor_var_reset\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_n_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16109589058913104882ull);
    vlSelf->opcode_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3142920733240924526ull);
    vlSelf->valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->mode_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9523272139132742531ull);
    vlSelf->reg_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15438870512791648028ull);
    vlSelf->mem_read_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1602060433200559835ull);
    vlSelf->mem_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7940068595356287198ull);
    vlSelf->alu_src_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3686936224442952318ull);
    vlSelf->alu_op_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 740645727711172492ull);
    vlSelf->branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10215157410711087003ull);
    vlSelf->jump_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3494297708835821586ull);
    vlSelf->led_power_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1687443655736975223ull);
    vlSelf->led_perf_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4261248648077119144ull);
    vlSelf->top_adaptive_control__DOT__opcode_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10616881288015900822ull);
    vlSelf->top_adaptive_control__DOT__valid_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14571134010645338858ull);
    vlSelf->top_adaptive_control__DOT__mode_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14031860181642045755ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6325325819540755701ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9716008622062357687ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 594684156712046361ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7160745044968928281ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3117430932808335368ull);
    vlSelf->top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 = 0;
    vlSelf->tb_adaptive_control_unit__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10514642875195273436ull);
    vlSelf->tb_adaptive_control_unit__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419630491678235394ull);
    vlSelf->tb_adaptive_control_unit__DOT__opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12308059422652710482ull);
    vlSelf->tb_adaptive_control_unit__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16683939708373400780ull);
    vlSelf->tb_adaptive_control_unit__DOT__mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17182974857464492553ull);
    vlSelf->tb_adaptive_control_unit__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3168193409686614365ull);
    vlSelf->tb_adaptive_control_unit__DOT__alu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8835077971891360967ull);
    vlSelf->tb_adaptive_control_unit__DOT__test_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13415383299112038645ull);
    vlSelf->tb_adaptive_control_unit__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15756554951178723093ull);
    vlSelf->tb_adaptive_control_unit__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1729959976551189780ull);
    vlSelf->tb_adaptive_control_unit__DOT__test_phase = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14250173194966704154ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14871771630606391467ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 374202284820844888ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15343576103557257484ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047006361344591161ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15179871187374915134ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2539717956005211771ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__hp_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6094191429019266301ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6375409689142713169ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 425423751889844728ull);
    vlSelf->tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_adaptive_control_unit__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
