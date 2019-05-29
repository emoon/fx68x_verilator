// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_128_H_
#define _Vfx68k_fx68k_mux_128_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_128) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN16(ctl,8,0);
    VL_IN(in_0,19,0);
    VL_IN(in_1,19,0);
    VL_IN(in_2,19,0);
    VL_IN(in_3,19,0);
    VL_IN(in_4,19,0);
    VL_IN(in_5,19,0);
    VL_IN(in_6,19,0);
    VL_IN(in_7,19,0);
    VL_IN(in_8,19,0);
    VL_OUT(z,19,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_128);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_128(const char* name="TOP");
    ~Vfx68k_fx68k_mux_128();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_358_19__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_376_19__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_394_19__3(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
