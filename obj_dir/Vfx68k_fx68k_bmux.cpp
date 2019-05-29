// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_bmux.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_bmux) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_bmux::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_bmux::~Vfx68k_fx68k_bmux() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_622_22__3(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_622_22__3\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
			   << 7U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
			 | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
			     << 7U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
	       | ((0x40U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
			      << 6U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
			    | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
				<< 6U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
		  | ((0x20U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
				 << 5U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
			       | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
				   << 5U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
		     | ((0x10U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
				    << 4U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
				  | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
				      << 4U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
			| ((8U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
				    << 3U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
				  | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
				      << 3U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
			   | ((4U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
				       << 2U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
				     | (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
					 << 2U) & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
			      | ((2U & ((((IData)(vlTOPp->fx68k__DOT__n_1825) 
					  << 1U) & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
					| (((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
					    << 1U) 
					   & (IData)(vlTOPp->fx68k__DOT__Ird)))) 
				 | (1U & (((IData)(vlTOPp->fx68k__DOT__n_1825) 
					   & (IData)(vlTOPp->fx68k__DOT__tvnLatch)) 
					  | ((~ (IData)(vlTOPp->fx68k__DOT__n_1825)) 
					     & (IData)(vlTOPp->fx68k__DOT__Ird)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_620_22__8(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_620_22__8\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp1,31,0);
    // Body
    __Vtemp1 = ((0xc0U & ((VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__n_1820))) 
			   << 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z))) 
		| ((0xffffffe0U & (((IData)(vlTOPp->fx68k__DOT__n_1820) 
				    << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z))) 
		   | ((0x10U & ((0xfffffff0U & (((IData)(vlTOPp->fx68k__DOT__n_1820) 
						 << 4U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z))) 
				| ((~ (IData)(vlTOPp->fx68k__DOT__n_1820)) 
				   << 4U))) | ((8U 
						& ((0xfffffff8U 
						    & (((IData)(vlTOPp->fx68k__DOT__n_1820) 
							<< 3U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z))) 
						   | ((~ (IData)(vlTOPp->fx68k__DOT__n_1820)) 
						      << 3U))) 
					       | ((4U 
						   & ((((IData)(vlTOPp->fx68k__DOT__n_1820) 
							<< 2U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z)) 
						      | (((~ (IData)(vlTOPp->fx68k__DOT__n_1820)) 
							  << 2U) 
							 & (IData)(vlTOPp->fx68k__DOT__pswI)))) 
						  | ((2U 
						      & ((((IData)(vlTOPp->fx68k__DOT__n_1820) 
							   << 1U) 
							  & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z)) 
							 | (((~ (IData)(vlTOPp->fx68k__DOT__n_1820)) 
							     << 1U) 
							    & (IData)(vlTOPp->fx68k__DOT__pswI)))) 
						     | (1U 
							& (((IData)(vlTOPp->fx68k__DOT__n_1820) 
							    & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_622_22.z)) 
							   | ((~ (IData)(vlTOPp->fx68k__DOT__n_1820)) 
							      & (IData)(vlTOPp->fx68k__DOT__pswI))))))))));
    this->z = __Vtemp1;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_618_17__10(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_618_17__10\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp2,31,0);
    // Body
    __Vtemp2 = ((0xc0U & ((VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__n_1815))) 
			   << 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))) 
		| ((0xffffffe0U & (((IData)(vlTOPp->fx68k__DOT__n_1815) 
				    << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))) 
		   | ((0x10U & ((0xfffffff0U & (((IData)(vlTOPp->fx68k__DOT__n_1815) 
						 << 4U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))) 
				| ((~ (IData)(vlTOPp->fx68k__DOT__n_1815)) 
				   << 4U))) | ((8U 
						& ((0xfffffff8U 
						    & (((IData)(vlTOPp->fx68k__DOT__n_1815) 
							<< 3U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))) 
						   | ((~ (IData)(vlTOPp->fx68k__DOT__n_1815)) 
						      << 3U))) 
					       | ((0xfffffffcU 
						   & (((IData)(vlTOPp->fx68k__DOT__n_1815) 
						       << 2U) 
						      & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))) 
						  | (3U 
						     & (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__n_1815))) 
							& (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_620_22.z))))))));
    this->z = __Vtemp2;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_616_7__12(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__mux_tvnMux_616_7__12\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp3,31,0);
    // Body
    __Vtemp3 = ((0x80U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
			    << 7U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
			  | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
			      << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
		| ((0x40U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
			       << 6U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
			     | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
				 << 6U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
		   | ((0x20U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
				  << 5U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
				| (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
				    << 5U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
		      | ((0x10U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
				     << 4U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
				   | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
				       << 4U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
			 | ((8U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
				     << 3U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
				   | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
				       << 3U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
			    | ((4U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
					<< 2U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
				      | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
					  << 2U) & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
			       | ((2U & ((((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
					   << 1U) & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
					 | (((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
					     << 1U) 
					    & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))) 
				  | (1U & (((~ (IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi)) 
					    & (IData)(vlTOPp->fx68k__DOT____Vcellinp__mux_tvnMux_616_7__in_0)) 
					   | ((IData)(vlTOPp->fx68k__DOT__inExcept01_reg__DOT__qi) 
					      & (IData)(vlSymsp->TOP__fx68k__DOT__mux_tvnMux_618_17.z)))))))))));
    this->z = __Vtemp3;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32__7(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32__7\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0xc0U & ((0xffffffc0U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z)) 
			 | (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521))) 
			    << 6U))) | ((0x20U & ((
						   (~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521)) 
						   << 5U) 
						  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z))) 
					| ((0x10U & 
					    (((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521)) 
					      << 4U) 
					     & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z))) 
					   | ((8U & 
					       ((0xfffffff8U 
						 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z)) 
						| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521) 
						   << 3U))) 
					      | ((4U 
						  & ((0xfffffffcU 
						      & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z)) 
						     | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521) 
							<< 2U))) 
						 | ((2U 
						     & ((0xfffffffeU 
							 & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z)) 
							| ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521) 
							   << 1U))) 
						    | (1U 
						       & ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23521)) 
							  & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT____Vcellout__mux_scA3_267_24__z)))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32__9(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32__9\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp4,31,0);
    // Body
    __Vtemp4 = ((0x80U & ((0xffffff80U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
					   << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
			  | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864)) 
			     << 7U))) | ((0x40U & (
						   (0xffffffc0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
							<< 6U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
						   | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864)) 
						      << 6U))) 
					 | ((0xffffffe0U 
					     & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
						 << 5U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
					    | ((0xfffffff0U 
						& (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
						    << 4U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
					       | ((8U 
						   & ((0xfffffff8U 
						       & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
							   << 3U) 
							  & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
						      | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864)) 
							 << 3U))) 
						  | ((4U 
						      & ((0xfffffffcU 
							  & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864) 
							      << 2U) 
							     & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z))) 
							 | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864)) 
							    << 2U))) 
						     | (3U 
							& (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27864))) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_249_32.z)))))))));
    this->z = __Vtemp4;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32__11(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32__11\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp5,31,0);
    // Body
    __Vtemp5 = ((0xc0U & ((0xffffffc0U & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z)) 
			  | (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501))) 
			     << 6U))) | ((0x20U & (
						   ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501)) 
						    << 5U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z))) 
					 | ((0x10U 
					     & (((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501)) 
						 << 4U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z))) 
					    | ((8U 
						& ((0xfffffff8U 
						    & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501) 
						      << 3U))) 
					       | ((4U 
						   & ((0xfffffffcU 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501) 
							 << 2U))) 
						  | ((2U 
						      & (((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501)) 
							  << 1U) 
							 & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z))) 
						     | (1U 
							& ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23501)) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_231_32.z)))))))));
    this->z = __Vtemp5;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32__13(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32__13\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp6,31,0);
    // Body
    __Vtemp6 = ((0x80U & ((0xffffff80U & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
					   << 7U) & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
			  | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853)) 
			     << 7U))) | ((0x40U & (
						   (0xffffffc0U 
						    & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
							<< 6U) 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
						   | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853)) 
						      << 6U))) 
					 | ((0xffffffe0U 
					     & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
						 << 5U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
					    | ((0xfffffff0U 
						& (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
						    << 4U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
					       | ((8U 
						   & ((0xfffffff8U 
						       & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
							   << 3U) 
							  & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
						      | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853)) 
							 << 3U))) 
						  | ((4U 
						      & ((0xfffffffcU 
							  & (((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853) 
							      << 2U) 
							     & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z))) 
							 | ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853)) 
							    << 2U))) 
						     | (3U 
							& (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_27853))) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_213_32.z)))))))));
    this->z = __Vtemp6;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_177_27__14(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_177_27__14\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtemp7,31,0);
    // Body
    __Vtemp7 = ((0xc0U & ((0xffffffc0U & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z)) 
			  | (VL_NEGATE_I((IData)((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477))) 
			     << 6U))) | ((0x20U & (
						   ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477)) 
						    << 5U) 
						   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z))) 
					 | ((0x10U 
					     & (((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477)) 
						 << 4U) 
						& (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z))) 
					    | ((8U 
						& ((0xfffffff8U 
						    & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z)) 
						   | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477) 
						      << 3U))) 
					       | ((4U 
						   & ((0xfffffffcU 
						       & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z)) 
						      | ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477) 
							 << 2U))) 
						  | ((2U 
						      & (((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477)) 
							  << 1U) 
							 & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z))) 
						     | (1U 
							& ((~ (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__n_23477)) 
							   & (IData)(vlSymsp->TOP__fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__mux_scA3_195_32.z)))))))));
    this->z = __Vtemp7;
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1761_16__4(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1761_16__4\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((0xffffff80U & (((~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
					      >> 0x17U)) 
					  << 7U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
			 | (0xff80U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
					>> 0x10U) & 
				       ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					>> 8U))))) 
	       | ((0x40U & ((0xffffffc0U & (((~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
						 >> 0x17U)) 
					     << 6U) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
			    | (0x7fc0U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
					   >> 0x11U) 
					  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					     >> 8U))))) 
		  | ((0x20U & ((0xffffffe0U & (((~ 
						 (vlTOPp->fx68k__DOT__nanoLatch[1U] 
						  >> 0x17U)) 
						<< 5U) 
					       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
			       | (0x3fe0U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
					      >> 0x12U) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						>> 8U))))) 
		     | ((0x10U & ((0xfffffff0U & ((
						   (~ 
						    (vlTOPp->fx68k__DOT__nanoLatch[1U] 
						     >> 0x17U)) 
						   << 4U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
				  | (0x1ff0U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
						 >> 0x13U) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						   >> 8U))))) 
			| ((8U & ((0xfffffff8U & ((
						   (~ 
						    (vlTOPp->fx68k__DOT__nanoLatch[1U] 
						     >> 0x17U)) 
						   << 3U) 
						  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
				  | (0xff8U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
						>> 0x14U) 
					       & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						  >> 8U))))) 
			   | ((4U & ((0xfffffffcU & 
				      (((~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
					    >> 0x17U)) 
					<< 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
				     | (0x7fcU & ((
						   vlTOPp->fx68k__DOT__nanoLatch[1U] 
						   >> 0x15U) 
						  & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						     >> 8U))))) 
			      | ((2U & ((0xfffffffeU 
					 & (((~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
						 >> 0x17U)) 
					     << 1U) 
					    & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))) 
					| (0x3feU & 
					   ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
					     >> 0x16U) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					       >> 8U))))) 
				 | (1U & (((~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
					       >> 0x17U)) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput)) 
					  | ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
					      >> 0x17U) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						>> 8U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1762_28__5(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1762_28__5\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((0xffff80U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
					<< 7U) & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						  >> 8U))) 
			 | (0xffffff80U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
					    << 7U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
	       | ((0x40U & ((0xffffc0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
					   << 6U) & 
					  ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					   >> 8U))) 
			    | (0xffffffc0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
					       << 6U) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
		  | ((0x20U & ((0xffffe0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
					      << 5U) 
					     & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						>> 8U))) 
			       | (0xffffffe0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
						  << 5U) 
						 & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
		     | ((0x10U & ((0xfffff0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
						 << 4U) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						   >> 8U))) 
				  | (0xfffffff0U & 
				     (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
				       << 4U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
			| ((8U & ((0xfffff8U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
						 << 3U) 
						& ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						   >> 8U))) 
				  | (0xfffffff8U & 
				     (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
				       << 3U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
			   | ((4U & ((0xfffffcU & (
						   ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
						    << 2U) 
						   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
						      >> 8U))) 
				     | (0xfffffffcU 
					& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
					    << 2U) 
					   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
			      | ((2U & ((0xfffffeU 
					 & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
					     << 1U) 
					    & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					       >> 8U))) 
					| (0xfffffffeU 
					   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
					       << 1U) 
					      & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput))))) 
				 | (1U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22)) 
					   & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput) 
					      >> 8U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_22) 
					     & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1740_19__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1740_19__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((0xffffff80U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
					  << 7U) & (IData)(vlTOPp->iEdb))) 
			 | (0xffff80U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
					  << 7U) & 
					 ((IData)(vlTOPp->iEdb) 
					  >> 8U))))) 
	       | ((0x40U & ((0xffffffc0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
					     << 6U) 
					    & (IData)(vlTOPp->iEdb))) 
			    | (0xffffc0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
					     << 6U) 
					    & ((IData)(vlTOPp->iEdb) 
					       >> 8U))))) 
		  | ((0x20U & ((0xffffffe0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
						<< 5U) 
					       & (IData)(vlTOPp->iEdb))) 
			       | (0xffffe0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
						<< 5U) 
					       & ((IData)(vlTOPp->iEdb) 
						  >> 8U))))) 
		     | ((0x10U & ((0xfffffff0U & ((
						   (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
						   << 4U) 
						  & (IData)(vlTOPp->iEdb))) 
				  | (0xfffff0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
						   << 4U) 
						  & ((IData)(vlTOPp->iEdb) 
						     >> 8U))))) 
			| ((8U & ((0xfffffff8U & ((
						   (~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
						   << 3U) 
						  & (IData)(vlTOPp->iEdb))) 
				  | (0xfffff8U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
						   << 3U) 
						  & ((IData)(vlTOPp->iEdb) 
						     >> 8U))))) 
			   | ((4U & ((0xfffffffcU & 
				      (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
					<< 2U) & (IData)(vlTOPp->iEdb))) 
				     | (0xfffffcU & 
					(((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
					  << 2U) & 
					 ((IData)(vlTOPp->iEdb) 
					  >> 8U))))) 
			      | ((2U & ((0xfffffffeU 
					 & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
					     << 1U) 
					    & (IData)(vlTOPp->iEdb))) 
					| (0xfffffeU 
					   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
					       << 1U) 
					      & ((IData)(vlTOPp->iEdb) 
						 >> 8U))))) 
				 | (1U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi)) 
					   & (IData)(vlTOPp->iEdb)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux_reg__DOT__qi) 
					     & ((IData)(vlTOPp->iEdb) 
						>> 8U)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1742_29__2(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__dataIo__DOT__mux_1742_29__2\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & ((0xffff80U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
					<< 7U) & ((IData)(vlTOPp->iEdb) 
						  >> 8U))) 
			 | (0xffffff80U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
					    << 7U) 
					   & (IData)(vlTOPp->iEdb))))) 
	       | ((0x40U & ((0xffffc0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
					   << 6U) & 
					  ((IData)(vlTOPp->iEdb) 
					   >> 8U))) 
			    | (0xffffffc0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
					       << 6U) 
					      & (IData)(vlTOPp->iEdb))))) 
		  | ((0x20U & ((0xffffe0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
					      << 5U) 
					     & ((IData)(vlTOPp->iEdb) 
						>> 8U))) 
			       | (0xffffffe0U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
						  << 5U) 
						 & (IData)(vlTOPp->iEdb))))) 
		     | ((0x10U & ((0xfffff0U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
						 << 4U) 
						& ((IData)(vlTOPp->iEdb) 
						   >> 8U))) 
				  | (0xfffffff0U & 
				     (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
				       << 4U) & (IData)(vlTOPp->iEdb))))) 
			| ((8U & ((0xfffff8U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
						 << 3U) 
						& ((IData)(vlTOPp->iEdb) 
						   >> 8U))) 
				  | (0xfffffff8U & 
				     (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
				       << 3U) & (IData)(vlTOPp->iEdb))))) 
			   | ((4U & ((0xfffffcU & (
						   ((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
						    << 2U) 
						   & ((IData)(vlTOPp->iEdb) 
						      >> 8U))) 
				     | (0xfffffffcU 
					& (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
					    << 2U) 
					   & (IData)(vlTOPp->iEdb))))) 
			      | ((2U & ((0xfffffeU 
					 & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
					     << 1U) 
					    & ((IData)(vlTOPp->iEdb) 
					       >> 8U))) 
					| (0xfffffffeU 
					   & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
					       << 1U) 
					      & (IData)(vlTOPp->iEdb))))) 
				 | (1U & (((~ (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46)) 
					   & ((IData)(vlTOPp->iEdb) 
					      >> 8U)) 
					  | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__n_46) 
					     & (IData)(vlTOPp->iEdb)))))))))));
}

VL_INLINE_OPT void Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__mux_row_648_9__6(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_settle__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__mux_row_648_9__6\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->z = ((0x80U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
			      >> 8U)) << 7U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
	       | ((0x40U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				 >> 8U)) << 6U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
		  | ((0x20U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				    >> 8U)) << 5U) 
			       & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
		     | ((0x10U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				       >> 8U)) << 4U) 
				  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
			| ((8U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				       >> 8U)) << 3U) 
				  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
			   | ((4U & ((0xfffffffcU & 
				      (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
					    >> 8U)) 
					<< 2U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
				     | (0x3fffffcU 
					& ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 6U)))) 
			      | ((2U & (((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
					     >> 8U)) 
					 << 1U) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))) 
				 | (1U & ((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
					      >> 8U)) 
					  & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT____Vcellinp__mux_row_648_9__in_0))))))))));
}

void Vfx68k_fx68k_bmux::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vfx68k_fx68k_bmux::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(1);
    in_0 = VL_RAND_RESET_I(8);
    in_1 = VL_RAND_RESET_I(8);
    z = VL_RAND_RESET_I(8);
}
