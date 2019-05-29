// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_bmux_1840_H_
#define _Vfx68k_fx68k_bmux_1840_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_bmux_1840) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,0,0);
    VL_IN(in_0,31,0);
    VL_IN(in_1,31,0);
    VL_OUT(z,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_bmux_1840);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_bmux_1840(const char* name="TOP");
    ~Vfx68k_fx68k_bmux_1840();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__mux_result_511_17__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__mux_result_513_12__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__mux_result_516_12__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_aob_1439_12__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_aob_1442_8__1(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
