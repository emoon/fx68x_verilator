// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_77.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_77) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_77::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_77::~Vfx68k_fx68k_mux_77() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_250_19__4(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_250_19__4\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							<< 1U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl)) 
						  | ((8U 
						      & (((((0xffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								>> 4U)) 
							    | (0x1ffffff8U 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								  >> 3U))) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & ((((((0x7fffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								       >> 5U)) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								    >> 6U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_250_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_268_19__5(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_268_19__5\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							<< 1U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl)) 
						  | ((8U 
						      & (((((0xffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								>> 4U)) 
							    | (0x1ffffff8U 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								  >> 3U))) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & ((((((0x7fffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								       >> 5U)) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								    >> 6U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_268_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_322_19__6(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_322_19__6\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							<< 1U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl)) 
						  | ((8U 
						      & (((((0xffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								>> 4U)) 
							    | (0x1ffffff8U 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								  >> 3U))) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & ((((((0x7fffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								       >> 5U)) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								    >> 6U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_322_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_520_19__7(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_520_19__7\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((0xffffffe0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							<< 1U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl)) 
						  | ((8U 
						      & ((((0x1ffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							       >> 3U)) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & ((((((0x7fffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								       >> 5U)) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								    >> 6U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B0__05D_520_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_584_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_584_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((((0x3fffffe0U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							 >> 2U)) 
						     | (0xffffffe0U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							   << 1U))) 
						    | (0xffffffe0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & ((0x1ffffff0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							  >> 3U)) 
						      | (0xfffffff0U 
							 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl)))) 
						  | ((8U 
						      & ((((0x1ffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							       >> 3U)) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & (((((((0x3fffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
									>> 6U)) 
								    | (0x7fffffeU 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
									  >> 5U))) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								     >> 7U) 
								    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								       >> 6U)) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_584_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_764_19__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_764_19__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((0xffffff00U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
					     << 1U) 
					    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
					       << 4U)) 
					   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
					      << 5U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
					     << 6U))) 
			  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
			     << 8U))) | ((0x80U & (
						   (0xffffff80U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							<< 4U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							  << 5U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
						      << 7U))) 
					 | ((0x40U 
					     & ((0xffffffc0U 
						 & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
						      << 2U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							<< 3U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
						       << 4U))) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
						   << 6U))) 
					    | ((0x20U 
						& ((((0x3fffffe0U 
						      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							 >> 2U)) 
						     | (0xffffffe0U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							   << 1U))) 
						    | (0xffffffe0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							  << 3U))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
						      << 5U))) 
					       | ((0x10U 
						   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl)) 
						  | ((8U 
						      & ((((0x1ffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							       >> 3U)) 
							   | (0x3ffffff8U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								 >> 2U))) 
							  | (0x7ffffff8U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								>> 1U))) 
							 | (0xfffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							       << 2U)))) 
						     | ((4U 
							 & ((((((0x7fffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								    >> 5U)) 
								| (0x1ffffffcU 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								      >> 3U))) 
							       | (0x7ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								     >> 1U))) 
							      | (0xfffffffcU 
								 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl))) 
							     | (0xfffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								   << 1U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
							       << 2U))) 
							| ((2U 
							    & ((((((0x7fffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								       >> 5U)) 
								   | (0xffffffeU 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
									 >> 4U))) 
								  | (0x3ffffffeU 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
									>> 2U))) 
								 | (0x7ffffffeU 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								       >> 1U))) 
								| (0xfffffffeU 
								   & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl))) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								  << 1U))) 
							   | (1U 
							      & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								     >> 7U) 
								    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								       >> 6U)) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								      >> 5U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								     >> 4U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_764_19__ctl) 
								    >> 2U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_a1Misc_152_16__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_a1Misc_152_16__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x100U & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
			    << 2U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
				      << 3U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
						 << 4U))) 
	       | ((0x80U & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
				 << 1U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
					   << 2U)) 
			       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
				  << 3U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
					     << 4U)) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
				<< 5U)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
					   << 6U))) 
		  | ((0x40U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
			       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
				  << 2U))) | ((0x20U 
					       & ((0x3fffffe0U 
						   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
						      >> 2U)) 
						  | (0xffffffe0U 
						     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0)))) 
					      | ((0x10U 
						  & (((0x1ffffff0U 
						       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							  >> 3U)) 
						      | (0xfffffff0U 
							 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							    << 1U))) 
						     | (0xfffffff0U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							   << 2U)))) 
						 | ((8U 
						     & (((0xffffff8U 
							  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							     >> 4U)) 
							 | (0x1ffffff8U 
							    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							       >> 3U))) 
							| (0xfffffff8U 
							   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
							      << 2U)))) 
						    | ((4U 
							& ((((((0xffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								   >> 4U)) 
							       | (0x1ffffffcU 
								  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								     >> 3U))) 
							      | (0x3ffffffcU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								    >> 2U))) 
							     | (0x7ffffffcU 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								   >> 1U))) 
							    | (0xfffffffcU 
							       & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0))) 
							   | (0xfffffffcU 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								 << 1U)))) 
						       | ((2U 
							   & ((0x3fffffeU 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								  >> 6U)) 
							      | (0xffffffeU 
								 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0) 
								    >> 4U)))) 
							  | (1U 
							     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_152_16__out_0))))))))));
}

void Vfx68k_fx68k_mux_77::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_77::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(8);
    in_0 = VL_RAND_RESET_I(9);
    in_1 = VL_RAND_RESET_I(9);
    in_2 = VL_RAND_RESET_I(9);
    in_3 = VL_RAND_RESET_I(9);
    in_4 = VL_RAND_RESET_I(9);
    in_5 = VL_RAND_RESET_I(9);
    in_6 = VL_RAND_RESET_I(9);
    in_7 = VL_RAND_RESET_I(9);
    z = VL_RAND_RESET_I(9);
}
