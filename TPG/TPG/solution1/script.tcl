############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project TPG
set_top TPG
add_files TPG.cc
add_files -tb TestTPG.cpp -cflags "-DHW_COSIM"
open_solution "solution1"
set_part {xc7vx690tffg1927-2} -tool vivado
create_clock -period 6.25 -name default
#source "./TPG/solution1/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -format ip_catalog
