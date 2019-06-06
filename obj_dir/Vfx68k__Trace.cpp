// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfx68k__Syms.h"


//======================

void Vfx68k::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfx68k* t=(Vfx68k*)userthis;
    Vfx68k__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vfx68k::traceChgThis(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfx68k::traceChgThis__2(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+1,(vlTOPp->fx68k__DOT__excUnit__DOT__unnamedblk1__DOT__i),32);
    }
}

void Vfx68k::traceChgThis__3(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+2,(vlTOPp->fx68k__DOT__wClk));
	vcdp->chgBus(c+3,(vlTOPp->fx68k__DOT__nma),10);
	vcdp->chgBus(c+4,((((IData)(vlTOPp->fx68k__DOT__microToNanoAddr__DOT__orgBase) 
			    << 2U) | (3U & (IData)(vlTOPp->fx68k__DOT__nma)))),9);
	vcdp->chgBus(c+5,(vlTOPp->fx68k__DOT__psw),16);
	vcdp->chgBus(c+6,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1
			  [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				    >> 0xcU))]),10);
	vcdp->chgBus(c+7,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
			  [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				    >> 0xcU))]),10);
	vcdp->chgBus(c+8,(((1U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap))
			    ? (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3)
			    : vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
			   [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				     >> 0xcU))])),10);
	vcdp->chgBit(c+9,(((1U == (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap))
			    ? (0x7cU == (0xf5ffU & (IData)(vlTOPp->fx68k__DOT__Ir)))
			    : ((0x10U == (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap)) 
			       & ((0x46c0U == (0xffc0U 
					       & (IData)(vlTOPp->fx68k__DOT__Ir))) 
				  | ((0x4e60U == (0xfff0U 
						  & (IData)(vlTOPp->fx68k__DOT__Ir))) 
				     | (((0x4e70U == (IData)(vlTOPp->fx68k__DOT__Ir)) 
					 | (0x4e73U 
					    == (IData)(vlTOPp->fx68k__DOT__Ir))) 
					| (0x4e72U 
					   == (IData)(vlTOPp->fx68k__DOT__Ir)))))))));
	vcdp->chgBit(c+10,((0U != ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll) 
				   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap)))));
	vcdp->chgBit(c+11,((1U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap) 
				  >> 0xaU))));
	vcdp->chgBit(c+12,((1U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap) 
				  >> 0xfU))));
	vcdp->chgBus(c+13,(vlTOPp->fx68k__DOT__tvn),4);
	vcdp->chgBit(c+14,(vlTOPp->fx68k__DOT__busAddrErr));
	vcdp->chgBit(c+15,(vlTOPp->fx68k__DOT__bgBlock));
	vcdp->chgBit(c+16,(vlTOPp->fx68k__DOT__iAddrErr));
	vcdp->chgBit(c+17,(vlTOPp->fx68k__DOT__enErrClk));
	vcdp->chgBit(c+18,(vlTOPp->fx68k__DOT__iplStable));
	vcdp->chgBit(c+19,(vlTOPp->fx68k__DOT__iplComp));
	vcdp->chgBus(c+20,((0xffU & ((IData)(vlTOPp->fx68k__DOT__nma) 
				     >> 2U))),8);
	vcdp->chgBus(c+21,(vlTOPp->fx68k__DOT__microToNanoAddr__DOT__orgBase),7);
	vcdp->chgBus(c+22,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap),16);
	vcdp->chgBus(c+23,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__eaCol),4);
	vcdp->chgBus(c+24,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__movEa),4);
	vcdp->chgBus(c+25,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll),16);
	vcdp->chgBus(c+26,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0]),10);
	vcdp->chgBus(c+27,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1]),10);
	vcdp->chgBus(c+28,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2]),10);
	vcdp->chgBus(c+29,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3]),10);
	vcdp->chgBus(c+30,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4]),10);
	vcdp->chgBus(c+31,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5]),10);
	vcdp->chgBus(c+32,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[6]),10);
	vcdp->chgBus(c+33,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[7]),10);
	vcdp->chgBus(c+34,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8]),10);
	vcdp->chgBus(c+35,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9]),10);
	vcdp->chgBus(c+36,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[10]),10);
	vcdp->chgBus(c+37,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11]),10);
	vcdp->chgBus(c+38,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12]),10);
	vcdp->chgBus(c+39,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13]),10);
	vcdp->chgBus(c+40,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14]),10);
	vcdp->chgBus(c+41,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[15]),10);
	vcdp->chgBus(c+42,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0]),10);
	vcdp->chgBus(c+43,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1]),10);
	vcdp->chgBus(c+44,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2]),10);
	vcdp->chgBus(c+45,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3]),10);
	vcdp->chgBus(c+46,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4]),10);
	vcdp->chgBus(c+47,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5]),10);
	vcdp->chgBus(c+48,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[6]),10);
	vcdp->chgBus(c+49,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[7]),10);
	vcdp->chgBus(c+50,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8]),10);
	vcdp->chgBus(c+51,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9]),10);
	vcdp->chgBus(c+52,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[10]),10);
	vcdp->chgBus(c+53,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11]),10);
	vcdp->chgBus(c+54,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12]),10);
	vcdp->chgBus(c+55,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13]),10);
	vcdp->chgBus(c+56,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[14]),10);
	vcdp->chgBus(c+57,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[15]),10);
	vcdp->chgBus(c+58,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3),10);
	vcdp->chgBit(c+59,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc));
	vcdp->chgBus(c+60,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc),10);
	vcdp->chgBus(c+61,(vlTOPp->fx68k__DOT__sequencer__DOT__uNma),10);
	vcdp->chgBus(c+62,(vlTOPp->fx68k__DOT__sequencer__DOT__grp1Nma),10);
	vcdp->chgBus(c+63,(vlTOPp->fx68k__DOT__sequencer__DOT__c0c1),2);
	vcdp->chgBus(c+64,(vlTOPp->fx68k__DOT__sequencer__DOT__enl),2);
	vcdp->chgBus(c+65,(vlTOPp->fx68k__DOT__sequencer__DOT__ms0),2);
	vcdp->chgBus(c+66,(vlTOPp->fx68k__DOT__sequencer__DOT__m01),4);
	vcdp->chgBus(c+67,((3U & ((IData)(vlTOPp->fx68k__DOT__psw) 
				  >> 2U))),2);
	vcdp->chgBus(c+68,(((2U & ((IData)(vlTOPp->fx68k__DOT__psw) 
				   >> 2U)) | (1U & 
					      ((IData)(vlTOPp->fx68k__DOT__psw) 
					       >> 1U)))),2);
	vcdp->chgBit(c+69,(vlTOPp->fx68k__DOT__sequencer__DOT__ccTest));
	vcdp->chgBit(c+70,(vlTOPp->fx68k__DOT__sequencer__DOT__grp1LatchEn));
	vcdp->chgBit(c+71,(vlTOPp->fx68k__DOT__sequencer__DOT__grp0LatchEn));
	vcdp->chgBus(c+72,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[0]),16);
	vcdp->chgBus(c+73,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[1]),16);
	vcdp->chgBus(c+74,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[2]),16);
	vcdp->chgBus(c+75,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[3]),16);
	vcdp->chgBus(c+76,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[4]),16);
	vcdp->chgBus(c+77,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[5]),16);
	vcdp->chgBus(c+78,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[6]),16);
	vcdp->chgBus(c+79,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[7]),16);
	vcdp->chgBus(c+80,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[8]),16);
	vcdp->chgBus(c+81,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[9]),16);
	vcdp->chgBus(c+82,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[10]),16);
	vcdp->chgBus(c+83,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[11]),16);
	vcdp->chgBus(c+84,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[12]),16);
	vcdp->chgBus(c+85,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[13]),16);
	vcdp->chgBus(c+86,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[14]),16);
	vcdp->chgBus(c+87,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[15]),16);
	vcdp->chgBus(c+88,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[16]),16);
	vcdp->chgBus(c+89,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[17]),16);
	vcdp->chgBus(c+90,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[0]),16);
	vcdp->chgBus(c+91,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[1]),16);
	vcdp->chgBus(c+92,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[2]),16);
	vcdp->chgBus(c+93,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[3]),16);
	vcdp->chgBus(c+94,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[4]),16);
	vcdp->chgBus(c+95,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[5]),16);
	vcdp->chgBus(c+96,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[6]),16);
	vcdp->chgBus(c+97,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[7]),16);
	vcdp->chgBus(c+98,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[8]),16);
	vcdp->chgBus(c+99,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[9]),16);
	vcdp->chgBus(c+100,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[10]),16);
	vcdp->chgBus(c+101,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[11]),16);
	vcdp->chgBus(c+102,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[12]),16);
	vcdp->chgBus(c+103,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[13]),16);
	vcdp->chgBus(c+104,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[14]),16);
	vcdp->chgBus(c+105,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[15]),16);
	vcdp->chgBus(c+106,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[16]),16);
	vcdp->chgBus(c+107,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[17]),16);
	vcdp->chgBus(c+108,(((vlTOPp->fx68k__DOT__excUnit__DOT__regs68H
			      [0x10U] << 0x10U) | vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
			     [0x10U])),32);
	vcdp->chgBit(c+109,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abl));
	vcdp->chgBit(c+110,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abd));
	vcdp->chgBit(c+111,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbl));
	vcdp->chgBit(c+112,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbd));
	vcdp->chgBit(c+113,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abl));
	vcdp->chgBit(c+114,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abd));
	vcdp->chgBit(c+115,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbl));
	vcdp->chgBit(c+116,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbd));
	vcdp->chgBus(c+117,(vlTOPp->fx68k__DOT__excUnit__DOT__auInpMux),32);
	vcdp->chgBus(c+118,(vlTOPp->fx68k__DOT__excUnit__DOT__aulow),17);
	vcdp->chgBus(c+119,(((0xffff0000U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Dbh) 
					       + (vlTOPp->fx68k__DOT__excUnit__DOT__auInpMux 
						  >> 0x10U)) 
					      + (1U 
						 & (vlTOPp->fx68k__DOT__excUnit__DOT__aulow 
						    >> 0x10U))) 
					     << 0x10U)) 
			     | (0xffffU & vlTOPp->fx68k__DOT__excUnit__DOT__aulow))),32);
	vcdp->chgBus(c+120,(vlTOPp->fx68k__DOT__excUnit__DOT__prHbit),4);
	vcdp->chgBus(c+121,(vlTOPp->fx68k__DOT__excUnit__DOT__dcrCode),16);
	vcdp->chgBus(c+122,(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput),16);
	vcdp->chgBus(c+123,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow),16);
	vcdp->chgBit(c+124,(((((4U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					       >> 0xcU))) 
			       | (9U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						 >> 0xcU)))) 
			      | (0xdU == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						  >> 0xcU)))) 
			     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow) 
				 >> 0xaU) | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow) 
					     >> 0xcU)))));
	vcdp->chgBit(c+125,((((((((IData)(vlTOPp->fx68k__DOT__Ird) 
				  >> 0xfU) & (~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
						 >> 0xdU))) 
				& ((IData)(vlTOPp->fx68k__DOT__Ird) 
				   >> 0xcU)) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__size11)) 
			      | ((5U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						 >> 0xcU))) 
				 & (1U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						 >> 3U))))) 
			     | ((((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				      >> 0xfU)) & (~ 
						   ((IData)(vlTOPp->fx68k__DOT__Ird) 
						    >> 0xeU))) 
				 & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				    >> 0xdU)) & (1U 
						 == 
						 (7U 
						  & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						     >> 6U)))))));
	vcdp->chgBit(c+126,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isShift));
	vcdp->chgBit(c+127,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftRight));
	vcdp->chgBit(c+128,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__size11));
	vcdp->chgBus(c+129,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype),2);
	vcdp->chgBit(c+130,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords));
	vcdp->chgBit(c+131,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__lowC));
	vcdp->chgBus(c+132,(vlTOPp->fx68k__DOT__nDecoder__DOT__dobCtrl),2);
	vcdp->chgBus(c+133,(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot),16);
	vcdp->chgBit(c+134,(vlTOPp->fx68k__DOT__irdDecode__DOT__isRegShift));
	vcdp->chgBit(c+135,(((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__isRegShift) 
			     & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				>> 5U))));
	vcdp->chgBus(c+136,(((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
				     >> 6U) | ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					       >> 7U)))
			      ? ((0xff00U & (VL_NEGATE_I((IData)(
								 (1U 
								  & ((IData)(vlTOPp->fx68k__DOT__Ird) 
								     >> 7U)))) 
					     << 8U)) 
				 | (0xffU & (IData)(vlTOPp->fx68k__DOT__Ird)))
			      : ((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					 >> 5U) | ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
						   >> 0xeU)))
				  ? ((0U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						   >> 9U)))
				      ? 8U : (7U & 
					      ((IData)(vlTOPp->fx68k__DOT__Ird) 
					       >> 9U)))
				  : ((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					     >> 8U) 
					    | ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					       >> 0xcU)))
				      ? 0xfU : ((0x10U 
						 & (IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot))
						 ? 0x80U
						 : 0U))))),16);
	vcdp->chgBit(c+137,(vlTOPp->fx68k__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg));
	vcdp->chgBus(c+138,(vlTOPp->fx68k__DOT__busArbiter__DOT__next),32);
	vcdp->chgBit(c+139,(((((2U == vlTOPp->fx68k__DOT__busArbiter__DOT__next) 
			       | (6U == vlTOPp->fx68k__DOT__busArbiter__DOT__next)) 
			      | (3U == vlTOPp->fx68k__DOT__busArbiter__DOT__next)) 
			     | (5U == vlTOPp->fx68k__DOT__busArbiter__DOT__next))));
    }
}

void Vfx68k::traceChgThis__4(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+140,((1U & ((IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x34U)) 
				   & ((IData)((vlTOPp->fx68k__DOT__Irdecod 
					       >> 0x20U)) 
				      | (IData)((vlTOPp->fx68k__DOT__Irdecod 
						 >> 0x1fU)))))));
	vcdp->chgBus(c+141,(((IData)(vlTOPp->fx68k__DOT__inExcept01)
			      ? ((0xcU == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
				  ? 0x60U : ((0xdU 
					      == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
					      ? (0x60U 
						 | ((IData)(vlTOPp->fx68k__DOT__pswI) 
						    << 2U))
					      : ((0xfU 
						  == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
						  ? 
						 (0x3fcU 
						  & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						     << 2U))
						  : 
						 ((IData)(vlTOPp->fx68k__DOT__tvnLatch) 
						  << 2U))))
			      : (0xfcU & ((IData)((vlTOPp->fx68k__DOT__Irdecod 
						   >> 1U)) 
					  << 2U)))),16);
	vcdp->chgBus(c+142,(((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abd)
			      ? ((0x11U >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))
				  ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
				 [vlTOPp->fx68k__DOT__excUnit__DOT__actualRy]
				  : 0U) : ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abd)
					    ? ((0x11U 
						>= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))
					        ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
					       [vlTOPp->fx68k__DOT__excUnit__DOT__actualRx]
					        : 0U)
					    : ((1U 
						& (IData)(
							  (vlTOPp->fx68k__DOT__Nanod 
							   >> 2U)))
					        ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->fx68k__DOT__Nanod2 
							       >> 0x19U)))
						    ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch)
						    : 0U))))),16);
	vcdp->chgBus(c+143,(((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbd)
			      ? ((0x11U >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))
				  ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
				 [vlTOPp->fx68k__DOT__excUnit__DOT__actualRy]
				  : 0U) : ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbd)
					    ? ((0x11U 
						>= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))
					        ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
					       [vlTOPp->fx68k__DOT__excUnit__DOT__actualRx]
					        : 0U)
					    : ((1U 
						& (IData)(
							  (vlTOPp->fx68k__DOT__Nanod2 
							   >> 0x15U)))
					        ? (IData)(vlTOPp->fx68k__DOT__alue)
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->fx68k__DOT__Nanod 
							       >> 1U)))
						    ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->fx68k__DOT__Nanod2 
								>> 0x1aU)))
						     ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch)
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->fx68k__DOT__Nanod2 
								 >> 0x17U)))
						      ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)
						      : 0U))))))),16);
	vcdp->chgBit(c+144,((1U & ((IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x1eU)) 
				   | ((IData)((vlTOPp->fx68k__DOT__Nanod 
					       >> 5U)) 
				      & (IData)((vlTOPp->fx68k__DOT__Nanod 
						 >> 0x20U)))))));
	vcdp->chgBit(c+145,(((IData)(vlTOPp->fx68k__DOT__enT3) 
			     & (IData)((vlTOPp->fx68k__DOT__Nanod2 
					>> 0x16U)))));
	vcdp->chgBus(c+146,((7U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0xbU)))),3);
	vcdp->chgBus(c+147,((3U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 9U)))),2);
	vcdp->chgBit(c+148,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 8U)))));
	vcdp->chgBit(c+149,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x26U)))));
	vcdp->chgBit(c+150,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 7U)))));
	vcdp->chgBit(c+151,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 6U)))));
	vcdp->chgBit(c+152,((1U & (IData)((vlTOPp->fx68k__DOT__Irdecod 
					   >> 0x20U)))));
	vcdp->chgBit(c+153,((2U == (3U & (IData)((vlTOPp->fx68k__DOT__Nanod 
						  >> 9U))))));
	vcdp->chgBit(c+154,((1U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
				    | (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr)) 
				   >> 4U))));
	vcdp->chgBus(c+155,(((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 6U)))
			      ? ((0x80U & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row))
				  ? 0xfU : 0xcU) : 
			     ((1U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				      >> 0xdU) | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
						  >> 0xeU)))
			       ? 4U : 0xfU))),5);
	vcdp->chgBus(c+156,((((IData)(vlTOPp->fx68k__DOT__alue) 
			      << 0x10U) | (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aOperand))),32);
	vcdp->chgBit(c+157,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x12U)))));
	vcdp->chgBit(c+158,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x13U)))));
	vcdp->chgBit(c+159,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x11U)))));
	vcdp->chgBit(c+160,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x10U)))));
	vcdp->chgBit(c+161,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			     & (~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
				   >> 8U)))));
	vcdp->chgBit(c+162,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			     & (~ (vlTOPp->fx68k__DOT__nanoLatch[0U] 
				   >> 0x16U)))));
	vcdp->chgBit(c+163,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			     & (vlTOPp->fx68k__DOT__nanoLatch[1U] 
				>> 8U))));
	vcdp->chgBit(c+164,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			     & (vlTOPp->fx68k__DOT__nanoLatch[0U] 
				>> 0x16U))));
	vcdp->chgBit(c+165,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x37U)))));
	vcdp->chgBit(c+166,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x36U)))));
	vcdp->chgBit(c+167,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					   >> 0x35U)))));
	vcdp->chgBit(c+168,((((5U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase) 
			      & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__bcReset)) 
			     & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg))));
    }
}

void Vfx68k::traceChgThis__5(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+169,(vlTOPp->fx68k__DOT__enT1));
	vcdp->chgBit(c+170,(vlTOPp->fx68k__DOT__enT2));
	vcdp->chgBit(c+171,(vlTOPp->fx68k__DOT__enT3));
	vcdp->chgBit(c+172,(vlTOPp->fx68k__DOT__enT4));
	vcdp->chgBit(c+173,(vlTOPp->fx68k__DOT__rstUrom));
	vcdp->chgBus(c+174,(vlTOPp->fx68k__DOT__excUnit__DOT__dblMux),16);
	vcdp->chgBus(c+175,(vlTOPp->fx68k__DOT__excUnit__DOT__dbhMux),16);
	vcdp->chgBus(c+176,(vlTOPp->fx68k__DOT__excUnit__DOT__abhMux),16);
	vcdp->chgBus(c+177,(vlTOPp->fx68k__DOT__excUnit__DOT__ablMux),16);
	vcdp->chgBus(c+178,(vlTOPp->fx68k__DOT__excUnit__DOT__rxMux),5);
	vcdp->chgBus(c+179,(vlTOPp->fx68k__DOT__excUnit__DOT__ryMux),5);
	vcdp->chgBus(c+180,(vlTOPp->fx68k__DOT__excUnit__DOT__rxReg),4);
	vcdp->chgBus(c+181,(vlTOPp->fx68k__DOT__excUnit__DOT__ryReg),4);
	vcdp->chgBit(c+182,(vlTOPp->fx68k__DOT__excUnit__DOT__rxIsSp));
	vcdp->chgBit(c+183,(vlTOPp->fx68k__DOT__excUnit__DOT__ryIsSp));
	vcdp->chgBit(c+184,(vlTOPp->fx68k__DOT__excUnit__DOT__abhIdle));
	vcdp->chgBit(c+185,(vlTOPp->fx68k__DOT__excUnit__DOT__ablIdle));
	vcdp->chgBit(c+186,(vlTOPp->fx68k__DOT__excUnit__DOT__abdIdle));
	vcdp->chgBit(c+187,(vlTOPp->fx68k__DOT__excUnit__DOT__dbhIdle));
	vcdp->chgBit(c+188,(vlTOPp->fx68k__DOT__excUnit__DOT__dblIdle));
	vcdp->chgBit(c+189,(vlTOPp->fx68k__DOT__excUnit__DOT__dbdIdle));
	vcdp->chgBit(c+190,((1U & ((IData)(vlTOPp->fx68k__DOT__Clks) 
				   >> 2U))));
	vcdp->chgBus(c+191,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__result),16);
	vcdp->chgBus(c+192,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrTemp),5);
	vcdp->chgBus(c+193,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subResult),16);
	vcdp->chgBit(c+194,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subHcarry));
	vcdp->chgBit(c+195,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subCout));
	vcdp->chgBit(c+196,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subOv));
	vcdp->chgBus(c+197,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aOperand),16);
	vcdp->chgBus(c+198,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__dOperand),16);
	vcdp->chgBus(c+199,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cMask),5);
	vcdp->chgBus(c+200,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluOp),5);
	vcdp->chgBus(c+201,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftResult),32);
	vcdp->chgBit(c+202,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftCin));
	vcdp->chgBit(c+203,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftMsb));
	vcdp->chgBus(c+204,(((0xf0U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
				       << 4U)) | (0xfU 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp)))),8);
	vcdp->chgBit(c+205,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdV));
	vcdp->chgBus(c+206,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrMasked),5);
	vcdp->chgBus(c+207,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata),32);
	vcdp->chgBus(c+208,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp),9);
	vcdp->chgBus(c+209,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib),5);
	vcdp->chgBit(c+210,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__highC));
	vcdp->chgBit(c+211,(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel));
	vcdp->chgBit(c+212,(vlTOPp->fx68k__DOT__busControl__DOT__canStart));
	vcdp->chgBit(c+213,(vlTOPp->fx68k__DOT__busControl__DOT__bcReset));
	vcdp->chgBus(c+214,(vlTOPp->fx68k__DOT__busControl__DOT__next),32);
	vcdp->chgBit(c+215,(vlTOPp->fx68k__DOT__busControl__DOT__busEnding));
    }
}

void Vfx68k::traceChgThis__6(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+216,(vlTOPp->fx68k__DOT__tState),32);
	vcdp->chgBit(c+217,(vlTOPp->fx68k__DOT__rDtack));
	vcdp->chgBit(c+218,(vlTOPp->fx68k__DOT__rBerr));
	vcdp->chgBus(c+219,(vlTOPp->fx68k__DOT__rIpl),3);
	vcdp->chgBus(c+220,(vlTOPp->fx68k__DOT__iIpl),3);
	vcdp->chgBit(c+221,(vlTOPp->fx68k__DOT__Vpai));
	vcdp->chgBit(c+222,(vlTOPp->fx68k__DOT__BeI));
	vcdp->chgBit(c+223,(vlTOPp->fx68k__DOT__BRi));
	vcdp->chgBit(c+224,(vlTOPp->fx68k__DOT__BgackI));
	vcdp->chgBit(c+225,(vlTOPp->fx68k__DOT__BeiDelay));
	vcdp->chgBit(c+226,((1U & (~ ((IData)(vlTOPp->fx68k__DOT__BeI) 
				      | (IData)(vlTOPp->fx68k__DOT__BeiDelay))))));
	vcdp->chgArray(c+227,(vlTOPp->fx68k__DOT__nanoLatch),68);
	vcdp->chgArray(c+230,(vlTOPp->fx68k__DOT__nanoOutput),68);
	vcdp->chgBus(c+233,(vlTOPp->fx68k__DOT__microLatch),17);
	vcdp->chgBus(c+234,(vlTOPp->fx68k__DOT__microOutput),17);
	vcdp->chgBus(c+235,(vlTOPp->fx68k__DOT__microAddr),10);
	vcdp->chgBus(c+236,(vlTOPp->fx68k__DOT__nanoAddr),9);
	vcdp->chgBit(c+237,(vlTOPp->fx68k__DOT__Tpend));
	vcdp->chgBit(c+238,(vlTOPp->fx68k__DOT__intPend));
	vcdp->chgBit(c+239,(vlTOPp->fx68k__DOT__pswT));
	vcdp->chgBit(c+240,(vlTOPp->fx68k__DOT__pswS));
	vcdp->chgBus(c+241,(vlTOPp->fx68k__DOT__pswI),3);
	vcdp->chgBus(c+242,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr),8);
	vcdp->chgBus(c+243,(vlTOPp->fx68k__DOT__ftu),16);
	vcdp->chgBus(c+244,(vlTOPp->fx68k__DOT__Irc),16);
	vcdp->chgBus(c+245,(vlTOPp->fx68k__DOT__Ir),16);
	vcdp->chgBus(c+246,(vlTOPp->fx68k__DOT__Ird),16);
	vcdp->chgBus(c+247,(vlTOPp->fx68k__DOT__alue),16);
	vcdp->chgBus(c+248,(vlTOPp->fx68k__DOT__excUnit__DOT__Abl),16);
	vcdp->chgBit(c+249,((1U & (~ (IData)((0U != (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__prenLatch)))))));
	vcdp->chgBit(c+250,((1U & (~ (IData)((0U != 
					      (0x3fU 
					       & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)))))));
	vcdp->chgBit(c+251,(vlTOPp->fx68k__DOT__dcr4));
	vcdp->chgBit(c+252,((1U & (~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore) 
				      >> 2U)))));
	vcdp->chgBit(c+253,(((IData)(vlTOPp->fx68k__DOT__busControl__DOT__wendReg) 
			     & (5U != vlTOPp->fx68k__DOT__busControl__DOT__busPhase))));
	vcdp->chgBit(c+254,((2U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase)));
	vcdp->chgBit(c+255,(vlTOPp->fx68k__DOT__busControl__DOT__isWriteReg));
	vcdp->chgBit(c+256,((((IData)(vlTOPp->fx68k__DOT__BRi) 
			      & (IData)(vlTOPp->fx68k__DOT__BgackI)) 
			     & (~ (IData)(vlTOPp->fx68k__DOT__busArbiter__DOT__rGranted)))));
	vcdp->chgBit(c+257,(vlTOPp->fx68k__DOT__addrOe));
	vcdp->chgBit(c+258,((1U & vlTOPp->fx68k__DOT__excUnit__DOT__aob)));
	vcdp->chgBit(c+259,(vlTOPp->fx68k__DOT__iStop));
	vcdp->chgBit(c+260,(vlTOPp->fx68k__DOT__A0Err));
	vcdp->chgBit(c+261,(vlTOPp->fx68k__DOT__excRst));
	vcdp->chgBit(c+262,(vlTOPp->fx68k__DOT__BerrA));
	vcdp->chgBit(c+263,(vlTOPp->fx68k__DOT__Spuria));
	vcdp->chgBit(c+264,(vlTOPp->fx68k__DOT__Avia));
	vcdp->chgBit(c+265,((7U == (IData)(vlTOPp->fx68k__DOT__rFC))));
	vcdp->chgBit(c+266,(vlTOPp->fx68k__DOT__rAddrErr));
	vcdp->chgBit(c+267,(vlTOPp->fx68k__DOT__iBusErr));
	vcdp->chgBit(c+268,(vlTOPp->fx68k__DOT__Err6591));
	vcdp->chgBus(c+269,((3U & (vlTOPp->fx68k__DOT__microLatch 
				   >> 0xfU))),2);
	vcdp->chgBit(c+270,(vlTOPp->fx68k__DOT__oReset));
	vcdp->chgBit(c+271,(vlTOPp->fx68k__DOT__oHalted));
	vcdp->chgBus(c+272,(vlTOPp->fx68k__DOT__rFC),3);
	vcdp->chgBus(c+273,(vlTOPp->fx68k__DOT__inl),3);
	vcdp->chgBit(c+274,(vlTOPp->fx68k__DOT__updIll));
	vcdp->chgBit(c+275,(vlTOPp->fx68k__DOT__prevNmi));
	vcdp->chgBit(c+276,((7U == (IData)(vlTOPp->fx68k__DOT__iIpl))));
	vcdp->chgBus(c+277,(vlTOPp->fx68k__DOT__eCntr),4);
	vcdp->chgBit(c+278,(vlTOPp->fx68k__DOT__rVma));
	vcdp->chgBit(c+279,(((~ (IData)(vlTOPp->fx68k__DOT__rVma)) 
			     & (8U == (IData)(vlTOPp->fx68k__DOT__eCntr)))));
	vcdp->chgBit(c+280,(vlTOPp->fx68k__DOT__irdToCcr_t4));
	vcdp->chgBus(c+281,(vlTOPp->fx68k__DOT__ssw),5);
	vcdp->chgBus(c+282,(vlTOPp->fx68k__DOT__tvnLatch),4);
	vcdp->chgBit(c+283,(vlTOPp->fx68k__DOT__inExcept01));
	vcdp->chgBus(c+284,((0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				     >> 0xcU))),4);
	vcdp->chgBus(c+285,((7U & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				   >> 6U))),3);
	vcdp->chgBit(c+286,((1U & ((IData)(vlTOPp->fx68k__DOT__Irc) 
				   >> 0xbU))));
	vcdp->chgBus(c+287,((3U & (IData)(vlTOPp->fx68k__DOT__alue))),2);
	vcdp->chgBit(c+288,(vlTOPp->fx68k__DOT__sequencer__DOT__a0Rst));
	vcdp->chgBit(c+289,(((((((IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rIllegal) 
				 | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rLineF)) 
				| (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rLineA)) 
			       | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rPriv)) 
			      | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rTrace)) 
			     | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rInterrupt))));
	vcdp->chgBit(c+290,((((IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcRst) 
			      | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcBusErr)) 
			     | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcAdrErr))));
	vcdp->chgBus(c+291,(((0x300U & (vlTOPp->fx68k__DOT__microLatch 
					>> 5U)) | (
						   (0xc0U 
						    & (vlTOPp->fx68k__DOT__microLatch 
						       << 1U)) 
						   | ((0x3cU 
						       & (vlTOPp->fx68k__DOT__microLatch 
							  >> 5U)) 
						      | (3U 
							 & (vlTOPp->fx68k__DOT__microLatch 
							    >> 0xbU)))))),10);
	vcdp->chgBus(c+292,((0x1fU & (vlTOPp->fx68k__DOT__microLatch 
				      >> 2U))),5);
	vcdp->chgBit(c+293,(vlTOPp->fx68k__DOT__sequencer__DOT__rTrace));
	vcdp->chgBit(c+294,(vlTOPp->fx68k__DOT__sequencer__DOT__rInterrupt));
	vcdp->chgBit(c+295,(vlTOPp->fx68k__DOT__sequencer__DOT__rIllegal));
	vcdp->chgBit(c+296,(vlTOPp->fx68k__DOT__sequencer__DOT__rPriv));
	vcdp->chgBit(c+297,(vlTOPp->fx68k__DOT__sequencer__DOT__rLineA));
	vcdp->chgBit(c+298,(vlTOPp->fx68k__DOT__sequencer__DOT__rLineF));
	vcdp->chgBit(c+299,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcRst));
	vcdp->chgBit(c+300,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcAdrErr));
	vcdp->chgBit(c+301,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcBusErr));
	vcdp->chgBit(c+302,(vlTOPp->fx68k__DOT__sequencer__DOT__rSpurious));
	vcdp->chgBit(c+303,(vlTOPp->fx68k__DOT__sequencer__DOT__rAutovec));
	vcdp->chgBus(c+304,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch),16);
	vcdp->chgBus(c+305,(vlTOPp->fx68k__DOT__excUnit__DOT__dbin),16);
	vcdp->chgBus(c+306,(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput),16);
	vcdp->chgBus(c+307,(vlTOPp->fx68k__DOT__excUnit__DOT__PcL),16);
	vcdp->chgBus(c+308,(vlTOPp->fx68k__DOT__excUnit__DOT__PcH),16);
	vcdp->chgBus(c+309,(vlTOPp->fx68k__DOT__excUnit__DOT__auReg),32);
	vcdp->chgBus(c+310,(vlTOPp->fx68k__DOT__excUnit__DOT__aob),32);
	vcdp->chgBus(c+311,(vlTOPp->fx68k__DOT__excUnit__DOT__Ath),16);
	vcdp->chgBus(c+312,(vlTOPp->fx68k__DOT__excUnit__DOT__Atl),16);
	vcdp->chgBus(c+313,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbl),16);
	vcdp->chgBus(c+314,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbh),16);
	vcdp->chgBus(c+315,(vlTOPp->fx68k__DOT__excUnit__DOT__Abh),16);
	vcdp->chgBus(c+316,(vlTOPp->fx68k__DOT__excUnit__DOT__Abd),16);
	vcdp->chgBus(c+317,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbd),16);
	vcdp->chgBit(c+318,(vlTOPp->fx68k__DOT__excUnit__DOT__abdIsByte));
	vcdp->chgBit(c+319,(vlTOPp->fx68k__DOT__excUnit__DOT__Pcl2Dbl));
	vcdp->chgBit(c+320,(vlTOPp->fx68k__DOT__excUnit__DOT__Pch2Dbh));
	vcdp->chgBit(c+321,(vlTOPp->fx68k__DOT__excUnit__DOT__Pcl2Abl));
	vcdp->chgBit(c+322,(vlTOPp->fx68k__DOT__excUnit__DOT__Pch2Abh));
	vcdp->chgBus(c+323,(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx),5);
	vcdp->chgBus(c+324,(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy),5);
	vcdp->chgBus(c+325,(vlTOPp->fx68k__DOT__excUnit__DOT__movemRx),4);
	vcdp->chgBit(c+326,(vlTOPp->fx68k__DOT__excUnit__DOT__byteNotSpAlign));
	vcdp->chgBit(c+327,(vlTOPp->fx68k__DOT__excUnit__DOT__rxIsAreg));
	vcdp->chgBit(c+328,(vlTOPp->fx68k__DOT__excUnit__DOT__ryIsAreg));
	vcdp->chgBus(c+329,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbh),16);
	vcdp->chgBus(c+330,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbl),16);
	vcdp->chgBus(c+331,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbd),16);
	vcdp->chgBus(c+332,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbh),16);
	vcdp->chgBus(c+333,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbl),16);
	vcdp->chgBus(c+334,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbd),16);
	vcdp->chgBit(c+335,(vlTOPp->fx68k__DOT__excUnit__DOT__dbl2Pcl));
	vcdp->chgBit(c+336,(vlTOPp->fx68k__DOT__excUnit__DOT__dbh2Pch));
	vcdp->chgBit(c+337,(vlTOPp->fx68k__DOT__excUnit__DOT__abh2Pch));
	vcdp->chgBit(c+338,(vlTOPp->fx68k__DOT__excUnit__DOT__abl2Pcl));
	vcdp->chgBus(c+339,(vlTOPp->fx68k__DOT__excUnit__DOT__prenLatch),16);
	vcdp->chgBus(c+340,((0xfU & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__abdIsByte)
				      ? (7U & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Abd))
				      : (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Abd)))),4);
	vcdp->chgBus(c+341,(vlTOPp->fx68k__DOT__excUnit__DOT__alub),16);
	vcdp->chgBit(c+342,((1U & (~ (IData)((0U != 
					      (3U & (IData)(
							    (vlTOPp->fx68k__DOT__Nanod2 
							     >> 0x11U)))))))));
	vcdp->chgBus(c+343,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dob),16);
	vcdp->chgBit(c+344,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__xToDbin));
	vcdp->chgBit(c+345,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__xToIrc));
	vcdp->chgBit(c+346,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow));
	vcdp->chgBit(c+347,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh));
	vcdp->chgBit(c+348,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux));
	vcdp->chgBit(c+349,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__isByte_T4));
	vcdp->chgBit(c+350,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteCycle));
	vcdp->chgBus(c+351,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr),5);
	vcdp->chgBus(c+352,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore),5);
	vcdp->chgBit(c+353,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__coreH));
	vcdp->chgBus(c+354,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row),16);
	vcdp->chgBit(c+355,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isArX));
	vcdp->chgBit(c+356,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__noCcrEn));
	vcdp->chgBit(c+357,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isByte));
	vcdp->chgBus(c+358,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrMask),5);
	vcdp->chgBus(c+359,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper),5);
	vcdp->chgBit(c+360,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				   >> 7U))));
	vcdp->chgBit(c+361,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				   >> 1U))));
	vcdp->chgBus(c+362,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdLatch),8);
	vcdp->chgBit(c+363,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdCarry));
	vcdp->chgBit(c+364,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdOverf));
	vcdp->chgBit(c+365,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isLong));
	vcdp->chgBit(c+366,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rIrd8));
	vcdp->chgBit(c+367,((1U & ((~ ((4U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
				       | (2U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)))) 
				   & ((7U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
				      | (((0xbU == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
					  | (0xaU == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)))
					  ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore)
					  : (((0xcU 
					       == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
					      | (3U 
						 == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper))) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr) 
						>> 4U))))))));
	vcdp->chgBit(c+368,((0U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					  >> 4U)))));
	vcdp->chgBit(c+369,((1U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					  >> 3U)))));
	vcdp->chgBus(c+370,((0xffU & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch))),8);
	vcdp->chgBit(c+371,((6U != (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper))));
	vcdp->chgBit(c+372,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr) 
				   >> 4U))));
	vcdp->chgBus(c+373,(vlTOPp->fx68k__DOT__nDecoder__DOT__ftuCtrl),4);
	vcdp->chgBus(c+374,((7U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				    << 0x17U) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
						 >> 9U)))),3);
	vcdp->chgBus(c+375,((7U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				    << 3U) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
					      >> 0x1dU)))),3);
	vcdp->chgBus(c+376,((3U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				    << 0x1dU) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
						 >> 3U)))),2);
	vcdp->chgBus(c+377,((3U & ((vlTOPp->fx68k__DOT__nanoLatch[2U] 
				    << 3U) | (vlTOPp->fx68k__DOT__nanoLatch[1U] 
					      >> 0x1dU)))),2);
	vcdp->chgBus(c+378,((0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				     >> 0xcU))),4);
	vcdp->chgBit(c+379,((4U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					  >> 3U)))));
	vcdp->chgBit(c+380,(((7U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 3U))) 
			     & (~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				   >> 1U)))));
	vcdp->chgBit(c+381,(((3U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 6U))) 
			     & (1U != (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					     >> 3U))))));
	vcdp->chgBit(c+382,(((8U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					     >> 8U))) 
			     & (0U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					     >> 4U))))));
	vcdp->chgBus(c+383,(((0U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 9U)))
			      ? 8U : (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					    >> 9U)))),4);
	vcdp->chgBit(c+384,((1U & (((IData)(vlTOPp->fx68k__DOT__Ird) 
				    >> 7U) & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					      >> 6U)))));
	vcdp->chgBit(c+385,((1U & (IData)(vlTOPp->fx68k__DOT__Nanod2))));
	vcdp->chgBit(c+386,(vlTOPp->fx68k__DOT__busControl__DOT__rAS));
	vcdp->chgBit(c+387,(vlTOPp->fx68k__DOT__busControl__DOT__rLDS));
	vcdp->chgBit(c+388,(vlTOPp->fx68k__DOT__busControl__DOT__rUDS));
	vcdp->chgBit(c+389,(vlTOPp->fx68k__DOT__busControl__DOT__rRWn));
	vcdp->chgBit(c+390,(vlTOPp->fx68k__DOT__busControl__DOT__dataOe));
	vcdp->chgBit(c+391,(vlTOPp->fx68k__DOT__busControl__DOT__bcPend));
	vcdp->chgBit(c+392,(vlTOPp->fx68k__DOT__busControl__DOT__bciByte));
	vcdp->chgBit(c+393,(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg));
	vcdp->chgBit(c+394,(vlTOPp->fx68k__DOT__busControl__DOT__wendReg));
	vcdp->chgBit(c+395,(vlTOPp->fx68k__DOT__busControl__DOT__addrOeDelay));
	vcdp->chgBit(c+396,(vlTOPp->fx68k__DOT__busControl__DOT__isByteT4));
	vcdp->chgBit(c+397,((1U & ((~ (IData)(vlTOPp->fx68k__DOT__rDtack)) 
				   | (IData)(vlTOPp->fx68k__DOT__iStop)))));
	vcdp->chgBit(c+398,((5U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase)));
	vcdp->chgBus(c+399,(vlTOPp->fx68k__DOT__busControl__DOT__busPhase),32);
	vcdp->chgBus(c+400,(vlTOPp->fx68k__DOT__busArbiter__DOT__dmaPhase),32);
	vcdp->chgBit(c+401,(vlTOPp->fx68k__DOT__busArbiter__DOT__rGranted));
    }
}

void Vfx68k::traceChgThis__7(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+402,(vlTOPp->clk));
	vcdp->chgBit(c+403,(vlTOPp->extReset));
	vcdp->chgBit(c+404,(vlTOPp->pwrUp));
	vcdp->chgBit(c+405,(vlTOPp->enPhi1));
	vcdp->chgBit(c+406,(vlTOPp->enPhi2));
	vcdp->chgBit(c+407,(vlTOPp->eRWn));
	vcdp->chgBit(c+408,(vlTOPp->ASn));
	vcdp->chgBit(c+409,(vlTOPp->LDSn));
	vcdp->chgBit(c+410,(vlTOPp->UDSn));
	vcdp->chgBit(c+411,(vlTOPp->E));
	vcdp->chgBit(c+412,(vlTOPp->VMAn));
	vcdp->chgBit(c+413,(vlTOPp->FC0));
	vcdp->chgBit(c+414,(vlTOPp->FC1));
	vcdp->chgBit(c+415,(vlTOPp->FC2));
	vcdp->chgBit(c+416,(vlTOPp->BGn));
	vcdp->chgBit(c+417,(vlTOPp->oRESETn));
	vcdp->chgBit(c+418,(vlTOPp->oHALTEDn));
	vcdp->chgBit(c+419,(vlTOPp->DTACKn));
	vcdp->chgBit(c+420,(vlTOPp->VPAn));
	vcdp->chgBit(c+421,(vlTOPp->BERRn));
	vcdp->chgBit(c+422,(vlTOPp->BRn));
	vcdp->chgBit(c+423,(vlTOPp->BGACKn));
	vcdp->chgBit(c+424,(vlTOPp->IPL0n));
	vcdp->chgBit(c+425,(vlTOPp->IPL1n));
	vcdp->chgBit(c+426,(vlTOPp->IPL2n));
	vcdp->chgBus(c+427,(vlTOPp->iEdb),16);
	vcdp->chgBus(c+428,(vlTOPp->oEdb),16);
	vcdp->chgBus(c+429,(vlTOPp->eab),23);
	vcdp->chgBit(c+430,((((1U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase) 
			      & (~ (IData)(vlTOPp->ASn))) 
			     & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg))));
    }
}
