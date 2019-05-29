// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_992.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_992) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_992::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_992::~Vfx68k_fx68k_mux_992() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1645_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B9__05D_1645_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x400U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
			  << 1U)) | ((0x200U & ((((
						   ((((0x1ffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							  >> 3U)) 
						      | (0x3ffffe00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							    >> 2U))) 
						     | (0xfffffe00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							   << 1U))) 
						    | (0xfffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							  << 2U))) 
						   | (0xfffffe00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							 << 3U))) 
						  | (0xfffffe00U 
						     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							<< 5U))) 
						 | (0xfffffe00U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						       << 6U))) 
						| (0xfffffe00U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						      << 7U)))) 
				     | ((0x100U & (
						   (((((((0xfffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							     >> 4U)) 
							 | (0x1fffff00U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							       >> 3U))) 
							| (0xffffff00U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							      << 1U))) 
						       | (0xffffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							     << 2U))) 
						      | (0xffffff00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							    << 4U))) 
						     | (0xffffff00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							   << 5U))) 
						    | (0xffffff00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							  << 6U))) 
						   | (0xffffff00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							 << 7U)))) 
					| ((0x80U & 
					    ((((((((0x7ffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						       >> 5U)) 
						   | (0xfffff80U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							 >> 4U))) 
						  | (0xffffff80U 
						     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0))) 
						 | (0xffffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						       << 1U))) 
						| (0xffffff80U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						      << 3U))) 
					       | (0xffffff80U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						     << 4U))) 
					      | (0xffffff80U 
						 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						    << 5U))) 
					     | (0xffffff80U 
						& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						   << 6U)))) 
					   | ((0x40U 
					       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						       << 2U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						      << 4U)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						     << 5U))) 
					      | ((0x20U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
						     >> 4U)) 
						 | ((0x10U 
						     & (((0x7fffff0U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							     >> 5U)) 
							 | (0x7ffffff0U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							       >> 1U))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							      << 3U)))) 
						    | ((8U 
							& ((0x1fffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
							       >> 7U)) 
							   | (0x3fffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								 >> 6U)))) 
						       | ((4U 
							   & (((((((((0xfffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									 >> 8U)) 
								     | (0x3fffffcU 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									   >> 6U))) 
								    | (0x7fffffcU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									  >> 5U))) 
								   | (0xffffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									 >> 4U))) 
								  | (0x1ffffffcU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									>> 3U))) 
								 | (0x3ffffffcU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								       >> 2U))) 
								| (0x7ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								      >> 1U))) 
							       | (0xfffffffcU 
								  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0))) 
							      | (0xfffffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								    << 1U)))) 
							  | ((2U 
							      & (((((0x1ffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									>> 0xbU)) 
								    | (0x3ffffeU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									  >> 0xaU))) 
								   | (0x1fffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									 >> 7U))) 
								  | (0x7fffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									>> 5U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								       >> 1U)))) 
							     | (1U 
								& ((((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									   >> 0xaU) 
									  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									     >> 9U)) 
									 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									    >> 8U)) 
									| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									   >> 7U)) 
								       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									  >> 6U)) 
								      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									 >> 5U)) 
								     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
									>> 4U)) 
								    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								       >> 3U)) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1645_19__out_0) 
								      >> 2U)))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1787_19__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B11__05D_1787_19__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x400U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
			  << 1U)) | ((0x200U & ((((
						   ((((0x1ffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							  >> 3U)) 
						      | (0x3ffffe00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							    >> 2U))) 
						     | (0xfffffe00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							   << 1U))) 
						    | (0xfffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							  << 2U))) 
						   | (0xfffffe00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							 << 3U))) 
						  | (0xfffffe00U 
						     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							<< 5U))) 
						 | (0xfffffe00U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						       << 6U))) 
						| (0xfffffe00U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						      << 7U)))) 
				     | ((0x100U & (
						   (((((((0xfffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							     >> 4U)) 
							 | (0x1fffff00U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							       >> 3U))) 
							| (0xffffff00U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							      << 1U))) 
						       | (0xffffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							     << 2U))) 
						      | (0xffffff00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							    << 4U))) 
						     | (0xffffff00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							   << 5U))) 
						    | (0xffffff00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							  << 6U))) 
						   | (0xffffff00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							 << 7U)))) 
					| ((0x80U & 
					    ((((((((0x7ffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						       >> 5U)) 
						   | (0xfffff80U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							 >> 4U))) 
						  | (0xffffff80U 
						     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0))) 
						 | (0xffffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						       << 1U))) 
						| (0xffffff80U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						      << 3U))) 
					       | (0xffffff80U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						     << 4U))) 
					      | (0xffffff80U 
						 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						    << 5U))) 
					     | (0xffffff80U 
						& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						   << 6U)))) 
					   | ((0x40U 
					       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						       << 2U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						      << 4U)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
						     << 5U))) 
					      | ((0x20U 
						  & (((0x1ffffe0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							  >> 7U)) 
						      | (0x3ffffe0U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							    >> 6U))) 
						     | (0xfffffe0U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							   >> 4U)))) 
						 | ((0x10U 
						     & (((0x7fffff0U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							     >> 5U)) 
							 | (0x7ffffff0U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							       >> 1U))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							      << 3U)))) 
						    | ((8U 
							& ((0x1fffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
							       >> 7U)) 
							   | (0x3fffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								 >> 6U)))) 
						       | ((4U 
							   & (((((((((0xfffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									 >> 8U)) 
								     | (0x3fffffcU 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									   >> 6U))) 
								    | (0x7fffffcU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									  >> 5U))) 
								   | (0xffffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									 >> 4U))) 
								  | (0x1ffffffcU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									>> 3U))) 
								 | (0x3ffffffcU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								       >> 2U))) 
								| (0x7ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								      >> 1U))) 
							       | (0xfffffffcU 
								  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0))) 
							      | (0xfffffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								    << 1U)))) 
							  | ((2U 
							      & (((((0x1ffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									>> 0xbU)) 
								    | (0x3ffffeU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									  >> 0xaU))) 
								   | (0x1fffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									 >> 7U))) 
								  | (0x7fffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									>> 5U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								       >> 1U)))) 
							     | (1U 
								& ((((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									   >> 0xaU) 
									  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									     >> 9U)) 
									 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									    >> 8U)) 
									| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									   >> 7U)) 
								       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									  >> 6U)) 
								      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									 >> 5U)) 
								     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
									>> 4U)) 
								    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								       >> 3U)) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1787_19__out_0) 
								      >> 2U)))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2071_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_992::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B13__05D_2071_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x400U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
			  << 1U)) | ((0x200U & ((((
						   ((((0x1ffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							  >> 3U)) 
						      | (0x3ffffe00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							    >> 2U))) 
						     | (0xfffffe00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							   << 1U))) 
						    | (0xfffffe00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							  << 2U))) 
						   | (0xfffffe00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							 << 3U))) 
						  | (0xfffffe00U 
						     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							<< 5U))) 
						 | (0xfffffe00U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						       << 6U))) 
						| (0xfffffe00U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						      << 7U)))) 
				     | ((0x100U & (
						   (((((((0xfffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							     >> 4U)) 
							 | (0x1fffff00U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							       >> 3U))) 
							| (0xffffff00U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							      << 1U))) 
						       | (0xffffff00U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							     << 2U))) 
						      | (0xffffff00U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							    << 4U))) 
						     | (0xffffff00U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							   << 5U))) 
						    | (0xffffff00U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							  << 6U))) 
						   | (0xffffff00U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							 << 7U)))) 
					| ((0x80U & 
					    ((((((((0x7ffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						       >> 5U)) 
						   | (0xfffff80U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							 >> 4U))) 
						  | (0xffffff80U 
						     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0))) 
						 | (0xffffff80U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						       << 1U))) 
						| (0xffffff80U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						      << 3U))) 
					       | (0xffffff80U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						     << 4U))) 
					      | (0xffffff80U 
						 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						    << 5U))) 
					     | (0xffffff80U 
						& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						   << 6U)))) 
					   | ((0x40U 
					       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						       << 2U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						      << 4U)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						     << 5U))) 
					      | ((0x20U 
						  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
						     >> 4U)) 
						 | ((0x10U 
						     & (((0x7fffff0U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							     >> 5U)) 
							 | (0x7ffffff0U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							       >> 1U))) 
							| (0xfffffff0U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							      << 3U)))) 
						    | ((8U 
							& ((0x1fffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
							       >> 7U)) 
							   | (0x3fffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								 >> 6U)))) 
						       | ((4U 
							   & (((((((((0xfffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									 >> 8U)) 
								     | (0x3fffffcU 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									   >> 6U))) 
								    | (0x7fffffcU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									  >> 5U))) 
								   | (0xffffffcU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									 >> 4U))) 
								  | (0x1ffffffcU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									>> 3U))) 
								 | (0x3ffffffcU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								       >> 2U))) 
								| (0x7ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								      >> 1U))) 
							       | (0xfffffffcU 
								  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0))) 
							      | (0xfffffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								    << 1U)))) 
							  | ((2U 
							      & (((((0x1ffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									>> 0xbU)) 
								    | (0x3ffffeU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									  >> 0xaU))) 
								   | (0x1fffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									 >> 7U))) 
								  | (0x7fffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									>> 5U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								       >> 1U)))) 
							     | (1U 
								& ((((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									   >> 0xaU) 
									  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									     >> 9U)) 
									 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									    >> 8U)) 
									| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									   >> 7U)) 
								       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									  >> 6U)) 
								      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									 >> 5U)) 
								     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
									>> 4U)) 
								    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								       >> 3U)) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_2071_19__out_0) 
								      >> 2U)))))))))))));
}

void Vfx68k_fx68k_mux_992::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_992::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(12);
    in_0 = VL_RAND_RESET_I(11);
    in_1 = VL_RAND_RESET_I(11);
    in_2 = VL_RAND_RESET_I(11);
    in_3 = VL_RAND_RESET_I(11);
    in_4 = VL_RAND_RESET_I(11);
    in_5 = VL_RAND_RESET_I(11);
    in_6 = VL_RAND_RESET_I(11);
    in_7 = VL_RAND_RESET_I(11);
    in_8 = VL_RAND_RESET_I(11);
    in_9 = VL_RAND_RESET_I(11);
    in_10 = VL_RAND_RESET_I(11);
    in_11 = VL_RAND_RESET_I(11);
    z = VL_RAND_RESET_I(11);
}
