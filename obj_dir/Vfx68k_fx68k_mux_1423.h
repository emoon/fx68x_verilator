// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_1423_H_
#define _Vfx68k_fx68k_mux_1423_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_1423) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,6,0);
    VL_IN(in_0,16,0);
    VL_IN(in_1,16,0);
    VL_IN(in_2,16,0);
    VL_IN(in_3,16,0);
    VL_IN(in_4,16,0);
    VL_IN(in_5,16,0);
    VL_IN(in_6,16,0);
    VL_OUT(z,16,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_1423);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_1423(const char* name="TOP");
    ~Vfx68k_fx68k_mux_1423();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_854_19__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_872_19__2(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
