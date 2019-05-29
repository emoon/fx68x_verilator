// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfx68k.h for the primary calling header

#ifndef _Vfx68k_fx68k_mux_1995_H_
#define _Vfx68k_fx68k_mux_1995_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k_fx68k_mux_1995) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(ctl,1,0);
    VL_IN16(in_0,15,0);
    VL_IN16(in_1,15,0);
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
    VL_UNCOPYABLE(Vfx68k_fx68k_mux_1995);  ///< Copying not allowed
  public:
    Vfx68k_fx68k_mux_1995(const char* name="TOP");
    ~Vfx68k_fx68k_mux_1995();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B0__05D_1523_5__3(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B10__05D_1523_5__13(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B11__05D_1523_5__14(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B12__05D_1523_5__15(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B13__05D_1523_5__16(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B14__05D_1523_5__17(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B15__05D_1523_5__18(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B16__05D_1523_5__1(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B17__05D_1523_5__2(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B1__05D_1523_5__4(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B2__05D_1523_5__5(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B3__05D_1523_5__6(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B4__05D_1523_5__7(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B5__05D_1523_5__8(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B6__05D_1523_5__9(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B7__05D_1523_5__10(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B8__05D_1523_5__11(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05B9__05D_1523_5__12(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1511_27__20(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1513_16__21(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1516_6__19(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1511_27__50(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1513_16__51(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1516_6__49(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1511_27__53(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1513_16__54(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1516_6__52(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1511_27__56(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1513_16__57(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1516_6__55(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1511_27__59(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1513_16__60(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1516_6__58(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1511_27__62(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1513_16__63(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1516_6__61(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1511_27__65(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1513_16__66(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1516_6__64(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1511_27__68(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1513_16__69(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1516_6__67(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1511_27__71(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1513_16__72(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1516_6__70(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1511_27__23(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1513_16__24(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1516_6__22(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1511_27__26(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1513_16__27(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1516_6__25(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1511_27__29(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1513_16__30(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1516_6__28(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1511_27__32(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1513_16__33(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1516_6__31(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1511_27__35(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1513_16__36(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1516_6__34(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1511_27__38(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1513_16__39(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1516_6__37(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1511_27__41(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1513_16__42(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1516_6__40(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1511_27__44(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1513_16__45(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1516_6__43(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1511_27__47(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1513_16__48(Vfx68k__Syms* __restrict vlSymsp);
    void _settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1516_6__46(Vfx68k__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
