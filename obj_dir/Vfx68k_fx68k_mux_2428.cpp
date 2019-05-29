// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_mux_2428.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_mux_2428) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_mux_2428::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_mux_2428::~Vfx68k_fx68k_mux_2428() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1512_28__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1512_28__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B2__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B2__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1512_28__4(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1512_28__4\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B3__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B3__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1512_28__5(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1512_28__5\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B4__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B4__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1512_28__6(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1512_28__6\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B5__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B5__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1512_28__7(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1512_28__7\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B6__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B6__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1512_28__8(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1512_28__8\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B7__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B7__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1512_28__9(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1512_28__9\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B8__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B8__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1512_28__10(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1512_28__10\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B9__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B9__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1512_28__11(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1512_28__11\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B10__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B10__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1512_28__12(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1512_28__12\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B11__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B11__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1512_28__13(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1512_28__13\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B12__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B12__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1512_28__14(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1512_28__14\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B13__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B13__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1512_28__15(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1512_28__15\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B14__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B14__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1512_28__16(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1512_28__16\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B15__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B15__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1512_28__17(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1512_28__17\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B16__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B16__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1512_28__18(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1512_28__18\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B17__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B17__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1512_28__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1512_28__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B1__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B1__05D_1500_9.z)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1512_28__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_settle__TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1512_28__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
			   << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
			 | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
			     << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
			      << 5U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
			    | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				<< 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				 << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
			       | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				   << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				      << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				    << 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
				  | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				      << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
				       << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
				     | (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
					 << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
			      | ((2U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
					 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
					| (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
					    << 1U) 
					   & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))) 
				 | (1U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
					    >> 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__in_0)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT____Vcellinp__mux_regs68L__05B0__05D_1512_28__ctl) 
					     & (IData)(vlSymsp->TOP__fx68k__DOT__excUnit__DOT__mux_regs68L__05B0__05D_1500_9.z)))))))))));
}

void Vfx68k_fx68k_mux_2428::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfx68k_fx68k_mux_2428::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(2);
    in_0 = VL_RAND_RESET_I(8);
    in_1 = VL_RAND_RESET_I(8);
    z = VL_RAND_RESET_I(8);
}
