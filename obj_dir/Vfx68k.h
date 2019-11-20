// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfx68k_H_
#define _Vfx68k_H_

#include "verilated.h"

class Vfx68k__Syms;

//----------

VL_MODULE(Vfx68k) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(extReset,0,0);
    VL_IN8(pwrUp,0,0);
    VL_IN8(enPhi1,0,0);
    VL_IN8(enPhi2,0,0);
    VL_OUT8(eRWn,0,0);
    VL_OUT8(ASn,0,0);
    VL_OUT8(LDSn,0,0);
    VL_OUT8(UDSn,0,0);
    VL_OUT8(E,0,0);
    VL_OUT8(VMAn,0,0);
    VL_OUT8(FC0,0,0);
    VL_OUT8(FC1,0,0);
    VL_OUT8(FC2,0,0);
    VL_OUT8(BGn,0,0);
    VL_OUT8(oRESETn,0,0);
    VL_OUT8(oHALTEDn,0,0);
    VL_IN8(DTACKn,0,0);
    VL_IN8(VPAn,0,0);
    VL_IN8(BERRn,0,0);
    VL_IN8(BRn,0,0);
    VL_IN8(BGACKn,0,0);
    VL_IN8(IPL0n,0,0);
    VL_IN8(IPL1n,0,0);
    VL_IN8(IPL2n,0,0);
    VL_IN16(iEdb,15,0);
    VL_OUT16(oEdb,15,0);
    VL_OUT(eab,23,1);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ fx68k__DOT__wClk;
        CData/*0:0*/ fx68k__DOT__enT1;
        CData/*0:0*/ fx68k__DOT__enT2;
        CData/*0:0*/ fx68k__DOT__enT3;
        CData/*0:0*/ fx68k__DOT__enT4;
        CData/*0:0*/ fx68k__DOT__rDtack;
        CData/*0:0*/ fx68k__DOT__rBerr;
        CData/*2:0*/ fx68k__DOT__rIpl;
        CData/*2:0*/ fx68k__DOT__iIpl;
        CData/*0:0*/ fx68k__DOT__Vpai;
        CData/*0:0*/ fx68k__DOT__BeI;
        CData/*0:0*/ fx68k__DOT__BRi;
        CData/*0:0*/ fx68k__DOT__BgackI;
        CData/*0:0*/ fx68k__DOT__BeiDelay;
        CData/*0:0*/ fx68k__DOT__rstUrom;
        CData/*0:0*/ fx68k__DOT__Tpend;
        CData/*0:0*/ fx68k__DOT__intPend;
        CData/*0:0*/ fx68k__DOT__pswT;
        CData/*0:0*/ fx68k__DOT__pswS;
        CData/*2:0*/ fx68k__DOT__pswI;
        CData/*0:0*/ fx68k__DOT__dcr4;
        CData/*3:0*/ fx68k__DOT__tvn;
        CData/*0:0*/ fx68k__DOT__busAddrErr;
        CData/*0:0*/ fx68k__DOT__bgBlock;
        CData/*0:0*/ fx68k__DOT__addrOe;
        CData/*0:0*/ fx68k__DOT__iStop;
        CData/*0:0*/ fx68k__DOT__A0Err;
        CData/*0:0*/ fx68k__DOT__excRst;
        CData/*0:0*/ fx68k__DOT__BerrA;
        CData/*0:0*/ fx68k__DOT__Spuria;
        CData/*0:0*/ fx68k__DOT__Avia;
        CData/*0:0*/ fx68k__DOT__rAddrErr;
        CData/*0:0*/ fx68k__DOT__iBusErr;
        CData/*0:0*/ fx68k__DOT__Err6591;
        CData/*0:0*/ fx68k__DOT__iAddrErr;
        CData/*0:0*/ fx68k__DOT__enErrClk;
        CData/*0:0*/ fx68k__DOT__oReset;
        CData/*0:0*/ fx68k__DOT__oHalted;
        CData/*2:0*/ fx68k__DOT__rFC;
        CData/*2:0*/ fx68k__DOT__inl;
        CData/*0:0*/ fx68k__DOT__updIll;
        CData/*0:0*/ fx68k__DOT__prevNmi;
        CData/*0:0*/ fx68k__DOT__iplStable;
        CData/*0:0*/ fx68k__DOT__iplComp;
        CData/*3:0*/ fx68k__DOT__eCntr;
        CData/*0:0*/ fx68k__DOT__rVma;
        CData/*0:0*/ fx68k__DOT__irdToCcr_t4;
        CData/*4:0*/ fx68k__DOT__ssw;
        CData/*3:0*/ fx68k__DOT__tvnLatch;
        CData/*0:0*/ fx68k__DOT__inExcept01;
        CData/*8:2*/ fx68k__DOT__microToNanoAddr__DOT__orgBase;
        CData/*3:0*/ fx68k__DOT__uaddrDecode__DOT__eaCol;
        CData/*3:0*/ fx68k__DOT__uaddrDecode__DOT__movEa;
        CData/*0:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc;
        CData/*1:0*/ fx68k__DOT__sequencer__DOT__c0c1;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__a0Rst;
        CData/*1:0*/ fx68k__DOT__sequencer__DOT__enl;
        CData/*1:0*/ fx68k__DOT__sequencer__DOT__ms0;
        CData/*3:0*/ fx68k__DOT__sequencer__DOT__m01;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__ccTest;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rTrace;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rInterrupt;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rIllegal;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rPriv;
    };
    struct {
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rLineA;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rLineF;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rExcRst;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rExcAdrErr;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rExcBusErr;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rSpurious;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__rAutovec;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__grp1LatchEn;
        CData/*0:0*/ fx68k__DOT__sequencer__DOT__grp0LatchEn;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__abdIsByte;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__Pcl2Dbl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__Pch2Dbh;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__Pcl2Abl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__Pch2Abh;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__actualRx;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__actualRy;
        CData/*3:0*/ fx68k__DOT__excUnit__DOT__movemRx;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__byteNotSpAlign;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__rxMux;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__ryMux;
        CData/*3:0*/ fx68k__DOT__excUnit__DOT__rxReg;
        CData/*3:0*/ fx68k__DOT__excUnit__DOT__ryReg;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxIsSp;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryIsSp;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxIsAreg;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryIsAreg;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryl2Abl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryl2Abd;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryl2Dbl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ryl2Dbd;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxl2Abl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxl2Abd;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxl2Dbl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__rxl2Dbd;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__abhIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__ablIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__abdIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dbhIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dblIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dbdIdle;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dbl2Pcl;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dbh2Pch;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__abh2Pch;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__abl2Pcl;
        CData/*3:0*/ fx68k__DOT__excUnit__DOT__prHbit;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__xToDbin;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__xToIrc;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__isByte_T4;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__byteCycle;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__ccrTemp;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__coreH;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__subHcarry;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__subCout;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__subOv;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__isArX;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__noCcrEn;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__isByte;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__ccrMask;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__oper;
    };
    struct {
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__cMask;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluOp;
        CData/*7:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__bcdLatch;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__bcdCarry;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__bcdOverf;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__isLong;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__rIrd8;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__isShift;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__shftCin;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__shftRight;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__shftMsb;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__bcdV;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__ccrMasked;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__size11;
        CData/*1:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype;
        CData/*4:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__lowC;
        CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__highC;
        CData/*3:0*/ fx68k__DOT__nDecoder__DOT__ftuCtrl;
        CData/*1:0*/ fx68k__DOT__nDecoder__DOT__dobCtrl;
        CData/*0:0*/ fx68k__DOT__nDecoder__DOT__isPcRel;
        CData/*0:0*/ fx68k__DOT__irdDecode__DOT__isRegShift;
        CData/*0:0*/ fx68k__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__rAS;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__rLDS;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__rUDS;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__rRWn;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__bcPend;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__isWriteReg;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__bciByte;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__isRmcReg;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__wendReg;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__addrOeDelay;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__isByteT4;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__canStart;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__bcReset;
        CData/*0:0*/ fx68k__DOT__busControl__DOT__busEnding;
        CData/*0:0*/ fx68k__DOT__busArbiter__DOT__rGranted;
        SData/*9:0*/ fx68k__DOT__microAddr;
        SData/*9:0*/ fx68k__DOT__nma;
        SData/*8:0*/ fx68k__DOT__nanoAddr;
        SData/*15:0*/ fx68k__DOT__psw;
        SData/*15:0*/ fx68k__DOT__ftu;
        SData/*15:0*/ fx68k__DOT__Irc;
        SData/*15:0*/ fx68k__DOT__Ir;
        SData/*15:0*/ fx68k__DOT__Ird;
        SData/*15:0*/ fx68k__DOT__alue;
        SData/*15:0*/ fx68k__DOT__uaddrDecode__DOT__lineBmap;
        SData/*15:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll;
        SData/*9:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3;
        SData/*9:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc;
        SData/*9:0*/ fx68k__DOT__sequencer__DOT__uNma;
        SData/*9:0*/ fx68k__DOT__sequencer__DOT__grp1Nma;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dbin;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dcrOutput;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__PcL;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__PcH;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Ath;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Atl;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Dbl;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Dbh;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Abh;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Abl;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Abd;
    };
    struct {
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__Dbd;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dblMux;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dbhMux;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__abhMux;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__ablMux;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preAbh;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preAbl;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preAbd;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preDbh;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preDbl;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__preDbd;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__prenLatch;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dcrCode;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alub;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dobInput;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__dataIo__DOT__dob;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__result;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__subResult;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__row;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aOperand;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__dOperand;
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__cRow;
        SData/*8:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp;
        SData/*15:0*/ fx68k__DOT__irdDecode__DOT__lineOnehot;
        IData/*31:0*/ fx68k__DOT__tState;
        WData/*67:0*/ fx68k__DOT__nanoLatch[3];
        WData/*67:0*/ fx68k__DOT__nanoOutput[3];
        IData/*16:0*/ fx68k__DOT__microLatch;
        IData/*16:0*/ fx68k__DOT__microOutput;
        IData/*31:0*/ fx68k__DOT__excUnit__DOT__auReg;
        IData/*31:0*/ fx68k__DOT__excUnit__DOT__aob;
        IData/*31:0*/ fx68k__DOT__excUnit__DOT__auInpMux;
        IData/*16:0*/ fx68k__DOT__excUnit__DOT__aulow;
        IData/*31:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__shftResult;
        IData/*31:0*/ fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata;
        IData/*31:0*/ fx68k__DOT__busControl__DOT__busPhase;
        IData/*31:0*/ fx68k__DOT__busControl__DOT__next;
        IData/*31:0*/ fx68k__DOT__busArbiter__DOT__dmaPhase;
        IData/*31:0*/ fx68k__DOT__busArbiter__DOT__next;
        QData/*55:0*/ fx68k__DOT__Nanod;
        QData/*48:0*/ fx68k__DOT__Nanod2;
        QData/*41:0*/ fx68k__DOT__Irdecod;
        SData/*9:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[16];
        SData/*9:0*/ fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[16];
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__regs68L[18];
        SData/*15:0*/ fx68k__DOT__excUnit__DOT__regs68H[18];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ fx68k__DOT__excUnit__DOT____Vlvbound5;
    CData/*7:0*/ fx68k__DOT__excUnit__DOT____Vlvbound9;
    CData/*0:0*/ fx68k__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords;
    CData/*3:0*/ __Vfunc_fx68k__DOT__uaddrDecode__DOT__eaDecode__0__Vfuncout;
    CData/*5:0*/ __Vfunc_fx68k__DOT__uaddrDecode__DOT__eaDecode__0__eaBits;
    CData/*3:0*/ __Vfunc_fx68k__DOT__uaddrDecode__DOT__eaDecode__1__Vfuncout;
    CData/*5:0*/ __Vfunc_fx68k__DOT__uaddrDecode__DOT__eaDecode__1__eaBits;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__cin;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__bAdd;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__isByte;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__cout;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__ov;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__rm;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__sm;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__dm;
    CData/*0:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__tsm;
    CData/*0:0*/ __Vfunc_fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__gt9__3__Vfuncout;
    CData/*3:0*/ __Vfunc_fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__gt9__3__nib;
    CData/*0:0*/ __Vfunc_fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__gt9__4__Vfuncout;
    CData/*3:0*/ __Vfunc_fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__gt9__4__nib;
    CData/*7:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vchglast__TOP__fx68k__DOT__nDecoder__DOT__isPcRel;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound3;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound4;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound6;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound7;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound8;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound10;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound11;
    SData/*15:0*/ fx68k__DOT__excUnit__DOT____Vlvbound12;
    SData/*15:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__inpa;
    SData/*15:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__inpb;
    SData/*15:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__result;
    SData/*8:0*/ __Vchglast__TOP__fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp;
    IData/*16:0*/ __Vtask_fx68k__DOT__excUnit__DOT__alu__DOT__mySubber__2__rtemp;
    QData/*55:0*/ __Vchglast__TOP__fx68k__DOT__Nanod;
    QData/*41:0*/ __Vchglast__TOP__fx68k__DOT__Irdecod;
    CData/*0:0*/ __Vtablechg2[512];
    static CData/*8:2*/ __Vtable1_fx68k__DOT__microToNanoAddr__DOT__orgBase[256];
    static WData/*67:0*/ __Vtable2_fx68k__DOT__nanoOutput[512][3];
    static IData/*16:0*/ __Vtable3_fx68k__DOT__microOutput[1024];
    static SData/*15:0*/ __Vtable4_fx68k__DOT__uaddrDecode__DOT__lineBmap[16];
    static SData/*15:0*/ __Vtable5_fx68k__DOT__excUnit__DOT__dcrCode[16];
    static SData/*15:0*/ __Vtable6_fx68k__DOT__irdDecode__DOT__lineOnehot[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfx68k__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfx68k);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vfx68k(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfx68k();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfx68k__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfx68k__Syms* symsp, bool first);
  private:
    static QData _change_request(Vfx68k__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vfx68k__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vfx68k__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vfx68k__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vfx68k__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vfx68k__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vfx68k__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vfx68k__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(Vfx68k__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
