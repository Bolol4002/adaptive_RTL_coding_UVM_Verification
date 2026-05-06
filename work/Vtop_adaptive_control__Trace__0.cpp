// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop_adaptive_control__Syms.h"


void Vtop_adaptive_control___024root__trace_chg_0_sub_0(Vtop_adaptive_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop_adaptive_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root__trace_chg_0\n"); );
    // Body
    Vtop_adaptive_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_adaptive_control___024root*>(voidSelf);
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_adaptive_control___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_adaptive_control___024root__trace_chg_0_sub_0(Vtop_adaptive_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root__trace_chg_0_sub_0\n"); );
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_adaptive_control_unit__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_adaptive_control_unit__DOT__opcode),3);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_adaptive_control_unit__DOT__valid));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_adaptive_control_unit__DOT__mode));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode)))));
        bufp->chgIData(oldp+5,(vlSelfRef.tb_adaptive_control_unit__DOT__test_count),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_adaptive_control_unit__DOT__pass_count),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_adaptive_control_unit__DOT__fail_count),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_adaptive_control_unit__DOT__test_phase),32);
        bufp->chgBit(oldp+9,((1U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))));
        bufp->chgBit(oldp+10,((2U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))));
        bufp->chgBit(oldp+11,((3U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))));
        bufp->chgBit(oldp+12,((4U == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode)
                                ? (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write)
                                : (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q))));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode) 
                               && (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_read))));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode) 
                               && (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_write))));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode) 
                               && (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_src))));
        bufp->chgCData(oldp+17,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode)
                                  ? (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op)
                                  : (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q))),3);
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode) 
                               && (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_branch))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__mode) 
                               && (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_jump))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+20,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__reg_write_q));
        bufp->chgCData(oldp+21,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_low_power__DOT__alu_op_q),3);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_reg_write));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_read));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_mem_write));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_src));
        bufp->chgCData(oldp+26,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_alu_op),3);
        bufp->chgBit(oldp+27,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_branch));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__hp_jump));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+29,(vlSelfRef.top_adaptive_control__DOT__opcode_sync),3);
        bufp->chgBit(oldp+30,(vlSelfRef.top_adaptive_control__DOT__valid_sync));
        bufp->chgBit(oldp+31,(vlSelfRef.top_adaptive_control__DOT__mode_sync));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync)
                                ? (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write)
                                : (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync) 
                               && (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read))));
        bufp->chgCData(oldp+34,(((IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync)
                                  ? (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op)
                                  : (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q))),3);
        bufp->chgBit(oldp+35,((1U & (~ (IData)(vlSelfRef.top_adaptive_control__DOT__mode_sync)))));
        bufp->chgBit(oldp+36,(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__reg_write_q));
        bufp->chgCData(oldp+37,(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_low_power__DOT__alu_op_q),3);
        bufp->chgBit(oldp+38,(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_reg_write));
        bufp->chgBit(oldp+39,(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_mem_read));
        bufp->chgCData(oldp+40,(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__hp_alu_op),3);
        bufp->chgBit(oldp+41,((1U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))));
        bufp->chgBit(oldp+42,((2U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))));
        bufp->chgBit(oldp+43,((3U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))));
        bufp->chgBit(oldp+44,((4U == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))));
        bufp->chgBit(oldp+45,(((IData)(vlSelfRef.top_adaptive_control__DOT__valid_sync) 
                               & (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0))));
        bufp->chgCData(oldp+46,((7U & ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                                       | ((2U & (- (IData)(
                                                           (3U 
                                                            == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                                          | ((3U & 
                                              (- (IData)(
                                                         (4U 
                                                          == (IData)(vlSelfRef.top_adaptive_control__DOT__opcode_sync))))) 
                                             | (- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSelfRef.top_adaptive_control__DOT__u_adaptive_ctrl__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)))))))))),3);
    }
    bufp->chgBit(oldp+47,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+48,(vlSelfRef.rst_n_i));
    bufp->chgCData(oldp+49,(vlSelfRef.opcode_i),3);
    bufp->chgBit(oldp+50,(vlSelfRef.valid_i));
    bufp->chgBit(oldp+51,(vlSelfRef.mode_i));
    bufp->chgBit(oldp+52,(vlSelfRef.reg_write_o));
    bufp->chgBit(oldp+53,(vlSelfRef.mem_read_o));
    bufp->chgBit(oldp+54,(vlSelfRef.mem_write_o));
    bufp->chgBit(oldp+55,(vlSelfRef.alu_src_o));
    bufp->chgCData(oldp+56,(vlSelfRef.alu_op_o),3);
    bufp->chgBit(oldp+57,(vlSelfRef.branch_o));
    bufp->chgBit(oldp+58,(vlSelfRef.jump_o));
    bufp->chgBit(oldp+59,(vlSelfRef.led_power_mode));
    bufp->chgBit(oldp+60,(vlSelfRef.led_perf_mode));
    bufp->chgBit(oldp+61,(vlSelfRef.tb_adaptive_control_unit__DOT__clk));
    bufp->chgCData(oldp+62,(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_alu_op),3);
    bufp->chgBit(oldp+63,(vlSelfRef.tb_adaptive_control_unit__DOT__monitor_outputs__Vstatic__expected_reg_write));
    bufp->chgBit(oldp+64,(((IData)(vlSelfRef.tb_adaptive_control_unit__DOT__valid) 
                           & (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0))));
    bufp->chgCData(oldp+65,((7U & ((1U & (- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                                   | ((2U & (- (IData)(
                                                       (3U 
                                                        == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                                      | ((3U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__opcode))))) 
                                         | (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelfRef.tb_adaptive_control_unit__DOT__u_dut__DOT__u_high_perf__DOT____VdfgRegularize_h106d4e5c_0_0)))))))))),3);
}

void Vtop_adaptive_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_adaptive_control___024root__trace_cleanup\n"); );
    // Body
    Vtop_adaptive_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_adaptive_control___024root*>(voidSelf);
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
