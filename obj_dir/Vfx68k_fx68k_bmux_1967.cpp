// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_bmux_1967.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_bmux_1967) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_bmux_1967::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_bmux_1967::~Vfx68k_fx68k_bmux_1967() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1348_24__6(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRx__05D_1348_24__6\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & (((((((((((((((((0xffff8000U 
					   & ((((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U))) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U))) 
						 & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						<< 0xfU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
					      | (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U))) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
					  | (0xffff8000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U))) 
						   << 0xfU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					 | (0xffff8000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					| (0xffff8000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xdU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
				       | (0xffff8000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U))) 
						 << 0xfU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
				      | (0xffff8000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 & (~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 3U))) 
						<< 0xfU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xdU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xeU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						<< 0xfU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
				     | (0xffff8000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						& (~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 3U))) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xdU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xfU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
				    | (0xffff8000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xfU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
					       << 0xfU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					      << 0xfU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
				   | (0xffff8000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xfU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xcU)) 
					  & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 >> 2U)) 
					     << 0xfU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 1U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xfU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
				  | (0xffff8000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 4U)) 
					   << 0xfU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 2U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xeU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					  << 0xfU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				 | (0xffff8000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xfU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xfU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xeU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xfU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				| (0xffff8000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xfU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 0xfU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xfU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
			       | (0xffff8000U & (((
						   ((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xfU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xfU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xfU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
			      | (0xffff8000U & ((((
						   (((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xfU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xdU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
			     | (0xffff8000U & (((((
						   ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xfU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xdU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
			    | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xbU) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U)) 
						     << 0xfU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 2U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
			   | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xfU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
	       | ((0x4000U & (((((((((((((((((0xffffc000U 
					      & ((((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U))) 
						    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						   << 0xeU) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						 | (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 2U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U))) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
					     | (0xffffc000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U))) 
						      << 0xeU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					    | (0xffffc000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					   | (0xffffc000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
					  | (0xffffc000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U))) 
						    << 0xeU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					 | (0xffffc000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   << 0xeU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xcU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xdU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xeU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					| (0xffffc000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U))) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xcU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xeU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
				       | (0xffffc000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xeU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xeU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xeU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
				      | (0xffffc000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xeU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 2U)) 
						  << 0xeU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xeU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
				     | (0xffffc000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						<< 0xeU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 2U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xdU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					       << 0xeU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				    | (0xffffc000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xeU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xdU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xeU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				   | (0xffffc000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xeU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xbU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 1U)) 
					    << 0xeU)) 
					& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					   << 0xeU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
				  | (0xffffc000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 4U)) 
					   << 0xeU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					    << 0xcU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 1U)) 
					   << 0xeU)) 
				       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					  << 0xeU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				 | (0xffffc000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xeU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				| (0xffffc000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xeU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
			       | (0xffffc000U & (((
						   ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xaU) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U)) 
							<< 0xeU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
			      | (0xffffc000U & ((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xeU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
		  | ((0x2000U & (((((((((((((((((0xffffe000U 
						 & ((((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U))) 
						       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						      << 0xdU) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						    | (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U))) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xdU) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						| (0xffffe000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U))) 
							 << 0xdU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xcU)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 0xdU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					       | (0xffffe000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xdU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					      | (0xffffe000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xdU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xdU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
					     | (0xffffe000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U))) 
						       << 0xdU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					    | (0xffffe000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      << 0xdU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xdU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					   | (0xffffe000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xbU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xdU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					  | (0xffffe000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xdU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xdU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xdU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					 | (0xffffe000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xdU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U)) 
						     << 0xdU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					| (0xffffe000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xdU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 2U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xcU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xdU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				       | (0xffffe000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xdU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xcU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xdU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				      | (0xffffe000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xdU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xdU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						<< 0xdU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
				     | (0xffffe000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						<< 0xdU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 1U)) 
						<< 0xdU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xdU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				    | (0xffffe000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xdU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xaU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xbU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xcU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					      << 0xdU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				   | (0xffffe000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xdU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xaU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					    << 0xcU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xdU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				  | (0xffffe000U & 
				     (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 9U) & 
					  ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 3U)) 
					   << 0xdU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 2U)) 
					    << 0xdU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 1U)) 
					   << 0xdU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					  << 0xdU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				 | (0xffffe000U & (
						   ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 0xdU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xdU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
		     | ((0x1000U & ((((((((((((((((
						   (0xfffff000U 
						    & ((((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U))) 
							  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							 << 0xcU) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						       | (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U))) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xcU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						   | (0xfffff000U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U))) 
							    << 0xcU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xcU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						  | (0xfffff000U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xcU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						 | (0xfffff000U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 0xcU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xcU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						| (0xfffff000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  << 0xcU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xaU)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 0xcU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					       | (0xfffff000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 << 0xcU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 0xcU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					      | (0xfffff000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xaU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					     | (0xfffff000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xcU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xcU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xcU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					    | (0xfffff000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xcU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 0xcU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					   | (0xfffff000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xcU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xcU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					  | (0xfffff000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xcU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xcU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					 | (0xfffff000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xcU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xcU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xcU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					| (0xfffff000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xcU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xcU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xcU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				       | (0xfffff000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xcU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xcU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				      | (0xfffff000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xcU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 9U)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xcU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				     | (0xfffff000U 
					& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 8U) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 3U)) 
						  << 0xcU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 2U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 1U)) 
						<< 0xcU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					       << 0xcU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				    | (0xfffff000U 
				       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 8U) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 3U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xcU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
					       << 0xcU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xcU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			| ((0x800U & ((((((((((((((
						   (((0xfffff800U 
						      & ((((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U))) 
							    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							   << 0xbU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							 | (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 2U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U))) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xbU) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						     | (0xfffff800U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U))) 
							      << 0xbU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 0xaU)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 0xbU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						    | (0xfffff800U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 0xaU)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 0xbU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						   | (0xfffff800U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 9U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 1U)) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xbU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						  | (0xfffff800U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    << 0xbU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xbU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						 | (0xfffff800U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   << 0xbU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 9U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xaU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xbU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						| (0xfffff800U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 9U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					       | (0xfffff800U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 0xbU)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U)) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 0xbU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					      | (0xfffff800U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 0xbU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 2U)) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xbU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					     | (0xfffff800U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xbU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xaU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xbU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					    | (0xfffff800U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xbU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xbU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					   | (0xfffff800U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xbU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xbU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					  | (0xfffff800U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xbU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xbU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					 | (0xfffff800U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xbU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 8U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xbU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					| (0xfffff800U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xbU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 8U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				       | (0xfffff800U 
					  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 7U) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U)) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xbU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				      | (0xfffff800U 
					 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 7U) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 3U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 2U)) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xbU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			   | ((0x400U & (((((((((((
						   ((((((0xfffffc00U 
							 & ((((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U))) 
							       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							      << 0xaU) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							    | (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U))) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 0xaU) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							| (0xfffffc00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U))) 
								 << 0xaU) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 9U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 0xaU)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						       | (0xfffffc00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 9U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 0xaU)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						      | (0xfffffc00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 8U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 0xaU)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 0xaU)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						     | (0xfffffc00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U))) 
							       << 0xaU) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 0xaU)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 0xaU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						    | (0xfffffc00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      << 0xaU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 8U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 9U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 0xaU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						   | (0xfffffc00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 8U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xaU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						  | (0xfffffc00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 0xaU)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 0xaU)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 0xaU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						 | (0xfffffc00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 0xaU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						| (0xfffffc00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 0xaU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 9U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 0xaU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					       | (0xfffffc00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 0xaU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xaU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					      | (0xfffffc00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 0xaU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xaU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xaU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					     | (0xfffffc00U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xaU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xaU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					    | (0xfffffc00U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xaU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 7U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xaU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					   | (0xfffffc00U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xaU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 7U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					  | (0xfffffc00U 
					     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 6U) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U)) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xaU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xaU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					 | (0xfffffc00U 
					    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 6U) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U)) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xaU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			      | ((0x200U & ((((((((
						   (((((((((0xfffffe00U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								 << 9U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 9U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							   | (0xfffffe00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    << 9U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 8U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 9U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							  | (0xfffffe00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 8U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 9U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							 | (0xfffffe00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 9U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 9U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							| (0xfffffe00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  << 9U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 7U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 9U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 9U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						       | (0xfffffe00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 << 9U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 8U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 9U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						      | (0xfffffe00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 7U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 9U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						     | (0xfffffe00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 9U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 9U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 9U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						    | (0xfffffe00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 9U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 9U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						   | (0xfffffe00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 9U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 8U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 9U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						  | (0xfffffe00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 9U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 8U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 9U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						 | (0xfffffe00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 9U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 9U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 9U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						| (0xfffffe00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 9U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 9U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					       | (0xfffffe00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 9U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 6U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 9U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					      | (0xfffffe00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 9U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					     | (0xfffffe00U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 5U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 9U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 9U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					    | (0xfffffe00U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 5U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 9U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				 | ((0x100U & (((((
						   ((((((((((((0xffffff00U 
							       & ((((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U))) 
								     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								    << 8U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								  | (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 8U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							      | (0xffffff00U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U))) 
								       << 8U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 8U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							     | (0xffffff00U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 8U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							    | (0xffffff00U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 6U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 8U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 8U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							   | (0xffffff00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 8U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 6U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 8U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 8U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							  | (0xffffff00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    << 8U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 8U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							 | (0xffffff00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 6U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 8U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							| (0xffffff00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 8U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 8U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 8U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						       | (0xffffff00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 8U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 5U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 8U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						      | (0xffffff00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 8U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 5U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 2U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 8U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						     | (0xffffff00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 8U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 8U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						    | (0xffffff00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 8U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 8U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 8U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						   | (0xffffff00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 8U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 1U)) 
							      << 8U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 8U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						  | (0xffffff00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 8U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 8U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						 | (0xffffff00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 8U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 5U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 8U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						| (0xffffff00U 
						   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 4U) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U)) 
							     << 8U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 8U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 8U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					       | (0xffffff00U 
						  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 4U) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U)) 
							  << 8U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				    | ((0x80U & (((
						   ((((((((((((((0xffffff80U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								      << 7U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 7U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								| (0xffffff80U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U))) 
									 << 7U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 6U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 7U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							       | (0xffffff80U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 6U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 7U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							      | (0xffffff80U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 5U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 7U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							     | (0xffffff80U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       << 7U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 5U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 7U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							    | (0xffffff80U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 7U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 6U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 7U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							   | (0xffffff80U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 5U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							  | (0xffffff80U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 4U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 7U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 7U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							 | (0xffffff80U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 7U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U)) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 7U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							| (0xffffff80U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 7U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 6U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 7U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						       | (0xffffff80U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 7U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 7U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						      | (0xffffff80U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 7U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 7U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						     | (0xffffff80U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 7U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 7U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						    | (0xffffff80U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 7U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 4U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 7U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						   | (0xffffff80U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 7U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 4U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						  | (0xffffff80U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 3U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U)) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 7U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						 | (0xffffff80U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 3U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				       | ((0x40U & 
					   (((((((((((((((((0xffffffc0U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								 << 6U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 6U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							   | (0xffffffc0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    << 6U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 5U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 6U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							  | (0xffffffc0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 6U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							 | (0xffffffc0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 6U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 6U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							| (0xffffffc0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  << 6U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 6U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						       | (0xffffffc0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 << 6U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 6U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						      | (0xffffffc0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						     | (0xffffffc0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 6U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 6U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						    | (0xffffffc0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 6U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						   | (0xffffffc0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 6U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 3U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 5U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 6U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						  | (0xffffffc0U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 6U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 3U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 5U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 6U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						 | (0xffffffc0U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 6U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 3U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 4U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 6U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 6U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						| (0xffffffc0U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 6U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 3U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 4U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 6U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					       | (0xffffffc0U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 6U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 3U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 4U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 5U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 6U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					      | (0xffffffc0U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 6U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 3U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 4U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 5U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 6U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					     | (0xffffffc0U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 2U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 6U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 6U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 6U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					    | (0xffffffc0U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 2U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 6U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 6U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 6U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
					  | ((0x20U 
					      & (((((((((((((((((0xffffffe0U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								      << 5U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 5U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								| (0xffffffe0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U))) 
									 << 5U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 4U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 5U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							       | (0xffffffe0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 4U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 5U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							      | (0xffffffe0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 3U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 5U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 5U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							     | (0xffffffe0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       << 5U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 5U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							    | (0xffffffe0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 5U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 3U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 4U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 5U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							   | (0xffffffe0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 3U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							  | (0xffffffe0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 5U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 5U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 5U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							 | (0xffffffe0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 5U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U)) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 5U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							| (0xffffffe0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 5U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 5U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						       | (0xffffffe0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 5U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 5U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						      | (0xffffffe0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 5U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 5U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 5U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						     | (0xffffffe0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 5U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						    | (0xffffffe0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 5U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 2U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 3U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 4U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 5U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						   | (0xffffffe0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 5U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 2U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 3U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 4U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 5U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						  | (0xffffffe0U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 1U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U)) 
							       << 5U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 5U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 5U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						 | (0xffffffe0U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 1U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 5U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 5U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 5U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
					     | ((0x10U 
						 & (((((((((((((((((0xfffffff0U 
								    & ((((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U))) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									 << 4U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								       | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 4U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								   | (0xfffffff0U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									    << 4U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 3U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     << 4U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
								  | (0xfffffff0U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 4U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								 | (0xfffffff0U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 2U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									    << 4U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 4U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								| (0xfffffff0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  << 4U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									   << 4U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 4U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							       | (0xfffffff0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 << 4U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 3U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 << 4U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							      | (0xfffffff0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 4U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							     | (0xfffffff0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 4U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 4U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       << 4U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							    | (0xfffffff0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 4U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U)) 
									<< 4U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							   | (0xfffffff0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      << 4U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 3U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 4U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
							  | (0xfffffff0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 4U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 3U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							 | (0xfffffff0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 4U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 4U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 4U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							| (0xfffffff0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 4U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						       | (0xfffffff0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 4U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 1U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 4U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						      | (0xfffffff0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 4U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 1U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 4U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						     | (0xfffffff0U 
							& ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U)) 
								  << 4U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 4U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 4U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						    | (0xfffffff0U 
						       & ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 4U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 4U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 4U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						| ((8U 
						    & (((((((((((((((((0xfffffff8U 
								       & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									    << 3U) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									  | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 3U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								      | (0xfffffff8U 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									       << 3U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 3U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
								     | (0xfffffff8U 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 3U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								    | (0xfffffff8U 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									       << 3U)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 3U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								   | (0xfffffff8U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									     << 3U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      << 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 3U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
								  | (0xfffffff8U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    << 3U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 1U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 2U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    << 3U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								 | (0xfffffff8U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   << 3U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 1U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 3U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								| (0xfffffff8U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 3U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									    << 3U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									   << 3U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 3U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							       | (0xfffffff8U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 3U) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									   << 3U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							      | (0xfffffff8U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 << 3U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 2U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 3U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
							     | (0xfffffff8U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 3U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 2U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 3U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							    | (0xfffffff8U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 3U) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 3U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 3U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							   | (0xfffffff8U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      << 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 3U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 3U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
							  | (0xfffffff8U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 3U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 3U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							 | (0xfffffff8U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 3U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 3U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							| (0x7ffffff8U 
							   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U)) 
								     << 3U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 3U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 3U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						       | (0x7ffffff8U 
							  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 3U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U)) 
								  << 3U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						   | ((4U 
						       & (((((((((((((((((0xfffffffcU 
									  & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									     | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
									 | (0xfffffffcU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
									| (0xfffffffcU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								       | (0xfffffffcU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 2U)) 
									      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								      | (0xfffffffcU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 2U) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 2U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
								     | (0xfffffffcU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       << 2U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								    | (0xfffffffcU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      << 2U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 2U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								   | (0x7ffffffcU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      << 2U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       << 2U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      << 2U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     << 2U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
								  | (0x7ffffffcU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     << 2U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      << 2U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
								 | (0x7ffffffcU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    << 2U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 1U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 2U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
								| (0x7ffffffcU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 2U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 1U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 2U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							       | (0x7ffffffcU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 2U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									  << 2U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 << 2U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							      | (0x7ffffffcU 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 << 2U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 2U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 2U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
							     | (0x7ffffffcU 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 2U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       << 2U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							    | (0x7ffffffcU 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 2U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 2U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							   | (0x3ffffffcU 
							      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U)) 
									<< 2U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 2U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 2U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
							  | (0x3ffffffcU 
							     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 2U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						      | ((2U 
							  & (((((((((((((((((0xfffffffeU 
									     & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
										| (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
									    | (0xfffffffeU 
									       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
									   | (0xfffffffeU 
									      & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
									  | (0x7ffffffeU 
									     & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
									 | (0x7ffffffeU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
									| (0x7ffffffeU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								       | (0x7ffffffeU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								      | (0x3ffffffeU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
								     | (0x3ffffffeU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										<< 1U) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
								    | (0x3ffffffeU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       << 1U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 1U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
								   | (0x3ffffffeU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      << 1U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
								  | (0x3ffffffeU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     << 1U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									     << 1U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    << 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
								 | (0x3ffffffeU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    << 1U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									    << 1U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
								| (0x3ffffffeU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 1U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							       | (0x3ffffffeU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 1U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							      | (0x1ffffffeU 
								 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U)) 
									   << 1U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 1U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 1U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
							     | (0x1ffffffeU 
								& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 1U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
							 | (1U 
							    & (((((((((((((((((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									       | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D))) 
									      | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D))) 
									     | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D))) 
									    | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D))) 
									   | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D))) 
									  | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D))) 
									 | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D))) 
									| ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D))) 
								       | ((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D))) 
								      | ((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D))) 
								     | ((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D))) 
								    | ((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U))) 
									& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D))) 
								   | ((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D))) 
								  | ((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
								      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D))) 
								 | ((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D))) 
								| (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D))) 
							       | (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1349_24__12(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05BactualRy__05D_1349_24__12\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & (((((((((((((((((0xffff8000U 
					   & ((((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U))) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U))) 
						 & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						<< 0xfU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
					      | (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U))) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
					  | (0xffff8000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U))) 
						   << 0xfU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					 | (0xffff8000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					| (0xffff8000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xdU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
				       | (0xffff8000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U))) 
						 << 0xfU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
				      | (0xffff8000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 & (~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 3U))) 
						<< 0xfU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xdU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xeU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						<< 0xfU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
				     | (0xffff8000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						& (~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 3U))) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xdU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xfU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
				    | (0xffff8000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xfU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
					       << 0xfU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					      << 0xfU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
				   | (0xffff8000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xfU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xcU)) 
					  & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 >> 2U)) 
					     << 0xfU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 1U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xfU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
				  | (0xffff8000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 4U)) 
					   << 0xfU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 2U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xeU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					  << 0xfU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				 | (0xffff8000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xfU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xfU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xeU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xfU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				| (0xffff8000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xfU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 0xfU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xfU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
			       | (0xffff8000U & (((
						   ((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xfU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xfU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xfU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
			      | (0xffff8000U & ((((
						   (((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xfU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xdU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
			     | (0xffff8000U & (((((
						   ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xfU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xdU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
			    | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xbU) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U)) 
						     << 0xfU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 2U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
			   | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xfU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
	       | ((0x4000U & (((((((((((((((((0xffffc000U 
					      & ((((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U))) 
						    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						   << 0xeU) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						 | (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 2U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U))) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
					     | (0xffffc000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U))) 
						      << 0xeU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					    | (0xffffc000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					   | (0xffffc000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
					  | (0xffffc000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U))) 
						    << 0xeU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					 | (0xffffc000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   << 0xeU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xcU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xdU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xeU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					| (0xffffc000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U))) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xcU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xeU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
				       | (0xffffc000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xeU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xeU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xeU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
				      | (0xffffc000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xeU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 2U)) 
						  << 0xeU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xeU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
				     | (0xffffc000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						<< 0xeU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 2U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xdU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					       << 0xeU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				    | (0xffffc000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xeU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xdU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xeU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				   | (0xffffc000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xeU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xbU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 1U)) 
					    << 0xeU)) 
					& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					   << 0xeU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
				  | (0xffffc000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 4U)) 
					   << 0xeU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					    << 0xcU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 1U)) 
					   << 0xeU)) 
				       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					  << 0xeU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				 | (0xffffc000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xeU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				| (0xffffc000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xeU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
			       | (0xffffc000U & (((
						   ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xaU) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U)) 
							<< 0xeU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
			      | (0xffffc000U & ((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xeU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
		  | ((0x2000U & (((((((((((((((((0xffffe000U 
						 & ((((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U))) 
						       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						      << 0xdU) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						    | (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U))) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xdU) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						| (0xffffe000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U))) 
							 << 0xdU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xcU)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 0xdU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
					       | (0xffffe000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xdU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
					      | (0xffffe000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xdU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xdU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
					     | (0xffffe000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U))) 
						       << 0xdU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					    | (0xffffe000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      << 0xdU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xdU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					   | (0xffffe000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xbU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xdU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					  | (0xffffe000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xdU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xdU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xdU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					 | (0xffffe000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xdU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U)) 
						     << 0xdU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					| (0xffffe000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xdU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 2U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xcU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xdU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
				       | (0xffffe000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xdU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xcU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xdU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
				      | (0xffffe000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xdU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xdU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						<< 0xdU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
				     | (0xffffe000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						<< 0xdU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 1U)) 
						<< 0xdU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xdU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				    | (0xffffe000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xdU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xaU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xbU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xcU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					      << 0xdU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				   | (0xffffe000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xdU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xaU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					    << 0xcU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xdU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				  | (0xffffe000U & 
				     (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 9U) & 
					  ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 3U)) 
					   << 0xdU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 2U)) 
					    << 0xdU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 1U)) 
					   << 0xdU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					  << 0xdU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				 | (0xffffe000U & (
						   ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 0xdU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xdU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
		     | ((0x1000U & ((((((((((((((((
						   (0xfffff000U 
						    & ((((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U))) 
							  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							 << 0xcU) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
						       | (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U))) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xcU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						   | (0xfffff000U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U))) 
							    << 0xcU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xcU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						  | (0xfffff000U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xcU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						 | (0xfffff000U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 0xcU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xcU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						| (0xfffff000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  << 0xcU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xaU)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 0xcU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
					       | (0xfffff000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 << 0xcU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 0xcU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
					      | (0xfffff000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xaU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					     | (0xfffff000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xcU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xcU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xcU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					    | (0xfffff000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xcU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 0xcU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					   | (0xfffff000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xcU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xcU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					  | (0xfffff000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xcU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xcU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					 | (0xfffff000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xcU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xcU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xcU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					| (0xfffff000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xcU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xcU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xcU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
				       | (0xfffff000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xcU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xcU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
				      | (0xfffff000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xcU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 9U)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xcU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				     | (0xfffff000U 
					& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 8U) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 3U)) 
						  << 0xcU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 2U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 1U)) 
						<< 0xcU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					       << 0xcU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				    | (0xfffff000U 
				       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 8U) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 3U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xcU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
					       << 0xcU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xcU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			| ((0x800U & ((((((((((((((
						   (((0xfffff800U 
						      & ((((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U))) 
							    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							   << 0xbU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							 | (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 2U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U))) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xbU) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
						     | (0xfffff800U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U))) 
							      << 0xbU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 0xaU)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 0xbU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						    | (0xfffff800U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 0xaU)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 0xbU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						   | (0xfffff800U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 9U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 1U)) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xbU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						  | (0xfffff800U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    << 0xbU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xbU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						 | (0xfffff800U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   << 0xbU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 9U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xaU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xbU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						| (0xfffff800U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 9U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
					       | (0xfffff800U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 0xbU)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U)) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 0xbU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
					      | (0xfffff800U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 0xbU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 2U)) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xbU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
					     | (0xfffff800U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xbU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xaU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xbU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					    | (0xfffff800U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xbU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xbU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					   | (0xfffff800U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xbU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xbU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					  | (0xfffff800U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xbU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xbU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					 | (0xfffff800U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xbU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 8U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xbU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					| (0xfffff800U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xbU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 8U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
				       | (0xfffff800U 
					  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 7U) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U)) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xbU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
				      | (0xfffff800U 
					 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 7U) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 3U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 2U)) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xbU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			   | ((0x400U & (((((((((((
						   ((((((0xfffffc00U 
							 & ((((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U))) 
							       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							      << 0xaU) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							    | (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U))) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 0xaU) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							| (0xfffffc00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U))) 
								 << 0xaU) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 9U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 0xaU)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
						       | (0xfffffc00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 9U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 0xaU)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
						      | (0xfffffc00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 8U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 0xaU)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 0xaU)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
						     | (0xfffffc00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U))) 
							       << 0xaU) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 0xaU)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 0xaU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						    | (0xfffffc00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      << 0xaU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 8U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 9U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 0xaU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						   | (0xfffffc00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 8U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xaU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						  | (0xfffffc00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 0xaU)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 0xaU)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 0xaU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						 | (0xfffffc00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 0xaU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						| (0xfffffc00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 0xaU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 9U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 0xaU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
					       | (0xfffffc00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 0xaU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xaU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
					      | (0xfffffc00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 0xaU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xaU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xaU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
					     | (0xfffffc00U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xaU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xaU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					    | (0xfffffc00U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xaU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 7U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xaU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					   | (0xfffffc00U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xaU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 7U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					  | (0xfffffc00U 
					     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 6U) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U)) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xaU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xaU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					 | (0xfffffc00U 
					    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 6U) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U)) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xaU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
			      | ((0x200U & ((((((((
						   (((((((((0xfffffe00U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								 << 9U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 9U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							   | (0xfffffe00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    << 9U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 8U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 9U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							  | (0xfffffe00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 8U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 9U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							 | (0xfffffe00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 9U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 9U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							| (0xfffffe00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  << 9U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 7U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 9U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 9U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						       | (0xfffffe00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 << 9U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 8U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 9U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						      | (0xfffffe00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 7U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 9U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						     | (0xfffffe00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 9U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 9U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 9U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						    | (0xfffffe00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 9U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 9U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						   | (0xfffffe00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 9U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 8U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 9U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						  | (0xfffffe00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 9U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 8U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 9U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						 | (0xfffffe00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 9U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 9U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 9U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						| (0xfffffe00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 9U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 9U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					       | (0xfffffe00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 9U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 6U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 9U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					      | (0xfffffe00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 9U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					     | (0xfffffe00U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 5U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 9U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 9U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					    | (0xfffffe00U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 5U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 9U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				 | ((0x100U & (((((
						   ((((((((((((0xffffff00U 
							       & ((((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U))) 
								     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								    << 8U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								  | (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 8U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							      | (0xffffff00U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U))) 
								       << 8U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 8U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							     | (0xffffff00U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 8U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							    | (0xffffff00U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 6U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 8U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 8U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							   | (0xffffff00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 8U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 6U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 8U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 8U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							  | (0xffffff00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    << 8U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 8U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							 | (0xffffff00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 6U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 8U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							| (0xffffff00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 8U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 8U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 8U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						       | (0xffffff00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 8U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 5U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 8U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						      | (0xffffff00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 8U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 5U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 2U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 8U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						     | (0xffffff00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 8U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 8U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						    | (0xffffff00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 8U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 8U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 8U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						   | (0xffffff00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 8U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 1U)) 
							      << 8U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 8U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						  | (0xffffff00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 8U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 8U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						 | (0xffffff00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 8U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 5U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 8U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						| (0xffffff00U 
						   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 4U) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U)) 
							     << 8U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 8U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 8U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					       | (0xffffff00U 
						  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 4U) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U)) 
							  << 8U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				    | ((0x80U & (((
						   ((((((((((((((0xffffff80U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								      << 7U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 7U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								| (0xffffff80U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U))) 
									 << 7U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 6U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 7U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							       | (0xffffff80U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 6U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 7U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							      | (0xffffff80U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 5U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 7U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							     | (0xffffff80U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       << 7U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 5U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 7U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							    | (0xffffff80U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 7U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 6U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 7U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							   | (0xffffff80U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 5U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							  | (0xffffff80U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 4U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 7U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 7U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							 | (0xffffff80U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 7U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U)) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 7U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							| (0xffffff80U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 7U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 6U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 7U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						       | (0xffffff80U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 7U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 7U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						      | (0xffffff80U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 7U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 7U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						     | (0xffffff80U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 7U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 7U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						    | (0xffffff80U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 7U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 4U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 7U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						   | (0xffffff80U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 7U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 4U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						  | (0xffffff80U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 3U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U)) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 7U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						 | (0xffffff80U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 3U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
				       | ((0x40U & 
					   (((((((((((((((((0xffffffc0U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								 << 6U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 6U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
							   | (0xffffffc0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    << 6U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 5U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 6U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							  | (0xffffffc0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 6U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							 | (0xffffffc0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 6U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 6U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							| (0xffffffc0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  << 6U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 6U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
						       | (0xffffffc0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 << 6U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 6U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
						      | (0xffffffc0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
						     | (0xffffffc0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 6U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 6U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
						    | (0xffffffc0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 6U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
						   | (0xffffffc0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 6U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 3U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 5U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 6U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						  | (0xffffffc0U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 6U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 3U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 5U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 6U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						 | (0xffffffc0U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 6U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 3U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 4U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 6U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 6U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						| (0xffffffc0U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 6U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 3U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 4U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 6U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
					       | (0xffffffc0U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 6U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 3U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 4U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 5U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 6U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
					      | (0xffffffc0U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 6U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 3U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 4U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 5U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 6U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
					     | (0xffffffc0U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 2U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 6U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 6U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 6U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
					    | (0xffffffc0U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 2U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 6U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 6U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 6U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
					  | ((0x20U 
					      & (((((((((((((((((0xffffffe0U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								      << 5U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 5U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								| (0xffffffe0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U))) 
									 << 5U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 4U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 5U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
							       | (0xffffffe0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 4U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 5U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
							      | (0xffffffe0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 3U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 5U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 5U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
							     | (0xffffffe0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       << 5U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 5U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							    | (0xffffffe0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 5U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 3U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 4U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 5U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							   | (0xffffffe0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 3U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							  | (0xffffffe0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 5U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 5U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 5U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							 | (0xffffffe0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 5U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U)) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 5U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							| (0xffffffe0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 5U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 5U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
						       | (0xffffffe0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 5U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 5U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
						      | (0xffffffe0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 5U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 5U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 5U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
						     | (0xffffffe0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 5U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						    | (0xffffffe0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 5U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 2U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 3U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 4U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 5U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						   | (0xffffffe0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 5U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 2U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 3U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 4U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 5U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						  | (0xffffffe0U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 1U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U)) 
							       << 5U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 5U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 5U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						 | (0xffffffe0U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 1U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 5U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 5U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 5U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
					     | ((0x10U 
						 & (((((((((((((((((0xfffffff0U 
								    & ((((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U))) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									 << 4U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
								       | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 4U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								   | (0xfffffff0U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									    << 4U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 3U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     << 4U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
								  | (0xfffffff0U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 4U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								 | (0xfffffff0U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 2U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									    << 4U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 4U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								| (0xfffffff0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  << 4U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									   << 4U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 4U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
							       | (0xfffffff0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 << 4U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 3U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 << 4U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
							      | (0xfffffff0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 4U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
							     | (0xfffffff0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 4U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 4U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       << 4U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							    | (0xfffffff0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 4U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U)) 
									<< 4U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							   | (0xfffffff0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      << 4U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 3U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 4U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
							  | (0xfffffff0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 4U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 3U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							 | (0xfffffff0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 4U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 4U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 4U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							| (0xfffffff0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 4U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
						       | (0xfffffff0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 4U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 1U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 4U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
						      | (0xfffffff0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 4U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 1U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 4U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
						     | (0xfffffff0U 
							& ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U)) 
								  << 4U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 4U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 4U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						    | (0xfffffff0U 
						       & ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 4U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 4U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 4U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						| ((8U 
						    & (((((((((((((((((0xfffffff8U 
								       & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									    << 3U) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									  | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 3U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
								      | (0xfffffff8U 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									       << 3U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 3U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
								     | (0xfffffff8U 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 3U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								    | (0xfffffff8U 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									       << 3U)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 3U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								   | (0xfffffff8U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									     << 3U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      << 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 3U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
								  | (0xfffffff8U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    << 3U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 1U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 2U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    << 3U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								 | (0xfffffff8U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   << 3U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 1U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 3U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								| (0xfffffff8U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 3U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									    << 3U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									   << 3U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 3U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
							       | (0xfffffff8U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 3U) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									   << 3U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
							      | (0xfffffff8U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 << 3U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 2U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 3U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
							     | (0xfffffff8U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 3U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 2U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 3U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							    | (0xfffffff8U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 3U) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 3U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 3U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							   | (0xfffffff8U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      << 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 3U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 3U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
							  | (0xfffffff8U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 3U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 3U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							 | (0xfffffff8U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 3U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 3U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							| (0x7ffffff8U 
							   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U)) 
								     << 3U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 3U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 3U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
						       | (0x7ffffff8U 
							  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 3U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U)) 
								  << 3U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						   | ((4U 
						       & (((((((((((((((((0xfffffffcU 
									  & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									     | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
									 | (0xfffffffcU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
									| (0xfffffffcU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
								       | (0xfffffffcU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 2U)) 
									      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
								      | (0xfffffffcU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 2U) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 2U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
								     | (0xfffffffcU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       << 2U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								    | (0xfffffffcU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      << 2U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 2U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								   | (0x7ffffffcU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      << 2U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       << 2U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      << 2U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     << 2U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
								  | (0x7ffffffcU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     << 2U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      << 2U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
								 | (0x7ffffffcU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    << 2U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 1U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 2U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
								| (0x7ffffffcU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 2U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 1U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 2U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
							       | (0x7ffffffcU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 2U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									  << 2U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 << 2U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
							      | (0x7ffffffcU 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 << 2U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 2U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 2U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
							     | (0x7ffffffcU 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 2U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       << 2U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							    | (0x7ffffffcU 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 2U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 2U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							   | (0x3ffffffcU 
							      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U)) 
									<< 2U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 2U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 2U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
							  | (0x3ffffffcU 
							     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 2U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
						      | ((2U 
							  & (((((((((((((((((0xfffffffeU 
									     & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
										| (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D)))) 
									    | (0xfffffffeU 
									       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D)))) 
									   | (0xfffffffeU 
									      & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D)))) 
									  | (0x7ffffffeU 
									     & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D)))) 
									 | (0x7ffffffeU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D)))) 
									| (0x7ffffffeU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D)))) 
								       | (0x7ffffffeU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D)))) 
								      | (0x3ffffffeU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D)))) 
								     | (0x3ffffffeU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										<< 1U) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D)))) 
								    | (0x3ffffffeU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       << 1U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 1U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D)))) 
								   | (0x3ffffffeU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      << 1U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D)))) 
								  | (0x3ffffffeU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     << 1U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									     << 1U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    << 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D)))) 
								 | (0x3ffffffeU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    << 1U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									    << 1U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D)))) 
								| (0x3ffffffeU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 1U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D)))) 
							       | (0x3ffffffeU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 1U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D)))) 
							      | (0x1ffffffeU 
								 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U)) 
									   << 1U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 1U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 1U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D)))) 
							     | (0x1ffffffeU 
								& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 1U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D))))) 
							 | (1U 
							    & (((((((((((((((((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B0__05D)) 
									       | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B1__05D))) 
									      | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B2__05D))) 
									     | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B3__05D))) 
									    | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B4__05D))) 
									   | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B5__05D))) 
									  | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B6__05D))) 
									 | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B7__05D))) 
									| ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B8__05D))) 
								       | ((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B9__05D))) 
								      | ((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B10__05D))) 
								     | ((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B11__05D))) 
								    | ((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U))) 
									& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B12__05D))) 
								   | ((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B13__05D))) 
								  | ((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
								      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B14__05D))) 
								 | ((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B15__05D))) 
								| (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B16__05D))) 
							       | (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L__05B17__05D)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1330_29__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRx__05D_1330_29__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & (((((((((((((((((0xffff8000U 
					   & ((((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U))) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U))) 
						 & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						<< 0xfU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
					      | (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U))) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
					  | (0xffff8000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U))) 
						   << 0xfU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					 | (0xffff8000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					| (0xffff8000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xdU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
				       | (0xffff8000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U))) 
						 << 0xfU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
				      | (0xffff8000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 & (~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 3U))) 
						<< 0xfU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xdU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xeU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						<< 0xfU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
				     | (0xffff8000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						& (~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 3U))) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xdU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xfU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
				    | (0xffff8000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xfU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
					       << 0xfU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					      << 0xfU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
				   | (0xffff8000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xfU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xcU)) 
					  & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 >> 2U)) 
					     << 0xfU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 1U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xfU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
				  | (0xffff8000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 4U)) 
					   << 0xfU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 2U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xeU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					  << 0xfU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				 | (0xffff8000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xfU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xfU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xeU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xfU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				| (0xffff8000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xfU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 0xfU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xfU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
			       | (0xffff8000U & (((
						   ((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xfU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xfU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xfU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
			      | (0xffff8000U & ((((
						   (((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xfU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xdU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
			     | (0xffff8000U & (((((
						   ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xfU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xdU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
			    | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xbU) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U)) 
						     << 0xfU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 2U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
			   | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xfU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
	       | ((0x4000U & (((((((((((((((((0xffffc000U 
					      & ((((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U))) 
						    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						   << 0xeU) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						 | (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 2U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U))) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
					     | (0xffffc000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U))) 
						      << 0xeU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					    | (0xffffc000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					   | (0xffffc000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
					  | (0xffffc000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U))) 
						    << 0xeU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					 | (0xffffc000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U))) 
						   << 0xeU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xcU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xdU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xeU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					| (0xffffc000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 3U))) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xcU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xeU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
				       | (0xffffc000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xeU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xeU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xeU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
				      | (0xffffc000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xeU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 2U)) 
						  << 0xeU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xeU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
				     | (0xffffc000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						<< 0xeU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 2U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xdU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					       << 0xeU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				    | (0xffffc000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xeU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xdU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xeU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				   | (0xffffc000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xeU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xbU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 1U)) 
					    << 0xeU)) 
					& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					   << 0xeU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
				  | (0xffffc000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 4U)) 
					   << 0xeU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					    << 0xcU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 1U)) 
					   << 0xeU)) 
				       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					  << 0xeU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				 | (0xffffc000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xeU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				| (0xffffc000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xeU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
			       | (0xffffc000U & (((
						   ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xaU) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U)) 
							<< 0xeU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
			      | (0xffffc000U & ((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xeU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
		  | ((0x2000U & (((((((((((((((((0xffffe000U 
						 & ((((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U))) 
						       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
						      << 0xdU) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						    | (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U))) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xdU) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						| (0xffffe000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U))) 
							 << 0xdU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xcU)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 0xdU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					       | (0xffffe000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xdU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					      | (0xffffe000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xdU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xdU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
					     | (0xffffe000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U))) 
						       << 0xdU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					    | (0xffffe000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U))) 
						      << 0xdU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xcU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xdU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					   | (0xffffe000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 3U))) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xbU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xdU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					  | (0xffffe000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xdU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xdU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xdU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					 | (0xffffe000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xdU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U)) 
						     << 0xdU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xdU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					| (0xffffe000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xdU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 2U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xcU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						  << 0xdU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				       | (0xffffe000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xdU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xcU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xdU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				      | (0xffffe000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xdU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xdU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						<< 0xdU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
				     | (0xffffe000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 4U)) 
						<< 0xdU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 1U)) 
						<< 0xdU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xdU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				    | (0xffffe000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
					       << 0xdU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xaU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xbU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 0xcU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					      << 0xdU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				   | (0xffffe000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 4U)) 
					    << 0xdU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xaU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					    << 0xcU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 0xdU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				  | (0xffffe000U & 
				     (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					   << 9U) & 
					  ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 3U)) 
					   << 0xdU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						>> 2U)) 
					    << 0xdU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       >> 1U)) 
					   << 0xdU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					  << 0xdU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				 | (0xffffe000U & (
						   ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 0xdU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xdU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
		     | ((0x1000U & ((((((((((((((((
						   (0xfffff000U 
						    & ((((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U))) 
							  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							 << 0xcU) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						       | (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U))) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xcU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						   | (0xfffff000U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U))) 
							    << 0xcU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xcU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						  | (0xfffff000U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xcU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						 | (0xfffff000U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 0xcU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xcU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						| (0xfffff000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  << 0xcU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xaU)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 0xcU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xcU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					       | (0xfffff000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U))) 
							 << 0xcU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 0xcU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					      | (0xfffff000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 3U))) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xaU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xcU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					     | (0xfffff000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xcU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xcU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xcU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					    | (0xfffff000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xcU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 0xcU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xcU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					   | (0xfffff000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xcU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 2U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xcU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					  | (0xfffff000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xcU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xcU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					 | (0xfffff000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xcU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xcU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xcU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					| (0xfffff000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xcU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 1U)) 
						   << 0xcU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xcU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				       | (0xfffff000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 4U)) 
						  << 0xcU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xcU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				      | (0xfffff000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 4U)) 
						 << 0xcU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 9U)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xcU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				     | (0xfffff000U 
					& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 8U) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 3U)) 
						  << 0xcU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 2U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 1U)) 
						<< 0xcU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
					       << 0xcU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				    | (0xfffff000U 
				       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					       << 8U) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 3U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  >> 2U)) 
						<< 0xcU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
					       << 0xcU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
					      << 0xcU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			| ((0x800U & ((((((((((((((
						   (((0xfffff800U 
						      & ((((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U))) 
							    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							   << 0xbU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							 | (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 2U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U))) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xbU) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						     | (0xfffff800U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U))) 
							      << 0xbU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 0xaU)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 0xbU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						    | (0xfffff800U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 0xaU)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 0xbU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						   | (0xfffff800U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 9U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 1U)) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 0xbU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						  | (0xfffff800U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U))) 
							    << 0xbU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xbU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						 | (0xfffff800U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U))) 
							   << 0xbU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 9U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 0xaU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 0xbU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						| (0xfffff800U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U))) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 9U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 0xbU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					       | (0xfffff800U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 0xbU)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U)) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 0xbU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					      | (0xfffff800U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 0xbU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 2U)) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xbU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					     | (0xfffff800U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xbU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 0xaU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 0xbU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					    | (0xfffff800U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xbU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 0xbU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					   | (0xfffff800U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xbU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 1U)) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						     << 0xbU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					  | (0xfffff800U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 4U)) 
						     << 0xbU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xbU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					 | (0xfffff800U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 4U)) 
						    << 0xbU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 8U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 0xaU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						   << 0xbU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					| (0xfffff800U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 4U)) 
						   << 0xbU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 8U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 0xbU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				       | (0xfffff800U 
					  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						  << 7U) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 3U)) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 2U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 1U)) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						 << 0xbU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				      | (0xfffff800U 
					 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						 << 7U) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     >> 3U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    >> 2U)) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   >> 1U)) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						<< 0xbU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			   | ((0x400U & (((((((((((
						   ((((((0xfffffc00U 
							 & ((((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U))) 
							       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
							      << 0xaU) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							    | (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U))) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 0xaU) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							| (0xfffffc00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U))) 
								 << 0xaU) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 9U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 0xaU)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						       | (0xfffffc00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 9U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 0xaU)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						      | (0xfffffc00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 8U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 0xaU)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 0xaU)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						     | (0xfffffc00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U))) 
							       << 0xaU) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 0xaU)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 0xaU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						    | (0xfffffc00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U))) 
							      << 0xaU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 8U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 9U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 0xaU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						   | (0xfffffc00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 3U))) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 8U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 0xaU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						  | (0xfffffc00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 0xaU)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 0xaU)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 0xaU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						 | (0xfffffc00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 0xaU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 0xaU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						| (0xfffffc00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 0xaU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 9U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 0xaU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					       | (0xfffffc00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 0xaU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 0xaU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					      | (0xfffffc00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 0xaU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 1U)) 
							 << 0xaU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							<< 0xaU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					     | (0xfffffc00U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 4U)) 
							<< 0xaU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 0xaU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 0xaU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					    | (0xfffffc00U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 4U)) 
						       << 0xaU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 7U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 9U)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						      << 0xaU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					   | (0xfffffc00U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 4U)) 
						      << 0xaU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 7U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 0xaU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					  | (0xfffffc00U 
					     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						     << 6U) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 3U)) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 2U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 1U)) 
						     << 0xaU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						    << 0xaU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					 | (0xfffffc00U 
					    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						    << 6U) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							>> 3U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       >> 2U)) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      >> 1U)) 
						    << 0xaU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						   << 0xaU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			      | ((0x200U & ((((((((
						   (((((((((0xfffffe00U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								 << 9U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 9U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							   | (0xfffffe00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    << 9U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 8U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 9U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							  | (0xfffffe00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 8U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 9U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							 | (0xfffffe00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 9U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 9U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							| (0xfffffe00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  << 9U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 7U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 9U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 9U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						       | (0xfffffe00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 << 9U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 8U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 9U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						      | (0xfffffe00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 7U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 9U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						     | (0xfffffe00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 9U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 9U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 9U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						    | (0xfffffe00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 9U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 9U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 9U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						   | (0xfffffe00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 9U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 8U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 9U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						  | (0xfffffe00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 9U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 8U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 9U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						 | (0xfffffe00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 9U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 9U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 9U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						| (0xfffffe00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 9U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 9U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 9U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					       | (0xfffffe00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 9U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 6U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 8U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 9U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					      | (0xfffffe00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 9U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 9U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					     | (0xfffffe00U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 5U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 9U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 9U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					    | (0xfffffe00U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 5U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 9U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 9U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				 | ((0x100U & (((((
						   ((((((((((((0xffffff00U 
							       & ((((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U))) 
								     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								    << 8U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								  | (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 8U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							      | (0xffffff00U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U))) 
								       << 8U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 8U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							     | (0xffffff00U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 8U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							    | (0xffffff00U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 6U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 8U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 8U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							   | (0xffffff00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 8U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 6U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 8U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 8U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							  | (0xffffff00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    << 8U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 8U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							 | (0xffffff00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 6U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 8U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							| (0xffffff00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 8U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 8U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 8U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						       | (0xffffff00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 8U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 5U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 8U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 8U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						      | (0xffffff00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 8U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 5U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 2U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 8U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						     | (0xffffff00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 8U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 8U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						    | (0xffffff00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 8U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 8U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 8U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						   | (0xffffff00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 8U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 1U)) 
							      << 8U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 8U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						  | (0xffffff00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 8U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 8U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						 | (0xffffff00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 8U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 5U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 8U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						| (0xffffff00U 
						   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 4U) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 3U)) 
							     << 8U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 2U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 8U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							  << 8U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					       | (0xffffff00U 
						  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 4U) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 3U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 2U)) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 1U)) 
							  << 8U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 8U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				    | ((0x80U & (((
						   ((((((((((((((0xffffff80U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								      << 7U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 7U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								| (0xffffff80U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U))) 
									 << 7U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 6U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 7U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							       | (0xffffff80U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 6U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 7U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							      | (0xffffff80U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 5U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 7U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							     | (0xffffff80U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       << 7U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 5U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 7U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							    | (0xffffff80U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 7U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 6U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 7U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							   | (0xffffff80U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 5U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 7U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							  | (0xffffff80U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 4U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 7U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 7U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							 | (0xffffff80U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 7U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U)) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 7U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							| (0xffffff80U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 7U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 6U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 7U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						       | (0xffffff80U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 7U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 7U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						      | (0xffffff80U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 7U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 7U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						     | (0xffffff80U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 7U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 7U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						    | (0xffffff80U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 7U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 4U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 6U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 7U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						   | (0xffffff80U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 7U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 4U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 7U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						  | (0xffffff80U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 3U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U)) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 7U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						 | (0xffffff80U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 3U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 7U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				       | ((0x40U & 
					   (((((((((((((((((0xffffffc0U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								 << 6U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 6U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							   | (0xffffffc0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    << 6U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 5U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 6U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							  | (0xffffffc0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 6U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							 | (0xffffffc0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 6U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 6U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							| (0xffffffc0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U))) 
								  << 6U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 6U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 6U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						       | (0xffffffc0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U))) 
								 << 6U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 5U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 6U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						      | (0xffffffc0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 3U))) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 6U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						     | (0xffffffc0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 6U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 6U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						    | (0xffffffc0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 6U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 6U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						   | (0xffffffc0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 6U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 3U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 2U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 5U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							     << 6U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						  | (0xffffffc0U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 4U)) 
							     << 6U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 3U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 5U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 6U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						 | (0xffffffc0U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 4U)) 
							    << 6U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 3U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 4U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 6U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							   << 6U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						| (0xffffffc0U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 4U)) 
							   << 6U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 3U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 4U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     >> 1U)) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 6U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					       | (0xffffffc0U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 4U)) 
							  << 6U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 3U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 4U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 5U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							 << 6U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					      | (0xffffffc0U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 4U)) 
							 << 6U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 3U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  << 4U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 << 5U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 6U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					     | (0xffffffc0U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							<< 2U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    >> 3U)) 
							  << 6U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 2U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 1U)) 
							<< 6U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
						       << 6U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					    | (0xffffffc0U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						       << 2U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   >> 3U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							  >> 2U)) 
							<< 6U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							 >> 1U)) 
						       << 6U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
						      << 6U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
					  | ((0x20U 
					      & (((((((((((((((((0xffffffe0U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								      << 5U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 5U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								| (0xffffffe0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U))) 
									 << 5U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 4U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 5U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							       | (0xffffffe0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 4U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 5U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							      | (0xffffffe0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 3U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 5U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 5U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							     | (0xffffffe0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U))) 
								       << 5U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 5U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							    | (0xffffffe0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      << 5U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 3U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 4U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 5U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							   | (0xffffffe0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 3U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 5U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							  | (0xffffffe0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 5U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 5U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 5U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							 | (0xffffffe0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 5U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 2U)) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 5U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							| (0xffffffe0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 5U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 4U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 5U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						       | (0xffffffe0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 5U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 5U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 5U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						      | (0xffffffe0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 5U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U)) 
								 << 5U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								<< 5U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						     | (0xffffffe0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 4U)) 
								<< 5U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 5U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						    | (0xffffffe0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 4U)) 
							       << 5U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 2U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 3U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 4U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							      << 5U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						   | (0xffffffe0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 4U)) 
							      << 5U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 2U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       << 3U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 4U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 5U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						  | (0xffffffe0U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							     << 1U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 3U)) 
							       << 5U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 2U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 1U)) 
							     << 5U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							    << 5U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						 | (0xffffffe0U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							    << 1U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								>> 3U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       >> 2U)) 
							     << 5U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      >> 1U)) 
							    << 5U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							   << 5U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
					     | ((0x10U 
						 & (((((((((((((((((0xfffffff0U 
								    & ((((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U))) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									 << 4U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								       | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 4U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								   | (0xfffffff0U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									    << 4U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 3U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     << 4U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
								  | (0xfffffff0U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 4U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								 | (0xfffffff0U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 2U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									    << 4U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 4U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								| (0xfffffff0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U))) 
									  << 4U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									   << 4U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 4U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							       | (0xfffffff0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U))) 
									 << 4U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 3U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 << 4U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							      | (0xfffffff0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U))) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 4U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							     | (0xfffffff0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 4U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 4U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       << 4U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							    | (0xfffffff0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 4U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U)) 
									<< 4U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 4U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							   | (0xfffffff0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      << 4U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 3U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 4U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
							  | (0xfffffff0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 4U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 3U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 4U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							 | (0xfffffff0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 4U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 1U)) 
								    << 4U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   << 4U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							| (0xfffffff0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 4U)) 
								   << 4U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 4U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						       | (0xfffffff0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 4U)) 
								  << 4U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 1U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 3U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								 << 4U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						      | (0xfffffff0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 4U)) 
								 << 4U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 1U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								<< 4U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						     | (0xfffffff0U 
							& ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 3U)) 
								  << 4U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 2U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U)) 
								<< 4U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
							       << 4U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						    | (0xfffffff0U 
						       & ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 3U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 2U)) 
								<< 4U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 >> 1U)) 
							       << 4U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
							      << 4U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						| ((8U 
						    & (((((((((((((((((0xfffffff8U 
								       & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									    << 3U) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									  | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 3U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								      | (0xfffffff8U 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									       << 3U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 3U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
								     | (0xfffffff8U 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 3U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								    | (0xfffffff8U 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									       << 3U)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 3U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								   | (0xfffffff8U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									     << 3U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      << 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 3U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
								  | (0xfffffff8U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									    << 3U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 1U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 2U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    << 3U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								 | (0xfffffff8U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									   << 3U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 1U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 3U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								| (0xfffffff8U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 3U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									    << 3U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									   << 3U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 3U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							       | (0xfffffff8U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 3U) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									   << 3U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 3U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							      | (0xfffffff8U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 << 3U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 2U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 3U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
							     | (0xfffffff8U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 3U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 2U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 3U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							    | (0xfffffff8U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 3U) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								       << 3U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      << 3U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							   | (0xfffffff8U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U)) 
								      << 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 3U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 3U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
							  | (0xfffffff8U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U)) 
								     << 3U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 2U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    << 3U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							 | (0xfffffff8U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 4U)) 
								    << 3U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   << 3U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							| (0x7ffffff8U 
							   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								   >> 1U) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 3U)) 
								     << 3U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 1U)) 
								   << 3U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  << 3U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						       | (0x7ffffff8U 
							  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								  >> 1U) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 3U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U)) 
								   << 3U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    >> 1U)) 
								  << 3U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								 << 3U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						   | ((4U 
						       & (((((((((((((((((0xfffffffcU 
									  & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									     | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
									 | (0xfffffffcU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
									| (0xfffffffcU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								       | (0xfffffffcU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 2U)) 
									      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 2U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								      | (0xfffffffcU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 2U) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 2U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 2U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
								     | (0xfffffffcU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       << 2U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								    | (0xfffffffcU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									      << 2U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      << 2U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								   | (0x7ffffffcU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      << 2U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       << 2U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      << 2U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									     << 2U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
								  | (0x7ffffffcU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     << 2U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      << 2U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 2U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
								 | (0x7ffffffcU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    << 2U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    << 1U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   << 2U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
								| (0x7ffffffcU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 2U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 1U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  << 2U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							       | (0x7ffffffcU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 2U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									  << 2U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									 << 2U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							      | (0x7ffffffcU 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 << 2U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 2U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 2U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
							     | (0x7ffffffcU 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									<< 2U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									<< 1U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       << 2U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							    | (0x7ffffffcU 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 4U)) 
								       << 2U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      << 2U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							   | (0x3ffffffcU 
							      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								      >> 2U) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U)) 
									<< 2U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U)) 
								      << 2U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								     << 2U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
							  | (0x3ffffffcU 
							     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								     >> 2U) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 2U)) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 1U)) 
								     << 2U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								    << 2U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						      | ((2U 
							  & (((((((((((((((((0xfffffffeU 
									     & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
										| (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
									    | (0xfffffffeU 
									       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
									   | (0xfffffffeU 
									      & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
									  | (0x7ffffffeU 
									     & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
									 | (0x7ffffffeU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
									| (0x7ffffffeU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								       | (0x7ffffffeU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										<< 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								      | (0x3ffffffeU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
								     | (0x3ffffffeU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										<< 1U) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										<< 1U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
								    | (0x3ffffffeU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       << 1U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      << 1U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
								   | (0x3ffffffeU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      << 1U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     << 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
								  | (0x3ffffffeU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     << 1U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 1U)) 
									     << 1U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    << 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
								 | (0x3ffffffeU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    << 1U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 2U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									    << 1U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   << 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
								| (0x3ffffffeU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   << 1U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  << 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							       | (0x3ffffffeU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  << 1U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 << 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							      | (0x1ffffffeU 
								 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 3U) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U)) 
									   << 1U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 1U)) 
									 << 1U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									<< 1U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
							     | (0x1ffffffeU 
								& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 3U) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
									<< 1U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       << 1U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
							 | (1U 
							    & (((((((((((((((((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									       | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D))) 
									      | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D))) 
									     | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D))) 
									    | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D))) 
									   | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D))) 
									  | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D))) 
									 | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U))) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D))) 
									| ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D))) 
								       | ((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 4U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 1U))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D))) 
								      | ((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 4U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 3U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
										>> 2U))) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 1U)) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D))) 
								     | ((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 4U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 3U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									       >> 2U))) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D))) 
								    | ((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 4U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									      >> 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 2U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 1U))) 
									& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D))) 
								   | ((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 4U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									     >> 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 2U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D))) 
								  | ((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 4U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									    >> 3U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 1U)) 
								      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D))) 
								 | ((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 4U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D))) 
								| (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 4U) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 1U))) 
								    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D))) 
							       | (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
								       >> 4U) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									 >> 2U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx) 
									>> 1U))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1331_29__8(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_bmux_1967::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68H__05BactualRy__05D_1331_29__8\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & (((((((((((((((((0xffff8000U 
					   & ((((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U))) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U))) 
						 & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						<< 0xfU) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
					      | (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U))) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
					  | (0xffff8000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U))) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U))) 
						   << 0xfU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					 | (0xffff8000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					| (0xffff8000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U))) 
						  << 0xfU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xdU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
				       | (0xffff8000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  & (~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U))) 
						 << 0xfU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
				      | (0xffff8000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 & (~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 3U))) 
						<< 0xfU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xdU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xeU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						<< 0xfU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
				     | (0xffff8000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						& (~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 3U))) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xdU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xfU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
				    | (0xffff8000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xfU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xfU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
					       << 0xfU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					      << 0xfU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
				   | (0xffff8000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xfU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xcU)) 
					  & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 >> 2U)) 
					     << 0xfU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 1U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xfU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
				  | (0xffff8000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 4U)) 
					   << 0xfU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 2U)) 
					    << 0xfU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xeU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					  << 0xfU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				 | (0xffff8000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xfU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xfU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xeU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xfU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				| (0xffff8000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xfU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 0xfU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xfU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
			       | (0xffff8000U & (((
						   ((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xfU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xfU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xfU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
			      | (0xffff8000U & ((((
						   (((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xfU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xdU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xeU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xfU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
			     | (0xffff8000U & (((((
						   ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xfU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xdU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xfU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
			    | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xbU) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U)) 
						     << 0xfU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 2U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xfU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xfU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
			   | (0xffff8000U & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U)) 
						    << 0xfU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xfU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xfU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xfU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
	       | ((0x4000U & (((((((((((((((((0xffffc000U 
					      & ((((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U))) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U))) 
						    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						   << 0xeU) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						 | (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 2U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U))) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
					     | (0xffffc000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U))) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U))) 
						      << 0xeU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					    | (0xffffc000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					   | (0xffffc000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     << 0xeU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
					  | (0xffffc000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     & (~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U))) 
						    << 0xeU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					 | (0xffffc000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    & (~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U))) 
						   << 0xeU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xcU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xdU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xeU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					| (0xffffc000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   & (~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 3U))) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xcU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xeU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
				       | (0xffffc000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xeU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xeU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xeU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xeU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
				      | (0xffffc000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xeU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 2U)) 
						  << 0xeU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xeU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
				     | (0xffffc000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						<< 0xeU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 2U)) 
						 << 0xeU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xdU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					       << 0xeU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				    | (0xffffc000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xeU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xeU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xdU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xeU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				   | (0xffffc000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xeU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xbU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xcU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 1U)) 
					    << 0xeU)) 
					& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					   << 0xeU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
				  | (0xffffc000U & 
				     (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 4U)) 
					   << 0xeU) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					    << 0xcU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 1U)) 
					   << 0xeU)) 
				       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					  << 0xeU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				 | (0xffffc000U & (
						   ((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xeU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xcU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xdU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xeU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				| (0xffffc000U & ((
						   (((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xeU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xeU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
			       | (0xffffc000U & (((
						   ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xaU) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U)) 
							<< 0xeU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xeU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xeU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
			      | (0xffffc000U & ((((
						   (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U)) 
						       << 0xeU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xeU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xeU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xeU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
		  | ((0x2000U & (((((((((((((((((0xffffe000U 
						 & ((((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U))) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U))) 
						       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
						      << 0xdU) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						    | (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U))) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xdU) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						| (0xffffe000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U))) 
							 << 0xdU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xcU)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 0xdU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
					       | (0xffffe000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xdU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
					      | (0xffffe000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							<< 0xdU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xdU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xdU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
					     | (0xffffe000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							& (~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U))) 
						       << 0xdU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					    | (0xffffe000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       & (~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U))) 
						      << 0xdU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xcU)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xdU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					   | (0xffffe000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      & (~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 3U))) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xbU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xdU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					  | (0xffffe000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xdU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xdU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xdU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xdU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					 | (0xffffe000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xdU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U)) 
						     << 0xdU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xdU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					| (0xffffe000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xdU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 2U)) 
						    << 0xdU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xcU)) 
					       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						  << 0xdU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
				       | (0xffffe000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xdU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xdU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xcU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xdU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
				      | (0xffffe000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xdU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xdU)) 
					     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						<< 0xdU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
				     | (0xffffe000U 
					& (((((((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 4U)) 
						<< 0xdU) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 1U)) 
						<< 0xdU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xdU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				    | (0xffffe000U 
				       & (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
					       << 0xdU) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xaU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xbU)) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 0xcU)) 
					   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					      << 0xdU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				   | (0xffffe000U & 
				      (((((((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 4U)) 
					    << 0xdU) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xaU)) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					     << 0xbU)) 
					 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					    << 0xcU)) 
					& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 0xdU)) 
				       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				  | (0xffffe000U & 
				     (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					   << 9U) & 
					  ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 3U)) 
					   << 0xdU)) 
					 & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						>> 2U)) 
					    << 0xdU)) 
					& ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       >> 1U)) 
					   << 0xdU)) 
				       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					  << 0xdU)) 
				      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				 | (0xffffe000U & (
						   ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 0xdU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xdU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xdU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xdU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
		     | ((0x1000U & ((((((((((((((((
						   (0xfffff000U 
						    & ((((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U))) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U))) 
							  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							 << 0xcU) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
						       | (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U))) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xcU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						   | (0xfffff000U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U))) 
							    << 0xcU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xcU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						  | (0xfffff000U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xcU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						 | (0xfffff000U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   << 0xcU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 0xcU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xcU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						| (0xfffff000U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  << 0xcU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xaU)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 0xcU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xcU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
					       | (0xfffff000U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  & (~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U))) 
							 << 0xcU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 0xcU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
					      | (0xfffff000U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 & (~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 3U))) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xaU)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xcU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					     | (0xfffff000U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xcU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xcU)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xcU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xcU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					    | (0xfffff000U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xcU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 0xcU)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xcU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					   | (0xfffff000U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xcU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 2U)) 
						       << 0xcU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xcU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					  | (0xfffff000U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xcU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xcU)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xcU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					 | (0xfffff000U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xcU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xcU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xcU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					| (0xfffff000U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xcU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 1U)) 
						   << 0xcU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xcU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
				       | (0xfffff000U 
					  & (((((((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 4U)) 
						  << 0xcU) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xcU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
				      | (0xfffff000U 
					 & (((((((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 4U)) 
						 << 0xcU) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 9U)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xaU)) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xcU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				     | (0xfffff000U 
					& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 8U) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 3U)) 
						  << 0xcU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 2U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 1U)) 
						<< 0xcU)) 
					    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
					       << 0xcU)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				    | (0xfffff000U 
				       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					       << 8U) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 3U)) 
						 << 0xcU)) 
					     & ((~ 
						 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  >> 2U)) 
						<< 0xcU)) 
					    & ((~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
					       << 0xcU)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
					      << 0xcU)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			| ((0x800U & ((((((((((((((
						   (((0xfffff800U 
						      & ((((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U))) 
							    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							   << 0xbU) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							 | (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 2U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U))) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xbU) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
						     | (0xfffff800U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U))) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U))) 
							      << 0xbU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 0xaU)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 0xbU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						    | (0xfffff800U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 0xaU)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 0xbU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						   | (0xfffff800U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     << 0xbU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 9U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 1U)) 
							      << 0xbU)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 0xbU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						  | (0xfffff800U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     & (~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U))) 
							    << 0xbU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 0xbU)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xbU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						 | (0xfffff800U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    & (~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U))) 
							   << 0xbU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 9U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 0xaU)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 0xbU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						| (0xfffff800U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   & (~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U))) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 9U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 0xbU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
					       | (0xfffff800U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 0xbU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 0xbU)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U)) 
							  << 0xbU)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 0xbU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
					      | (0xfffff800U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 0xbU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 2U)) 
							  << 0xbU)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xbU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
					     | (0xfffff800U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xbU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 0xbU)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 0xaU)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 0xbU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					    | (0xfffff800U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xbU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 0xbU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 0xbU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					   | (0xfffff800U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xbU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 1U)) 
						      << 0xbU)) 
						  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						     << 0xbU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					  | (0xfffff800U 
					     & (((((((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 4U)) 
						     << 0xbU) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xbU)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xbU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					 | (0xfffff800U 
					    & (((((((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 4U)) 
						    << 0xbU) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 8U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 9U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 0xaU)) 
						& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						   << 0xbU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					| (0xfffff800U 
					   & (((((((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 4U)) 
						   << 0xbU) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 8U)) 
						 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 9U)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 0xbU)) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
				       | (0xfffff800U 
					  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						  << 7U) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 3U)) 
						    << 0xbU)) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 2U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 1U)) 
						  << 0xbU)) 
					      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						 << 0xbU)) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
				      | (0xfffff800U 
					 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						 << 7U) 
						& ((~ 
						    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     >> 3U)) 
						   << 0xbU)) 
					       & ((~ 
						   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    >> 2U)) 
						  << 0xbU)) 
					      & ((~ 
						  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   >> 1U)) 
						 << 0xbU)) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						<< 0xbU)) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			   | ((0x400U & (((((((((((
						   ((((((0xfffffc00U 
							 & ((((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U))) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U))) 
							       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
							      << 0xaU) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							    | (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U))) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 0xaU) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							| (0xfffffc00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U))) 
								 << 0xaU) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 9U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 0xaU)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
						       | (0xfffffc00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 9U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 0xaU)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
						      | (0xfffffc00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 0xaU) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 8U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 0xaU)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 0xaU)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
						     | (0xfffffc00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								& (~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U))) 
							       << 0xaU) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 0xaU)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 0xaU)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						    | (0xfffffc00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       & (~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U))) 
							      << 0xaU) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 8U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 9U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 0xaU)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						   | (0xfffffc00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      & (~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 3U))) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 8U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 0xaU)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						  | (0xfffffc00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 0xaU) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 0xaU)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 0xaU)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 0xaU)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						 | (0xfffffc00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 0xaU) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 0xaU)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 0xaU)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						| (0xfffffc00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 0xaU) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U)) 
							    << 0xaU)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 9U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 0xaU)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
					       | (0xfffffc00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 0xaU) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 0xaU)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 0xaU)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
					      | (0xfffffc00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 0xaU) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 1U)) 
							 << 0xaU)) 
						     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							<< 0xaU)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
					     | (0xfffffc00U 
						& (((((((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 4U)) 
							<< 0xaU) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 0xaU)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 0xaU)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					    | (0xfffffc00U 
					       & (((((((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 4U)) 
						       << 0xaU) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 7U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 8U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 9U)) 
						   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						      << 0xaU)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					   | (0xfffffc00U 
					      & (((((((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 4U)) 
						      << 0xaU) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 7U)) 
						    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 8U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 0xaU)) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					  | (0xfffffc00U 
					     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						     << 6U) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 3U)) 
						       << 0xaU)) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 2U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 1U)) 
						     << 0xaU)) 
						 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						    << 0xaU)) 
						& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					 | (0xfffffc00U 
					    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						    << 6U) 
						   & ((~ 
						       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							>> 3U)) 
						      << 0xaU)) 
						  & ((~ 
						      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       >> 2U)) 
						     << 0xaU)) 
						 & ((~ 
						     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      >> 1U)) 
						    << 0xaU)) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						   << 0xaU)) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
			      | ((0x200U & ((((((((
						   (((((((((0xfffffe00U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								 << 9U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 9U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							   | (0xfffffe00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    << 9U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 8U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 9U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							  | (0xfffffe00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 8U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 9U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							 | (0xfffffe00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 9U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 9U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 9U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							| (0xfffffe00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  << 9U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 7U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 9U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 9U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						       | (0xfffffe00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 << 9U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 8U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 9U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						      | (0xfffffe00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 7U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 9U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						     | (0xfffffe00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 9U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 9U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 9U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 9U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						    | (0xfffffe00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 9U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 9U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 9U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						   | (0xfffffe00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 9U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U)) 
							       << 9U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 8U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 9U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						  | (0xfffffe00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 9U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 9U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 8U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 9U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						 | (0xfffffe00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 9U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 9U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 9U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						| (0xfffffe00U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 9U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 9U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 9U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					       | (0xfffffe00U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 9U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 6U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 8U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 9U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					      | (0xfffffe00U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 9U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 7U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 9U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					     | (0xfffffe00U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 5U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 9U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 9U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 9U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					    | (0xfffffe00U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 5U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U)) 
							 << 9U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 9U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 9U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 9U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				 | ((0x100U & (((((
						   ((((((((((((0xffffff00U 
							       & ((((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U))) 
								     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								    << 8U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								  | (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 8U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							      | (0xffffff00U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U))) 
								       << 8U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 8U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							     | (0xffffff00U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 8U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							    | (0xffffff00U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 8U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 6U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 8U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 8U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							   | (0xffffff00U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 8U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 6U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 8U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 8U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							  | (0xffffff00U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    << 8U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 8U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							 | (0xffffff00U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 6U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 8U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							| (0xffffff00U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 8U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 8U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 8U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 8U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						       | (0xffffff00U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 8U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 5U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 8U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 8U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						      | (0xffffff00U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 8U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 5U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 2U)) 
								  << 8U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 8U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						     | (0xffffff00U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 8U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 8U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 8U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						    | (0xffffff00U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 8U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 8U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 8U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						   | (0xffffff00U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 8U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 1U)) 
							      << 8U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 8U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						  | (0xffffff00U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 8U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 8U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						 | (0xffffff00U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 8U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 5U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 6U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 8U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						| (0xffffff00U 
						   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 4U) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 3U)) 
							     << 8U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 2U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 8U)) 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							  << 8U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					       | (0xffffff00U 
						  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 4U) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 3U)) 
							    << 8U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 2U)) 
							   << 8U)) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 1U)) 
							  << 8U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 8U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				    | ((0x80U & (((
						   ((((((((((((((0xffffff80U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								      << 7U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 7U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								| (0xffffff80U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U))) 
									 << 7U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 6U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 7U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							       | (0xffffff80U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 6U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 7U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							      | (0xffffff80U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 7U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 5U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 7U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 7U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							     | (0xffffff80U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       << 7U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 5U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 7U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 7U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							    | (0xffffff80U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 7U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 6U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 7U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							   | (0xffffff80U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 5U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 6U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 7U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							  | (0xffffff80U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 7U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 4U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 7U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 7U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 7U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							 | (0xffffff80U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 7U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U)) 
								     << 7U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 7U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							| (0xffffff80U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 7U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 7U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 6U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 7U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						       | (0xffffff80U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 7U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 7U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 7U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						      | (0xffffff80U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 7U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 7U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 7U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						     | (0xffffff80U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 7U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 7U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 7U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						    | (0xffffff80U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 7U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 4U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 6U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 7U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						   | (0xffffff80U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 7U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 4U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 7U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						  | (0xffffff80U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 3U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U)) 
							       << 7U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 7U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 7U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						 | (0xffffff80U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 3U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U)) 
							      << 7U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 7U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 7U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 7U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
				       | ((0x40U & 
					   (((((((((((((((((0xffffffc0U 
							    & ((((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U))) 
								  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								 << 6U) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
							       | (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 6U) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
							   | (0xffffffc0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    << 6U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 5U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 6U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							  | (0xffffffc0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 6U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							 | (0xffffffc0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U))) 
								   << 6U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 4U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 6U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 6U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							| (0xffffffc0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   & (~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U))) 
								  << 6U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 6U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 6U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
						       | (0xffffffc0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  & (~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U))) 
								 << 6U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 5U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 6U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
						      | (0xffffffc0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 & (~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 3U))) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 6U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
						     | (0xffffffc0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 6U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 6U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 6U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 6U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
						    | (0xffffffc0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 6U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 6U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 6U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
						   | (0xffffffc0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 6U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 3U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 2U)) 
							       << 6U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 5U)) 
							  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							     << 6U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						  | (0xffffffc0U 
						     & (((((((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 4U)) 
							     << 6U) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 3U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 6U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 5U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 6U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						 | (0xffffffc0U 
						    & (((((((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 4U)) 
							    << 6U) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 3U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 4U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 6U)) 
							& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							   << 6U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						| (0xffffffc0U 
						   & (((((((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 4U)) 
							   << 6U) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 3U)) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 4U)) 
							& ((~ 
							    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     >> 1U)) 
							   << 6U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 6U)) 
						      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
					       | (0xffffffc0U 
						  & (((((((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 4U)) 
							  << 6U) 
							 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 3U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 4U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 5U)) 
						      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							 << 6U)) 
						     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
					      | (0xffffffc0U 
						 & (((((((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 4U)) 
							 << 6U) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 3U)) 
						       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  << 4U)) 
						      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 << 5U)) 
						     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 6U)) 
						    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
					     | (0xffffffc0U 
						& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							<< 2U) 
						       & ((~ 
							   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    >> 3U)) 
							  << 6U)) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 2U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 1U)) 
							<< 6U)) 
						    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
						       << 6U)) 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
					    | (0xffffffc0U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						       << 2U) 
						      & ((~ 
							  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   >> 3U)) 
							 << 6U)) 
						     & ((~ 
							 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							  >> 2U)) 
							<< 6U)) 
						    & ((~ 
							((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							 >> 1U)) 
						       << 6U)) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
						      << 6U)) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
					  | ((0x20U 
					      & (((((((((((((((((0xffffffe0U 
								 & ((((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								      << 5U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								    | (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 5U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								| (0xffffffe0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U))) 
									 << 5U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 4U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 5U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
							       | (0xffffffe0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 4U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 5U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
							      | (0xffffffe0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 5U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 3U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 5U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 5U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
							     | (0xffffffe0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U))) 
								       << 5U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 5U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 5U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							    | (0xffffffe0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      << 5U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 3U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 4U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 5U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							   | (0xffffffe0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 3U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 5U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							  | (0xffffffe0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 5U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 5U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 5U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 5U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							 | (0xffffffe0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 5U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 2U)) 
								     << 5U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 5U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							| (0xffffffe0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 5U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 5U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 4U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 5U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
						       | (0xffffffe0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 5U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 5U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 5U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
						      | (0xffffffe0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 5U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U)) 
								 << 5U)) 
							     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								<< 5U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
						     | (0xffffffe0U 
							& (((((((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 4U)) 
								<< 5U) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 5U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 5U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						    | (0xffffffe0U 
						       & (((((((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 4U)) 
							       << 5U) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 2U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 3U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 4U)) 
							   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							      << 5U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						   | (0xffffffe0U 
						      & (((((((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 4U)) 
							      << 5U) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 2U)) 
							    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       << 3U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 4U)) 
							  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 5U)) 
							 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						  | (0xffffffe0U 
						     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							     << 1U) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 3U)) 
							       << 5U)) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 2U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 1U)) 
							     << 5U)) 
							 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							    << 5U)) 
							& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						 | (0xffffffe0U 
						    & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							    << 1U) 
							   & ((~ 
							       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								>> 3U)) 
							      << 5U)) 
							  & ((~ 
							      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       >> 2U)) 
							     << 5U)) 
							 & ((~ 
							     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      >> 1U)) 
							    << 5U)) 
							& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							   << 5U)) 
						       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
					     | ((0x10U 
						 & (((((((((((((((((0xfffffff0U 
								    & ((((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U))) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									 << 4U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
								       | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 4U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								   | (0xfffffff0U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									    << 4U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 3U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     << 4U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
								  | (0xfffffff0U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 4U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								 | (0xfffffff0U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   << 4U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 2U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									    << 4U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 4U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								| (0xfffffff0U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U))) 
									  << 4U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									   << 4U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 4U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
							       | (0xfffffff0U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & (~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U))) 
									 << 4U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 3U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 << 4U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
							      | (0xfffffff0U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U))) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 4U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
							     | (0xfffffff0U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 4U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 4U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 4U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       << 4U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							    | (0xfffffff0U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 4U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U)) 
									<< 4U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 4U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							   | (0xfffffff0U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      << 4U) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U)) 
								       << 4U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 3U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 4U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
							  | (0xfffffff0U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 4U) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 4U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 3U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 4U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							 | (0xfffffff0U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 4U) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 1U)) 
								    << 4U)) 
								& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   << 4U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							| (0xfffffff0U 
							   & (((((((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 4U)) 
								   << 4U) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 4U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 4U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
						       | (0xfffffff0U 
							  & (((((((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 4U)) 
								  << 4U) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 1U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 2U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 3U)) 
							      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								 << 4U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
						      | (0xfffffff0U 
							 & (((((((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 4U)) 
								 << 4U) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 1U)) 
							       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  << 2U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								<< 4U)) 
							    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
						     | (0xfffffff0U 
							& ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 3U)) 
								  << 4U)) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 2U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U)) 
								<< 4U)) 
							    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
							       << 4U)) 
							   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						    | (0xfffffff0U 
						       & ((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      & ((~ 
								  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 3U)) 
								 << 4U)) 
							     & ((~ 
								 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 2U)) 
								<< 4U)) 
							    & ((~ 
								((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 >> 1U)) 
							       << 4U)) 
							   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
							      << 4U)) 
							  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						| ((8U 
						    & (((((((((((((((((0xfffffff8U 
								       & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									     & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									    << 3U) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									  | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 3U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
								      | (0xfffffff8U 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									       << 3U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 3U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
								     | (0xfffffff8U 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 3U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								    | (0xfffffff8U 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      << 3U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									       << 3U)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 3U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								   | (0xfffffff8U 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									     << 3U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      << 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 3U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
								  | (0xfffffff8U 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									    << 3U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 1U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 2U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    << 3U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								 | (0xfffffff8U 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									   << 3U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 1U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 3U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								| (0xfffffff8U 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 3U) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									    << 3U)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									   << 3U)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 3U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
							       | (0xfffffff8U 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 3U) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									   << 3U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 3U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
							      | (0xfffffff8U 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 << 3U) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									  << 3U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 2U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 3U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
							     | (0xfffffff8U 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 3U) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 3U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 2U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 3U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							    | (0xfffffff8U 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 3U) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								       << 3U)) 
								   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      << 3U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							   | (0xfffffff8U 
							      & (((((((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U)) 
								      << 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 3U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 3U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
							  | (0xfffffff8U 
							     & (((((((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U)) 
								     << 3U) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 1U)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 2U)) 
								 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    << 3U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							 | (0xfffffff8U 
							    & (((((((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 4U)) 
								    << 3U) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     << 1U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   << 3U)) 
							       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							| (0x7ffffff8U 
							   & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								   >> 1U) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 3U)) 
								     << 3U)) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 1U)) 
								   << 3U)) 
							       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  << 3U)) 
							      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
						       | (0x7ffffff8U 
							  & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								  >> 1U) 
								 & ((~ 
								     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 3U)) 
								    << 3U)) 
								& ((~ 
								    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U)) 
								   << 3U)) 
							       & ((~ 
								   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    >> 1U)) 
								  << 3U)) 
							      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								 << 3U)) 
							     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						   | ((4U 
						       & (((((((((((((((((0xfffffffcU 
									  & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									     | (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
									 | (0xfffffffcU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
									| (0xfffffffcU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 2U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
								       | (0xfffffffcU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 2U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 2U)) 
									      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 2U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
								      | (0xfffffffcU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 2U) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 2U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 2U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
								     | (0xfffffffcU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       << 2U) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       << 2U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								    | (0xfffffffcU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									      << 2U) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      << 2U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								   | (0x7ffffffcU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      << 2U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       << 2U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      << 2U)) 
									  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									     << 2U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
								  | (0x7ffffffcU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     << 2U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									   & ((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      << 2U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 2U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
								 | (0x7ffffffcU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    << 2U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U)) 
									     << 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    << 1U)) 
									& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   << 2U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
								| (0x7ffffffcU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 2U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									    << 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 1U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  << 2U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
							       | (0x7ffffffcU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 2U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									  << 2U)) 
								      & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									 << 2U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
							      | (0x7ffffffcU 
								 & (((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 << 2U) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 2U)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 2U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
							     | (0x7ffffffcU 
								& (((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									<< 2U) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									<< 1U)) 
								    & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       << 2U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							    | (0x7ffffffcU 
							       & (((((((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 4U)) 
								       << 2U) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      << 2U)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							   | (0x3ffffffcU 
							      & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								      >> 2U) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U)) 
									<< 2U)) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U)) 
								      << 2U)) 
								  & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								     << 2U)) 
								 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
							  | (0x3ffffffcU 
							     & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								     >> 2U) 
								    & ((~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U)) 
								       << 2U)) 
								   & ((~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 2U)) 
								      << 2U)) 
								  & ((~ 
								      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 1U)) 
								     << 2U)) 
								 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								    << 2U)) 
								& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
						      | ((2U 
							  & (((((((((((((((((0xfffffffeU 
									     & ((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
										| (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D)))) 
									    | (0xfffffffeU 
									       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D)))) 
									   | (0xfffffffeU 
									      & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										<< 1U) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D)))) 
									  | (0x7ffffffeU 
									     & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
										& ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D)))) 
									 | (0x7ffffffeU 
									    & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D)))) 
									| (0x7ffffffeU 
									   & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D)))) 
								       | (0x7ffffffeU 
									  & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										<< 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D)))) 
								      | (0x3ffffffeU 
									 & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										<< 1U) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
									     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D)))) 
								     | (0x3ffffffeU 
									& (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										<< 1U) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										<< 1U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D)))) 
								    | (0x3ffffffeU 
								       & (((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       << 1U) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									     & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										<< 1U)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									   & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      << 1U)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D)))) 
								   | (0x3ffffffeU 
								      & (((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      << 1U) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									    & ((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       << 1U)) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     << 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D)))) 
								  | (0x3ffffffeU 
								     & (((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     << 1U) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & ((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 1U)) 
									     << 1U)) 
									 & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    << 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D)))) 
								 | (0x3ffffffeU 
								    & (((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    << 1U) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 2U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & ((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									    << 1U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   << 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D)))) 
								| (0x3ffffffeU 
								   & (((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   << 1U) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								       & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  << 1U)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D)))) 
							       | (0x3ffffffeU 
								  & (((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  << 1U) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 << 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D)))) 
							      | (0x1ffffffeU 
								 & (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 3U) 
									& ((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U)) 
									   << 1U)) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 1U)) 
									 << 1U)) 
								     & ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									<< 1U)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D)))) 
							     | (0x1ffffffeU 
								& (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 3U) 
								       & ((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U)) 
									  << 1U)) 
								      & ((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
									 << 1U)) 
								     & ((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
									<< 1U)) 
								    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       << 1U)) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D))))) 
							 | (1U 
							    & (((((((((((((((((((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B0__05D)) 
									       | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B1__05D))) 
									      | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B2__05D))) 
									     | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
										& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B3__05D))) 
									    | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
										& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B4__05D))) 
									   | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B5__05D))) 
									  | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
										& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B6__05D))) 
									 | ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
										& (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U))) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U)) 
									     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B7__05D))) 
									| ((((((~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									      & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B8__05D))) 
								       | ((((((~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 4U)) 
									      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									     & (~ 
										((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 1U))) 
									   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B9__05D))) 
								      | ((((((~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 4U)) 
									     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 3U)) 
									    & (~ 
									       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
										>> 2U))) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 1U)) 
									  & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B10__05D))) 
								     | ((((((~ 
									     ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 4U)) 
									    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 3U)) 
									   & (~ 
									      ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									       >> 2U))) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U)) 
									 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
									& (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B11__05D))) 
								    | ((((((~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 4U)) 
									   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									      >> 3U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 2U)) 
									 & (~ 
									    ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 1U))) 
									& (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B12__05D))) 
								   | ((((((~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 4U)) 
									  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									     >> 3U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 2U)) 
									& (~ 
									   ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 1U))) 
								       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B13__05D))) 
								  | ((((((~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 4U)) 
									 & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									    >> 3U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 2U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 1U)) 
								      & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B14__05D))) 
								 | ((((((~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 4U)) 
									& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U)) 
								       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U)) 
								      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U)) 
								     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B15__05D))) 
								| (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 4U) 
								       & (~ 
									  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									   >> 3U))) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 2U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 1U))) 
								    & (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B16__05D))) 
							       | (((((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
								       >> 4U) 
								      & (~ 
									 ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									  >> 3U))) 
								     & (~ 
									((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									 >> 2U))) 
								    & (~ 
								       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy) 
									>> 1U))) 
								   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy)) 
								  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H__05B17__05D)))))))))))))))))));
}

void Vfx68k_fx68k_bmux_1967::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_bmux_1967::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(5);
    in_0 = VL_RAND_RESET_I(16);
    in_1 = VL_RAND_RESET_I(16);
    in_2 = VL_RAND_RESET_I(16);
    in_3 = VL_RAND_RESET_I(16);
    in_4 = VL_RAND_RESET_I(16);
    in_5 = VL_RAND_RESET_I(16);
    in_6 = VL_RAND_RESET_I(16);
    in_7 = VL_RAND_RESET_I(16);
    in_8 = VL_RAND_RESET_I(16);
    in_9 = VL_RAND_RESET_I(16);
    in_10 = VL_RAND_RESET_I(16);
    in_11 = VL_RAND_RESET_I(16);
    in_12 = VL_RAND_RESET_I(16);
    in_13 = VL_RAND_RESET_I(16);
    in_14 = VL_RAND_RESET_I(16);
    in_15 = VL_RAND_RESET_I(16);
    in_16 = VL_RAND_RESET_I(16);
    in_17 = VL_RAND_RESET_I(16);
    z = VL_RAND_RESET_I(16);
}
