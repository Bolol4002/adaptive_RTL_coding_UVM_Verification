// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_adaptive_control.h for the primary calling header

#include "Vtop_adaptive_control__pch.h"

void Vtop_adaptive_control___024root___ctor_var_reset(Vtop_adaptive_control___024root* vlSelf);

Vtop_adaptive_control___024root::Vtop_adaptive_control___024root(Vtop_adaptive_control__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop_adaptive_control___024root___ctor_var_reset(this);
}

void Vtop_adaptive_control___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_adaptive_control___024root::~Vtop_adaptive_control___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
