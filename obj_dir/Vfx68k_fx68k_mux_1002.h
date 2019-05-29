// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_1002_H_
#define _Vfx68k_fx68k_mux_1002_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_1002) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN16(ctl,11,0);
    VL_IN16(in_0,11,0);
    VL_IN16(in_1,11,0);
    VL_IN16(in_2,11,0);
    VL_IN16(in_3,11,0);
    VL_IN16(in_4,11,0);
    VL_IN16(in_5,11,0);
    VL_IN16(in_6,11,0);
    VL_IN16(in_7,11,0);
    VL_IN16(in_8,11,0);
    VL_IN16(in_9,11,0);
    VL_IN16(in_10,11,0);
    VL_IN16(in_11,11,0);
    VL_OUT16(z,11,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vfx68k__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_1002);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_1002(const char* name="TOP");
    ~Vfx68k_fx68k_mux_1002();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2088_19__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2173_19__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1662_19__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1747_19__2(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
