// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_424_H_
#define _Vfx68k_fx68k_mux_424_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_424) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN16(ctl,11,0);
    VL_IN16(in_0,15,0);
    VL_IN16(in_1,15,0);
    VL_IN16(in_2,15,0);
    VL_IN16(in_3,15,0);
    VL_IN16(in_4,15,0);
    VL_IN16(in_5,15,0);
    VL_IN16(in_6,15,0);
    VL_IN16(in_7,15,0);
    VL_IN16(in_8,15,0);
    VL_IN16(in_9,15,0);
    VL_IN16(in_10,15,0);
    VL_IN16(in_11,15,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_424);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_424(const char* name="TOP");
    ~Vfx68k_fx68k_mux_424();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1048_19__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1065_19__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1116_19__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B2__05D_1150_19__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1276_19__1(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
