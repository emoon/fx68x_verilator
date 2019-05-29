// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_2306_H_
#define _Vfx68k_fx68k_mux_2306_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_2306) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,5,0);
    VL_IN16(in_0,15,0);
    VL_IN16(in_1,15,0);
    VL_IN16(in_2,15,0);
    VL_IN16(in_3,15,0);
    VL_IN16(in_4,15,0);
    VL_IN16(in_5,15,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_2306);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_2306(const char* name="TOP");
    ~Vfx68k_fx68k_mux_2306();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_abhMux_1357_10__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_dbdMux_1309_10__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_dblMux_1319_10__3(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
