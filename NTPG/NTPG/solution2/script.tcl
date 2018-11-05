############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project NTPG
set_top TPG
add_files TPG.cc
add_files -tb TestTPG.cpp -cflags "-DHW_COSIM"
open_solution "solution2"
set_part {xcku115-flvb2104-2-e}
create_clock -period 6.25 -name default
#source "./NTPG/solution2/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog
