// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_adaptive_control__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtop_adaptive_control::Vtop_adaptive_control(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_adaptive_control__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_n_i{vlSymsp->TOP.rst_n_i}
    , opcode_i{vlSymsp->TOP.opcode_i}
    , valid_i{vlSymsp->TOP.valid_i}
    , mode_i{vlSymsp->TOP.mode_i}
    , reg_write_o{vlSymsp->TOP.reg_write_o}
    , mem_read_o{vlSymsp->TOP.mem_read_o}
    , mem_write_o{vlSymsp->TOP.mem_write_o}
    , alu_src_o{vlSymsp->TOP.alu_src_o}
    , alu_op_o{vlSymsp->TOP.alu_op_o}
    , branch_o{vlSymsp->TOP.branch_o}
    , jump_o{vlSymsp->TOP.jump_o}
    , led_power_mode{vlSymsp->TOP.led_power_mode}
    , led_perf_mode{vlSymsp->TOP.led_perf_mode}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtop_adaptive_control::Vtop_adaptive_control(const char* _vcname__)
    : Vtop_adaptive_control(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_adaptive_control::~Vtop_adaptive_control() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_adaptive_control___024root___eval_debug_assertions(Vtop_adaptive_control___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_adaptive_control___024root___eval_static(Vtop_adaptive_control___024root* vlSelf);
void Vtop_adaptive_control___024root___eval_initial(Vtop_adaptive_control___024root* vlSelf);
void Vtop_adaptive_control___024root___eval_settle(Vtop_adaptive_control___024root* vlSelf);
void Vtop_adaptive_control___024root___eval(Vtop_adaptive_control___024root* vlSelf);

void Vtop_adaptive_control::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_adaptive_control::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_adaptive_control___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_adaptive_control___024root___eval_static(&(vlSymsp->TOP));
        Vtop_adaptive_control___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_adaptive_control___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_adaptive_control___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtop_adaptive_control::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtop_adaptive_control::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtop_adaptive_control::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtop_adaptive_control::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop_adaptive_control::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_adaptive_control___024root___eval_final(Vtop_adaptive_control___024root* vlSelf);

VL_ATTR_COLD void Vtop_adaptive_control::final() {
    Vtop_adaptive_control___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_adaptive_control::hierName() const { return vlSymsp->name(); }
const char* Vtop_adaptive_control::modelName() const { return "Vtop_adaptive_control"; }
unsigned Vtop_adaptive_control::threads() const { return 1; }
void Vtop_adaptive_control::prepareClone() const { contextp()->prepareClone(); }
void Vtop_adaptive_control::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_adaptive_control::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_adaptive_control___024root__trace_decl_types(VerilatedFst* tracep);

void Vtop_adaptive_control___024root__trace_init_top(Vtop_adaptive_control___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_adaptive_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_adaptive_control___024root*>(voidSelf);
    Vtop_adaptive_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_adaptive_control___024root__trace_decl_types(tracep);
    Vtop_adaptive_control___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_adaptive_control___024root__trace_register(Vtop_adaptive_control___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop_adaptive_control::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_adaptive_control::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 74);
    Vtop_adaptive_control___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
