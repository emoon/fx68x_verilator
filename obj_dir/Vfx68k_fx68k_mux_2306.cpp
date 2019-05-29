// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_2306.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_2306) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_2306::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_2306::~Vfx68k_fx68k_mux_2306() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_abhMux_1357_10__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_abhMux_1357_10__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & ((((0xffff8000U & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						<< 0xaU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
					      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						  << 0xbU) 
						 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						 << 0xcU) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
			     | (0x8000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					    << 0xdU) 
					   & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
					      >> 0x10U)))) 
			    | (0xffff8000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					       << 0xeU) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
			   | (0xffff8000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					      << 0xfU) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
	       | ((0x4000U & ((((0xffffc000U & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						   << 9U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						     << 0xaU) 
						    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						    << 0xbU) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
				| (0xc000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					       << 0xcU) 
					      & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						 >> 0x10U)))) 
			       | (0xffffc000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						  << 0xdU) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
			      | (0xffffc000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						 << 0xeU) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
		  | ((0x2000U & ((((0xffffe000U & (
						   ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						      << 8U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							<< 9U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						       << 0xaU) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
				   | (0xe000U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						  << 0xbU) 
						 & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						    >> 0x10U)))) 
				  | (0xffffe000U & 
				     (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
				       << 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
				 | (0xffffe000U & (
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						    << 0xdU) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
		     | ((0x1000U & ((((0xfffff000U 
				       & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					     << 7U) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
					   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					       << 8U) 
					      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
					  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					      << 9U) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
				      | (0xf000U & 
					 (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					   << 0xaU) 
					  & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
					     >> 0x10U)))) 
				     | (0xfffff000U 
					& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					    << 0xbU) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
				    | (0xfffff000U 
				       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					   << 0xcU) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
			| ((0x800U & ((((0xfffff800U 
					 & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					       << 6U) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						 << 7U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						<< 8U) 
					       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
					| (0xf800U 
					   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					       << 9U) 
					      & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						 >> 0x10U)))) 
				       | (0xfffff800U 
					  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					      << 0xaU) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
				      | (0xfffff800U 
					 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
					     << 0xbU) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
			   | ((0x400U & ((((0xfffffc00U 
					    & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						  << 5U) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						    << 6U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						   << 7U) 
						  & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
					   | (0xfc00U 
					      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						  << 8U) 
						 & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						    >> 0x10U)))) 
					  | (0xfffffc00U 
					     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						 << 9U) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
					 | (0xfffffc00U 
					    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						<< 0xaU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
			      | ((0x200U & ((((0xfffffe00U 
					       & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						     << 4U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						       << 5U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						      << 6U) 
						     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
					      | (0xfe00U 
						 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						     << 7U) 
						    & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						       >> 0x10U)))) 
					     | (0xfffffe00U 
						& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						    << 8U) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
					    | (0xfffffe00U 
					       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						   << 9U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
				 | ((0x100U & ((((0xffffff00U 
						  & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							<< 3U) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							  << 4U) 
							 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							 << 5U) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
						 | (0xff00U 
						    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							<< 6U) 
						       & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
							  >> 0x10U)))) 
						| (0xffffff00U 
						   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						       << 7U) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
					       | (0xffffff00U 
						  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						      << 8U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
				    | ((0x80U & (((
						   (0xffffff80U 
						    & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							  << 2U) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
							| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							    << 3U) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							   << 4U) 
							  & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
						   | (0xff80U 
						      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							  << 5U) 
							 & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
							    >> 0x10U)))) 
						  | (0xffffff80U 
						     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							 << 6U) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
						 | (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							<< 7U) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
				       | ((0x40U & 
					   ((((0xffffffc0U 
					       & (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						     << 1U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						       << 2U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						      << 3U) 
						     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
					      | (0xffc0U 
						 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						     << 4U) 
						    & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
						       >> 0x10U)))) 
					     | (0xffffffc0U 
						& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						    << 5U) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
					    | (0xffffffc0U 
					       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
						   << 6U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
					  | ((0x20U 
					      & ((((0xffffffe0U 
						    & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
							| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							    << 1U) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
						       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							   << 2U) 
							  & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
						   | (0xffe0U 
						      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							  << 3U) 
							 & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
							    >> 0x10U)))) 
						  | (0xffffffe0U 
						     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							 << 4U) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
						 | (0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							<< 5U) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
					     | ((0x10U 
						 & ((((((0x7ffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							     >> 1U) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z)))) 
						       | (0xfffffff0U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							      << 1U) 
							     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
						      | (0xfff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							     << 2U) 
							    & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
							       >> 0x10U)))) 
						     | (0xfffffff0U 
							& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							    << 3U) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
						    | (0xfffffff0U 
						       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							   << 4U) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
						| ((8U 
						    & ((((((0x3ffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								>> 2U) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH))) 
							   | (0x7ffffff8U 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								  >> 1U) 
								 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z)))) 
							  | (0xfffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
							 | (0xfff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								<< 1U) 
							       & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
								  >> 0x10U)))) 
							| (0xfffffff8U 
							   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							       << 2U) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
						       | (0xfffffff8U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
							      << 3U) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
						   | ((4U 
						       & ((((((0x1ffffffcU 
							       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								   >> 3U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH))) 
							      | (0x3ffffffcU 
								 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								     >> 2U) 
								    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z)))) 
							     | (0x7ffffffcU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								    >> 1U) 
								   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
							    | (0xfffcU 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								  & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
								     >> 0x10U)))) 
							   | (0xfffffffcU 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								  << 1U) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
							  | (0xfffffffcU 
							     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								 << 2U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
						      | ((2U 
							  & ((((((0xffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								      >> 4U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH))) 
								 | (0x1ffffffeU 
								    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
									>> 3U) 
								       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z)))) 
								| (0x3ffffffeU 
								   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								       >> 2U) 
								      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z)))) 
							       | (0xfffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								      >> 1U) 
								     & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
									>> 0x10U)))) 
							      | (0xfffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4)))) 
							     | (0xfffffffeU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								    << 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath))))) 
							 | (1U 
							    & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								     >> 5U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcH)) 
								   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								       >> 4U) 
								      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1359_29.z))) 
								  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								      >> 3U) 
								     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1360_29.z))) 
								 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								     >> 2U) 
								    & (vlTOPp->fx68k__DOT__excUnit__DOT__auReg 
								       >> 0x10U))) 
								| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__in_4))) 
							       | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_abhMux_1357_10__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Ath)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_dblMux_1319_10__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_dblMux_1319_10__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				 << 0xaU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				   << 0xbU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
			      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				  << 0xcU) & (IData)(vlTOPp->fx68k__DOT__ftu))) 
			     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				 << 0xdU) & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				<< 0xeU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
			   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
			       << 0xfU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
	       | ((0x4000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				    << 9U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				      << 0xaU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
				 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				     << 0xbU) & (IData)(vlTOPp->fx68k__DOT__ftu))) 
				| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				    << 0xcU) & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				   << 0xdU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
			      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				  << 0xeU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
		  | ((0x2000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				       << 8U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					 << 9U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
				    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					<< 0xaU) & (IData)(vlTOPp->fx68k__DOT__ftu))) 
				   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				       << 0xbU) & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				      << 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
				 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
				     << 0xdU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
		     | ((0x1000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					  << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					    << 8U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
				       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					   << 9U) & (IData)(vlTOPp->fx68k__DOT__ftu))) 
				      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					  << 0xaU) 
					 & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					 << 0xbU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
				    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					<< 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
			| ((0x800U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					    << 6U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
					  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					      << 7U) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
					 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					     << 8U) 
					    & (IData)(vlTOPp->fx68k__DOT__ftu))) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					    << 9U) 
					   & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
				       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					   << 0xaU) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
				      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					  << 0xbU) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
			   | ((0x400U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					       << 5U) 
					      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						 << 6U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						<< 7U) 
					       & (IData)(vlTOPp->fx68k__DOT__ftu))) 
					   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					       << 8U) 
					      & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
					  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					      << 9U) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
					 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
					     << 0xaU) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
			      | ((0x200U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						  << 4U) 
						 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						    << 5U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						   << 6U) 
						  & (IData)(vlTOPp->fx68k__DOT__ftu))) 
					      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						  << 7U) 
						 & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						 << 8U) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						<< 9U) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
				 | ((0x100U & (((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						     << 3U) 
						    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						       << 4U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						      << 5U) 
						     & (IData)(vlTOPp->fx68k__DOT__ftu))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						     << 6U) 
						    & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						    << 7U) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						   << 8U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
				    | ((0x80U & (((
						   (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						       << 2U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
						     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							 << 3U) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
						    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							<< 4U) 
						       & (IData)(vlTOPp->fx68k__DOT__ftu))) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						       << 5U) 
						      & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						      << 6U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						     << 7U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
				       | ((0x40U & 
					   ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						  << 1U) 
						 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						    << 2U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						   << 3U) 
						  & (IData)(vlTOPp->fx68k__DOT__ftu))) 
					      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						  << 4U) 
						 & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						 << 5U) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						<< 6U) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
					  | ((0x20U 
					      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
						     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							 << 1U) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
						    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							<< 2U) 
						       & (IData)(vlTOPp->fx68k__DOT__ftu))) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						       << 3U) 
						      & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						      << 4U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
						     << 5U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))) 
					     | ((0x10U 
						 & ((((((0x7ffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							     >> 1U) 
							    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z)))) 
						       | (0xfffffff0U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							      << 1U) 
							     & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
						      | (0xfffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							     << 2U) 
							    & vlTOPp->fx68k__DOT__excUnit__DOT__auReg))) 
						     | (0xfffffff0U 
							& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							    << 3U) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl)))) 
						    | (0xfffffff0U 
						       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							   << 4U) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL))))) 
						| ((8U 
						    & ((((((0x3ffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								>> 2U) 
							       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z))) 
							   | (0x7ffffff8U 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								  >> 1U) 
								 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z)))) 
							  | (0xfffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								& (IData)(vlTOPp->fx68k__DOT__ftu)))) 
							 | (0xfffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								<< 1U) 
							       & vlTOPp->fx68k__DOT__excUnit__DOT__auReg))) 
							| (0xfffffff8U 
							   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							       << 2U) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl)))) 
						       | (0xfffffff8U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
							      << 3U) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL))))) 
						   | ((4U 
						       & ((((((0x1ffffffcU 
							       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								   >> 3U) 
								  & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z))) 
							      | (0x3ffffffcU 
								 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								     >> 2U) 
								    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z)))) 
							     | (0x7ffffffcU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
							    | (0xfffffffcU 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								  & vlTOPp->fx68k__DOT__excUnit__DOT__auReg))) 
							   | (0xfffffffcU 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								  << 1U) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl)))) 
							  | (0xfffffffcU 
							     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								 << 2U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL))))) 
						      | ((2U 
							  & ((((((0xffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								      >> 4U) 
								     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z))) 
								 | (0x1ffffffeU 
								    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
									>> 3U) 
								       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z)))) 
								| (0x3ffffffeU 
								   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								       >> 2U) 
								      & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
							       | (0x7ffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								      >> 1U) 
								     & vlTOPp->fx68k__DOT__excUnit__DOT__auReg))) 
							      | (0xfffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl)))) 
							     | (0xfffffffeU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								    << 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL))))) 
							 | (1U 
							    & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								     >> 5U) 
								    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1320_24.z)) 
								   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								       >> 4U) 
								      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1321_24.z))) 
								  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								      >> 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__ftu))) 
								 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								     >> 2U) 
								    & vlTOPp->fx68k__DOT__excUnit__DOT__auReg)) 
								| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Atl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dblMux_1319_10__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__PcL)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_dbdMux_1309_10__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2306::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_dbdMux_1309_10__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				 << 0xaU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				   << 0xbU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
			      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				  << 0xcU) & (IData)(vlTOPp->fx68k__DOT__alue))) 
			     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				 << 0xdU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				<< 0xeU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
			   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
			       << 0xfU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
	       | ((0x4000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				    << 9U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				      << 0xaU) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
				 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				     << 0xbU) & (IData)(vlTOPp->fx68k__DOT__alue))) 
				| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				    << 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				   << 0xdU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
			      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				  << 0xeU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
		  | ((0x2000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				       << 8U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					 << 9U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
				    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					<< 0xaU) & (IData)(vlTOPp->fx68k__DOT__alue))) 
				   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				       << 0xbU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				      << 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
				 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
				     << 0xdU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
		     | ((0x1000U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					  << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					    << 8U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
				       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					   << 9U) & (IData)(vlTOPp->fx68k__DOT__alue))) 
				      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					  << 0xaU) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					 << 0xbU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
				    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					<< 0xcU) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
			| ((0x800U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					    << 6U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
					  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					      << 7U) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
					 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					     << 8U) 
					    & (IData)(vlTOPp->fx68k__DOT__alue))) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					    << 9U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
				       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					   << 0xaU) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
				      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					  << 0xbU) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
			   | ((0x400U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					       << 5U) 
					      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						 << 6U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						<< 7U) 
					       & (IData)(vlTOPp->fx68k__DOT__alue))) 
					   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					       << 8U) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
					  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					      << 9U) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
					 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
					     << 0xaU) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
			      | ((0x200U & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						  << 4U) 
						 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						    << 5U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						   << 6U) 
						  & (IData)(vlTOPp->fx68k__DOT__alue))) 
					      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						  << 7U) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						 << 8U) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						<< 9U) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
				 | ((0x100U & (((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						     << 3U) 
						    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						       << 4U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						      << 5U) 
						     & (IData)(vlTOPp->fx68k__DOT__alue))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						     << 6U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						    << 7U) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						   << 8U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
				    | ((0x80U & (((
						   (((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						       << 2U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
						     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							 << 3U) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
						    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							<< 4U) 
						       & (IData)(vlTOPp->fx68k__DOT__alue))) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						       << 5U) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						      << 6U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						     << 7U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
				       | ((0x40U & 
					   ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						  << 1U) 
						 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
						| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						    << 2U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
					       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						   << 3U) 
						  & (IData)(vlTOPp->fx68k__DOT__alue))) 
					      | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						  << 4U) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
					     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						 << 5U) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
					    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						<< 6U) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
					  | ((0x20U 
					      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
						     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							 << 1U) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
						    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							<< 2U) 
						       & (IData)(vlTOPp->fx68k__DOT__alue))) 
						   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						       << 3U) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
						  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						      << 4U) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
						 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
						     << 5U) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))) 
					     | ((0x10U 
						 & ((((((0x7ffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							     >> 1U) 
							    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z)))) 
						       | (0xfffffff0U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							      << 1U) 
							     & (IData)(vlTOPp->fx68k__DOT__alue)))) 
						      | (0xfffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							     << 2U) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)))) 
						     | (0xfffffff0U 
							& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							    << 3U) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut)))) 
						    | (0xfffffff0U 
						       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							   << 4U) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput))))) 
						| ((8U 
						    & ((((((0x3ffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								>> 2U) 
							       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z))) 
							   | (0x7ffffff8U 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								  >> 1U) 
								 & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z)))) 
							  | (0xfffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								& (IData)(vlTOPp->fx68k__DOT__alue)))) 
							 | (0xfffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								<< 1U) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)))) 
							| (0xfffffff8U 
							   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							       << 2U) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut)))) 
						       | (0xfffffff8U 
							  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
							      << 3U) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput))))) 
						   | ((4U 
						       & ((((((0x1ffffffcU 
							       & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								   >> 3U) 
								  & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z))) 
							      | (0x3ffffffcU 
								 & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								     >> 2U) 
								    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z)))) 
							     | (0x7ffffffcU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__alue)))) 
							    | (0xfffffffcU 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)))) 
							   | (0xfffffffcU 
							      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								  << 1U) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut)))) 
							  | (0xfffffffcU 
							     & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								 << 2U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput))))) 
						      | ((2U 
							  & ((((((0xffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								      >> 4U) 
								     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z))) 
								 | (0x1ffffffeU 
								    & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
									>> 3U) 
								       & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z)))) 
								| (0x3ffffffeU 
								   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								       >> 2U) 
								      & (IData)(vlTOPp->fx68k__DOT__alue)))) 
							       | (0x7ffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								      >> 1U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)))) 
							      | (0xfffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut)))) 
							     | (0xfffffffeU 
								& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								    << 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput))))) 
							 | (1U 
							    & ((((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								     >> 5U) 
								    & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1310_24.z)) 
								   | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								       >> 4U) 
								      & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1311_24.z))) 
								  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								      >> 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__alue))) 
								 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								     >> 2U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin))) 
								| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__aluOut))) 
							       | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_dbdMux_1309_10__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)))))))))))))))))));
}

void Vfx68k_fx68k_mux_2306::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2306::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(6);
    in_0 = VL_RAND_RESET_I(16);
    in_1 = VL_RAND_RESET_I(16);
    in_2 = VL_RAND_RESET_I(16);
    in_3 = VL_RAND_RESET_I(16);
    in_4 = VL_RAND_RESET_I(16);
    in_5 = VL_RAND_RESET_I(16);
    z = VL_RAND_RESET_I(16);
}
