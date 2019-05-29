// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_1529.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_1529) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_1529::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_1529::~Vfx68k_fx68k_mux_1529() {
}

//--------------------
// Internal Methods

void Vfx68k_fx68k_mux_1529::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_1529::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(13);
    in_0 = VL_RAND_RESET_I(1);
    in_1 = VL_RAND_RESET_I(1);
    in_2 = VL_RAND_RESET_I(1);
    in_3 = VL_RAND_RESET_I(1);
    in_4 = VL_RAND_RESET_I(1);
    in_5 = VL_RAND_RESET_I(1);
    in_6 = VL_RAND_RESET_I(1);
    in_7 = VL_RAND_RESET_I(1);
    in_8 = VL_RAND_RESET_I(1);
    in_9 = VL_RAND_RESET_I(1);
    in_10 = VL_RAND_RESET_I(1);
    in_11 = VL_RAND_RESET_I(1);
    in_12 = VL_RAND_RESET_I(1);
    z = VL_RAND_RESET_I(1);
}
