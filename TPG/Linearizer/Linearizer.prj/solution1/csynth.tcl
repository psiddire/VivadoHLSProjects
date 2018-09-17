############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Linearizer.prj
set_top Linearizer
add_files Linearizer.cc
add_files -tb TestLinearizer.cpp -cflags "-DHW_COSIM"
open_solution "solution1"
set_part {xc7vx690tffg1927-2} -tool vivado
create_clock -period 10 -name default
#source "./Linearizer.prj/solution1/directives.tcl"
csynth_design
