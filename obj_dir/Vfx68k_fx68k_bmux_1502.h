// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_bmux_1502_H_
#define _Vfx68k_fx68k_bmux_1502_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_bmux_1502) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,2,0);
    VL_IN16(in_0,9,0);
    VL_IN16(in_1,9,0);
    VL_IN16(in_2,9,0);
    VL_IN16(in_3,9,0);
    VL_IN16(in_4,9,0);
    VL_IN16(in_5,9,0);
    VL_IN16(in_6,9,0);
    VL_IN16(in_7,9,0);
    VL_OUT16(z,9,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_bmux_1502);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_bmux_1502(const char* name="TOP");
    ~Vfx68k_fx68k_bmux_1502();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B11__05D_1767_14__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B12__05D_1909_14__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B13__05D_2051_14__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B5__05D_1365_14__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B8__05D_1483_14__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B9__05D_1625_14__3(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
