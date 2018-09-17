
/opt/Xilinx/Vivado/2016.4/bin/xelab xil_defaultlib.apatb_TowerPeaks_top -prj TowerPeaks.prj --initfile "/opt/Xilinx/Vivado/2016.4/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s TowerPeaks 
/opt/Xilinx/Vivado/2016.4/bin/xsim --noieeewarnings TowerPeaks -tclbatch TowerPeaks.tcl

