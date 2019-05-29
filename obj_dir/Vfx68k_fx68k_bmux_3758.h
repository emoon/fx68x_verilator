// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_bmux_3758_H_
#define _Vfx68k_fx68k_bmux_3758_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_bmux_3758) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,0,0);
    VL_INW(in_0,67,0,3);
    VL_INW(in_1,67,0,3);
    VL_OUTW(z,67,0,3);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_bmux_3758);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_bmux_3758(const char* name="TOP");
    ~Vfx68k_fx68k_bmux_3758();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__mux_nanoLatch_259_12__1(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
