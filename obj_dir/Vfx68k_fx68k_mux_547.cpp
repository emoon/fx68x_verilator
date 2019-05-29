// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_547.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_547) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_547::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_547::~Vfx68k_fx68k_mux_547() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_547::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1208_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_547::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1208_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
			    << 7U)) | ((0x8000U & (
						   ((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							    << 4U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							   << 7U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							  << 8U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							 << 9U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							<< 0xbU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						       << 0xcU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						      << 0xdU))) 
				       | ((0x4000U 
					   & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						   << 7U) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						     << 8U)) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						    << 0xaU)) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						   << 0xbU)) 
					       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						  << 0xcU)) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						 << 0xdU))) 
					  | ((0x2000U 
					      & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						      << 6U) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							<< 7U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						       << 9U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						      << 0xaU)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						     << 0xbU)) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						    << 0xcU))) 
					     | ((0x1000U 
						 & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							   << 1U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							  << 6U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							 << 8U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							<< 0xaU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						       << 0xbU))) 
						| ((0x800U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
						       << 2U)) 
						   | ((0x400U 
						       & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							    << 1U) 
							   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							      << 5U)) 
							  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
							     << 9U))) 
						      | ((0x200U 
							  & ((0x7ffffe00U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
								 >> 1U)) 
							     | (0xfffffe00U 
								& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0)))) 
							 | ((0x100U 
							     & (((((((((0x3fffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									   >> 2U)) 
								       | (0xffffff00U 
									  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0))) 
								      | (0xffffff00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									    << 1U))) 
								     | (0xffffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									   << 2U))) 
								    | (0xffffff00U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									  << 3U))) 
								   | (0xffffff00U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									 << 4U))) 
								  | (0xffffff00U 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									<< 5U))) 
								 | (0xffffff00U 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
								       << 6U))) 
								| (0xffffff00U 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
								      << 7U)))) 
							    | ((0x80U 
								& (((((0x7ffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									  >> 5U)) 
								      | (0xfffff80U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									    >> 4U))) 
								     | (0x7fffff80U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									   >> 1U))) 
								    | (0xffffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									  << 1U))) 
								   | (0xffffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									 << 5U)))) 
							       | ((0x40U 
								   & (((((((((0xfffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 4U)) 
									     | (0x1fffffc0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 3U))) 
									    | (0x3fffffc0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 2U))) 
									   | (0x7fffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 1U))) 
									  | (0xffffffc0U 
									     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0))) 
									 | (0xffffffc0U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									       << 1U))) 
									| (0xffffffc0U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									      << 2U))) 
								       | (0xffffffc0U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									     << 3U))) 
								      | (0xffffffc0U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									    << 4U)))) 
								  | ((0x20U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									 << 4U)) 
								     | ((0x10U 
									 & (((((((((0x3fffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 6U)) 
										| (0x7fffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 5U))) 
										| (0xffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 4U))) 
										| (0x1ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 3U))) 
										| (0x3ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 2U))) 
									       | (0x7ffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 1U))) 
									      | (0xfffffff0U 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0))) 
									     | (0xfffffff0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										<< 1U))) 
									    | (0xfffffff0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										<< 2U)))) 
									| ((8U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
									       << 2U)) 
									   | ((4U 
									       & (((((((((0xfffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 8U)) 
										| (0x1fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 7U))) 
										| (0x3fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 6U))) 
										| (0x7fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 5U))) 
										| (0xffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 4U))) 
										| (0x1ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 3U))) 
										| (0x3ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 2U))) 
										| (0x7ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 1U))) 
										| (0xfffffffcU 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0)))) 
									      | ((2U 
										& (((((((((0x7ffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 9U)) 
										| (0xfffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 8U))) 
										| (0x1fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 7U))) 
										| (0x3fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 6U))) 
										| (0x7fffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 5U))) 
										| (0xffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 4U))) 
										| (0x1ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 3U))) 
										| (0x3ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 2U))) 
										| (0x7ffffffeU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 1U)))) 
										| (1U 
										& ((((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 0xaU) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 9U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 8U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 7U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 6U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 5U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 4U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 3U)) 
										| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1208_19__out_0) 
										>> 2U)))))))))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_547::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1310_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_547::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B3__05D_1310_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x10000U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
			    << 7U)) | ((0x8000U & (
						   ((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							    << 4U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							   << 7U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							  << 8U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							 << 9U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							<< 0xbU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						       << 0xcU)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						      << 0xdU))) 
				       | ((0x4000U 
					   & (((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						     << 2U) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						       << 3U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						      << 7U)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						     << 8U)) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						    << 0xaU)) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						   << 0xbU)) 
					       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						  << 0xcU)) 
					      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						 << 0xdU))) 
					  | ((0x2000U 
					      & (((((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							<< 1U) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							  << 2U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							 << 6U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							<< 7U)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						       << 9U)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						      << 0xaU)) 
						  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						     << 0xbU)) 
						 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						    << 0xcU))) 
					     | ((0x1000U 
						 & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							   << 1U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							  << 6U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							 << 8U)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
							<< 0xaU)) 
						    | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						       << 0xbU))) 
						| ((0x800U 
						    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
						       << 2U)) 
						   | ((0x400U 
						       & (((((0x3ffffc00U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								 >> 2U)) 
							     | (0x7ffffc00U 
								& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								   >> 1U))) 
							    | (0xfffffc00U 
							       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								  << 1U))) 
							   | (0xfffffc00U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								 << 5U))) 
							  | (0xfffffc00U 
							     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								<< 9U)))) 
						      | ((0x200U 
							  & ((0x7ffffe00U 
							      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								 >> 1U)) 
							     | (0xfffffe00U 
								& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0)))) 
							 | ((0x100U 
							     & (((((((((((0xfffff00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									     >> 4U)) 
									 | (0x1fffff00U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									       >> 3U))) 
									| (0x3fffff00U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									      >> 2U))) 
								       | (0xffffff00U 
									  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0))) 
								      | (0xffffff00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									    << 1U))) 
								     | (0xffffff00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									   << 2U))) 
								    | (0xffffff00U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									  << 3U))) 
								   | (0xffffff00U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									 << 4U))) 
								  | (0xffffff00U 
								     & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									<< 5U))) 
								 | (0xffffff00U 
								    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								       << 6U))) 
								| (0xffffff00U 
								   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
								      << 7U)))) 
							    | ((0x80U 
								& (((((0x7ffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									  >> 5U)) 
								      | (0xfffff80U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									    >> 4U))) 
								     | (0x7fffff80U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									   >> 1U))) 
								    | (0xffffff80U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									  << 1U))) 
								   | (0xffffff80U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									 << 5U)))) 
							       | ((0x40U 
								   & (((((((((0xfffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 4U)) 
									     | (0x1fffffc0U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 3U))) 
									    | (0x3fffffc0U 
									       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 2U))) 
									   | (0x7fffffc0U 
									      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 1U))) 
									  | (0xffffffc0U 
									     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0))) 
									 | (0xffffffc0U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									       << 1U))) 
									| (0xffffffc0U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									      << 2U))) 
								       | (0xffffffc0U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									     << 3U))) 
								      | (0xffffffc0U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									    << 4U)))) 
								  | ((0x20U 
								      & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									 << 4U)) 
								     | ((0x10U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									    << 3U)) 
									| ((8U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
									       << 2U)) 
									   | ((4U 
									       & (((((((((0xfffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 8U)) 
										| (0x1fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 7U))) 
										| (0x3fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 6U))) 
										| (0x7fffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 5U))) 
										| (0xffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 4U))) 
										| (0x1ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 3U))) 
										| (0x3ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 2U))) 
										| (0x7ffffffcU 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 1U))) 
										| (0xfffffffcU 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0)))) 
									      | ((2U 
										& (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0)) 
										| (1U 
										& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_1310_19__out_0) 
										>> 1U))))))))))))))))));
}

void Vfx68k_fx68k_mux_547::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_547::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(12);
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
    in_11 = VL_RAND_RESET_I(17);
    z = VL_RAND_RESET_I(17);
}
