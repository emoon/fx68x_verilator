// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_1529_H_
#define _Vfx68k_fx68k_mux_1529_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_1529) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(in_0,0,0);
    VL_IN8(in_1,0,0);
    VL_IN8(in_2,0,0);
    VL_IN8(in_3,0,0);
    VL_IN8(in_4,0,0);
    VL_IN8(in_5,0,0);
    VL_IN8(in_6,0,0);
    VL_IN8(in_7,0,0);
    VL_IN8(in_8,0,0);
    VL_IN8(in_9,0,0);
    VL_IN8(in_10,0,0);
    VL_IN8(in_11,0,0);
    VL_IN8(in_12,0,0);
    VL_OUT8(z,0,0);
    VL_IN16(ctl,12,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_1529);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_1529(const char* name="TOP");
    ~Vfx68k_fx68k_mux_1529();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
