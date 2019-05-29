// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_128.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_128) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_128::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_128::~Vfx68k_fx68k_mux_128() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_358_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_358_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80000U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
			     << 7U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				       << 0xaU))) | 
	       ((0x40000U & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				  << 6U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
					    << 7U)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				   << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
						<< 0xbU)) 
			      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				 << 0xcU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
					      << 0xeU))) 
		| ((0x20000U & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				    << 5U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
					      << 6U)) 
				  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				     << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
						  << 0xbU)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
				   << 0xdU))) | ((0x10000U 
						  & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							 << 4U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							   << 5U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							  << 9U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							 << 0xaU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							<< 0xcU))) 
						 | ((0x8000U 
						     & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							   << 0xbU))) 
						    | ((0x4000U 
							& (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							    << 3U) 
							   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
							      << 5U))) 
						       | ((0x2000U 
							   & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								<< 1U) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								  << 4U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								 << 8U))) 
							  | ((0x1000U 
							      & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								      << 1U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								     << 2U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
								    << 3U))) 
							     | ((0x800U 
								 & ((((((((0x7ffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									      >> 1U)) 
									  | (0xfffff800U 
									     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0))) 
									 | (0xfffff800U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									       << 1U))) 
									| (0xfffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									      << 3U))) 
								       | (0xfffff800U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									     << 4U))) 
								      | (0xfffff800U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									    << 5U))) 
								     | (0xfffff800U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									   << 6U))) 
								    | (0xfffff800U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									  << 7U)))) 
								| (0x400U 
								   & (((0x3ffffc00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									   >> 2U)) 
								       | (0xfffffc00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									     << 2U))) 
								      | (0xfffffc00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_358_19__out_0) 
									    << 4U)))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_376_19__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_376_19__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80000U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
			     << 7U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				       << 0xaU))) | 
	       ((0x40000U & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				  << 6U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
					    << 7U)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				   << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
						<< 0xbU)) 
			      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				 << 0xcU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
					      << 0xeU))) 
		| ((0x20000U & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				    << 5U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
					      << 6U)) 
				  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				     << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
						  << 0xbU)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
				   << 0xdU))) | ((0x10000U 
						  & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							 << 4U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							   << 5U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							  << 9U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							 << 0xaU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							<< 0xcU))) 
						 | ((0x8000U 
						     & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							   << 0xbU))) 
						    | ((0x4000U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
							   << 5U)) 
						       | ((0x2000U 
							   & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								 << 1U) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								   << 2U)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								  << 4U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								 << 8U))) 
							  | ((0x1000U 
							      & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								      << 1U)) 
								  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								     << 2U)) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
								    << 3U))) 
							     | ((0x800U 
								 & ((((((((0x7ffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									      >> 1U)) 
									  | (0xfffff800U 
									     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0))) 
									 | (0xfffff800U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									       << 1U))) 
									| (0xfffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									      << 3U))) 
								       | (0xfffff800U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									     << 4U))) 
								      | (0xfffff800U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									    << 5U))) 
								     | (0xfffff800U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									   << 6U))) 
								    | (0xfffff800U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									  << 7U)))) 
								| (0x400U 
								   & (((0x3ffffc00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									   >> 2U)) 
								       | (0xfffffc00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									     << 2U))) 
								      | (0xfffffc00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_376_19__out_0) 
									    << 4U)))))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_394_19__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_128::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_cmbsop_arA1__05B0__05D_394_19__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80000U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
			     << 7U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				       << 0xaU))) | 
	       ((0x40000U & (((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				  << 6U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
					    << 7U)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				   << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
						<< 0xbU)) 
			      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				 << 0xcU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
					      << 0xeU))) 
		| ((0x20000U & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				    << 5U) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
					      << 6U)) 
				  | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				     << 0xaU)) | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
						  << 0xbU)) 
				| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
				   << 0xdU))) | ((0x10000U 
						  & ((((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							 << 4U) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							   << 5U)) 
						       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							  << 9U)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							 << 0xaU)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							<< 0xcU))) 
						 | ((0x8000U 
						     & ((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							  << 3U) 
							 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							    << 9U)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							   << 0xbU))) 
						    | ((0x4000U 
							& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
							   << 5U)) 
						       | ((0x2000U 
							   & (((((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								 << 1U) 
								| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								   << 2U)) 
							       | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								  << 4U)) 
							      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								 << 8U))) 
							  | ((0x1000U 
							      & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								  << 2U) 
								 | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
								    << 3U))) 
							     | ((0x800U 
								 & ((((((((0x7ffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									      >> 1U)) 
									  | (0xfffff800U 
									     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0))) 
									 | (0xfffff800U 
									    & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									       << 1U))) 
									| (0xfffff800U 
									   & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									      << 3U))) 
								       | (0xfffff800U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									     << 4U))) 
								      | (0xfffff800U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									    << 5U))) 
								     | (0xfffff800U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									   << 6U))) 
								    | (0xfffff800U 
								       & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									  << 7U)))) 
								| (0x400U 
								   & (((0x3ffffc00U 
									& ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									   >> 2U)) 
								       | (0xfffffc00U 
									  & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									     << 2U))) 
								      | (0xfffffc00U 
									 & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__ctl_394_19__out_0) 
									    << 4U)))))))))))));
}

void Vfx68k_fx68k_mux_128::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vfx68k_fx68k_mux_128::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(9);
    in_0 = VL_RAND_RESET_I(20);
    in_1 = VL_RAND_RESET_I(20);
    in_2 = VL_RAND_RESET_I(20);
    in_3 = VL_RAND_RESET_I(20);
    in_4 = VL_RAND_RESET_I(20);
    in_5 = VL_RAND_RESET_I(20);
    in_6 = VL_RAND_RESET_I(20);
    in_7 = VL_RAND_RESET_I(20);
    in_8 = VL_RAND_RESET_I(20);
    z = VL_RAND_RESET_I(20);
}
