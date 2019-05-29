// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_119_H_
#define _Vfx68k_fx68k_mux_119_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_119) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN16(ctl,11,0);
    VL_IN16(in_0,9,0);
    VL_IN16(in_1,9,0);
    VL_IN16(in_2,9,0);
    VL_IN16(in_3,9,0);
    VL_IN16(in_4,9,0);
    VL_IN16(in_5,9,0);
    VL_IN16(in_6,9,0);
    VL_IN16(in_7,9,0);
    VL_IN16(in_8,9,0);
    VL_IN16(in_9,9,0);
    VL_IN16(in_10,9,0);
    VL_IN16(in_11,9,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_119);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_119(const char* name="TOP");
    ~Vfx68k_fx68k_mux_119();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA1__05B4__05D_601_10__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_340_19__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1804_19__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1889_19__2(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
