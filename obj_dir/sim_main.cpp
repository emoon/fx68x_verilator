#include "Vfx68k.h"
#include "verilated.h"
#include <stdio.h>
#include <verilated_vcd_c.h>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Verilated::debug(1);

    VerilatedVcdC* trace = new VerilatedVcdC;
    Vfx68k* top = new Vfx68k;

    top->trace(trace, 99);
    trace->open("trace.vcd");


    // clk  l h l h l h l h
    // phi1 l h l l l h l l
    // phi2 l l l h l l l h

    const char phi1_values[] = { 0, 0, 0, 0, 0, 1, 1, 0 };
    const char phi2_values[] = { 0, 1, 1, 0, 0, 0, 0, 0 };

    int cycle = 1;

    // reset the CPU

	top->pwrUp = 1;
	top->extReset = 1;

    for (int i = 0; i < 10; ++i) {
        int clk = cycle & 1;
        int pih1 = phi1_values[cycle & 7];
        int pih2 = phi2_values[cycle & 7];

        top->enPhi1 = pih1;
        top->enPhi2 = pih2;
        top->clk = clk;
        top->eval();
        trace->dump(cycle);
        trace->flush();

        cycle++;
    }

	top->pwrUp = 0;
	top->extReset = 0;

    top->iEdb = 0x0000;
	top->VPAn = 1;
	top->BERRn = 1;
	top->BRn = 1;
	top->BGACKn = 1;
	top->IPL0n = 1;
	top->IPL1n = 1;
	top->IPL2n = 1;
	top->VPAn = 1;
	top->BGACKn = 1;
	top->DTACKn = 1;


    for (int i = 0; i < 2000; ++i) {
        int clk = cycle & 1;
        int pih1 = phi1_values[cycle & 7];
        int pih2 = phi2_values[cycle & 7];

        printf("cycle %d clock %d\n", cycle, clk);

        top->clk = clk;
        top->enPhi1 = pih1;
        top->enPhi2 = pih2;

        top->eval();
        trace->dump(cycle);
        trace->flush();

        //printf("---------- INPUT --------------\n");
        //printf("clk      %08x\n", clk);
        //printf("pih1     %08x\n", pih1);
        //printf("pih2     %08x\n", pih2);

        printf("---------- OUTPUT --------------\n");
        printf("eRWn     %08x\n", top->eRWn);
        printf("ASn      %08x\n", top->ASn);
        printf("LDSn     %08x\n", top->LDSn);
        printf("UDSn     %08x\n", top->UDSn);
        printf("E        %08x\n", top->E);
        //printf("VMAn     %08x\n", top->VMAn);
        printf("FC0      %08x\n", top->FC0);
        printf("FC1      %08x\n", top->FC1);
        printf("FC2      %08x\n", top->FC2);
        //printf("BGn      %08x\n", top->BGn);
        //printf("oRESETn  %08x\n", top->oRESETn);
        //printf("oHALTEDn %08x\n", top->oHALTEDn);
        printf("eab      %08x\n", top->eab);
        printf("oEdb     %08x\n", top->oEdb);

        if (top->ASn == 0)
        {
            top->DTACKn = 0;
        }

        cycle++;
    }

    return 0;
}
