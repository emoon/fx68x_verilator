// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_454_H_
#define _Vfx68k_fx68k_mux_454_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_454) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN16(ctl,11,0);
    VL_IN16(in_0,12,0);
    VL_IN16(in_1,12,0);
    VL_IN16(in_2,12,0);
    VL_IN16(in_3,12,0);
    VL_IN16(in_4,12,0);
    VL_IN16(in_5,12,0);
    VL_IN16(in_6,12,0);
    VL_IN16(in_7,12,0);
    VL_IN16(in_8,12,0);
    VL_IN16(in_9,12,0);
    VL_IN16(in_10,12,0);
    VL_IN16(in_11,12,0);
    VL_OUT16(z,12,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_454);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_454(const char* name="TOP");
    ~Vfx68k_fx68k_mux_454();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1821_19__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2105_19__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1082_19__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1099_19__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1133_19__7(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1293_19__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1679_19__1(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
