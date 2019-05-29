// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_bmux_1967_H_
#define _Vfx68k_fx68k_bmux_1967_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_bmux_1967) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,4,0);
    VL_IN16(in_0,15,0);
    VL_IN16(in_1,15,0);
    VL_IN16(in_2,15,0);
    VL_IN16(in_3,15,0);
    VL_IN16(in_4,15,0);
    VL_IN16(in_5,15,0);
    VL_IN16(in_6,15,0);
    VL_IN16(in_7,15,0);
    VL_IN16(in_8,15,0);
    VL_IN16(in_9,15,0);
    VL_IN16(in_10,15,0);
    VL_IN16(in_11,15,0);
    VL_IN16(in_12,15,0);
    VL_IN16(in_13,15,0);
    VL_IN16(in_14,15,0);
    VL_IN16(in_15,15,0);
    VL_IN16(in_16,15,0);
    VL_IN16(in_17,15,0);
    VL_OUT16(z,15,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_bmux_1967);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_bmux_1967(const char* name="TOP");
    ~Vfx68k_fx68k_bmux_1967();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1330_29__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1331_29__8(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1348_24__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1349_24__12(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
