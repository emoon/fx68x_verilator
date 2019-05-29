// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_2428_H_
#define _Vfx68k_fx68k_mux_2428_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_2428) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,1,0);
    VL_IN8(in_0,7,0);
    VL_IN8(in_1,7,0);
    VL_OUT8(z,7,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_2428);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_2428(const char* name="TOP");
    ~Vfx68k_fx68k_mux_2428();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1512_28__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1512_28__11(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1512_28__12(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1512_28__13(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1512_28__14(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1512_28__15(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1512_28__16(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1512_28__17(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1512_28__18(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1512_28__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1512_28__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1512_28__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1512_28__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1512_28__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1512_28__7(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1512_28__8(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1512_28__9(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1512_28__10(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
