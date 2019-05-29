// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_778.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_778) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_778::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_778::~Vfx68k_fx68k_mux_778() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_778::_settle__TOP__fx68k__DOT__mux_ftu_599_11__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_778::_settle__TOP__fx68k__DOT__mux_ftu_599_11__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				  << 9U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
				| (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				    << 0xaU) & (IData)(vlTOPp->fx68k__DOT__Ird))) 
			       | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				   << 0xbU) & (IData)(vlTOPp->fx68k__DOT__ssw))) 
			      | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				 << 0xcU)) | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					       << 0xdU) 
					      & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
			    | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				<< 0xeU) & (IData)(vlTOPp->fx68k__DOT__Abl))) 
			   | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
			       << 0xfU) & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
	       | ((0x4000U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				     << 8U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
				   | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				       << 9U) & (IData)(vlTOPp->fx68k__DOT__Ird))) 
				  | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				      << 0xaU) & (IData)(vlTOPp->fx68k__DOT__ssw))) 
				 | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				    << 0xbU)) | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						  << 0xcU) 
						 & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
			       | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				   << 0xdU) & (IData)(vlTOPp->fx68k__DOT__Abl))) 
			      | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				  << 0xeU) & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
		  | ((0x2000U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					<< 7U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
				      | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					  << 8U) & (IData)(vlTOPp->fx68k__DOT__Ird))) 
				     | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					 << 9U) & (IData)(vlTOPp->fx68k__DOT__ssw))) 
				    | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				       << 0xaU)) | 
				   (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				     << 0xbU) & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
				  | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				      << 0xcU) & (IData)(vlTOPp->fx68k__DOT__Abl))) 
				 | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
				     << 0xdU) & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
		     | ((0x1000U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					   << 6U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
					 | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					     << 7U) 
					    & (IData)(vlTOPp->fx68k__DOT__Ird))) 
					| (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					    << 8U) 
					   & (IData)(vlTOPp->fx68k__DOT__ssw))) 
				       | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					  << 9U)) | 
				      (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					<< 0xaU) & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
				     | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					 << 0xbU) & (IData)(vlTOPp->fx68k__DOT__Abl))) 
				    | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					<< 0xcU) & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
			| ((0x800U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					     << 5U) 
					    & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
					   | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					       << 6U) 
					      & (IData)(vlTOPp->fx68k__DOT__Ird))) 
					  | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					      << 7U) 
					     & (IData)(vlTOPp->fx68k__DOT__ssw))) 
					 | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					    << 8U)) 
					| (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					    << 9U) 
					   & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
				       | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					   << 0xaU) 
					  & (IData)(vlTOPp->fx68k__DOT__Abl))) 
				      | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					  << 0xbU) 
					 & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
			   | ((0x400U & (((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						<< 4U) 
					       & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
					      | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						  << 5U) 
						 & (IData)(vlTOPp->fx68k__DOT__Ird))) 
					     | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						 << 6U) 
						& (IData)(vlTOPp->fx68k__DOT__ssw))) 
					    | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					       << 7U)) 
					   | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					       << 8U) 
					      & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
					  | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					      << 9U) 
					     & (IData)(vlTOPp->fx68k__DOT__Abl))) 
					 | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
					     << 0xaU) 
					    & (IData)(vlTOPp->fx68k__DOT__ftu)))) 
			      | ((0x200U & ((((((((0x200U 
						   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						       << 2U) 
						      & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
						  | (0xfffffe00U 
						     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							 << 3U) 
							& (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
						 | (0xfffffe00U 
						    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 4U) 
						       & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
						| (0xfffffe00U 
						   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						       << 5U) 
						      & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
					       | (0xfffffe00U 
						  & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						     << 6U))) 
					      | (0xfffffe00U 
						 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						     << 7U) 
						    & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
					     | (0xfffffe00U 
						& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						    << 8U) 
						   & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
					    | (0xfffffe00U 
					       & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						   << 9U) 
						  & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
				 | ((0x100U & (((((
						   (((0x300U 
						      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 1U) 
							 & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
						     | (0xffffff00U 
							& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    << 2U) 
							   & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
						    | (0xffffff00U 
						       & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							   << 3U) 
							  & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
						   | (0xffffff00U 
						      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 4U) 
							 & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
						  | (0xffffff00U 
						     & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 5U))) 
						 | (0xffffff00U 
						    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 6U) 
						       & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
						| (0xffffff00U 
						   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						       << 7U) 
						      & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
					       | (0xffffff00U 
						  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						      << 8U) 
						     & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
				    | ((0x80U & (((
						   (((((0x380U 
							& ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							   & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
						       | (0xffffff80U 
							  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							      << 1U) 
							     & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
						      | (0xffffff80U 
							 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							     << 2U) 
							    & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
						     | (0xffffff80U 
							& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    << 3U) 
							   & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
						    | (0xffffff80U 
						       & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 4U))) 
						   | (0xffffff80U 
						      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 5U) 
							 & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
						  | (0xffffff80U 
						     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							 << 6U) 
							& (IData)(vlTOPp->fx68k__DOT__Abl)))) 
						 | (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 7U) 
						       & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
				       | ((0x40U & 
					   ((((((((0x3c0U 
						   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						       >> 1U) 
						      & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
						  | (0xffffffc0U 
						     & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							& (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
						 | (0xffffffc0U 
						    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 1U) 
						       & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
						| (0xffffffc0U 
						   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						       << 2U) 
						      & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
					       | (0xffffffc0U 
						  & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						     << 3U))) 
					      | (0xffffffc0U 
						 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						     << 4U) 
						    & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
					     | (0xffffffc0U 
						& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						    << 5U) 
						   & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
					    | (0xffffffc0U 
					       & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
						   << 6U) 
						  & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
					  | ((0x20U 
					      & ((((((((0x3e0U 
							& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    >> 2U) 
							   & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
						       | (0x7fffffe0U 
							  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							      >> 1U) 
							     & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
						      | (0xffffffe0U 
							 & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
						     | (0xffffffe0U 
							& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    << 1U) 
							   & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
						    | (0xffffffe0U 
						       & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 2U))) 
						   | (0xffffffe0U 
						      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							  << 3U) 
							 & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
						  | (0xffffffe0U 
						     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							 << 4U) 
							& (IData)(vlTOPp->fx68k__DOT__Abl)))) 
						 | (0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							<< 5U) 
						       & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
					     | ((0x10U 
						 & ((((((((0x3f0U 
							   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							       >> 3U) 
							      & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
							  | (0x3ffffff0U 
							     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								 >> 2U) 
								& (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
							 | (0x7ffffff0U 
							    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								>> 1U) 
							       & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							      & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
						       | (0xfffffff0U 
							  & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							     << 1U))) 
						      | (0xfffffff0U 
							 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							     << 2U) 
							    & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
						     | (0xfffffff0U 
							& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							    << 3U) 
							   & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
						    | (0xfffffff0U 
						       & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							   << 4U) 
							  & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
						| ((8U 
						    & ((((((((0x3f8U 
							      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								  >> 4U) 
								 & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
							     | (0x1ffffff8U 
								& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								    >> 3U) 
								   & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
							    | (0x3ffffff8U 
							       & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								   >> 2U) 
								  & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
							   | (0x7ffffff8U 
							      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								  >> 1U) 
								 & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
							  | (0xfffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								& ((IData)(vlTOPp->fx68k__DOT__pswI) 
								   << 1U)))) 
							 | (0xfffffff8U 
							    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								<< 1U) 
							       & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
							| (0xfffffff8U 
							   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							       << 2U) 
							      & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
						       | (0xfffffff8U 
							  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
							      << 3U) 
							     & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
						   | ((4U 
						       & ((((((((0x3fcU 
								 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								     >> 5U) 
								    & (IData)(vlTOPp->fx68k__DOT__tvnMux))) 
								| (0xffffffcU 
								   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								       >> 4U) 
								      & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)))) 
							       | (0x1ffffffcU 
								  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								      >> 3U) 
								     & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
							      | (0x3ffffffcU 
								 & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								     >> 2U) 
								    & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
							     | (0x7ffffffcU 
								& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								    >> 1U) 
								   & ((IData)(vlTOPp->fx68k__DOT__pswI) 
								      << 1U)))) 
							    | (0xfffffffcU 
							       & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
							   | (0xfffffffcU 
							      & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								  << 1U) 
								 & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
							  | (0xfffffffcU 
							     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								 << 2U) 
								& (IData)(vlTOPp->fx68k__DOT__ftu))))) 
						      | ((2U 
							  & (((((((0x7fffffeU 
								   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								       >> 5U) 
								      & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1))) 
								  | (0xffffffeU 
								     & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
									 >> 4U) 
									& (IData)(vlTOPp->fx68k__DOT__Ird)))) 
								 | (0x1ffffffeU 
								    & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
									>> 3U) 
								       & (IData)(vlTOPp->fx68k__DOT__ssw)))) 
								| (0x3ffffffeU 
								   & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								       >> 2U) 
								      & ((IData)(vlTOPp->fx68k__DOT__pswI) 
									 << 1U)))) 
							       | (0x7ffffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								      >> 1U) 
								     & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D)))) 
							      | (0xfffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								    & (IData)(vlTOPp->fx68k__DOT__Abl)))) 
							     | (0xfffffffeU 
								& (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								    << 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__ftu))))) 
							 | (1U 
							    & ((((((((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								     >> 6U) 
								    & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__in_1)) 
								   | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								       >> 5U) 
								      & (IData)(vlTOPp->fx68k__DOT__Ird))) 
								  | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								      >> 4U) 
								     & (IData)(vlTOPp->fx68k__DOT__ssw))) 
								 | (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								     >> 2U) 
								    & (IData)(vlTOPp->fx68k__DOT__Irdecod__05BftuConst__05D))) 
								| (((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								    >> 1U) 
								   & (IData)(vlTOPp->fx68k__DOT__Abl))) 
							       | ((IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_ftu_599_11__ctl) 
								  & (IData)(vlTOPp->fx68k__DOT__ftu)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_778::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_800_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_778::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_800_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x8000U & ((0xffff8000U & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
					       << 0xaU) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
						 << 0xbU)) 
					     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
						<< 0xcU)) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
					       << 0xdU)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
					      << 0xeU))) 
			   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
			      << 0xfU))) | ((0x4000U 
					     & ((0xffffc000U 
						 & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							<< 9U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							  << 0xaU)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							 << 0xbU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							<< 0xcU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
						       << 0xdU))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
						   << 0xeU))) 
					    | ((0x2000U 
						& ((0xffffe000U 
						    & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							  << 8U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							   << 0xaU)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							  << 0xcU))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
						      << 0xdU))) 
					       | ((0x1000U 
						   & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							 << 7U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							   << 9U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							  << 0xaU)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							 << 0xbU))) 
						  | ((0x800U 
						      & ((0xfffff800U 
							  & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
								<< 4U) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
								  << 6U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
								 << 7U)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
								<< 0xaU))) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							    << 0xbU))) 
						     | (0x400U 
							& (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							    << 3U) 
							   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_800_19__ctl) 
							      << 4U))))))));
}

void Vfx68k_fx68k_mux_778::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_778::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(8);
    in_0 = VL_RAND_RESET_I(16);
    in_1 = VL_RAND_RESET_I(16);
    in_2 = VL_RAND_RESET_I(16);
    in_3 = VL_RAND_RESET_I(16);
    in_4 = VL_RAND_RESET_I(16);
    in_5 = VL_RAND_RESET_I(16);
    in_6 = VL_RAND_RESET_I(16);
    in_7 = VL_RAND_RESET_I(16);
    z = VL_RAND_RESET_I(16);
}
