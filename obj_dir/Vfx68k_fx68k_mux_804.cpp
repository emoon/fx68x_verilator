// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_804.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_804) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_804::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_804::~Vfx68k_fx68k_mux_804() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA23__05B4__05D_601_10__4(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_arA23__05B4__05D_601_10__4\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
			       | (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				   << 1U) & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
			      | (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				  << 2U) & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2))) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				<< 4U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					   << 5U)) 
			   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
			      << 6U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					 << 7U))) | 
	       ((0x80U & ((((((0x7fffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					      >> 1U)) 
			      | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1)))) 
			     | (0xffffff80U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						<< 1U) 
					       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
			    | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					      << 3U))) 
			   | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					     << 4U))) 
			  | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
					    << 5U)))) 
		| ((0x40U & ((((((((0x7fffffc0U & (
						   ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						    >> 1U) 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
				   | (0xffffffc0U & 
				      ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
				  | (0xffffffc0U & 
				     ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				      << 1U))) | (0xffffffc0U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						     << 2U))) 
				| (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						  << 3U))) 
			       | (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						 << 4U))) 
			      | (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						<< 5U))) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
				<< 6U))) | ((0x20U 
					     & (((0x1fffffe0U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						     >> 3U)) 
						 | (0x3fffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							>> 2U) 
						       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1)))) 
						| (0x7fffffe0U 
						   & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						       >> 1U) 
						      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2))))) 
					    | ((0x10U 
						& ((((0x1ffffff0U 
						      & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							  >> 3U) 
							 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
						     | (0x3ffffff0U 
							& (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							    >> 2U) 
							   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
						    | (0x7ffffff0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							  >> 1U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
						      << 4U))) 
					       | ((8U 
						   & ((((0xffffff8U 
							 & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							     >> 4U) 
							    & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
							| (0x1ffffff8U 
							   & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							       >> 3U) 
							      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
						       | (0x3ffffff8U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							     >> 2U))) 
						      | (0xfffffff8U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							    << 1U)))) 
						  | ((4U 
						      & (((0x7fffffcU 
							   & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							       >> 5U) 
							      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
							  | (0xffffffcU 
							     & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								 >> 4U) 
								& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
							 | (0x1ffffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
							       >> 3U)))) 
						     | ((2U 
							 & (((((((0x3fffffeU 
								  & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								      >> 6U) 
								     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
								 | (0x7fffffeU 
								    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
									>> 5U) 
								       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2)))) 
								| (0x1ffffffeU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								      >> 3U))) 
							       | (0x3ffffffeU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								     >> 2U))) 
							      | (0x7ffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								    >> 1U))) 
							     | (0xfffffffeU 
								& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl))) 
							    | (0xfffffffeU 
							       & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								   << 1U) 
								  & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_818_19.z))))) 
							| (1U 
							   & (((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								     >> 8U) 
								    | (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
									>> 7U) 
								       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_1))) 
								   | (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								       >> 6U) 
								      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__in_2))) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								    >> 3U)) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								   >> 2U)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								  >> 1U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_arA23__05B4__05D_601_10__ctl) 
								 & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_818_19.z))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1730_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1730_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((((((0xfffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					     >> 4U)) 
			      | (0x1fffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						>> 3U))) 
			     | (0xffffff00U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0))) 
			    | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					      << 1U))) 
			   | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					     << 2U))) 
			  | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					    << 4U)))) 
	       | ((0x80U & ((((0x7ffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					     >> 5U)) 
			      | (0xffffff80U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0))) 
			     | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					       << 1U))) 
			    | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
					      << 3U)))) 
		  | ((0x40U & (((((0x3ffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						 >> 6U)) 
				  | (0x3fffffc0U & 
				     ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
				      >> 2U))) | (0x7fffffc0U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						     >> 1U))) 
				| (0xffffffc0U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0))) 
			       | (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						 << 2U)))) 
		     | ((0x20U & (((0x1fffffe0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						   >> 3U)) 
				   | (0x7fffffe0U & 
				      ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
				       >> 1U))) | (0xffffffe0U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
						      << 1U)))) 
			| ((0x10U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
				     >> 4U)) | ((8U 
						 & (((((0xfffff8U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							   >> 8U)) 
						       | (0x1fffff8U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							     >> 7U))) 
						      | (0x3fffff8U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							    >> 6U))) 
						     | (0x7fffff8U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							   >> 5U))) 
						    | (0x3ffffff8U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							  >> 2U)))) 
						| ((4U 
						    & ((((((0x3ffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							       >> 0xaU)) 
							   | (0x1fffffcU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								 >> 7U))) 
							  | (0x7fffffcU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								>> 5U))) 
							 | (0xffffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							       >> 4U))) 
							| (0x1ffffffcU 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							      >> 3U))) 
						       | (0x3ffffffcU 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							     >> 2U)))) 
						   | ((2U 
						       & (((((((0x3ffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								   >> 0xaU)) 
							       | (0x7ffffeU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								     >> 9U))) 
							      | (0xfffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								    >> 8U))) 
							     | (0x3fffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								   >> 6U))) 
							    | (0x7fffffeU 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								  >> 5U))) 
							   | (0xffffffeU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								 >> 4U))) 
							  | (0x1ffffffeU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								>> 3U)))) 
						      | (1U 
							 & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								 >> 0xcU) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								   >> 0xbU)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								  >> 0xaU)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								 >> 9U)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
								>> 8U)) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1730_19__out_0) 
							       >> 6U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1872_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1872_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & (((((0xfffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					    >> 4U)) 
			     | (0xffffff00U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0))) 
			    | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					      << 1U))) 
			   | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					     << 2U))) 
			  | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					    << 4U)))) 
	       | ((0x80U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
				<< 1U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					   << 3U))) 
		  | ((0x40U & (((((0x7ffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
						 >> 5U)) 
				  | (0x3fffffc0U & 
				     ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
				      >> 2U))) | (0x7fffffc0U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
						     >> 1U))) 
				| (0xffffffc0U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0))) 
			       | (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
						 << 2U)))) 
		     | ((0x20U & ((((0x3ffffe0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
						   >> 6U)) 
				    | (0x1fffffe0U 
				       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
					  >> 3U))) 
				   | (0x7fffffe0U & 
				      ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
				       >> 1U))) | (0xffffffe0U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
						      << 1U)))) 
			| ((0x10U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
				     >> 4U)) | ((8U 
						 & ((((((0x7ffff8U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							    >> 9U)) 
							| (0xfffff8U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							      >> 8U))) 
						       | (0x1fffff8U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							     >> 7U))) 
						      | (0x3fffff8U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							    >> 6U))) 
						     | (0x7fffff8U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							   >> 5U))) 
						    | (0x3ffffff8U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							  >> 2U)))) 
						| ((4U 
						    & (((((((0x3ffffcU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								>> 0xaU)) 
							    | (0x7ffffcU 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								  >> 9U))) 
							   | (0x1fffffcU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								 >> 7U))) 
							  | (0x7fffffcU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								>> 5U))) 
							 | (0xffffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							       >> 4U))) 
							| (0x1ffffffcU 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							      >> 3U))) 
						       | (0x3ffffffcU 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							     >> 2U)))) 
						   | ((2U 
						       & (((((((0x3ffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								   >> 0xaU)) 
							       | (0x7ffffeU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								     >> 9U))) 
							      | (0xfffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								    >> 8U))) 
							     | (0x3fffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								   >> 6U))) 
							    | (0x7fffffeU 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								  >> 5U))) 
							   | (0xffffffeU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								 >> 4U))) 
							  | (0x1ffffffeU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								>> 3U)))) 
						      | (1U 
							 & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								>> 0xbU) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								  >> 0xaU)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								 >> 9U)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
								>> 8U)) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1872_19__out_0) 
							       >> 6U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2156_19__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_804::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2156_19__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((((((0xfffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					     >> 4U)) 
			      | (0x1fffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						>> 3U))) 
			     | (0xffffff00U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0))) 
			    | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					      << 1U))) 
			   | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					     << 2U))) 
			  | (0xffffff00U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					    << 4U)))) 
	       | ((0x80U & ((((0x7ffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					     >> 5U)) 
			      | (0xffffff80U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0))) 
			     | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					       << 1U))) 
			    | (0xffffff80U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
					      << 3U)))) 
		  | ((0x40U & (((((0x3ffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						 >> 6U)) 
				  | (0x3fffffc0U & 
				     ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
				      >> 2U))) | (0x7fffffc0U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						     >> 1U))) 
				| (0xffffffc0U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0))) 
			       | (0xffffffc0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						 << 2U)))) 
		     | ((0x20U & (((0x1fffffe0U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						   >> 3U)) 
				   | (0x7fffffe0U & 
				      ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
				       >> 1U))) | (0xffffffe0U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
						      << 1U)))) 
			| ((0x10U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
				     >> 4U)) | ((8U 
						 & (((((0xfffff8U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							   >> 8U)) 
						       | (0x1fffff8U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							     >> 7U))) 
						      | (0x3fffff8U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							    >> 6U))) 
						     | (0x7fffff8U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							   >> 5U))) 
						    | (0x3ffffff8U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							  >> 2U)))) 
						| ((4U 
						    & ((((((0x3ffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							       >> 0xaU)) 
							   | (0x1fffffcU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								 >> 7U))) 
							  | (0x7fffffcU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								>> 5U))) 
							 | (0xffffffcU 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							       >> 4U))) 
							| (0x1ffffffcU 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							      >> 3U))) 
						       | (0x3ffffffcU 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							     >> 2U)))) 
						   | ((2U 
						       & (((((((0x3ffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								   >> 0xaU)) 
							       | (0x7ffffeU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								     >> 9U))) 
							      | (0xfffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								    >> 8U))) 
							     | (0x3fffffeU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								   >> 6U))) 
							    | (0x7fffffeU 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								  >> 5U))) 
							   | (0xffffffeU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								 >> 4U))) 
							  | (0x1ffffffeU 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								>> 3U)))) 
						      | (1U 
							 & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								 >> 0xcU) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								   >> 0xbU)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								  >> 0xaU)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								 >> 9U)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
								>> 8U)) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2156_19__out_0) 
							       >> 6U)))))))))));
}

void Vfx68k_fx68k_mux_804::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_804::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(9);
    in_0 = VL_RAND_RESET_I(9);
    in_1 = VL_RAND_RESET_I(9);
    in_2 = VL_RAND_RESET_I(9);
    in_3 = VL_RAND_RESET_I(9);
    in_4 = VL_RAND_RESET_I(9);
    in_5 = VL_RAND_RESET_I(9);
    in_6 = VL_RAND_RESET_I(9);
    in_7 = VL_RAND_RESET_I(9);
    in_8 = VL_RAND_RESET_I(9);
    z = VL_RAND_RESET_I(9);
}
