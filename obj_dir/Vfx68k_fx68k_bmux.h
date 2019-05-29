// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_bmux_H_
#define _Vfx68k_fx68k_bmux_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_bmux) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,0,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_bmux);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_bmux(const char* name="TOP");
    ~Vfx68k_fx68k_bmux();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__mux_row_648_9__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1740_19__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1742_29__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1761_16__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1762_28__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__mux_tvnMux_616_7__12(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__mux_tvnMux_618_17__10(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__mux_tvnMux_620_22__8(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__mux_tvnMux_622_22__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_177_27__14(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32__13(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32__11(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32__9(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32__7(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
