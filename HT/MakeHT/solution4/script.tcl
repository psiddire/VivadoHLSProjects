############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MakeHT
set_top MakeHT
add_files MakeHT.cc
add_files -tb TestMakeHT.cpp -cflags "-DHW_COSIM"
open_solution "solution4"
set_part {xc7vx690tffg1927-2}
create_clock -period 6.25 -name default
#source "./MakeHT/solution4/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -format ip_catalog
