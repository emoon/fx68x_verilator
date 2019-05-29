// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_1423.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_1423) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_1423::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_1423::~Vfx68k_fx68k_mux_1423() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_1423::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_854_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_1423::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_854_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
			       << 0xaU) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
					   << 0xbU)) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
				<< 0xdU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
					     << 0xfU))) 
	       | ((0x8000U & ((0xffff8000U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
					       << 0xbU) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
						 << 0xdU))) 
			      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
				 << 0xfU))) | ((0x4000U 
						& ((0xffffc000U 
						    & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							   << 9U) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							     << 0xaU)) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							    << 0xbU)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							   << 0xcU)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							  << 0xdU))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
						      << 0xeU))) 
					       | ((0x2000U 
						   & ((0xffffe000U 
						       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							    << 7U) 
							   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							      << 9U)) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							     << 0xbU))) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							 << 0xdU))) 
						  | ((0x1000U 
						      & ((0xfffff000U 
							  & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								 << 6U) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								   << 7U)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								  << 8U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								 << 0xaU)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								<< 0xbU))) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							    << 0xcU))) 
						     | ((0x800U 
							 & ((0xfffff800U 
							     & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								   << 5U) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								     << 7U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								    << 8U)) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								   << 9U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
							       << 0xbU))) 
							| (0x400U 
							   & ((0xfffffc00U 
							       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								    << 4U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								      << 6U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								     << 7U))) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_854_19__ctl) 
								 << 0xaU)))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_1423::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_872_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_1423::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B4__05D_872_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
			       << 0xaU) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
					   << 0xbU)) 
			     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
				<< 0xdU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
					     << 0xfU))) 
	       | ((0x8000U & ((0xffff8000U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
					       << 0xbU) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
						 << 0xdU))) 
			      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
				 << 0xfU))) | ((0x4000U 
						& ((0xffffc000U 
						    & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							   << 9U) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							     << 0xaU)) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							    << 0xbU)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							   << 0xcU)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							  << 0xdU))) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
						      << 0xeU))) 
					       | ((0x2000U 
						   & ((0xffffe000U 
						       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							    << 7U) 
							   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							      << 9U)) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							     << 0xbU))) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							 << 0xdU))) 
						  | ((0x1000U 
						      & ((0xfffff000U 
							  & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								<< 7U) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								  << 8U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								 << 0xaU)) 
							     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								<< 0xbU))) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							    << 0xcU))) 
						     | ((0x800U 
							 & ((0xfffff800U 
							     & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								  << 7U) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								    << 8U)) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								   << 9U))) 
							    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
							       << 0xbU))) 
							| (0x400U 
							   & ((0xfffffc00U 
							       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								    << 4U) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								      << 6U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								     << 7U))) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellinp__mux_cmbsop_arA1__05B4__05D_872_19__ctl) 
								 << 0xaU)))))))));
}

void Vfx68k_fx68k_mux_1423::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_1423::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(7);
    in_0 = VL_RAND_RESET_I(17);
    in_1 = VL_RAND_RESET_I(17);
    in_2 = VL_RAND_RESET_I(17);
    in_3 = VL_RAND_RESET_I(17);
    in_4 = VL_RAND_RESET_I(17);
    in_5 = VL_RAND_RESET_I(17);
    in_6 = VL_RAND_RESET_I(17);
    z = VL_RAND_RESET_I(17);
}
