// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfx68k.h for the primary calling header

#include "Vfx68k_fx68k_bmux_3758.h"
#include "Vfx68k__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfx68k_fx68k_bmux_3758) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vfx68k_fx68k_bmux_3758::__Vconfigure(Vfx68k__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfx68k_fx68k_bmux_3758::~Vfx68k_fx68k_bmux_3758() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfx68k_fx68k_bmux_3758::_settle__TOP__fx68k__DOT__mux_nanoLatch_259_12__1(Vfx68k__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfx68k_fx68k_bmux_3758::_settle__TOP__fx68k__DOT__mux_nanoLatch_259_12__1\n"); );
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    __Vtemp1[0U] = ((0xfffffff0U & ((IData)((((QData)((IData)(
							      ((0x80000000U 
								& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								    << 0x1fU) 
								   & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
								      << 0x1cU))) 
							       | ((0x40000000U 
								   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								       << 0x1eU) 
								      & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
									 << 0x1cU))) 
								  | ((0x20000000U 
								      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									  << 0x1dU) 
									 & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
									    << 0x1cU))) 
								     | ((0x10000000U 
									 & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									     & vlTOPp->fx68k__DOT__nanoOutput[2U]) 
									    << 0x1cU)) 
									| ((0x8000000U 
									    & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
									       & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									   | ((0x4000000U 
									       & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									      | ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U)))))))))))))))))))))))))))))))))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       ((0x80000000U 
								 & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								     << 0x1fU) 
								    & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
								       << 0x1cU))) 
								| ((0x40000000U 
								    & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									<< 0x1eU) 
								       & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									  << 0x1cU))) 
								   | ((0x20000000U 
								       & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									   << 0x1dU) 
									  & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									     << 0x1cU))) 
								      | ((0x10000000U 
									  & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									      & vlTOPp->fx68k__DOT__nanoOutput[1U]) 
									     << 0x1cU)) 
									 | ((0x8000000U 
									     & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
									    | ((0x4000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
									       | ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U)))))))))))))))))))))))))))))))))))))) 
				    << 4U)) | ((8U 
						& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
						    << 3U) 
						   & vlTOPp->fx68k__DOT__nanoOutput[0U])) 
					       | ((4U 
						   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
						       << 2U) 
						      & vlTOPp->fx68k__DOT__nanoOutput[0U])) 
						  | ((2U 
						      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
							  << 1U) 
							 & vlTOPp->fx68k__DOT__nanoOutput[0U])) 
						     | (1U 
							& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
							   & vlTOPp->fx68k__DOT__nanoOutput[0U]))))));
    __Vtemp1[1U] = ((0xfU & ((IData)((((QData)((IData)(
						       ((0x80000000U 
							 & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
							     << 0x1fU) 
							    & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
							       << 0x1cU))) 
							| ((0x40000000U 
							    & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								<< 0x1eU) 
							       & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
								  << 0x1cU))) 
							   | ((0x20000000U 
							       & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								   << 0x1dU) 
								  & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
								     << 0x1cU))) 
							      | ((0x10000000U 
								  & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								      & vlTOPp->fx68k__DOT__nanoOutput[2U]) 
								     << 0x1cU)) 
								 | ((0x8000000U 
								     & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									 << 0x1bU) 
									& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									   >> 4U))) 
								    | ((0x4000000U 
									& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									    << 0x1aU) 
									   & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									      >> 4U))) 
								       | ((0x2000000U 
									   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									       << 0x19U) 
									      & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									  | ((0x1000000U 
									      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									     | ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U)))))))))))))))))))))))))))))))))))) 
				       << 0x20U) | (QData)((IData)(
								   ((0x80000000U 
								     & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									 << 0x1fU) 
									& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									   << 0x1cU))) 
								    | ((0x40000000U 
									& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									    << 0x1eU) 
									   & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									      << 0x1cU))) 
								       | ((0x20000000U 
									   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									       << 0x1dU) 
									      & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										<< 0x1cU))) 
									  | ((0x10000000U 
									      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& vlTOPp->fx68k__DOT__nanoOutput[1U]) 
										<< 0x1cU)) 
									     | ((0x8000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U)))))))))))))))))))))))))))))))))))))) 
			     >> 0x1cU)) | (0xfffffff0U 
					   & ((IData)(
						      ((((QData)((IData)(
									 ((0x80000000U 
									   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									       << 0x1fU) 
									      & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
										<< 0x1cU))) 
									  | ((0x40000000U 
									      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1eU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[2U] 
										<< 0x1cU))) 
									     | ((0x20000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1dU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[2U] 
										<< 0x1cU))) 
										| ((0x10000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& vlTOPp->fx68k__DOT__nanoOutput[2U]) 
										<< 0x1cU)) 
										| ((0x8000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x4000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U)))))))))))))))))))))))))))))))))))) 
							 << 0x20U) 
							| (QData)((IData)(
									  ((0x80000000U 
									    & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1fU) 
									       & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										<< 0x1cU))) 
									   | ((0x40000000U 
									       & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1eU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										<< 0x1cU))) 
									      | ((0x20000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1dU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										<< 0x1cU))) 
										| ((0x10000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& vlTOPp->fx68k__DOT__nanoOutput[1U]) 
										<< 0x1cU)) 
										| ((0x8000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))))))))))))))))))))))))))))))))))))) 
						       >> 0x20U)) 
					      << 4U)));
    __Vtemp1[2U] = (0xfU & ((IData)(((((QData)((IData)(
						       ((0x80000000U 
							 & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
							     << 0x1fU) 
							    & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
							       << 0x1cU))) 
							| ((0x40000000U 
							    & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								<< 0x1eU) 
							       & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
								  << 0x1cU))) 
							   | ((0x20000000U 
							       & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								   << 0x1dU) 
								  & (vlTOPp->fx68k__DOT__nanoOutput[2U] 
								     << 0x1cU))) 
							      | ((0x10000000U 
								  & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
								      & vlTOPp->fx68k__DOT__nanoOutput[2U]) 
								     << 0x1cU)) 
								 | ((0x8000000U 
								     & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									 << 0x1bU) 
									& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									   >> 4U))) 
								    | ((0x4000000U 
									& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									    << 0x1aU) 
									   & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									      >> 4U))) 
								       | ((0x2000000U 
									   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									       << 0x19U) 
									      & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									  | ((0x1000000U 
									      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
									     | ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										>> 4U)))))))))))))))))))))))))))))))))))) 
				       << 0x20U) | (QData)((IData)(
								   ((0x80000000U 
								     & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									 << 0x1fU) 
									& (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									   << 0x1cU))) 
								    | ((0x40000000U 
									& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									    << 0x1eU) 
									   & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
									      << 0x1cU))) 
								       | ((0x20000000U 
									   & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
									       << 0x1dU) 
									      & (vlTOPp->fx68k__DOT__nanoOutput[1U] 
										<< 0x1cU))) 
									  | ((0x10000000U 
									      & (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& vlTOPp->fx68k__DOT__nanoOutput[1U]) 
										<< 0x1cU)) 
									     | ((0x8000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1bU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x1aU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x19U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x18U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x17U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x16U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x15U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x14U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x13U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x12U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x11U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0x10U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x8000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xfU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x4000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xeU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x2000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xdU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x1000U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xcU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x800U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xbU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x400U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 0xaU) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x200U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 9U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x100U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 8U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x80U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 7U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x40U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 6U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x20U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 5U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((0x10U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 4U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((8U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 3U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((4U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 2U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| ((2U 
										& (((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										<< 1U) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))) 
										| (1U 
										& ((~ (IData)(vlTOPp->fx68k__DOT__rstUrom)) 
										& (vlTOPp->fx68k__DOT__nanoOutput[0U] 
										>> 4U))))))))))))))))))))))))))))))))))))) 
				     >> 0x20U)) >> 0x1cU));
    this->z[0U] = __Vtemp1[0U];
    this->z[1U] = __Vtemp1[1U];
    this->z[2U] = __Vtemp1[2U];
}

void Vfx68k_fx68k_bmux_3758::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfx68k_fx68k_bmux_3758::_ctor_var_reset\n"); );
    // Body
    ctl = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68,in_0);
    VL_RAND_RESET_W(68,in_1);
    VL_RAND_RESET_W(68,z);
}
