// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_304.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_304) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_304::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_304::~Vfx68k_fx68k_mux_304() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_304::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B1__05D_905_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_304::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B1__05D_905_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
			    << 8U)) | ((0x8000U & (
						   (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							 << 5U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							   << 8U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							  << 9U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							 << 0xaU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							<< 0xcU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						       << 0xdU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						      << 0xeU))) 
				       | ((0x4000U 
					   & ((0xffffc000U 
					       & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						      << 8U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							<< 9U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						       << 0xbU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						      << 0xcU)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						     << 0xdU))) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						 << 0xeU))) 
					  | ((0x2000U 
					      & ((0xffffe000U 
						  & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							 << 7U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							   << 8U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							  << 0xaU)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							 << 0xbU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							<< 0xcU))) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						    << 0xdU))) 
					     | ((0x1000U 
						 & ((0xfffff000U 
						     & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							   << 2U) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							     << 7U)) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							   << 0xbU))) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						       << 0xcU))) 
						| ((0x800U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
						       << 3U)) 
						   | ((0x400U 
						       & ((0xfffffc00U 
							   & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							       << 2U) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
								 << 6U))) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							     << 0xaU))) 
						      | ((0x200U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
								<< 1U))) 
							 | ((0x100U 
							     & (((((((((0x7fffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									   >> 1U)) 
								       | (0xffffff00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									     << 1U))) 
								      | (0xffffff00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									    << 2U))) 
								     | (0xffffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									   << 3U))) 
								    | (0xffffff00U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									  << 4U))) 
								   | (0xffffff00U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									 << 5U))) 
								  | (0xffffff00U 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									<< 6U))) 
								 | (0xffffff00U 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
								       << 7U))) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
								   << 8U))) 
							    | ((0x80U 
								& ((((0x1fffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									 >> 3U)) 
								     | (0xffffff80U 
									& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl))) 
								    | (0xffffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									  << 2U))) 
								   | (0xffffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									 << 6U)))) 
							       | ((0x40U 
								   & (((((((((0x1fffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 3U)) 
									     | (0x3fffffc0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 2U))) 
									    | (0x7fffffc0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 1U))) 
									   | (0xffffffc0U 
									      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl))) 
									  | (0xffffffc0U 
									     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										<< 1U))) 
									 | (0xffffffc0U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									       << 2U))) 
									| (0xffffffc0U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									      << 3U))) 
								       | (0xffffffc0U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									     << 4U))) 
								      | (0xffffffc0U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									    << 5U)))) 
								  | ((0x20U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									 << 5U)) 
								     | ((0x10U 
									 & (((((((((0x7fffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 5U)) 
										| (0xffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 4U))) 
										| (0x1ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 3U))) 
										| (0x3ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 2U))) 
										| (0x7ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 1U))) 
									       | (0xfffffff0U 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl))) 
									      | (0xfffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										<< 1U))) 
									     | (0xfffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										<< 2U))) 
									    | (0xfffffff0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										<< 3U)))) 
									| ((8U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
									       << 3U)) 
									   | ((4U 
									       & (((((((((0x1fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 7U)) 
										| (0x3fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 6U))) 
										| (0x7fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 5U))) 
										| (0xffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 4U))) 
										| (0x1ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 3U))) 
										| (0x3ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 2U))) 
										| (0x7ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 1U))) 
										| (0xfffffffcU 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl))) 
										| (0xfffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										<< 1U)))) 
									      | ((2U 
										& (((((((((0xfffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 8U)) 
										| (0x1fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 7U))) 
										| (0x3fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 6U))) 
										| (0x7fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 5U))) 
										| (0xffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 4U))) 
										| (0x1ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 3U))) 
										| (0x3ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 2U))) 
										| (0x7ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 1U))) 
										| (0xfffffffeU 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl)))) 
										| (1U 
										& ((((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 9U) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 8U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 7U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 6U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 5U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 4U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 3U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 2U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_905_19__ctl) 
										>> 1U)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_304::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B1__05D_990_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_304::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B1__05D_990_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
			    << 8U)) | ((0x8000U & (
						   (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							 << 5U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							   << 8U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							  << 9U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							 << 0xaU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							<< 0xcU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						       << 0xdU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						      << 0xeU))) 
				       | ((0x4000U 
					   & ((0xffffc000U 
					       & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						       << 4U) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							 << 8U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							<< 9U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						       << 0xbU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						      << 0xcU)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						     << 0xdU))) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						 << 0xeU))) 
					  | ((0x2000U 
					      & ((0xffffe000U 
						  & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							    << 7U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							   << 8U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							  << 0xaU)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							 << 0xbU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							<< 0xcU))) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						    << 0xdU))) 
					     | ((0x1000U 
						 & ((0xfffff000U 
						     & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							   << 2U) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							     << 7U)) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							   << 0xbU))) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						       << 0xcU))) 
						| ((0x800U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
						       << 3U)) 
						   | ((0x400U 
						       & ((0xfffffc00U 
							   & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
								  << 2U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
								 << 6U))) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							     << 0xaU))) 
						      | ((0x200U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
								<< 1U))) 
							 | ((0x100U 
							     & ((((((((((0x3fffff00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									    >> 2U)) 
									| (0x7fffff00U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									      >> 1U))) 
								       | (0xffffff00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									     << 1U))) 
								      | (0xffffff00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									    << 2U))) 
								     | (0xffffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									   << 3U))) 
								    | (0xffffff00U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									  << 4U))) 
								   | (0xffffff00U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									 << 5U))) 
								  | (0xffffff00U 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									<< 6U))) 
								 | (0xffffff00U 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
								       << 7U))) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
								   << 8U))) 
							    | ((0x80U 
								& ((((0x1fffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									 >> 3U)) 
								     | (0xffffff80U 
									& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl))) 
								    | (0xffffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									  << 2U))) 
								   | (0xffffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									 << 6U)))) 
							       | ((0x40U 
								   & (((((((((0x1fffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 3U)) 
									     | (0x3fffffc0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 2U))) 
									    | (0x7fffffc0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 1U))) 
									   | (0xffffffc0U 
									      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl))) 
									  | (0xffffffc0U 
									     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										<< 1U))) 
									 | (0xffffffc0U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									       << 2U))) 
									| (0xffffffc0U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									      << 3U))) 
								       | (0xffffffc0U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									     << 4U))) 
								      | (0xffffffc0U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									    << 5U)))) 
								  | ((0x20U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									 << 5U)) 
								     | ((0x10U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									    << 4U)) 
									| ((8U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
									       << 3U)) 
									   | ((4U 
									       & (((((((((0x1fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 7U)) 
										| (0x3fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 6U))) 
										| (0x7fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 5U))) 
										| (0xffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 4U))) 
										| (0x1ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 3U))) 
										| (0x3ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 2U))) 
										| (0x7ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										>> 1U))) 
										| (0xfffffffcU 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl))) 
										| (0xfffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										<< 1U)))) 
									      | ((2U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl) 
										<< 1U)) 
										| (1U 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B1__05D_990_19__ctl))))))))))))))))));
}

void Vfx68k_fx68k_mux_304::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_304::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(11);
    in_0 = VL_RAND_RESET_I(17);
    in_1 = VL_RAND_RESET_I(17);
    in_2 = VL_RAND_RESET_I(17);
    in_3 = VL_RAND_RESET_I(17);
    in_4 = VL_RAND_RESET_I(17);
    in_5 = VL_RAND_RESET_I(17);
    in_6 = VL_RAND_RESET_I(17);
    in_7 = VL_RAND_RESET_I(17);
    in_8 = VL_RAND_RESET_I(17);
    in_9 = VL_RAND_RESET_I(17);
    in_10 = VL_RAND_RESET_I(17);
    z = VL_RAND_RESET_I(17);
}
