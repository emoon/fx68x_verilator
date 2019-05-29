// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_1906_H_
#define _Vfx68k_fx68k_mux_1906_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_1906) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,6,0);
    VL_IN16(in_0,15,0);
    VL_IN16(in_1,15,0);
    VL_IN16(in_2,15,0);
    VL_IN16(in_3,15,0);
    VL_IN16(in_4,15,0);
    VL_IN16(in_5,15,0);
    VL_IN16(in_6,15,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_1906);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_1906(const char* name="TOP");
    ~Vfx68k_fx68k_mux_1906();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__mux_result_233_9__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_ablMux_1346_10__1(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
