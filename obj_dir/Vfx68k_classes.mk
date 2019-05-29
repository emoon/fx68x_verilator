# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vfx68k.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 0
# Tracing threadeds output mode?  0/1 (from --trace-fst-thread)
VM_TRACE_THREADED = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vfx68k \
	Vfx68k_fx68k_bmux_3758 \
	Vfx68k_fx68k_bmux_1967 \
	Vfx68k_fx68k_mux_1995 \
	Vfx68k_fx68k_mux_2306 \
	Vfx68k_fx68k_mux_2428 \
	Vfx68k_fx68k_mux_41 \
	Vfx68k_fx68k_mux_77 \
	Vfx68k_fx68k_mux_93 \
	Vfx68k_fx68k_mux_119 \
	Vfx68k_fx68k_mux_128 \
	Vfx68k_fx68k_mux_272 \
	Vfx68k_fx68k_bmux_299 \
	Vfx68k_fx68k_mux_304 \
	Vfx68k_fx68k_mux_320 \
	Vfx68k_fx68k_mux_424 \
	Vfx68k_fx68k_mux_454 \
	Vfx68k_fx68k_mux_520 \
	Vfx68k_fx68k_mux_547 \
	Vfx68k_fx68k_mux_778 \
	Vfx68k_fx68k_mux_793 \
	Vfx68k_fx68k_mux_804 \
	Vfx68k_fx68k_mux_899 \
	Vfx68k_fx68k_mux_992 \
	Vfx68k_fx68k_mux_1002 \
	Vfx68k_fx68k_bmux_1313 \
	Vfx68k_fx68k_mux_1371 \
	Vfx68k_fx68k_mux_1423 \
	Vfx68k_fx68k_bmux_1502 \
	Vfx68k_fx68k_mux_1529 \
	Vfx68k_fx68k_bmux_1882 \
	Vfx68k_fx68k_mux_1906 \
	Vfx68k_CDN_mux136 \
	Vfx68k_fx68k_bmux \
	Vfx68k_fx68k_bmux_1840 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vfx68k__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
