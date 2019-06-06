// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfx68k__Syms.h"


//======================

void Vfx68k::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vfx68k::traceInit, &Vfx68k::traceFull, &Vfx68k::traceChg, this);
}
void Vfx68k::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vfx68k* t=(Vfx68k*)userthis;
    Vfx68k__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vfx68k::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vfx68k* t=(Vfx68k*)userthis;
    Vfx68k__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vfx68k::traceInitThis(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vfx68k::traceFullThis(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vfx68k::traceInitThis__1(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+402,"clk",-1);
	vcdp->declBit(c+403,"extReset",-1);
	vcdp->declBit(c+404,"pwrUp",-1);
	vcdp->declBit(c+405,"enPhi1",-1);
	vcdp->declBit(c+406,"enPhi2",-1);
	vcdp->declBit(c+407,"eRWn",-1);
	vcdp->declBit(c+408,"ASn",-1);
	vcdp->declBit(c+409,"LDSn",-1);
	vcdp->declBit(c+410,"UDSn",-1);
	vcdp->declBit(c+411,"E",-1);
	vcdp->declBit(c+412,"VMAn",-1);
	vcdp->declBit(c+413,"FC0",-1);
	vcdp->declBit(c+414,"FC1",-1);
	vcdp->declBit(c+415,"FC2",-1);
	vcdp->declBit(c+416,"BGn",-1);
	vcdp->declBit(c+417,"oRESETn",-1);
	vcdp->declBit(c+418,"oHALTEDn",-1);
	vcdp->declBit(c+419,"DTACKn",-1);
	vcdp->declBit(c+420,"VPAn",-1);
	vcdp->declBit(c+421,"BERRn",-1);
	vcdp->declBit(c+422,"BRn",-1);
	vcdp->declBit(c+423,"BGACKn",-1);
	vcdp->declBit(c+424,"IPL0n",-1);
	vcdp->declBit(c+425,"IPL1n",-1);
	vcdp->declBit(c+426,"IPL2n",-1);
	vcdp->declBus(c+427,"iEdb",-1,15,0);
	vcdp->declBus(c+428,"oEdb",-1,15,0);
	vcdp->declBus(c+429,"eab",-1,23,1);
	vcdp->declBit(c+402,"fx68k clk",-1);
	vcdp->declBit(c+403,"fx68k extReset",-1);
	vcdp->declBit(c+404,"fx68k pwrUp",-1);
	vcdp->declBit(c+405,"fx68k enPhi1",-1);
	vcdp->declBit(c+406,"fx68k enPhi2",-1);
	vcdp->declBit(c+407,"fx68k eRWn",-1);
	vcdp->declBit(c+408,"fx68k ASn",-1);
	vcdp->declBit(c+409,"fx68k LDSn",-1);
	vcdp->declBit(c+410,"fx68k UDSn",-1);
	vcdp->declBit(c+411,"fx68k E",-1);
	vcdp->declBit(c+412,"fx68k VMAn",-1);
	vcdp->declBit(c+413,"fx68k FC0",-1);
	vcdp->declBit(c+414,"fx68k FC1",-1);
	vcdp->declBit(c+415,"fx68k FC2",-1);
	vcdp->declBit(c+416,"fx68k BGn",-1);
	vcdp->declBit(c+417,"fx68k oRESETn",-1);
	vcdp->declBit(c+418,"fx68k oHALTEDn",-1);
	vcdp->declBit(c+419,"fx68k DTACKn",-1);
	vcdp->declBit(c+420,"fx68k VPAn",-1);
	vcdp->declBit(c+421,"fx68k BERRn",-1);
	vcdp->declBit(c+422,"fx68k BRn",-1);
	vcdp->declBit(c+423,"fx68k BGACKn",-1);
	vcdp->declBit(c+424,"fx68k IPL0n",-1);
	vcdp->declBit(c+425,"fx68k IPL1n",-1);
	vcdp->declBit(c+426,"fx68k IPL2n",-1);
	vcdp->declBus(c+427,"fx68k iEdb",-1,15,0);
	vcdp->declBus(c+428,"fx68k oEdb",-1,15,0);
	vcdp->declBus(c+429,"fx68k eab",-1,23,1);
	// Tracing: fx68k Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:160
	vcdp->declBit(c+2,"fx68k wClk",-1);
	vcdp->declBus(c+216,"fx68k tState",-1,31,0);
	vcdp->declBit(c+169,"fx68k enT1",-1);
	vcdp->declBit(c+170,"fx68k enT2",-1);
	vcdp->declBit(c+171,"fx68k enT3",-1);
	vcdp->declBit(c+172,"fx68k enT4",-1);
	vcdp->declBit(c+217,"fx68k rDtack",-1);
	vcdp->declBit(c+218,"fx68k rBerr",-1);
	vcdp->declBus(c+219,"fx68k rIpl",-1,2,0);
	vcdp->declBus(c+220,"fx68k iIpl",-1,2,0);
	vcdp->declBit(c+221,"fx68k Vpai",-1);
	vcdp->declBit(c+222,"fx68k BeI",-1);
	vcdp->declBit(c+223,"fx68k BRi",-1);
	vcdp->declBit(c+224,"fx68k BgackI",-1);
	vcdp->declBit(c+225,"fx68k BeiDelay",-1);
	vcdp->declBit(c+226,"fx68k BeDebounced",-1);
	vcdp->declArray(c+227,"fx68k nanoLatch",-1,67,0);
	vcdp->declArray(c+230,"fx68k nanoOutput",-1,67,0);
	vcdp->declBus(c+233,"fx68k microLatch",-1,16,0);
	vcdp->declBus(c+234,"fx68k microOutput",-1,16,0);
	vcdp->declBus(c+235,"fx68k microAddr",-1,9,0);
	vcdp->declBus(c+3,"fx68k nma",-1,9,0);
	vcdp->declBus(c+236,"fx68k nanoAddr",-1,8,0);
	vcdp->declBus(c+4,"fx68k orgAddr",-1,8,0);
	vcdp->declBit(c+173,"fx68k rstUrom",-1);
	// Tracing: fx68k Nanod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:283
	// Tracing: fx68k Nanod2 // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:284
	// Tracing: fx68k Irdecod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:286
	vcdp->declBit(c+237,"fx68k Tpend",-1);
	vcdp->declBit(c+238,"fx68k intPend",-1);
	vcdp->declBit(c+239,"fx68k pswT",-1);
	vcdp->declBit(c+240,"fx68k pswS",-1);
	vcdp->declBus(c+241,"fx68k pswI",-1,2,0);
	vcdp->declBus(c+242,"fx68k ccr",-1,7,0);
	vcdp->declBus(c+5,"fx68k psw",-1,15,0);
	vcdp->declBus(c+243,"fx68k ftu",-1,15,0);
	vcdp->declBus(c+244,"fx68k Irc",-1,15,0);
	vcdp->declBus(c+245,"fx68k Ir",-1,15,0);
	vcdp->declBus(c+246,"fx68k Ird",-1,15,0);
	vcdp->declBus(c+247,"fx68k alue",-1,15,0);
	vcdp->declBus(c+248,"fx68k Abl",-1,15,0);
	vcdp->declBit(c+249,"fx68k prenEmpty",-1);
	vcdp->declBit(c+250,"fx68k au05z",-1);
	vcdp->declBit(c+251,"fx68k dcr4",-1);
	vcdp->declBit(c+252,"fx68k ze",-1);
	vcdp->declBus(c+6,"fx68k a1",-1,9,0);
	vcdp->declBus(c+7,"fx68k a2",-1,9,0);
	vcdp->declBus(c+8,"fx68k a3",-1,9,0);
	vcdp->declBit(c+9,"fx68k isPriv",-1);
	vcdp->declBit(c+10,"fx68k isIllegal",-1);
	vcdp->declBit(c+11,"fx68k isLineA",-1);
	vcdp->declBit(c+12,"fx68k isLineF",-1);
	vcdp->declBus(c+13,"fx68k tvn",-1,3,0);
	vcdp->declBit(c+253,"fx68k waitBusCycle",-1);
	vcdp->declBit(c+254,"fx68k busStarting",-1);
	vcdp->declBit(c+431,"fx68k BusRetry",-1);
	vcdp->declBit(c+14,"fx68k busAddrErr",-1);
	vcdp->declBit(c+255,"fx68k bciWrite",-1);
	vcdp->declBit(c+15,"fx68k bgBlock",-1);
	vcdp->declBit(c+256,"fx68k busAvail",-1);
	vcdp->declBit(c+257,"fx68k addrOe",-1);
	vcdp->declBit(c+140,"fx68k busIsByte",-1);
	vcdp->declBit(c+258,"fx68k aob0",-1);
	vcdp->declBit(c+259,"fx68k iStop",-1);
	vcdp->declBit(c+260,"fx68k A0Err",-1);
	vcdp->declBit(c+261,"fx68k excRst",-1);
	vcdp->declBit(c+262,"fx68k BerrA",-1);
	vcdp->declBit(c+263,"fx68k Spuria",-1);
	vcdp->declBit(c+264,"fx68k Avia",-1);
	vcdp->declBit(c+265,"fx68k Iac",-1);
	vcdp->declBit(c+266,"fx68k rAddrErr",-1);
	vcdp->declBit(c+267,"fx68k iBusErr",-1);
	vcdp->declBit(c+268,"fx68k Err6591",-1);
	vcdp->declBit(c+16,"fx68k iAddrErr",-1);
	vcdp->declBit(c+17,"fx68k enErrClk",-1);
	vcdp->declBus(c+269,"fx68k uFc",-1,1,0);
	vcdp->declBit(c+270,"fx68k oReset",-1);
	vcdp->declBit(c+271,"fx68k oHalted",-1);
	vcdp->declBus(c+272,"fx68k rFC",-1,2,0);
	vcdp->declBus(c+273,"fx68k inl",-1,2,0);
	vcdp->declBit(c+274,"fx68k updIll",-1);
	vcdp->declBit(c+275,"fx68k prevNmi",-1);
	vcdp->declBit(c+276,"fx68k nmi",-1);
	vcdp->declBit(c+18,"fx68k iplStable",-1);
	vcdp->declBit(c+19,"fx68k iplComp",-1);
	vcdp->declBus(c+277,"fx68k eCntr",-1,3,0);
	vcdp->declBit(c+278,"fx68k rVma",-1);
	vcdp->declBit(c+279,"fx68k xVma",-1);
	vcdp->declBit(c+280,"fx68k irdToCcr_t4",-1);
	vcdp->declBus(c+281,"fx68k ssw",-1,4,0);
	vcdp->declBus(c+282,"fx68k tvnLatch",-1,3,0);
	vcdp->declBus(c+141,"fx68k tvnMux",-1,15,0);
	vcdp->declBit(c+283,"fx68k inExcept01",-1);
	vcdp->declBus(c+3,"fx68k microToNanoAddr uAddr",-1,9,0);
	vcdp->declBus(c+4,"fx68k microToNanoAddr orgAddr",-1,8,0);
	vcdp->declBus(c+20,"fx68k microToNanoAddr baseAddr",-1,9,2);
	vcdp->declBus(c+21,"fx68k microToNanoAddr orgBase",-1,8,2);
	vcdp->declBit(c+402,"fx68k nanoRom clk",-1);
	vcdp->declBus(c+236,"fx68k nanoRom nanoAddr",-1,8,0);
	vcdp->declArray(c+230,"fx68k nanoRom nanoOutput",-1,67,0);
	vcdp->declBit(c+402,"fx68k uRom clk",-1);
	vcdp->declBus(c+235,"fx68k uRom microAddr",-1,9,0);
	vcdp->declBus(c+234,"fx68k uRom microOutput",-1,16,0);
	vcdp->declBus(c+245,"fx68k uaddrDecode opcode",-1,15,0);
	vcdp->declBus(c+6,"fx68k uaddrDecode a1",-1,9,0);
	vcdp->declBus(c+7,"fx68k uaddrDecode a2",-1,9,0);
	vcdp->declBus(c+8,"fx68k uaddrDecode a3",-1,9,0);
	vcdp->declBit(c+9,"fx68k uaddrDecode isPriv",-1);
	vcdp->declBit(c+10,"fx68k uaddrDecode isIllegal",-1);
	vcdp->declBit(c+11,"fx68k uaddrDecode isLineA",-1);
	vcdp->declBit(c+12,"fx68k uaddrDecode isLineF",-1);
	vcdp->declBus(c+22,"fx68k uaddrDecode lineBmap",-1,15,0);
	vcdp->declBus(c+284,"fx68k uaddrDecode line",-1,3,0);
	vcdp->declBus(c+23,"fx68k uaddrDecode eaCol",-1,3,0);
	vcdp->declBus(c+24,"fx68k uaddrDecode movEa",-1,3,0);
	vcdp->declBus(c+284,"fx68k uaddrDecode irLineDecod bin",-1,3,0);
	vcdp->declBus(c+22,"fx68k uaddrDecode irLineDecod bitMap",-1,15,0);
	vcdp->declBus(c+24,"fx68k uaddrDecode pla_lined movEa",-1,3,0);
	vcdp->declBus(c+23,"fx68k uaddrDecode pla_lined col",-1,3,0);
	vcdp->declBus(c+245,"fx68k uaddrDecode pla_lined opcode",-1,15,0);
	vcdp->declBus(c+22,"fx68k uaddrDecode pla_lined lineBmap",-1,15,0);
	vcdp->declBit(c+10,"fx68k uaddrDecode pla_lined palIll",-1);
	vcdp->declBus(c+6,"fx68k uaddrDecode pla_lined plaA1",-1,9,0);
	vcdp->declBus(c+7,"fx68k uaddrDecode pla_lined plaA2",-1,9,0);
	vcdp->declBus(c+8,"fx68k uaddrDecode pla_lined plaA3",-1,9,0);
	vcdp->declBus(c+284,"fx68k uaddrDecode pla_lined line",-1,3,0);
	vcdp->declBus(c+285,"fx68k uaddrDecode pla_lined row86",-1,2,0);
	vcdp->declBus(c+25,"fx68k uaddrDecode pla_lined arIll",-1,15,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus(c+26+i*1,"fx68k uaddrDecode pla_lined arA1",(i+0),9,0);}}
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus(c+42+i*1,"fx68k uaddrDecode pla_lined arA23",(i+0),9,0);}}
	vcdp->declBus(c+58,"fx68k uaddrDecode pla_lined scA3",-1,9,0);
	vcdp->declBit(c+59,"fx68k uaddrDecode pla_lined illMisc",-1);
	vcdp->declBus(c+60,"fx68k uaddrDecode pla_lined a1Misc",-1,9,0);
	// Tracing: fx68k sequencer Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1928
	vcdp->declBit(c+171,"fx68k sequencer enT3",-1);
	vcdp->declBus(c+233,"fx68k sequencer microLatch",-1,16,0);
	vcdp->declBit(c+260,"fx68k sequencer A0Err",-1);
	vcdp->declBit(c+262,"fx68k sequencer BerrA",-1);
	vcdp->declBit(c+14,"fx68k sequencer busAddrErr",-1);
	vcdp->declBit(c+263,"fx68k sequencer Spuria",-1);
	vcdp->declBit(c+264,"fx68k sequencer Avia",-1);
	vcdp->declBit(c+237,"fx68k sequencer Tpend",-1);
	vcdp->declBit(c+238,"fx68k sequencer intPend",-1);
	vcdp->declBit(c+10,"fx68k sequencer isIllegal",-1);
	vcdp->declBit(c+9,"fx68k sequencer isPriv",-1);
	vcdp->declBit(c+261,"fx68k sequencer excRst",-1);
	vcdp->declBit(c+11,"fx68k sequencer isLineA",-1);
	vcdp->declBit(c+12,"fx68k sequencer isLineF",-1);
	vcdp->declBus(c+5,"fx68k sequencer psw",-1,15,0);
	vcdp->declBit(c+249,"fx68k sequencer prenEmpty",-1);
	vcdp->declBit(c+250,"fx68k sequencer au05z",-1);
	vcdp->declBit(c+251,"fx68k sequencer dcr4",-1);
	vcdp->declBit(c+252,"fx68k sequencer ze",-1);
	vcdp->declBit(c+286,"fx68k sequencer i11",-1);
	vcdp->declBus(c+287,"fx68k sequencer alue01",-1,1,0);
	vcdp->declBus(c+246,"fx68k sequencer Ird",-1,15,0);
	vcdp->declBus(c+6,"fx68k sequencer a1",-1,9,0);
	vcdp->declBus(c+7,"fx68k sequencer a2",-1,9,0);
	vcdp->declBus(c+8,"fx68k sequencer a3",-1,9,0);
	vcdp->declBus(c+13,"fx68k sequencer tvn",-1,3,0);
	vcdp->declBus(c+3,"fx68k sequencer nma",-1,9,0);
	vcdp->declBus(c+61,"fx68k sequencer uNma",-1,9,0);
	vcdp->declBus(c+62,"fx68k sequencer grp1Nma",-1,9,0);
	vcdp->declBus(c+63,"fx68k sequencer c0c1",-1,1,0);
	vcdp->declBit(c+288,"fx68k sequencer a0Rst",-1);
	vcdp->declBit(c+289,"fx68k sequencer A0Sel",-1);
	vcdp->declBit(c+290,"fx68k sequencer inGrp0Exc",-1);
	vcdp->declBus(c+291,"fx68k sequencer dbNma",-1,9,0);
	vcdp->declBus(c+64,"fx68k sequencer enl",-1,1,0);
	vcdp->declBus(c+65,"fx68k sequencer ms0",-1,1,0);
	vcdp->declBus(c+66,"fx68k sequencer m01",-1,3,0);
	vcdp->declBus(c+67,"fx68k sequencer nz1",-1,1,0);
	vcdp->declBus(c+68,"fx68k sequencer nv",-1,1,0);
	vcdp->declBit(c+69,"fx68k sequencer ccTest",-1);
	vcdp->declBus(c+292,"fx68k sequencer cbc",-1,4,0);
	vcdp->declBit(c+293,"fx68k sequencer rTrace",-1);
	vcdp->declBit(c+294,"fx68k sequencer rInterrupt",-1);
	vcdp->declBit(c+295,"fx68k sequencer rIllegal",-1);
	vcdp->declBit(c+296,"fx68k sequencer rPriv",-1);
	vcdp->declBit(c+297,"fx68k sequencer rLineA",-1);
	vcdp->declBit(c+298,"fx68k sequencer rLineF",-1);
	vcdp->declBit(c+299,"fx68k sequencer rExcRst",-1);
	vcdp->declBit(c+300,"fx68k sequencer rExcAdrErr",-1);
	vcdp->declBit(c+301,"fx68k sequencer rExcBusErr",-1);
	vcdp->declBit(c+302,"fx68k sequencer rSpurious",-1);
	vcdp->declBit(c+303,"fx68k sequencer rAutovec",-1);
	vcdp->declBit(c+70,"fx68k sequencer grp1LatchEn",-1);
	vcdp->declBit(c+71,"fx68k sequencer grp0LatchEn",-1);
	// Tracing: fx68k excUnit Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1136
	vcdp->declBit(c+169,"fx68k excUnit enT1",-1);
	vcdp->declBit(c+170,"fx68k excUnit enT2",-1);
	vcdp->declBit(c+171,"fx68k excUnit enT3",-1);
	vcdp->declBit(c+172,"fx68k excUnit enT4",-1);
	// Tracing: fx68k excUnit Nanod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1138
	// Tracing: fx68k excUnit Nanod2 // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1139
	// Tracing: fx68k excUnit Irdecod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1140
	vcdp->declBus(c+246,"fx68k excUnit Ird",-1,15,0);
	vcdp->declBit(c+240,"fx68k excUnit pswS",-1);
	vcdp->declBus(c+243,"fx68k excUnit ftu",-1,15,0);
	vcdp->declBus(c+427,"fx68k excUnit iEdb",-1,15,0);
	vcdp->declBus(c+242,"fx68k excUnit ccr",-1,7,0);
	vcdp->declBus(c+247,"fx68k excUnit alue",-1,15,0);
	vcdp->declBit(c+249,"fx68k excUnit prenEmpty",-1);
	vcdp->declBit(c+250,"fx68k excUnit au05z",-1);
	vcdp->declBit(c+251,"fx68k excUnit dcr4",-1);
	vcdp->declBit(c+252,"fx68k excUnit ze",-1);
	vcdp->declBit(c+258,"fx68k excUnit aob0",-1);
	vcdp->declBus(c+248,"fx68k excUnit AblOut",-1,15,0);
	vcdp->declBus(c+244,"fx68k excUnit Irc",-1,15,0);
	vcdp->declBus(c+428,"fx68k excUnit oEdb",-1,15,0);
	vcdp->declBus(c+429,"fx68k excUnit eab",-1,23,1);
	vcdp->declBus(c+432,"fx68k excUnit REG_USP",-1,31,0);
	vcdp->declBus(c+433,"fx68k excUnit REG_SSP",-1,31,0);
	vcdp->declBus(c+434,"fx68k excUnit REG_DT",-1,31,0);
	{int i; for (i=0; i<18; i++) {
		vcdp->declBus(c+72+i*1,"fx68k excUnit regs68L",(i+0),15,0);}}
	{int i; for (i=0; i<18; i++) {
		vcdp->declBus(c+90+i*1,"fx68k excUnit regs68H",(i+0),15,0);}}
	vcdp->declBus(c+108,"fx68k excUnit SSP",-1,31,0);
	vcdp->declBus(c+304,"fx68k excUnit aluOut",-1,15,0);
	vcdp->declBus(c+305,"fx68k excUnit dbin",-1,15,0);
	vcdp->declBus(c+306,"fx68k excUnit dcrOutput",-1,15,0);
	vcdp->declBus(c+307,"fx68k excUnit PcL",-1,15,0);
	vcdp->declBus(c+308,"fx68k excUnit PcH",-1,15,0);
	vcdp->declBus(c+309,"fx68k excUnit auReg",-1,31,0);
	vcdp->declBus(c+310,"fx68k excUnit aob",-1,31,0);
	vcdp->declBus(c+311,"fx68k excUnit Ath",-1,15,0);
	vcdp->declBus(c+312,"fx68k excUnit Atl",-1,15,0);
	vcdp->declBus(c+313,"fx68k excUnit Dbl",-1,15,0);
	vcdp->declBus(c+314,"fx68k excUnit Dbh",-1,15,0);
	vcdp->declBus(c+315,"fx68k excUnit Abh",-1,15,0);
	vcdp->declBus(c+248,"fx68k excUnit Abl",-1,15,0);
	vcdp->declBus(c+316,"fx68k excUnit Abd",-1,15,0);
	vcdp->declBus(c+317,"fx68k excUnit Dbd",-1,15,0);
	vcdp->declBus(c+174,"fx68k excUnit dblMux",-1,15,0);
	vcdp->declBus(c+175,"fx68k excUnit dbhMux",-1,15,0);
	vcdp->declBus(c+176,"fx68k excUnit abhMux",-1,15,0);
	vcdp->declBus(c+177,"fx68k excUnit ablMux",-1,15,0);
	vcdp->declBus(c+142,"fx68k excUnit abdMux",-1,15,0);
	vcdp->declBus(c+143,"fx68k excUnit dbdMux",-1,15,0);
	vcdp->declBit(c+318,"fx68k excUnit abdIsByte",-1);
	vcdp->declBit(c+319,"fx68k excUnit Pcl2Dbl",-1);
	vcdp->declBit(c+320,"fx68k excUnit Pch2Dbh",-1);
	vcdp->declBit(c+321,"fx68k excUnit Pcl2Abl",-1);
	vcdp->declBit(c+322,"fx68k excUnit Pch2Abh",-1);
	vcdp->declBus(c+323,"fx68k excUnit actualRx",-1,4,0);
	vcdp->declBus(c+324,"fx68k excUnit actualRy",-1,4,0);
	vcdp->declBus(c+325,"fx68k excUnit movemRx",-1,3,0);
	vcdp->declBit(c+326,"fx68k excUnit byteNotSpAlign",-1);
	vcdp->declBus(c+178,"fx68k excUnit rxMux",-1,4,0);
	vcdp->declBus(c+179,"fx68k excUnit ryMux",-1,4,0);
	vcdp->declBus(c+180,"fx68k excUnit rxReg",-1,3,0);
	vcdp->declBus(c+181,"fx68k excUnit ryReg",-1,3,0);
	vcdp->declBit(c+182,"fx68k excUnit rxIsSp",-1);
	vcdp->declBit(c+183,"fx68k excUnit ryIsSp",-1);
	vcdp->declBit(c+327,"fx68k excUnit rxIsAreg",-1);
	vcdp->declBit(c+328,"fx68k excUnit ryIsAreg",-1);
	vcdp->declBit(c+109,"fx68k excUnit ryl2Abl",-1);
	vcdp->declBit(c+110,"fx68k excUnit ryl2Abd",-1);
	vcdp->declBit(c+111,"fx68k excUnit ryl2Dbl",-1);
	vcdp->declBit(c+112,"fx68k excUnit ryl2Dbd",-1);
	vcdp->declBit(c+113,"fx68k excUnit rxl2Abl",-1);
	vcdp->declBit(c+114,"fx68k excUnit rxl2Abd",-1);
	vcdp->declBit(c+115,"fx68k excUnit rxl2Dbl",-1);
	vcdp->declBit(c+116,"fx68k excUnit rxl2Dbd",-1);
	vcdp->declBit(c+184,"fx68k excUnit abhIdle",-1);
	vcdp->declBit(c+185,"fx68k excUnit ablIdle",-1);
	vcdp->declBit(c+186,"fx68k excUnit abdIdle",-1);
	vcdp->declBit(c+187,"fx68k excUnit dbhIdle",-1);
	vcdp->declBit(c+188,"fx68k excUnit dblIdle",-1);
	vcdp->declBit(c+189,"fx68k excUnit dbdIdle",-1);
	vcdp->declBus(c+329,"fx68k excUnit preAbh",-1,15,0);
	vcdp->declBus(c+330,"fx68k excUnit preAbl",-1,15,0);
	vcdp->declBus(c+331,"fx68k excUnit preAbd",-1,15,0);
	vcdp->declBus(c+332,"fx68k excUnit preDbh",-1,15,0);
	vcdp->declBus(c+333,"fx68k excUnit preDbl",-1,15,0);
	vcdp->declBus(c+334,"fx68k excUnit preDbd",-1,15,0);
	vcdp->declBit(c+144,"fx68k excUnit au2Aob",-1);
	vcdp->declBus(c+117,"fx68k excUnit auInpMux",-1,31,0);
	vcdp->declBus(c+118,"fx68k excUnit aulow",-1,16,0);
	vcdp->declBus(c+119,"fx68k excUnit auResult",-1,31,0);
	vcdp->declBit(c+335,"fx68k excUnit dbl2Pcl",-1);
	vcdp->declBit(c+336,"fx68k excUnit dbh2Pch",-1);
	vcdp->declBit(c+337,"fx68k excUnit abh2Pch",-1);
	vcdp->declBit(c+338,"fx68k excUnit abl2Pcl",-1);
	vcdp->declBit(c+435,"fx68k excUnit rmIdle",-1);
	vcdp->declBus(c+120,"fx68k excUnit prHbit",-1,3,0);
	vcdp->declBus(c+339,"fx68k excUnit prenLatch",-1,15,0);
	vcdp->declBus(c+121,"fx68k excUnit dcrCode",-1,15,0);
	vcdp->declBus(c+340,"fx68k excUnit dcrInput",-1,3,0);
	vcdp->declBus(c+341,"fx68k excUnit alub",-1,15,0);
	vcdp->declBit(c+145,"fx68k excUnit alueClkEn",-1);
	vcdp->declBus(c+122,"fx68k excUnit dobInput",-1,15,0);
	vcdp->declBit(c+342,"fx68k excUnit dobIdle",-1);
	vcdp->declBus(c+1,"fx68k excUnit unnamedblk1 i",-1,31,0);
	vcdp->declBus(c+433,"fx68k excUnit rmPren size",-1,31,0);
	vcdp->declBus(c+436,"fx68k excUnit rmPren outbits",-1,31,0);
	vcdp->declBus(c+339,"fx68k excUnit rmPren mask",-1,15,0);
	vcdp->declBus(c+120,"fx68k excUnit rmPren hbit",-1,3,0);
	vcdp->declBus(c+437,"fx68k excUnit rmPren unnamedblk1 i",-1,31,0);
	vcdp->declBus(c+340,"fx68k excUnit dcrDecoder bin",-1,3,0);
	vcdp->declBus(c+121,"fx68k excUnit dcrDecoder bitMap",-1,15,0);
	// Tracing: fx68k excUnit dataIo Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1692
	vcdp->declBit(c+169,"fx68k excUnit dataIo enT1",-1);
	vcdp->declBit(c+170,"fx68k excUnit dataIo enT2",-1);
	vcdp->declBit(c+171,"fx68k excUnit dataIo enT3",-1);
	vcdp->declBit(c+172,"fx68k excUnit dataIo enT4",-1);
	// Tracing: fx68k excUnit dataIo Nanod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1694
	// Tracing: fx68k excUnit dataIo Nanod2 // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1695
	// Tracing: fx68k excUnit dataIo Irdecod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:1696
	vcdp->declBus(c+427,"fx68k excUnit dataIo iEdb",-1,15,0);
	vcdp->declBit(c+258,"fx68k excUnit dataIo aob0",-1);
	vcdp->declBit(c+342,"fx68k excUnit dataIo dobIdle",-1);
	vcdp->declBus(c+122,"fx68k excUnit dataIo dobInput",-1,15,0);
	vcdp->declBus(c+244,"fx68k excUnit dataIo Irc",-1,15,0);
	vcdp->declBus(c+305,"fx68k excUnit dataIo dbin",-1,15,0);
	vcdp->declBus(c+428,"fx68k excUnit dataIo oEdb",-1,15,0);
	vcdp->declBus(c+343,"fx68k excUnit dataIo dob",-1,15,0);
	vcdp->declBit(c+344,"fx68k excUnit dataIo xToDbin",-1);
	vcdp->declBit(c+345,"fx68k excUnit dataIo xToIrc",-1);
	vcdp->declBit(c+346,"fx68k excUnit dataIo dbinNoLow",-1);
	vcdp->declBit(c+347,"fx68k excUnit dataIo dbinNoHigh",-1);
	vcdp->declBit(c+348,"fx68k excUnit dataIo byteMux",-1);
	vcdp->declBit(c+349,"fx68k excUnit dataIo isByte_T4",-1);
	vcdp->declBit(c+350,"fx68k excUnit dataIo byteCycle",-1);
	vcdp->declBit(c+402,"fx68k excUnit alu clk",-1);
	vcdp->declBit(c+190,"fx68k excUnit alu pwrUp",-1);
	vcdp->declBit(c+169,"fx68k excUnit alu enT1",-1);
	vcdp->declBit(c+171,"fx68k excUnit alu enT3",-1);
	vcdp->declBit(c+172,"fx68k excUnit alu enT4",-1);
	vcdp->declBus(c+246,"fx68k excUnit alu ird",-1,15,0);
	vcdp->declBus(c+146,"fx68k excUnit alu aluColumn",-1,2,0);
	vcdp->declBus(c+147,"fx68k excUnit alu aluDataCtrl",-1,1,0);
	vcdp->declBit(c+148,"fx68k excUnit alu aluAddrCtrl",-1);
	vcdp->declBit(c+145,"fx68k excUnit alu alueClkEn",-1);
	vcdp->declBit(c+149,"fx68k excUnit alu ftu2Ccr",-1);
	vcdp->declBit(c+150,"fx68k excUnit alu init",-1);
	vcdp->declBit(c+151,"fx68k excUnit alu finish",-1);
	vcdp->declBit(c+152,"fx68k excUnit alu aluIsByte",-1);
	vcdp->declBus(c+243,"fx68k excUnit alu ftu",-1,15,0);
	vcdp->declBus(c+341,"fx68k excUnit alu alub",-1,15,0);
	vcdp->declBus(c+317,"fx68k excUnit alu iDataBus",-1,15,0);
	vcdp->declBus(c+316,"fx68k excUnit alu iAddrBus",-1,15,0);
	vcdp->declBit(c+252,"fx68k excUnit alu ze",-1);
	vcdp->declBus(c+247,"fx68k excUnit alu alue",-1,15,0);
	vcdp->declBus(c+242,"fx68k excUnit alu ccr",-1,7,0);
	vcdp->declBus(c+304,"fx68k excUnit alu aluOut",-1,15,0);
	vcdp->declBus(c+438,"fx68k excUnit alu CF",-1,31,0);
	vcdp->declBus(c+439,"fx68k excUnit alu VF",-1,31,0);
	vcdp->declBus(c+440,"fx68k excUnit alu ZF",-1,31,0);
	vcdp->declBus(c+441,"fx68k excUnit alu NF",-1,31,0);
	vcdp->declBus(c+436,"fx68k excUnit alu XF",-1,31,0);
	vcdp->declBus(c+304,"fx68k excUnit alu aluLatch",-1,15,0);
	vcdp->declBus(c+351,"fx68k excUnit alu pswCcr",-1,4,0);
	vcdp->declBus(c+352,"fx68k excUnit alu ccrCore",-1,4,0);
	vcdp->declBus(c+191,"fx68k excUnit alu result",-1,15,0);
	vcdp->declBus(c+192,"fx68k excUnit alu ccrTemp",-1,4,0);
	vcdp->declBit(c+353,"fx68k excUnit alu coreH",-1);
	vcdp->declBus(c+193,"fx68k excUnit alu subResult",-1,15,0);
	vcdp->declBit(c+194,"fx68k excUnit alu subHcarry",-1);
	vcdp->declBit(c+195,"fx68k excUnit alu subCout",-1);
	vcdp->declBit(c+196,"fx68k excUnit alu subOv",-1);
	vcdp->declBus(c+354,"fx68k excUnit alu row",-1,15,0);
	vcdp->declBit(c+355,"fx68k excUnit alu isArX",-1);
	vcdp->declBit(c+356,"fx68k excUnit alu noCcrEn",-1);
	vcdp->declBit(c+357,"fx68k excUnit alu isByte",-1);
	vcdp->declBus(c+358,"fx68k excUnit alu ccrMask",-1,4,0);
	vcdp->declBus(c+359,"fx68k excUnit alu oper",-1,4,0);
	vcdp->declBus(c+197,"fx68k excUnit alu aOperand",-1,15,0);
	vcdp->declBus(c+198,"fx68k excUnit alu dOperand",-1,15,0);
	vcdp->declBit(c+153,"fx68k excUnit alu isCorf",-1);
	vcdp->declBus(c+123,"fx68k excUnit alu cRow",-1,15,0);
	vcdp->declBit(c+124,"fx68k excUnit alu cIsArX",-1);
	vcdp->declBit(c+125,"fx68k excUnit alu cNoCcrEn",-1);
	vcdp->declBus(c+199,"fx68k excUnit alu cMask",-1,4,0);
	vcdp->declBus(c+200,"fx68k excUnit alu aluOp",-1,4,0);
	vcdp->declBit(c+360,"fx68k excUnit alu shftIsMul",-1);
	vcdp->declBit(c+361,"fx68k excUnit alu shftIsDiv",-1);
	vcdp->declBus(c+201,"fx68k excUnit alu shftResult",-1,31,0);
	vcdp->declBus(c+362,"fx68k excUnit alu bcdLatch",-1,7,0);
	vcdp->declBit(c+363,"fx68k excUnit alu bcdCarry",-1);
	vcdp->declBit(c+364,"fx68k excUnit alu bcdOverf",-1);
	vcdp->declBit(c+365,"fx68k excUnit alu isLong",-1);
	vcdp->declBit(c+366,"fx68k excUnit alu rIrd8",-1);
	vcdp->declBit(c+126,"fx68k excUnit alu isShift",-1);
	vcdp->declBit(c+202,"fx68k excUnit alu shftCin",-1);
	vcdp->declBit(c+127,"fx68k excUnit alu shftRight",-1);
	vcdp->declBit(c+367,"fx68k excUnit alu addCin",-1);
	vcdp->declBit(c+203,"fx68k excUnit alu shftMsb",-1);
	vcdp->declBus(c+204,"fx68k excUnit alu bcdResult",-1,7,0);
	vcdp->declBit(c+154,"fx68k excUnit alu bcdC",-1);
	vcdp->declBit(c+205,"fx68k excUnit alu bcdV",-1);
	vcdp->declBus(c+206,"fx68k excUnit alu ccrMasked",-1,4,0);
	vcdp->declBus(c+246,"fx68k excUnit alu rowDecoder ird",-1,15,0);
	vcdp->declBus(c+123,"fx68k excUnit alu rowDecoder row",-1,15,0);
	vcdp->declBit(c+125,"fx68k excUnit alu rowDecoder noCcrEn",-1);
	vcdp->declBit(c+124,"fx68k excUnit alu rowDecoder isArX",-1);
	vcdp->declBit(c+368,"fx68k excUnit alu rowDecoder eaRdir",-1);
	vcdp->declBit(c+369,"fx68k excUnit alu rowDecoder eaAdir",-1);
	vcdp->declBit(c+128,"fx68k excUnit alu rowDecoder size11",-1);
	vcdp->declBus(c+129,"fx68k excUnit alu rowDecoder unnamedblk1 stype",-1,1,0);
	vcdp->declBus(c+354,"fx68k excUnit alu aluGetOp row",-1,15,0);
	vcdp->declBus(c+146,"fx68k excUnit alu aluGetOp col",-1,2,0);
	vcdp->declBit(c+153,"fx68k excUnit alu aluGetOp isCorf",-1);
	vcdp->declBus(c+200,"fx68k excUnit alu aluGetOp aluOp",-1,4,0);
	vcdp->declBus(c+146,"fx68k excUnit alu ccrTable col",-1,2,0);
	vcdp->declBus(c+354,"fx68k excUnit alu ccrTable row",-1,15,0);
	vcdp->declBit(c+151,"fx68k excUnit alu ccrTable finish",-1);
	vcdp->declBus(c+199,"fx68k excUnit alu ccrTable ccrMask",-1,4,0);
	vcdp->declBus(c+442,"fx68k excUnit alu ccrTable KNZ00",-1,4,0);
	vcdp->declBus(c+443,"fx68k excUnit alu ccrTable KKZKK",-1,4,0);
	vcdp->declBus(c+444,"fx68k excUnit alu ccrTable KNZKK",-1,4,0);
	vcdp->declBus(c+442,"fx68k excUnit alu ccrTable KNZ10",-1,4,0);
	vcdp->declBus(c+442,"fx68k excUnit alu ccrTable KNZ0C",-1,4,0);
	vcdp->declBus(c+442,"fx68k excUnit alu ccrTable KNZVC",-1,4,0);
	vcdp->declBus(c+445,"fx68k excUnit alu ccrTable XNKVC",-1,4,0);
	vcdp->declBus(c+446,"fx68k excUnit alu ccrTable CUPDALL",-1,4,0);
	vcdp->declBus(c+447,"fx68k excUnit alu ccrTable CUNUSED",-1,4,0);
	vcdp->declBus(c+155,"fx68k excUnit alu ccrTable ccrMask1",-1,4,0);
	vcdp->declBus(c+156,"fx68k excUnit alu shifter data",-1,31,0);
	vcdp->declBit(c+357,"fx68k excUnit alu shifter isByte",-1);
	vcdp->declBit(c+365,"fx68k excUnit alu shifter isLong",-1);
	vcdp->declBit(c+130,"fx68k excUnit alu shifter swapWords",-1);
	vcdp->declBit(c+127,"fx68k excUnit alu shifter dir",-1);
	vcdp->declBit(c+202,"fx68k excUnit alu shifter cin",-1);
	vcdp->declBus(c+201,"fx68k excUnit alu shifter result",-1,31,0);
	vcdp->declBus(c+207,"fx68k excUnit alu shifter tdata",-1,31,0);
	vcdp->declBus(c+370,"fx68k excUnit alu aluCorf binResult",-1,7,0);
	vcdp->declBit(c+371,"fx68k excUnit alu aluCorf bAdd",-1);
	vcdp->declBit(c+372,"fx68k excUnit alu aluCorf cin",-1);
	vcdp->declBit(c+353,"fx68k excUnit alu aluCorf hCarry",-1);
	vcdp->declBus(c+204,"fx68k excUnit alu aluCorf bcdResult",-1,7,0);
	vcdp->declBit(c+154,"fx68k excUnit alu aluCorf dC",-1);
	vcdp->declBit(c+205,"fx68k excUnit alu aluCorf ov",-1);
	vcdp->declBus(c+208,"fx68k excUnit alu aluCorf htemp",-1,8,0);
	vcdp->declBus(c+209,"fx68k excUnit alu aluCorf hNib",-1,4,0);
	vcdp->declBit(c+131,"fx68k excUnit alu aluCorf lowC",-1);
	vcdp->declBit(c+210,"fx68k excUnit alu aluCorf highC",-1);
	// Tracing: fx68k nDecoder Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:644
	// Tracing: fx68k nDecoder Irdecod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:644
	// Tracing: fx68k nDecoder Nanod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:644
	// Tracing: fx68k nDecoder Nanod2 // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:644
	vcdp->declBit(c+170,"fx68k nDecoder enT2",-1);
	vcdp->declBit(c+172,"fx68k nDecoder enT4",-1);
	vcdp->declBus(c+233,"fx68k nDecoder microLatch",-1,16,0);
	vcdp->declArray(c+227,"fx68k nDecoder nanoLatch",-1,67,0);
	vcdp->declBus(c+448,"fx68k nDecoder NANO_IR2IRD",-1,31,0);
	vcdp->declBus(c+449,"fx68k nDecoder NANO_TOIRC",-1,31,0);
	vcdp->declBus(c+450,"fx68k nDecoder NANO_ALU_COL",-1,31,0);
	vcdp->declBus(c+451,"fx68k nDecoder NANO_ALU_FI",-1,31,0);
	vcdp->declBus(c+452,"fx68k nDecoder NANO_TODBIN",-1,31,0);
	vcdp->declBus(c+453,"fx68k nDecoder NANO_ALUE",-1,31,0);
	vcdp->declBus(c+453,"fx68k nDecoder NANO_DCR",-1,31,0);
	vcdp->declBus(c+454,"fx68k nDecoder NANO_DOBCTRL_1",-1,31,0);
	vcdp->declBus(c+455,"fx68k nDecoder NANO_LOWBYTE",-1,31,0);
	vcdp->declBus(c+456,"fx68k nDecoder NANO_HIGHBYTE",-1,31,0);
	vcdp->declBus(c+457,"fx68k nDecoder NANO_DOBCTRL_0",-1,31,0);
	vcdp->declBus(c+458,"fx68k nDecoder NANO_ALU_DCTRL",-1,31,0);
	vcdp->declBus(c+459,"fx68k nDecoder NANO_ALU_ACTRL",-1,31,0);
	vcdp->declBus(c+460,"fx68k nDecoder NANO_DBD2ALUB",-1,31,0);
	vcdp->declBus(c+461,"fx68k nDecoder NANO_ABD2ALUB",-1,31,0);
	vcdp->declBus(c+462,"fx68k nDecoder NANO_DBIN2DBD",-1,31,0);
	vcdp->declBus(c+463,"fx68k nDecoder NANO_DBIN2ABD",-1,31,0);
	vcdp->declBus(c+464,"fx68k nDecoder NANO_ALU2ABD",-1,31,0);
	vcdp->declBus(c+465,"fx68k nDecoder NANO_ALU2DBD",-1,31,0);
	vcdp->declBus(c+466,"fx68k nDecoder NANO_RZ",-1,31,0);
	vcdp->declBus(c+467,"fx68k nDecoder NANO_BUSBYTE",-1,31,0);
	vcdp->declBus(c+468,"fx68k nDecoder NANO_PCLABL",-1,31,0);
	vcdp->declBus(c+469,"fx68k nDecoder NANO_RXL_DBL",-1,31,0);
	vcdp->declBus(c+470,"fx68k nDecoder NANO_PCLDBL",-1,31,0);
	vcdp->declBus(c+471,"fx68k nDecoder NANO_ABDHRECHARGE",-1,31,0);
	vcdp->declBus(c+472,"fx68k nDecoder NANO_REG2ABL",-1,31,0);
	vcdp->declBus(c+473,"fx68k nDecoder NANO_ABL2REG",-1,31,0);
	vcdp->declBus(c+474,"fx68k nDecoder NANO_ABLABD",-1,31,0);
	vcdp->declBus(c+475,"fx68k nDecoder NANO_DBLDBD",-1,31,0);
	vcdp->declBus(c+476,"fx68k nDecoder NANO_DBL2REG",-1,31,0);
	vcdp->declBus(c+477,"fx68k nDecoder NANO_REG2DBL",-1,31,0);
	vcdp->declBus(c+478,"fx68k nDecoder NANO_ATLCTRL",-1,31,0);
	vcdp->declBus(c+479,"fx68k nDecoder NANO_FTUCONTROL",-1,31,0);
	vcdp->declBus(c+480,"fx68k nDecoder NANO_SSP",-1,31,0);
	vcdp->declBus(c+481,"fx68k nDecoder NANO_RXH_DBH",-1,31,0);
	vcdp->declBus(c+482,"fx68k nDecoder NANO_AUOUT",-1,31,0);
	vcdp->declBus(c+483,"fx68k nDecoder NANO_AUCLKEN",-1,31,0);
	vcdp->declBus(c+433,"fx68k nDecoder NANO_AUCTRL",-1,31,0);
	vcdp->declBus(c+432,"fx68k nDecoder NANO_DBLDBH",-1,31,0);
	vcdp->declBus(c+484,"fx68k nDecoder NANO_ABLABH",-1,31,0);
	vcdp->declBus(c+485,"fx68k nDecoder NANO_EXT_ABH",-1,31,0);
	vcdp->declBus(c+486,"fx68k nDecoder NANO_EXT_DBH",-1,31,0);
	vcdp->declBus(c+487,"fx68k nDecoder NANO_ATHCTRL",-1,31,0);
	vcdp->declBus(c+488,"fx68k nDecoder NANO_REG2ABH",-1,31,0);
	vcdp->declBus(c+489,"fx68k nDecoder NANO_ABH2REG",-1,31,0);
	vcdp->declBus(c+490,"fx68k nDecoder NANO_REG2DBH",-1,31,0);
	vcdp->declBus(c+491,"fx68k nDecoder NANO_DBH2REG",-1,31,0);
	vcdp->declBus(c+441,"fx68k nDecoder NANO_AOBCTRL",-1,31,0);
	vcdp->declBus(c+438,"fx68k nDecoder NANO_PCH",-1,31,0);
	vcdp->declBus(c+438,"fx68k nDecoder NANO_NO_SP_ALGN",-1,31,0);
	vcdp->declBus(c+439,"fx68k nDecoder NANO_FTU_UPDTPEND",-1,31,0);
	vcdp->declBus(c+432,"fx68k nDecoder NANO_FTU_INIT_ST",-1,31,0);
	vcdp->declBus(c+484,"fx68k nDecoder NANO_FTU_CLRTPEND",-1,31,0);
	vcdp->declBus(c+485,"fx68k nDecoder NANO_FTU_TVN",-1,31,0);
	vcdp->declBus(c+486,"fx68k nDecoder NANO_FTU_ABL2PREN",-1,31,0);
	vcdp->declBus(c+492,"fx68k nDecoder NANO_FTU_SSW",-1,31,0);
	vcdp->declBus(c+493,"fx68k nDecoder NANO_FTU_RSTPREN",-1,31,0);
	vcdp->declBus(c+487,"fx68k nDecoder NANO_FTU_IRD",-1,31,0);
	vcdp->declBus(c+488,"fx68k nDecoder NANO_FTU_2ABL",-1,31,0);
	vcdp->declBus(c+489,"fx68k nDecoder NANO_FTU_RDSR",-1,31,0);
	vcdp->declBus(c+490,"fx68k nDecoder NANO_FTU_INL",-1,31,0);
	vcdp->declBus(c+491,"fx68k nDecoder NANO_FTU_PSWI",-1,31,0);
	vcdp->declBus(c+436,"fx68k nDecoder NANO_FTU_DBL",-1,31,0);
	vcdp->declBus(c+440,"fx68k nDecoder NANO_FTU_2SR",-1,31,0);
	vcdp->declBus(c+439,"fx68k nDecoder NANO_FTU_CONST",-1,31,0);
	vcdp->declBus(c+373,"fx68k nDecoder ftuCtrl",-1,3,0);
	vcdp->declBus(c+374,"fx68k nDecoder athCtrl",-1,2,0);
	vcdp->declBus(c+375,"fx68k nDecoder atlCtrl",-1,2,0);
	vcdp->declBus(c+376,"fx68k nDecoder aobCtrl",-1,1,0);
	vcdp->declBus(c+132,"fx68k nDecoder dobCtrl",-1,1,0);
	vcdp->declBus(c+377,"fx68k nDecoder aluFinInit",-1,1,0);
	vcdp->declBit(c+431,"fx68k nDecoder dtldbd",-1);
	vcdp->declBit(c+431,"fx68k nDecoder dthdbh",-1);
	vcdp->declBit(c+431,"fx68k nDecoder dtlabd",-1);
	vcdp->declBit(c+431,"fx68k nDecoder dthabh",-1);
	vcdp->declBit(c+157,"fx68k nDecoder dblSpecial",-1);
	vcdp->declBit(c+158,"fx68k nDecoder dbhSpecial",-1);
	vcdp->declBit(c+159,"fx68k nDecoder ablSpecial",-1);
	vcdp->declBit(c+160,"fx68k nDecoder abhSpecial",-1);
	vcdp->declBit(c+211,"fx68k nDecoder isPcRel",-1);
	vcdp->declBit(c+161,"fx68k nDecoder pcRelDbl",-1);
	vcdp->declBit(c+162,"fx68k nDecoder pcRelDbh",-1);
	vcdp->declBit(c+163,"fx68k nDecoder pcRelAbl",-1);
	vcdp->declBit(c+164,"fx68k nDecoder pcRelAbh",-1);
	vcdp->declBus(c+246,"fx68k irdDecode ird",-1,15,0);
	// Tracing: fx68k irdDecode Irdecod // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:925
	vcdp->declBus(c+378,"fx68k irdDecode line",-1,3,0);
	vcdp->declBus(c+133,"fx68k irdDecode lineOnehot",-1,15,0);
	vcdp->declBit(c+134,"fx68k irdDecode isRegShift",-1);
	vcdp->declBit(c+135,"fx68k irdDecode isDynShift",-1);
	vcdp->declBit(c+379,"fx68k irdDecode isPreDecr",-1);
	vcdp->declBit(c+369,"fx68k irdDecode eaAreg",-1);
	vcdp->declBit(c+380,"fx68k irdDecode eaImmOrAbs",-1);
	vcdp->declBit(c+381,"fx68k irdDecode xIsScc",-1);
	vcdp->declBit(c+382,"fx68k irdDecode xStaticMem",-1);
	vcdp->declBus(c+136,"fx68k irdDecode ftuConst",-1,15,0);
	vcdp->declBus(c+383,"fx68k irdDecode zero28",-1,3,0);
	vcdp->declBit(c+369,"fx68k irdDecode eaAdir",-1);
	vcdp->declBit(c+384,"fx68k irdDecode size11",-1);
	vcdp->declBit(c+137,"fx68k irdDecode unnamedblk1 eaIsAreg",-1);
	vcdp->declBus(c+378,"fx68k irdDecode irdLines bin",-1,3,0);
	vcdp->declBus(c+133,"fx68k irdDecode irdLines bitMap",-1,15,0);
	// Tracing: fx68k busControl Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:2253
	vcdp->declBit(c+169,"fx68k busControl enT1",-1);
	vcdp->declBit(c+172,"fx68k busControl enT4",-1);
	vcdp->declBit(c+165,"fx68k busControl permStart",-1);
	vcdp->declBit(c+166,"fx68k busControl permStop",-1);
	vcdp->declBit(c+259,"fx68k busControl iStop",-1);
	vcdp->declBit(c+258,"fx68k busControl aob0",-1);
	vcdp->declBit(c+167,"fx68k busControl isWrite",-1);
	vcdp->declBit(c+140,"fx68k busControl isByte",-1);
	vcdp->declBit(c+385,"fx68k busControl isRmc",-1);
	vcdp->declBit(c+256,"fx68k busControl busAvail",-1);
	vcdp->declBit(c+15,"fx68k busControl bgBlock",-1);
	vcdp->declBit(c+14,"fx68k busControl busAddrErr",-1);
	vcdp->declBit(c+253,"fx68k busControl waitBusCycle",-1);
	vcdp->declBit(c+254,"fx68k busControl busStarting",-1);
	vcdp->declBit(c+257,"fx68k busControl addrOe",-1);
	vcdp->declBit(c+255,"fx68k busControl bciWrite",-1);
	vcdp->declBit(c+217,"fx68k busControl rDtack",-1);
	vcdp->declBit(c+226,"fx68k busControl BeDebounced",-1);
	vcdp->declBit(c+221,"fx68k busControl Vpai",-1);
	vcdp->declBit(c+408,"fx68k busControl ASn",-1);
	vcdp->declBit(c+409,"fx68k busControl LDSn",-1);
	vcdp->declBit(c+410,"fx68k busControl UDSn",-1);
	vcdp->declBit(c+407,"fx68k busControl eRWn",-1);
	vcdp->declBit(c+386,"fx68k busControl rAS",-1);
	vcdp->declBit(c+387,"fx68k busControl rLDS",-1);
	vcdp->declBit(c+388,"fx68k busControl rUDS",-1);
	vcdp->declBit(c+389,"fx68k busControl rRWn",-1);
	vcdp->declBit(c+390,"fx68k busControl dataOe",-1);
	vcdp->declBit(c+391,"fx68k busControl bcPend",-1);
	vcdp->declBit(c+255,"fx68k busControl isWriteReg",-1);
	vcdp->declBit(c+392,"fx68k busControl bciByte",-1);
	vcdp->declBit(c+393,"fx68k busControl isRmcReg",-1);
	vcdp->declBit(c+394,"fx68k busControl wendReg",-1);
	vcdp->declBit(c+395,"fx68k busControl addrOeDelay",-1);
	vcdp->declBit(c+396,"fx68k busControl isByteT4",-1);
	vcdp->declBit(c+212,"fx68k busControl canStart",-1);
	vcdp->declBit(c+397,"fx68k busControl busEnd",-1);
	vcdp->declBit(c+398,"fx68k busControl bcComplete",-1);
	vcdp->declBit(c+213,"fx68k busControl bcReset",-1);
	vcdp->declBit(c+168,"fx68k busControl isRcmReset",-1);
	vcdp->declBit(c+431,"fx68k busControl busRetry",-1);
	vcdp->declBus(c+399,"fx68k busControl busPhase",-1,31,0);
	vcdp->declBus(c+214,"fx68k busControl next",-1,31,0);
	vcdp->declBit(c+430,"fx68k busControl rmcIdle",-1);
	vcdp->declBit(c+215,"fx68k busControl busEnding",-1);
	vcdp->declBit(c+398,"fx68k busControl bciClear",-1);
	// Tracing: fx68k busArbiter Clks // Ignored: Unsupported: Unpacked struct/union at fx68k.sv:2169
	vcdp->declBit(c+223,"fx68k busArbiter BRi",-1);
	vcdp->declBit(c+224,"fx68k busArbiter BgackI",-1);
	vcdp->declBit(c+494,"fx68k busArbiter Halti",-1);
	vcdp->declBit(c+15,"fx68k busArbiter bgBlock",-1);
	vcdp->declBit(c+256,"fx68k busArbiter busAvail",-1);
	vcdp->declBit(c+416,"fx68k busArbiter BGn",-1);
	vcdp->declBus(c+400,"fx68k busArbiter dmaPhase",-1,31,0);
	vcdp->declBus(c+138,"fx68k busArbiter next",-1,31,0);
	vcdp->declBit(c+139,"fx68k busArbiter granting",-1);
	vcdp->declBit(c+401,"fx68k busArbiter rGranted",-1);
	vcdp->declBus(c+438,"$unit CF",-1,31,0);
	vcdp->declBus(c+439,"$unit VF",-1,31,0);
	vcdp->declBus(c+440,"$unit ZF",-1,31,0);
	vcdp->declBus(c+441,"$unit NF",-1,31,0);
	vcdp->declBus(c+436,"$unit XF",-1,31,0);
	vcdp->declBus(c+485,"$unit SF",-1,31,0);
	vcdp->declBus(c+493,"$unit UADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+434,"$unit UROM_WIDTH",-1,31,0);
	vcdp->declBus(c+495,"$unit UROM_DEPTH",-1,31,0);
	vcdp->declBus(c+487,"$unit NADDR_WIDTH",-1,31,0);
	vcdp->declBus(c+496,"$unit NANO_WIDTH",-1,31,0);
	vcdp->declBus(c+497,"$unit NANO_DEPTH",-1,31,0);
	vcdp->declBus(c+498,"$unit BSER1_NMA",-1,31,0);
	vcdp->declBus(c+499,"$unit RSTP0_NMA",-1,31,0);
	vcdp->declBus(c+500,"$unit HALT1_NMA",-1,31,0);
	vcdp->declBus(c+501,"$unit TRAC1_NMA",-1,31,0);
	vcdp->declBus(c+502,"$unit ITLX1_NMA",-1,31,0);
	vcdp->declBus(c+486,"$unit TVN_SPURIOUS",-1,31,0);
	vcdp->declBus(c+485,"$unit TVN_AUTOVEC",-1,31,0);
	vcdp->declBus(c+432,"$unit TVN_INTERRUPT",-1,31,0);
	vcdp->declBus(c+503,"$unit NANO_DOB_DBD",-1,1,0);
	vcdp->declBus(c+504,"$unit NANO_DOB_ADB",-1,1,0);
	vcdp->declBus(c+505,"$unit NANO_DOB_ALU",-1,1,0);
	vcdp->declBus(c+491,"$unit MASK_NBITS",-1,31,0);
	vcdp->declBus(c+439,"$unit OP_AND",-1,31,0);
	vcdp->declBus(c+440,"$unit OP_SUB",-1,31,0);
	vcdp->declBus(c+441,"$unit OP_SUBX",-1,31,0);
	vcdp->declBus(c+436,"$unit OP_ADD",-1,31,0);
	vcdp->declBus(c+491,"$unit OP_EXT",-1,31,0);
	vcdp->declBus(c+490,"$unit OP_SBCD",-1,31,0);
	vcdp->declBus(c+489,"$unit OP_SUB0",-1,31,0);
	vcdp->declBus(c+488,"$unit OP_OR",-1,31,0);
	vcdp->declBus(c+487,"$unit OP_EOR",-1,31,0);
	vcdp->declBus(c+493,"$unit OP_SUBC",-1,31,0);
	vcdp->declBus(c+492,"$unit OP_ADDC",-1,31,0);
	vcdp->declBus(c+486,"$unit OP_ADDX",-1,31,0);
	vcdp->declBus(c+485,"$unit OP_ASL",-1,31,0);
	vcdp->declBus(c+484,"$unit OP_ASR",-1,31,0);
	vcdp->declBus(c+432,"$unit OP_LSL",-1,31,0);
	vcdp->declBus(c+433,"$unit OP_LSR",-1,31,0);
	vcdp->declBus(c+434,"$unit OP_ROL",-1,31,0);
	vcdp->declBus(c+506,"$unit OP_ROR",-1,31,0);
	vcdp->declBus(c+483,"$unit OP_ROXL",-1,31,0);
	vcdp->declBus(c+482,"$unit OP_ROXR",-1,31,0);
	vcdp->declBus(c+507,"$unit OP_SLAA",-1,31,0);
	vcdp->declBus(c+481,"$unit OP_ABCD",-1,31,0);
    }
}

void Vfx68k::traceFullThis__1(Vfx68k__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vfx68k* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->fx68k__DOT__excUnit__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBit(c+2,(vlTOPp->fx68k__DOT__wClk));
	vcdp->fullBus(c+3,(vlTOPp->fx68k__DOT__nma),10);
	vcdp->fullBus(c+4,((((IData)(vlTOPp->fx68k__DOT__microToNanoAddr__DOT__orgBase) 
			     << 2U) | (3U & (IData)(vlTOPp->fx68k__DOT__nma)))),9);
	vcdp->fullBus(c+5,(vlTOPp->fx68k__DOT__psw),16);
	vcdp->fullBus(c+6,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1
			   [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				     >> 0xcU))]),10);
	vcdp->fullBus(c+7,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
			   [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				     >> 0xcU))]),10);
	vcdp->fullBus(c+8,(((1U & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap))
			     ? (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3)
			     : vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23
			    [(0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				      >> 0xcU))])),10);
	vcdp->fullBit(c+9,(((1U == (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap))
			     ? (0x7cU == (0xf5ffU & (IData)(vlTOPp->fx68k__DOT__Ir)))
			     : ((0x10U == (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap)) 
				& ((0x46c0U == (0xffc0U 
						& (IData)(vlTOPp->fx68k__DOT__Ir))) 
				   | ((0x4e60U == (0xfff0U 
						   & (IData)(vlTOPp->fx68k__DOT__Ir))) 
				      | (((0x4e70U 
					   == (IData)(vlTOPp->fx68k__DOT__Ir)) 
					  | (0x4e73U 
					     == (IData)(vlTOPp->fx68k__DOT__Ir))) 
					 | (0x4e72U 
					    == (IData)(vlTOPp->fx68k__DOT__Ir)))))))));
	vcdp->fullBit(c+10,((0U != ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll) 
				    & (IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap)))));
	vcdp->fullBit(c+11,((1U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap) 
				   >> 0xaU))));
	vcdp->fullBit(c+12,((1U & ((IData)(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap) 
				   >> 0xfU))));
	vcdp->fullBus(c+13,(vlTOPp->fx68k__DOT__tvn),4);
	vcdp->fullBit(c+14,(vlTOPp->fx68k__DOT__busAddrErr));
	vcdp->fullBit(c+15,(vlTOPp->fx68k__DOT__bgBlock));
	vcdp->fullBit(c+16,(vlTOPp->fx68k__DOT__iAddrErr));
	vcdp->fullBit(c+17,(vlTOPp->fx68k__DOT__enErrClk));
	vcdp->fullBit(c+18,(vlTOPp->fx68k__DOT__iplStable));
	vcdp->fullBit(c+19,(vlTOPp->fx68k__DOT__iplComp));
	vcdp->fullBus(c+20,((0xffU & ((IData)(vlTOPp->fx68k__DOT__nma) 
				      >> 2U))),8);
	vcdp->fullBus(c+21,(vlTOPp->fx68k__DOT__microToNanoAddr__DOT__orgBase),7);
	vcdp->fullBus(c+22,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__lineBmap),16);
	vcdp->fullBus(c+23,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__eaCol),4);
	vcdp->fullBus(c+24,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__movEa),4);
	vcdp->fullBus(c+25,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arIll),16);
	vcdp->fullBus(c+26,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[0]),10);
	vcdp->fullBus(c+27,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[1]),10);
	vcdp->fullBus(c+28,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[2]),10);
	vcdp->fullBus(c+29,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[3]),10);
	vcdp->fullBus(c+30,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[4]),10);
	vcdp->fullBus(c+31,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[5]),10);
	vcdp->fullBus(c+32,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[6]),10);
	vcdp->fullBus(c+33,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[7]),10);
	vcdp->fullBus(c+34,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[8]),10);
	vcdp->fullBus(c+35,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[9]),10);
	vcdp->fullBus(c+36,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[10]),10);
	vcdp->fullBus(c+37,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[11]),10);
	vcdp->fullBus(c+38,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[12]),10);
	vcdp->fullBus(c+39,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[13]),10);
	vcdp->fullBus(c+40,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[14]),10);
	vcdp->fullBus(c+41,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA1[15]),10);
	vcdp->fullBus(c+42,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[0]),10);
	vcdp->fullBus(c+43,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[1]),10);
	vcdp->fullBus(c+44,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[2]),10);
	vcdp->fullBus(c+45,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[3]),10);
	vcdp->fullBus(c+46,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[4]),10);
	vcdp->fullBus(c+47,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[5]),10);
	vcdp->fullBus(c+48,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[6]),10);
	vcdp->fullBus(c+49,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[7]),10);
	vcdp->fullBus(c+50,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[8]),10);
	vcdp->fullBus(c+51,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[9]),10);
	vcdp->fullBus(c+52,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[10]),10);
	vcdp->fullBus(c+53,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[11]),10);
	vcdp->fullBus(c+54,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[12]),10);
	vcdp->fullBus(c+55,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[13]),10);
	vcdp->fullBus(c+56,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[14]),10);
	vcdp->fullBus(c+57,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__arA23[15]),10);
	vcdp->fullBus(c+58,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__scA3),10);
	vcdp->fullBit(c+59,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__illMisc));
	vcdp->fullBus(c+60,(vlTOPp->fx68k__DOT__uaddrDecode__DOT__pla_lined__DOT__a1Misc),10);
	vcdp->fullBus(c+61,(vlTOPp->fx68k__DOT__sequencer__DOT__uNma),10);
	vcdp->fullBus(c+62,(vlTOPp->fx68k__DOT__sequencer__DOT__grp1Nma),10);
	vcdp->fullBus(c+63,(vlTOPp->fx68k__DOT__sequencer__DOT__c0c1),2);
	vcdp->fullBus(c+64,(vlTOPp->fx68k__DOT__sequencer__DOT__enl),2);
	vcdp->fullBus(c+65,(vlTOPp->fx68k__DOT__sequencer__DOT__ms0),2);
	vcdp->fullBus(c+66,(vlTOPp->fx68k__DOT__sequencer__DOT__m01),4);
	vcdp->fullBus(c+67,((3U & ((IData)(vlTOPp->fx68k__DOT__psw) 
				   >> 2U))),2);
	vcdp->fullBus(c+68,(((2U & ((IData)(vlTOPp->fx68k__DOT__psw) 
				    >> 2U)) | (1U & 
					       ((IData)(vlTOPp->fx68k__DOT__psw) 
						>> 1U)))),2);
	vcdp->fullBit(c+69,(vlTOPp->fx68k__DOT__sequencer__DOT__ccTest));
	vcdp->fullBit(c+70,(vlTOPp->fx68k__DOT__sequencer__DOT__grp1LatchEn));
	vcdp->fullBit(c+71,(vlTOPp->fx68k__DOT__sequencer__DOT__grp0LatchEn));
	vcdp->fullBus(c+72,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[0]),16);
	vcdp->fullBus(c+73,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[1]),16);
	vcdp->fullBus(c+74,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[2]),16);
	vcdp->fullBus(c+75,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[3]),16);
	vcdp->fullBus(c+76,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[4]),16);
	vcdp->fullBus(c+77,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[5]),16);
	vcdp->fullBus(c+78,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[6]),16);
	vcdp->fullBus(c+79,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[7]),16);
	vcdp->fullBus(c+80,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[8]),16);
	vcdp->fullBus(c+81,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[9]),16);
	vcdp->fullBus(c+82,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[10]),16);
	vcdp->fullBus(c+83,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[11]),16);
	vcdp->fullBus(c+84,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[12]),16);
	vcdp->fullBus(c+85,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[13]),16);
	vcdp->fullBus(c+86,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[14]),16);
	vcdp->fullBus(c+87,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[15]),16);
	vcdp->fullBus(c+88,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[16]),16);
	vcdp->fullBus(c+89,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68L[17]),16);
	vcdp->fullBus(c+90,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[0]),16);
	vcdp->fullBus(c+91,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[1]),16);
	vcdp->fullBus(c+92,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[2]),16);
	vcdp->fullBus(c+93,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[3]),16);
	vcdp->fullBus(c+94,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[4]),16);
	vcdp->fullBus(c+95,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[5]),16);
	vcdp->fullBus(c+96,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[6]),16);
	vcdp->fullBus(c+97,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[7]),16);
	vcdp->fullBus(c+98,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[8]),16);
	vcdp->fullBus(c+99,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[9]),16);
	vcdp->fullBus(c+100,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[10]),16);
	vcdp->fullBus(c+101,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[11]),16);
	vcdp->fullBus(c+102,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[12]),16);
	vcdp->fullBus(c+103,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[13]),16);
	vcdp->fullBus(c+104,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[14]),16);
	vcdp->fullBus(c+105,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[15]),16);
	vcdp->fullBus(c+106,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[16]),16);
	vcdp->fullBus(c+107,(vlTOPp->fx68k__DOT__excUnit__DOT__regs68H[17]),16);
	vcdp->fullBus(c+108,(((vlTOPp->fx68k__DOT__excUnit__DOT__regs68H
			       [0x10U] << 0x10U) | 
			      vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
			      [0x10U])),32);
	vcdp->fullBit(c+109,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abl));
	vcdp->fullBit(c+110,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abd));
	vcdp->fullBit(c+111,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbl));
	vcdp->fullBit(c+112,(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbd));
	vcdp->fullBit(c+113,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abl));
	vcdp->fullBit(c+114,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abd));
	vcdp->fullBit(c+115,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbl));
	vcdp->fullBit(c+116,(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbd));
	vcdp->fullBus(c+117,(vlTOPp->fx68k__DOT__excUnit__DOT__auInpMux),32);
	vcdp->fullBus(c+118,(vlTOPp->fx68k__DOT__excUnit__DOT__aulow),17);
	vcdp->fullBus(c+119,(((0xffff0000U & ((((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Dbh) 
						+ (vlTOPp->fx68k__DOT__excUnit__DOT__auInpMux 
						   >> 0x10U)) 
					       + (1U 
						  & (vlTOPp->fx68k__DOT__excUnit__DOT__aulow 
						     >> 0x10U))) 
					      << 0x10U)) 
			      | (0xffffU & vlTOPp->fx68k__DOT__excUnit__DOT__aulow))),32);
	vcdp->fullBus(c+120,(vlTOPp->fx68k__DOT__excUnit__DOT__prHbit),4);
	vcdp->fullBus(c+121,(vlTOPp->fx68k__DOT__excUnit__DOT__dcrCode),16);
	vcdp->fullBus(c+122,(vlTOPp->fx68k__DOT__excUnit__DOT__dobInput),16);
	vcdp->fullBus(c+123,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow),16);
	vcdp->fullBit(c+124,(((((4U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						>> 0xcU))) 
				| (9U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						  >> 0xcU)))) 
			       | (0xdU == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						   >> 0xcU)))) 
			      & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow) 
				  >> 0xaU) | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cRow) 
					      >> 0xcU)))));
	vcdp->fullBit(c+125,((((((((IData)(vlTOPp->fx68k__DOT__Ird) 
				   >> 0xfU) & (~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
						  >> 0xdU))) 
				 & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				    >> 0xcU)) & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__size11)) 
			       | ((5U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						  >> 0xcU))) 
				  & (1U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						  >> 3U))))) 
			      | ((((~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				       >> 0xfU)) & 
				   (~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				       >> 0xeU))) & 
				  ((IData)(vlTOPp->fx68k__DOT__Ird) 
				   >> 0xdU)) & (1U 
						== 
						(7U 
						 & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						    >> 6U)))))));
	vcdp->fullBit(c+126,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isShift));
	vcdp->fullBit(c+127,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftRight));
	vcdp->fullBit(c+128,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__size11));
	vcdp->fullBus(c+129,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rowDecoder__DOT__unnamedblk1__DOT__stype),2);
	vcdp->fullBit(c+130,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT____Vcellinp__shifter__swapWords));
	vcdp->fullBit(c+131,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__lowC));
	vcdp->fullBus(c+132,(vlTOPp->fx68k__DOT__nDecoder__DOT__dobCtrl),2);
	vcdp->fullBus(c+133,(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot),16);
	vcdp->fullBit(c+134,(vlTOPp->fx68k__DOT__irdDecode__DOT__isRegShift));
	vcdp->fullBit(c+135,(((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__isRegShift) 
			      & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				 >> 5U))));
	vcdp->fullBus(c+136,(((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
				      >> 6U) | ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
						>> 7U)))
			       ? ((0xff00U & (VL_NEGATE_I((IData)(
								  (1U 
								   & ((IData)(vlTOPp->fx68k__DOT__Ird) 
								      >> 7U)))) 
					      << 8U)) 
				  | (0xffU & (IData)(vlTOPp->fx68k__DOT__Ird)))
			       : ((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					  >> 5U) | 
					 ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					  >> 0xeU)))
				   ? ((0U == (7U & 
					      ((IData)(vlTOPp->fx68k__DOT__Ird) 
					       >> 9U)))
				       ? 8U : (7U & 
					       ((IData)(vlTOPp->fx68k__DOT__Ird) 
						>> 9U)))
				   : ((1U & (((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
					      >> 8U) 
					     | ((IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot) 
						>> 0xcU)))
				       ? 0xfU : ((0x10U 
						  & (IData)(vlTOPp->fx68k__DOT__irdDecode__DOT__lineOnehot))
						  ? 0x80U
						  : 0U))))),16);
	vcdp->fullBit(c+137,(vlTOPp->fx68k__DOT__irdDecode__DOT__unnamedblk1__DOT__eaIsAreg));
	vcdp->fullBus(c+138,(vlTOPp->fx68k__DOT__busArbiter__DOT__next),32);
	vcdp->fullBit(c+139,(((((2U == vlTOPp->fx68k__DOT__busArbiter__DOT__next) 
				| (6U == vlTOPp->fx68k__DOT__busArbiter__DOT__next)) 
			       | (3U == vlTOPp->fx68k__DOT__busArbiter__DOT__next)) 
			      | (5U == vlTOPp->fx68k__DOT__busArbiter__DOT__next))));
	vcdp->fullBit(c+140,((1U & ((IData)((vlTOPp->fx68k__DOT__Nanod 
					     >> 0x34U)) 
				    & ((IData)((vlTOPp->fx68k__DOT__Irdecod 
						>> 0x20U)) 
				       | (IData)((vlTOPp->fx68k__DOT__Irdecod 
						  >> 0x1fU)))))));
	vcdp->fullBus(c+141,(((IData)(vlTOPp->fx68k__DOT__inExcept01)
			       ? ((0xcU == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
				   ? 0x60U : ((0xdU 
					       == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
					       ? (0x60U 
						  | ((IData)(vlTOPp->fx68k__DOT__pswI) 
						     << 2U))
					       : ((0xfU 
						   == (IData)(vlTOPp->fx68k__DOT__tvnLatch))
						   ? 
						  (0x3fcU 
						   & ((IData)(vlTOPp->fx68k__DOT__Ird) 
						      << 2U))
						   : 
						  ((IData)(vlTOPp->fx68k__DOT__tvnLatch) 
						   << 2U))))
			       : (0xfcU & ((IData)(
						   (vlTOPp->fx68k__DOT__Irdecod 
						    >> 1U)) 
					   << 2U)))),16);
	vcdp->fullBus(c+142,(((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Abd)
			       ? ((0x11U >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))
				   ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
				  [vlTOPp->fx68k__DOT__excUnit__DOT__actualRy]
				   : 0U) : ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Abd)
					     ? ((0x11U 
						 >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))
						 ? 
						vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
						[vlTOPp->fx68k__DOT__excUnit__DOT__actualRx]
						 : 0U)
					     : ((1U 
						 & (IData)(
							   (vlTOPp->fx68k__DOT__Nanod 
							    >> 2U)))
						 ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->fx68k__DOT__Nanod2 
							     >> 0x19U)))
						  ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch)
						  : 0U))))),16);
	vcdp->fullBus(c+143,(((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__ryl2Dbd)
			       ? ((0x11U >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy))
				   ? vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
				  [vlTOPp->fx68k__DOT__excUnit__DOT__actualRy]
				   : 0U) : ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__rxl2Dbd)
					     ? ((0x11U 
						 >= (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx))
						 ? 
						vlTOPp->fx68k__DOT__excUnit__DOT__regs68L
						[vlTOPp->fx68k__DOT__excUnit__DOT__actualRx]
						 : 0U)
					     : ((1U 
						 & (IData)(
							   (vlTOPp->fx68k__DOT__Nanod2 
							    >> 0x15U)))
						 ? (IData)(vlTOPp->fx68k__DOT__alue)
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->fx68k__DOT__Nanod 
							     >> 1U)))
						  ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dbin)
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->fx68k__DOT__Nanod2 
							      >> 0x1aU)))
						   ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch)
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->fx68k__DOT__Nanod2 
							       >> 0x17U)))
						    ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput)
						    : 0U))))))),16);
	vcdp->fullBit(c+144,((1U & ((IData)((vlTOPp->fx68k__DOT__Nanod 
					     >> 0x1eU)) 
				    | ((IData)((vlTOPp->fx68k__DOT__Nanod 
						>> 5U)) 
				       & (IData)((vlTOPp->fx68k__DOT__Nanod 
						  >> 0x20U)))))));
	vcdp->fullBit(c+145,(((IData)(vlTOPp->fx68k__DOT__enT3) 
			      & (IData)((vlTOPp->fx68k__DOT__Nanod2 
					 >> 0x16U)))));
	vcdp->fullBus(c+146,((7U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0xbU)))),3);
	vcdp->fullBus(c+147,((3U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 9U)))),2);
	vcdp->fullBit(c+148,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 8U)))));
	vcdp->fullBit(c+149,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x26U)))));
	vcdp->fullBit(c+150,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 7U)))));
	vcdp->fullBit(c+151,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 6U)))));
	vcdp->fullBit(c+152,((1U & (IData)((vlTOPp->fx68k__DOT__Irdecod 
					    >> 0x20U)))));
	vcdp->fullBit(c+153,((2U == (3U & (IData)((vlTOPp->fx68k__DOT__Nanod 
						   >> 9U))))));
	vcdp->fullBit(c+154,((1U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
				     | (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr)) 
				    >> 4U))));
	vcdp->fullBus(c+155,(((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					     >> 6U)))
			       ? ((0x80U & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row))
				   ? 0xfU : 0xcU) : 
			      ((1U & (((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				       >> 0xdU) | ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
						   >> 0xeU)))
			        ? 4U : 0xfU))),5);
	vcdp->fullBus(c+156,((((IData)(vlTOPp->fx68k__DOT__alue) 
			       << 0x10U) | (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aOperand))),32);
	vcdp->fullBit(c+157,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x12U)))));
	vcdp->fullBit(c+158,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x13U)))));
	vcdp->fullBit(c+159,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x11U)))));
	vcdp->fullBit(c+160,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x10U)))));
	vcdp->fullBit(c+161,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			      & (~ (vlTOPp->fx68k__DOT__nanoLatch[1U] 
				    >> 8U)))));
	vcdp->fullBit(c+162,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			      & (~ (vlTOPp->fx68k__DOT__nanoLatch[0U] 
				    >> 0x16U)))));
	vcdp->fullBit(c+163,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			      & (vlTOPp->fx68k__DOT__nanoLatch[1U] 
				 >> 8U))));
	vcdp->fullBit(c+164,(((IData)(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel) 
			      & (vlTOPp->fx68k__DOT__nanoLatch[0U] 
				 >> 0x16U))));
	vcdp->fullBit(c+165,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x37U)))));
	vcdp->fullBit(c+166,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x36U)))));
	vcdp->fullBit(c+167,((1U & (IData)((vlTOPp->fx68k__DOT__Nanod 
					    >> 0x35U)))));
	vcdp->fullBit(c+168,((((5U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase) 
			       & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__bcReset)) 
			      & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg))));
	vcdp->fullBit(c+169,(vlTOPp->fx68k__DOT__enT1));
	vcdp->fullBit(c+170,(vlTOPp->fx68k__DOT__enT2));
	vcdp->fullBit(c+171,(vlTOPp->fx68k__DOT__enT3));
	vcdp->fullBit(c+172,(vlTOPp->fx68k__DOT__enT4));
	vcdp->fullBit(c+173,(vlTOPp->fx68k__DOT__rstUrom));
	vcdp->fullBus(c+174,(vlTOPp->fx68k__DOT__excUnit__DOT__dblMux),16);
	vcdp->fullBus(c+175,(vlTOPp->fx68k__DOT__excUnit__DOT__dbhMux),16);
	vcdp->fullBus(c+176,(vlTOPp->fx68k__DOT__excUnit__DOT__abhMux),16);
	vcdp->fullBus(c+177,(vlTOPp->fx68k__DOT__excUnit__DOT__ablMux),16);
	vcdp->fullBus(c+178,(vlTOPp->fx68k__DOT__excUnit__DOT__rxMux),5);
	vcdp->fullBus(c+179,(vlTOPp->fx68k__DOT__excUnit__DOT__ryMux),5);
	vcdp->fullBus(c+180,(vlTOPp->fx68k__DOT__excUnit__DOT__rxReg),4);
	vcdp->fullBus(c+181,(vlTOPp->fx68k__DOT__excUnit__DOT__ryReg),4);
	vcdp->fullBit(c+182,(vlTOPp->fx68k__DOT__excUnit__DOT__rxIsSp));
	vcdp->fullBit(c+183,(vlTOPp->fx68k__DOT__excUnit__DOT__ryIsSp));
	vcdp->fullBit(c+184,(vlTOPp->fx68k__DOT__excUnit__DOT__abhIdle));
	vcdp->fullBit(c+185,(vlTOPp->fx68k__DOT__excUnit__DOT__ablIdle));
	vcdp->fullBit(c+186,(vlTOPp->fx68k__DOT__excUnit__DOT__abdIdle));
	vcdp->fullBit(c+187,(vlTOPp->fx68k__DOT__excUnit__DOT__dbhIdle));
	vcdp->fullBit(c+188,(vlTOPp->fx68k__DOT__excUnit__DOT__dblIdle));
	vcdp->fullBit(c+189,(vlTOPp->fx68k__DOT__excUnit__DOT__dbdIdle));
	vcdp->fullBit(c+190,((1U & ((IData)(vlTOPp->fx68k__DOT__Clks) 
				    >> 2U))));
	vcdp->fullBus(c+191,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__result),16);
	vcdp->fullBus(c+192,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrTemp),5);
	vcdp->fullBus(c+193,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subResult),16);
	vcdp->fullBit(c+194,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subHcarry));
	vcdp->fullBit(c+195,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subCout));
	vcdp->fullBit(c+196,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__subOv));
	vcdp->fullBus(c+197,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aOperand),16);
	vcdp->fullBus(c+198,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__dOperand),16);
	vcdp->fullBus(c+199,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__cMask),5);
	vcdp->fullBus(c+200,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluOp),5);
	vcdp->fullBus(c+201,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftResult),32);
	vcdp->fullBit(c+202,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftCin));
	vcdp->fullBit(c+203,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shftMsb));
	vcdp->fullBus(c+204,(((0xf0U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib) 
					<< 4U)) | (0xfU 
						   & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp)))),8);
	vcdp->fullBit(c+205,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdV));
	vcdp->fullBus(c+206,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrMasked),5);
	vcdp->fullBus(c+207,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__shifter__DOT__tdata),32);
	vcdp->fullBus(c+208,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__htemp),9);
	vcdp->fullBus(c+209,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__hNib),5);
	vcdp->fullBit(c+210,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluCorf__DOT__highC));
	vcdp->fullBit(c+211,(vlTOPp->fx68k__DOT__nDecoder__DOT__isPcRel));
	vcdp->fullBit(c+212,(vlTOPp->fx68k__DOT__busControl__DOT__canStart));
	vcdp->fullBit(c+213,(vlTOPp->fx68k__DOT__busControl__DOT__bcReset));
	vcdp->fullBus(c+214,(vlTOPp->fx68k__DOT__busControl__DOT__next),32);
	vcdp->fullBit(c+215,(vlTOPp->fx68k__DOT__busControl__DOT__busEnding));
	vcdp->fullBus(c+216,(vlTOPp->fx68k__DOT__tState),32);
	vcdp->fullBit(c+217,(vlTOPp->fx68k__DOT__rDtack));
	vcdp->fullBit(c+218,(vlTOPp->fx68k__DOT__rBerr));
	vcdp->fullBus(c+219,(vlTOPp->fx68k__DOT__rIpl),3);
	vcdp->fullBus(c+220,(vlTOPp->fx68k__DOT__iIpl),3);
	vcdp->fullBit(c+221,(vlTOPp->fx68k__DOT__Vpai));
	vcdp->fullBit(c+222,(vlTOPp->fx68k__DOT__BeI));
	vcdp->fullBit(c+223,(vlTOPp->fx68k__DOT__BRi));
	vcdp->fullBit(c+224,(vlTOPp->fx68k__DOT__BgackI));
	vcdp->fullBit(c+225,(vlTOPp->fx68k__DOT__BeiDelay));
	vcdp->fullBit(c+226,((1U & (~ ((IData)(vlTOPp->fx68k__DOT__BeI) 
				       | (IData)(vlTOPp->fx68k__DOT__BeiDelay))))));
	vcdp->fullArray(c+227,(vlTOPp->fx68k__DOT__nanoLatch),68);
	vcdp->fullArray(c+230,(vlTOPp->fx68k__DOT__nanoOutput),68);
	vcdp->fullBus(c+233,(vlTOPp->fx68k__DOT__microLatch),17);
	vcdp->fullBus(c+234,(vlTOPp->fx68k__DOT__microOutput),17);
	vcdp->fullBus(c+235,(vlTOPp->fx68k__DOT__microAddr),10);
	vcdp->fullBus(c+236,(vlTOPp->fx68k__DOT__nanoAddr),9);
	vcdp->fullBit(c+237,(vlTOPp->fx68k__DOT__Tpend));
	vcdp->fullBit(c+238,(vlTOPp->fx68k__DOT__intPend));
	vcdp->fullBit(c+239,(vlTOPp->fx68k__DOT__pswT));
	vcdp->fullBit(c+240,(vlTOPp->fx68k__DOT__pswS));
	vcdp->fullBus(c+241,(vlTOPp->fx68k__DOT__pswI),3);
	vcdp->fullBus(c+242,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr),8);
	vcdp->fullBus(c+243,(vlTOPp->fx68k__DOT__ftu),16);
	vcdp->fullBus(c+244,(vlTOPp->fx68k__DOT__Irc),16);
	vcdp->fullBus(c+245,(vlTOPp->fx68k__DOT__Ir),16);
	vcdp->fullBus(c+246,(vlTOPp->fx68k__DOT__Ird),16);
	vcdp->fullBus(c+247,(vlTOPp->fx68k__DOT__alue),16);
	vcdp->fullBus(c+248,(vlTOPp->fx68k__DOT__excUnit__DOT__Abl),16);
	vcdp->fullBit(c+249,((1U & (~ (IData)((0U != (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__prenLatch)))))));
	vcdp->fullBit(c+250,((1U & (~ (IData)((0U != 
					       (0x3fU 
						& vlTOPp->fx68k__DOT__excUnit__DOT__auReg)))))));
	vcdp->fullBit(c+251,(vlTOPp->fx68k__DOT__dcr4));
	vcdp->fullBit(c+252,((1U & (~ ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore) 
				       >> 2U)))));
	vcdp->fullBit(c+253,(((IData)(vlTOPp->fx68k__DOT__busControl__DOT__wendReg) 
			      & (5U != vlTOPp->fx68k__DOT__busControl__DOT__busPhase))));
	vcdp->fullBit(c+254,((2U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase)));
	vcdp->fullBit(c+255,(vlTOPp->fx68k__DOT__busControl__DOT__isWriteReg));
	vcdp->fullBit(c+256,((((IData)(vlTOPp->fx68k__DOT__BRi) 
			       & (IData)(vlTOPp->fx68k__DOT__BgackI)) 
			      & (~ (IData)(vlTOPp->fx68k__DOT__busArbiter__DOT__rGranted)))));
	vcdp->fullBit(c+257,(vlTOPp->fx68k__DOT__addrOe));
	vcdp->fullBit(c+258,((1U & vlTOPp->fx68k__DOT__excUnit__DOT__aob)));
	vcdp->fullBit(c+259,(vlTOPp->fx68k__DOT__iStop));
	vcdp->fullBit(c+260,(vlTOPp->fx68k__DOT__A0Err));
	vcdp->fullBit(c+261,(vlTOPp->fx68k__DOT__excRst));
	vcdp->fullBit(c+262,(vlTOPp->fx68k__DOT__BerrA));
	vcdp->fullBit(c+263,(vlTOPp->fx68k__DOT__Spuria));
	vcdp->fullBit(c+264,(vlTOPp->fx68k__DOT__Avia));
	vcdp->fullBit(c+265,((7U == (IData)(vlTOPp->fx68k__DOT__rFC))));
	vcdp->fullBit(c+266,(vlTOPp->fx68k__DOT__rAddrErr));
	vcdp->fullBit(c+267,(vlTOPp->fx68k__DOT__iBusErr));
	vcdp->fullBit(c+268,(vlTOPp->fx68k__DOT__Err6591));
	vcdp->fullBus(c+269,((3U & (vlTOPp->fx68k__DOT__microLatch 
				    >> 0xfU))),2);
	vcdp->fullBit(c+270,(vlTOPp->fx68k__DOT__oReset));
	vcdp->fullBit(c+271,(vlTOPp->fx68k__DOT__oHalted));
	vcdp->fullBus(c+272,(vlTOPp->fx68k__DOT__rFC),3);
	vcdp->fullBus(c+273,(vlTOPp->fx68k__DOT__inl),3);
	vcdp->fullBit(c+274,(vlTOPp->fx68k__DOT__updIll));
	vcdp->fullBit(c+275,(vlTOPp->fx68k__DOT__prevNmi));
	vcdp->fullBit(c+276,((7U == (IData)(vlTOPp->fx68k__DOT__iIpl))));
	vcdp->fullBus(c+277,(vlTOPp->fx68k__DOT__eCntr),4);
	vcdp->fullBit(c+278,(vlTOPp->fx68k__DOT__rVma));
	vcdp->fullBit(c+279,(((~ (IData)(vlTOPp->fx68k__DOT__rVma)) 
			      & (8U == (IData)(vlTOPp->fx68k__DOT__eCntr)))));
	vcdp->fullBit(c+280,(vlTOPp->fx68k__DOT__irdToCcr_t4));
	vcdp->fullBus(c+281,(vlTOPp->fx68k__DOT__ssw),5);
	vcdp->fullBus(c+282,(vlTOPp->fx68k__DOT__tvnLatch),4);
	vcdp->fullBit(c+283,(vlTOPp->fx68k__DOT__inExcept01));
	vcdp->fullBus(c+284,((0xfU & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				      >> 0xcU))),4);
	vcdp->fullBus(c+285,((7U & ((IData)(vlTOPp->fx68k__DOT__Ir) 
				    >> 6U))),3);
	vcdp->fullBit(c+286,((1U & ((IData)(vlTOPp->fx68k__DOT__Irc) 
				    >> 0xbU))));
	vcdp->fullBus(c+287,((3U & (IData)(vlTOPp->fx68k__DOT__alue))),2);
	vcdp->fullBit(c+288,(vlTOPp->fx68k__DOT__sequencer__DOT__a0Rst));
	vcdp->fullBit(c+289,(((((((IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rIllegal) 
				  | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rLineF)) 
				 | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rLineA)) 
				| (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rPriv)) 
			       | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rTrace)) 
			      | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rInterrupt))));
	vcdp->fullBit(c+290,((((IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcRst) 
			       | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcBusErr)) 
			      | (IData)(vlTOPp->fx68k__DOT__sequencer__DOT__rExcAdrErr))));
	vcdp->fullBus(c+291,(((0x300U & (vlTOPp->fx68k__DOT__microLatch 
					 >> 5U)) | 
			      ((0xc0U & (vlTOPp->fx68k__DOT__microLatch 
					 << 1U)) | 
			       ((0x3cU & (vlTOPp->fx68k__DOT__microLatch 
					  >> 5U)) | 
				(3U & (vlTOPp->fx68k__DOT__microLatch 
				       >> 0xbU)))))),10);
	vcdp->fullBus(c+292,((0x1fU & (vlTOPp->fx68k__DOT__microLatch 
				       >> 2U))),5);
	vcdp->fullBit(c+293,(vlTOPp->fx68k__DOT__sequencer__DOT__rTrace));
	vcdp->fullBit(c+294,(vlTOPp->fx68k__DOT__sequencer__DOT__rInterrupt));
	vcdp->fullBit(c+295,(vlTOPp->fx68k__DOT__sequencer__DOT__rIllegal));
	vcdp->fullBit(c+296,(vlTOPp->fx68k__DOT__sequencer__DOT__rPriv));
	vcdp->fullBit(c+297,(vlTOPp->fx68k__DOT__sequencer__DOT__rLineA));
	vcdp->fullBit(c+298,(vlTOPp->fx68k__DOT__sequencer__DOT__rLineF));
	vcdp->fullBit(c+299,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcRst));
	vcdp->fullBit(c+300,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcAdrErr));
	vcdp->fullBit(c+301,(vlTOPp->fx68k__DOT__sequencer__DOT__rExcBusErr));
	vcdp->fullBit(c+302,(vlTOPp->fx68k__DOT__sequencer__DOT__rSpurious));
	vcdp->fullBit(c+303,(vlTOPp->fx68k__DOT__sequencer__DOT__rAutovec));
	vcdp->fullBus(c+304,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch),16);
	vcdp->fullBus(c+305,(vlTOPp->fx68k__DOT__excUnit__DOT__dbin),16);
	vcdp->fullBus(c+306,(vlTOPp->fx68k__DOT__excUnit__DOT__dcrOutput),16);
	vcdp->fullBus(c+307,(vlTOPp->fx68k__DOT__excUnit__DOT__PcL),16);
	vcdp->fullBus(c+308,(vlTOPp->fx68k__DOT__excUnit__DOT__PcH),16);
	vcdp->fullBus(c+309,(vlTOPp->fx68k__DOT__excUnit__DOT__auReg),32);
	vcdp->fullBus(c+310,(vlTOPp->fx68k__DOT__excUnit__DOT__aob),32);
	vcdp->fullBus(c+311,(vlTOPp->fx68k__DOT__excUnit__DOT__Ath),16);
	vcdp->fullBus(c+312,(vlTOPp->fx68k__DOT__excUnit__DOT__Atl),16);
	vcdp->fullBus(c+313,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbl),16);
	vcdp->fullBus(c+314,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbh),16);
	vcdp->fullBus(c+315,(vlTOPp->fx68k__DOT__excUnit__DOT__Abh),16);
	vcdp->fullBus(c+316,(vlTOPp->fx68k__DOT__excUnit__DOT__Abd),16);
	vcdp->fullBus(c+317,(vlTOPp->fx68k__DOT__excUnit__DOT__Dbd),16);
	vcdp->fullBit(c+318,(vlTOPp->fx68k__DOT__excUnit__DOT__abdIsByte));
	vcdp->fullBit(c+319,(vlTOPp->fx68k__DOT__excUnit__DOT__Pcl2Dbl));
	vcdp->fullBit(c+320,(vlTOPp->fx68k__DOT__excUnit__DOT__Pch2Dbh));
	vcdp->fullBit(c+321,(vlTOPp->fx68k__DOT__excUnit__DOT__Pcl2Abl));
	vcdp->fullBit(c+322,(vlTOPp->fx68k__DOT__excUnit__DOT__Pch2Abh));
	vcdp->fullBus(c+323,(vlTOPp->fx68k__DOT__excUnit__DOT__actualRx),5);
	vcdp->fullBus(c+324,(vlTOPp->fx68k__DOT__excUnit__DOT__actualRy),5);
	vcdp->fullBus(c+325,(vlTOPp->fx68k__DOT__excUnit__DOT__movemRx),4);
	vcdp->fullBit(c+326,(vlTOPp->fx68k__DOT__excUnit__DOT__byteNotSpAlign));
	vcdp->fullBit(c+327,(vlTOPp->fx68k__DOT__excUnit__DOT__rxIsAreg));
	vcdp->fullBit(c+328,(vlTOPp->fx68k__DOT__excUnit__DOT__ryIsAreg));
	vcdp->fullBus(c+329,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbh),16);
	vcdp->fullBus(c+330,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbl),16);
	vcdp->fullBus(c+331,(vlTOPp->fx68k__DOT__excUnit__DOT__preAbd),16);
	vcdp->fullBus(c+332,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbh),16);
	vcdp->fullBus(c+333,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbl),16);
	vcdp->fullBus(c+334,(vlTOPp->fx68k__DOT__excUnit__DOT__preDbd),16);
	vcdp->fullBit(c+335,(vlTOPp->fx68k__DOT__excUnit__DOT__dbl2Pcl));
	vcdp->fullBit(c+336,(vlTOPp->fx68k__DOT__excUnit__DOT__dbh2Pch));
	vcdp->fullBit(c+337,(vlTOPp->fx68k__DOT__excUnit__DOT__abh2Pch));
	vcdp->fullBit(c+338,(vlTOPp->fx68k__DOT__excUnit__DOT__abl2Pcl));
	vcdp->fullBus(c+339,(vlTOPp->fx68k__DOT__excUnit__DOT__prenLatch),16);
	vcdp->fullBus(c+340,((0xfU & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__abdIsByte)
				       ? (7U & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Abd))
				       : (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__Abd)))),4);
	vcdp->fullBus(c+341,(vlTOPp->fx68k__DOT__excUnit__DOT__alub),16);
	vcdp->fullBit(c+342,((1U & (~ (IData)((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->fx68k__DOT__Nanod2 
							   >> 0x11U)))))))));
	vcdp->fullBus(c+343,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dob),16);
	vcdp->fullBit(c+344,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__xToDbin));
	vcdp->fullBit(c+345,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__xToIrc));
	vcdp->fullBit(c+346,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoLow));
	vcdp->fullBit(c+347,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__dbinNoHigh));
	vcdp->fullBit(c+348,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteMux));
	vcdp->fullBit(c+349,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__isByte_T4));
	vcdp->fullBit(c+350,(vlTOPp->fx68k__DOT__excUnit__DOT__dataIo__DOT__byteCycle));
	vcdp->fullBus(c+351,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr),5);
	vcdp->fullBus(c+352,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore),5);
	vcdp->fullBit(c+353,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__coreH));
	vcdp->fullBus(c+354,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row),16);
	vcdp->fullBit(c+355,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isArX));
	vcdp->fullBit(c+356,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__noCcrEn));
	vcdp->fullBit(c+357,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isByte));
	vcdp->fullBus(c+358,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrMask),5);
	vcdp->fullBus(c+359,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper),5);
	vcdp->fullBit(c+360,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				    >> 7U))));
	vcdp->fullBit(c+361,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__row) 
				    >> 1U))));
	vcdp->fullBus(c+362,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdLatch),8);
	vcdp->fullBit(c+363,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdCarry));
	vcdp->fullBit(c+364,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__bcdOverf));
	vcdp->fullBit(c+365,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__isLong));
	vcdp->fullBit(c+366,(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__rIrd8));
	vcdp->fullBit(c+367,((1U & ((~ ((4U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
					| (2U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)))) 
				    & ((7U == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
				       | (((0xbU == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
					   | (0xaU 
					      == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)))
					   ? (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__ccrCore)
					   : (((0xcU 
						== (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper)) 
					       | (3U 
						  == (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper))) 
					      & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr) 
						 >> 4U))))))));
	vcdp->fullBit(c+368,((0U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 4U)))));
	vcdp->fullBit(c+369,((1U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 3U)))));
	vcdp->fullBus(c+370,((0xffU & (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__aluLatch))),8);
	vcdp->fullBit(c+371,((6U != (IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__oper))));
	vcdp->fullBit(c+372,((1U & ((IData)(vlTOPp->fx68k__DOT__excUnit__DOT__alu__DOT__pswCcr) 
				    >> 4U))));
	vcdp->fullBus(c+373,(vlTOPp->fx68k__DOT__nDecoder__DOT__ftuCtrl),4);
	vcdp->fullBus(c+374,((7U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				     << 0x17U) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
						  >> 9U)))),3);
	vcdp->fullBus(c+375,((7U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				     << 3U) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
					       >> 0x1dU)))),3);
	vcdp->fullBus(c+376,((3U & ((vlTOPp->fx68k__DOT__nanoLatch[1U] 
				     << 0x1dU) | (vlTOPp->fx68k__DOT__nanoLatch[0U] 
						  >> 3U)))),2);
	vcdp->fullBus(c+377,((3U & ((vlTOPp->fx68k__DOT__nanoLatch[2U] 
				     << 3U) | (vlTOPp->fx68k__DOT__nanoLatch[1U] 
					       >> 0x1dU)))),2);
	vcdp->fullBus(c+378,((0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
				      >> 0xcU))),4);
	vcdp->fullBit(c+379,((4U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					   >> 3U)))));
	vcdp->fullBit(c+380,(((7U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					    >> 3U))) 
			      & (~ ((IData)(vlTOPp->fx68k__DOT__Ird) 
				    >> 1U)))));
	vcdp->fullBit(c+381,(((3U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					    >> 6U))) 
			      & (1U != (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					      >> 3U))))));
	vcdp->fullBit(c+382,(((8U == (0xfU & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					      >> 8U))) 
			      & (0U == (3U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					      >> 4U))))));
	vcdp->fullBus(c+383,(((0U == (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					    >> 9U)))
			       ? 8U : (7U & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					     >> 9U)))),4);
	vcdp->fullBit(c+384,((1U & (((IData)(vlTOPp->fx68k__DOT__Ird) 
				     >> 7U) & ((IData)(vlTOPp->fx68k__DOT__Ird) 
					       >> 6U)))));
	vcdp->fullBit(c+385,((1U & (IData)(vlTOPp->fx68k__DOT__Nanod2))));
	vcdp->fullBit(c+386,(vlTOPp->fx68k__DOT__busControl__DOT__rAS));
	vcdp->fullBit(c+387,(vlTOPp->fx68k__DOT__busControl__DOT__rLDS));
	vcdp->fullBit(c+388,(vlTOPp->fx68k__DOT__busControl__DOT__rUDS));
	vcdp->fullBit(c+389,(vlTOPp->fx68k__DOT__busControl__DOT__rRWn));
	vcdp->fullBit(c+390,(vlTOPp->fx68k__DOT__busControl__DOT__dataOe));
	vcdp->fullBit(c+391,(vlTOPp->fx68k__DOT__busControl__DOT__bcPend));
	vcdp->fullBit(c+392,(vlTOPp->fx68k__DOT__busControl__DOT__bciByte));
	vcdp->fullBit(c+393,(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg));
	vcdp->fullBit(c+394,(vlTOPp->fx68k__DOT__busControl__DOT__wendReg));
	vcdp->fullBit(c+395,(vlTOPp->fx68k__DOT__busControl__DOT__addrOeDelay));
	vcdp->fullBit(c+396,(vlTOPp->fx68k__DOT__busControl__DOT__isByteT4));
	vcdp->fullBit(c+397,((1U & ((~ (IData)(vlTOPp->fx68k__DOT__rDtack)) 
				    | (IData)(vlTOPp->fx68k__DOT__iStop)))));
	vcdp->fullBit(c+398,((5U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase)));
	vcdp->fullBus(c+399,(vlTOPp->fx68k__DOT__busControl__DOT__busPhase),32);
	vcdp->fullBus(c+400,(vlTOPp->fx68k__DOT__busArbiter__DOT__dmaPhase),32);
	vcdp->fullBit(c+401,(vlTOPp->fx68k__DOT__busArbiter__DOT__rGranted));
	vcdp->fullBit(c+402,(vlTOPp->clk));
	vcdp->fullBit(c+403,(vlTOPp->extReset));
	vcdp->fullBit(c+404,(vlTOPp->pwrUp));
	vcdp->fullBit(c+405,(vlTOPp->enPhi1));
	vcdp->fullBit(c+406,(vlTOPp->enPhi2));
	vcdp->fullBit(c+407,(vlTOPp->eRWn));
	vcdp->fullBit(c+408,(vlTOPp->ASn));
	vcdp->fullBit(c+409,(vlTOPp->LDSn));
	vcdp->fullBit(c+410,(vlTOPp->UDSn));
	vcdp->fullBit(c+411,(vlTOPp->E));
	vcdp->fullBit(c+412,(vlTOPp->VMAn));
	vcdp->fullBit(c+413,(vlTOPp->FC0));
	vcdp->fullBit(c+414,(vlTOPp->FC1));
	vcdp->fullBit(c+415,(vlTOPp->FC2));
	vcdp->fullBit(c+416,(vlTOPp->BGn));
	vcdp->fullBit(c+417,(vlTOPp->oRESETn));
	vcdp->fullBit(c+418,(vlTOPp->oHALTEDn));
	vcdp->fullBit(c+419,(vlTOPp->DTACKn));
	vcdp->fullBit(c+420,(vlTOPp->VPAn));
	vcdp->fullBit(c+421,(vlTOPp->BERRn));
	vcdp->fullBit(c+422,(vlTOPp->BRn));
	vcdp->fullBit(c+423,(vlTOPp->BGACKn));
	vcdp->fullBit(c+424,(vlTOPp->IPL0n));
	vcdp->fullBit(c+425,(vlTOPp->IPL1n));
	vcdp->fullBit(c+426,(vlTOPp->IPL2n));
	vcdp->fullBus(c+427,(vlTOPp->iEdb),16);
	vcdp->fullBus(c+428,(vlTOPp->oEdb),16);
	vcdp->fullBus(c+429,(vlTOPp->eab),23);
	vcdp->fullBit(c+430,((((1U == vlTOPp->fx68k__DOT__busControl__DOT__busPhase) 
			       & (~ (IData)(vlTOPp->ASn))) 
			      & (IData)(vlTOPp->fx68k__DOT__busControl__DOT__isRmcReg))));
	vcdp->fullBit(c+431,(0U));
	vcdp->fullBus(c+432,(0xfU),32);
	vcdp->fullBus(c+433,(0x10U),32);
	vcdp->fullBus(c+434,(0x11U),32);
	vcdp->fullBit(c+435,(vlTOPp->fx68k__DOT__excUnit__DOT__rmIdle));
	vcdp->fullBus(c+436,(4U),32);
	vcdp->fullBus(c+437,(0xffffffffU),32);
	vcdp->fullBus(c+438,(0U),32);
	vcdp->fullBus(c+439,(1U),32);
	vcdp->fullBus(c+440,(2U),32);
	vcdp->fullBus(c+441,(3U),32);
	vcdp->fullBus(c+442,(0xfU),5);
	vcdp->fullBus(c+443,(4U),5);
	vcdp->fullBus(c+444,(0xcU),5);
	vcdp->fullBus(c+445,(0x1bU),5);
	vcdp->fullBus(c+446,(0x1fU),5);
	vcdp->fullBus(c+447,(0U),5);
	vcdp->fullBus(c+448,(0x43U),32);
	vcdp->fullBus(c+449,(0x42U),32);
	vcdp->fullBus(c+450,(0x3fU),32);
	vcdp->fullBus(c+451,(0x3dU),32);
	vcdp->fullBus(c+452,(0x3cU),32);
	vcdp->fullBus(c+453,(0x39U),32);
	vcdp->fullBus(c+454,(0x38U),32);
	vcdp->fullBus(c+455,(0x37U),32);
	vcdp->fullBus(c+456,(0x36U),32);
	vcdp->fullBus(c+457,(0x35U),32);
	vcdp->fullBus(c+458,(0x33U),32);
	vcdp->fullBus(c+459,(0x32U),32);
	vcdp->fullBus(c+460,(0x31U),32);
	vcdp->fullBus(c+461,(0x30U),32);
	vcdp->fullBus(c+462,(0x2fU),32);
	vcdp->fullBus(c+463,(0x2eU),32);
	vcdp->fullBus(c+464,(0x2dU),32);
	vcdp->fullBus(c+465,(0x2cU),32);
	vcdp->fullBus(c+466,(0x2bU),32);
	vcdp->fullBus(c+467,(0x2aU),32);
	vcdp->fullBus(c+468,(0x29U),32);
	vcdp->fullBus(c+469,(0x28U),32);
	vcdp->fullBus(c+470,(0x27U),32);
	vcdp->fullBus(c+471,(0x26U),32);
	vcdp->fullBus(c+472,(0x25U),32);
	vcdp->fullBus(c+473,(0x24U),32);
	vcdp->fullBus(c+474,(0x23U),32);
	vcdp->fullBus(c+475,(0x22U),32);
	vcdp->fullBus(c+476,(0x21U),32);
	vcdp->fullBus(c+477,(0x20U),32);
	vcdp->fullBus(c+478,(0x1dU),32);
	vcdp->fullBus(c+479,(0x19U),32);
	vcdp->fullBus(c+480,(0x18U),32);
	vcdp->fullBus(c+481,(0x16U),32);
	vcdp->fullBus(c+482,(0x14U),32);
	vcdp->fullBus(c+483,(0x13U),32);
	vcdp->fullBus(c+484,(0xeU),32);
	vcdp->fullBus(c+485,(0xdU),32);
	vcdp->fullBus(c+486,(0xcU),32);
	vcdp->fullBus(c+487,(9U),32);
	vcdp->fullBus(c+488,(8U),32);
	vcdp->fullBus(c+489,(7U),32);
	vcdp->fullBus(c+490,(6U),32);
	vcdp->fullBus(c+491,(5U),32);
	vcdp->fullBus(c+492,(0xbU),32);
	vcdp->fullBus(c+493,(0xaU),32);
	vcdp->fullBit(c+494,(1U));
	vcdp->fullBus(c+495,(0x400U),32);
	vcdp->fullBus(c+496,(0x44U),32);
	vcdp->fullBus(c+497,(0x150U),32);
	vcdp->fullBus(c+498,(3U),32);
	vcdp->fullBus(c+499,(2U),32);
	vcdp->fullBus(c+500,(1U),32);
	vcdp->fullBus(c+501,(0x1c0U),32);
	vcdp->fullBus(c+502,(0x1c4U),32);
	vcdp->fullBus(c+503,(1U),2);
	vcdp->fullBus(c+504,(2U),2);
	vcdp->fullBus(c+505,(3U),2);
	vcdp->fullBus(c+506,(0x12U),32);
	vcdp->fullBus(c+507,(0x15U),32);
    }
}
