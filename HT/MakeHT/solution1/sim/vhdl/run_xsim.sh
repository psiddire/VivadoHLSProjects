
/opt/Xilinx/Vivado/2016.4/bin/xelab xil_defaultlib.apatb_MakeHT_top -prj MakeHT.prj --initfile "/opt/Xilinx/Vivado/2016.4/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s MakeHT 
/opt/Xilinx/Vivado/2016.4/bin/xsim --noieeewarnings MakeHT -tclbatch MakeHT.tcl

