############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MakeHT
set_top MakeHT
add_files MakeHT.cc
add_files -tb TestMakeHT.cpp -cflags "-DHW_COSIM"
open_solution "solution2"
set_part {xc7vx690tffg1927-2}
create_clock -period 10 -name default
#source "./MakeHT/solution2/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
