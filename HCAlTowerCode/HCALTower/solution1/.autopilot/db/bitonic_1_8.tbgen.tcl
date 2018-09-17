set moduleName bitonic_1_8
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {bitonic_1_8}
set C_modelType { int 160 }
set C_modelArgList {
	{ Cluster_1_Deposits_0 int 16 regular  }
	{ Cluster_1_Deposits_1 int 16 regular  }
	{ Cluster_1_Deposits_2 int 16 regular  }
	{ Cluster_1_Deposits_3 int 16 regular  }
	{ Cluster_1_Deposits_4 int 16 regular  }
	{ Cluster_1_Deposits_5 int 16 regular  }
	{ Cluster_1_Deposits_6 int 16 regular  }
	{ Cluster_1_Deposits_7 int 16 regular  }
	{ Cluster_1_Deposits_8 int 16 regular  }
	{ Cluster_1_Deposits_9 int 16 regular  }
	{ Cluster_1_Deposits_1_3 int 16 regular  }
	{ Cluster_1_Deposits_1_4 int 16 regular  }
	{ Cluster_1_Eta_0_rea int 2 regular  }
	{ Cluster_1_Eta_1_rea int 2 regular  }
	{ Cluster_1_Eta_2_rea int 2 regular  }
	{ Cluster_1_Eta_3_rea int 2 regular  }
	{ Cluster_1_Eta_4_rea int 2 regular  }
	{ Cluster_1_Eta_5_rea int 2 regular  }
	{ Cluster_1_Eta_6_rea int 2 regular  }
	{ Cluster_1_Eta_7_rea int 2 regular  }
	{ Cluster_1_Eta_8_rea int 2 regular  }
	{ Cluster_1_Eta_9_rea int 2 regular  }
	{ Cluster_1_Eta_10_re int 2 regular  }
	{ Cluster_1_Eta_11_re int 2 regular  }
	{ Cluster_1_Phi_0_rea int 1 regular  }
	{ Cluster_1_Phi_1_rea int 1 regular  }
	{ Cluster_1_Phi_2_rea int 1 regular  }
	{ Cluster_1_Phi_3_rea int 1 regular  }
	{ Cluster_1_Phi_4_rea int 2 regular  }
	{ Cluster_1_Phi_5_rea int 2 regular  }
	{ Cluster_1_Phi_6_rea int 2 regular  }
	{ Cluster_1_Phi_7_rea int 2 regular  }
	{ Cluster_1_Phi_8_rea int 2 regular  }
	{ Cluster_1_Phi_9_rea int 2 regular  }
	{ Cluster_1_Phi_10_re int 2 regular  }
	{ Cluster_1_Phi_11_re int 2 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Cluster_1_Deposits_0", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_4", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_5", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_6", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_7", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_8", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_9", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_1_3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Deposits_1_4", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_0_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_1_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_2_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_3_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_4_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_5_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_6_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_7_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_8_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_9_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_10_re", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Eta_11_re", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_0_rea", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_1_rea", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_2_rea", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_3_rea", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_4_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_5_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_6_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_7_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_8_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_9_rea", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_10_re", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "Cluster_1_Phi_11_re", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 160} ]}
# RTL Port declarations: 
set portNum 53
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Cluster_1_Deposits_0 sc_in sc_lv 16 signal 0 } 
	{ Cluster_1_Deposits_1 sc_in sc_lv 16 signal 1 } 
	{ Cluster_1_Deposits_2 sc_in sc_lv 16 signal 2 } 
	{ Cluster_1_Deposits_3 sc_in sc_lv 16 signal 3 } 
	{ Cluster_1_Deposits_4 sc_in sc_lv 16 signal 4 } 
	{ Cluster_1_Deposits_5 sc_in sc_lv 16 signal 5 } 
	{ Cluster_1_Deposits_6 sc_in sc_lv 16 signal 6 } 
	{ Cluster_1_Deposits_7 sc_in sc_lv 16 signal 7 } 
	{ Cluster_1_Deposits_8 sc_in sc_lv 16 signal 8 } 
	{ Cluster_1_Deposits_9 sc_in sc_lv 16 signal 9 } 
	{ Cluster_1_Deposits_1_3 sc_in sc_lv 16 signal 10 } 
	{ Cluster_1_Deposits_1_4 sc_in sc_lv 16 signal 11 } 
	{ Cluster_1_Eta_0_rea sc_in sc_lv 2 signal 12 } 
	{ Cluster_1_Eta_1_rea sc_in sc_lv 2 signal 13 } 
	{ Cluster_1_Eta_2_rea sc_in sc_lv 2 signal 14 } 
	{ Cluster_1_Eta_3_rea sc_in sc_lv 2 signal 15 } 
	{ Cluster_1_Eta_4_rea sc_in sc_lv 2 signal 16 } 
	{ Cluster_1_Eta_5_rea sc_in sc_lv 2 signal 17 } 
	{ Cluster_1_Eta_6_rea sc_in sc_lv 2 signal 18 } 
	{ Cluster_1_Eta_7_rea sc_in sc_lv 2 signal 19 } 
	{ Cluster_1_Eta_8_rea sc_in sc_lv 2 signal 20 } 
	{ Cluster_1_Eta_9_rea sc_in sc_lv 2 signal 21 } 
	{ Cluster_1_Eta_10_re sc_in sc_lv 2 signal 22 } 
	{ Cluster_1_Eta_11_re sc_in sc_lv 2 signal 23 } 
	{ Cluster_1_Phi_0_rea sc_in sc_lv 1 signal 24 } 
	{ Cluster_1_Phi_1_rea sc_in sc_lv 1 signal 25 } 
	{ Cluster_1_Phi_2_rea sc_in sc_lv 1 signal 26 } 
	{ Cluster_1_Phi_3_rea sc_in sc_lv 1 signal 27 } 
	{ Cluster_1_Phi_4_rea sc_in sc_lv 2 signal 28 } 
	{ Cluster_1_Phi_5_rea sc_in sc_lv 2 signal 29 } 
	{ Cluster_1_Phi_6_rea sc_in sc_lv 2 signal 30 } 
	{ Cluster_1_Phi_7_rea sc_in sc_lv 2 signal 31 } 
	{ Cluster_1_Phi_8_rea sc_in sc_lv 2 signal 32 } 
	{ Cluster_1_Phi_9_rea sc_in sc_lv 2 signal 33 } 
	{ Cluster_1_Phi_10_re sc_in sc_lv 2 signal 34 } 
	{ Cluster_1_Phi_11_re sc_in sc_lv 2 signal 35 } 
	{ ap_return_0 sc_out sc_lv 16 signal -1 } 
	{ ap_return_1 sc_out sc_lv 16 signal -1 } 
	{ ap_return_2 sc_out sc_lv 16 signal -1 } 
	{ ap_return_3 sc_out sc_lv 16 signal -1 } 
	{ ap_return_4 sc_out sc_lv 16 signal -1 } 
	{ ap_return_5 sc_out sc_lv 16 signal -1 } 
	{ ap_return_6 sc_out sc_lv 16 signal -1 } 
	{ ap_return_7 sc_out sc_lv 16 signal -1 } 
	{ ap_return_8 sc_out sc_lv 16 signal -1 } 
	{ ap_return_9 sc_out sc_lv 16 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_0", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_1", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_2", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_3", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_4", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_4", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_5", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_5", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_6", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_6", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_7", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_7", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_8", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_8", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_9", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_9", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_1_3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_1_3", "role": "default" }} , 
 	{ "name": "Cluster_1_Deposits_1_4", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "Cluster_1_Deposits_1_4", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_0_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_0_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_1_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_1_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_2_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_2_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_3_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_3_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_4_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_4_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_5_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_5_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_6_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_6_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_7_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_7_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_8_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_8_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_9_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_9_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_10_re", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_10_re", "role": "default" }} , 
 	{ "name": "Cluster_1_Eta_11_re", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Eta_11_re", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_0_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Cluster_1_Phi_0_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_1_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Cluster_1_Phi_1_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_2_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Cluster_1_Phi_2_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_3_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "Cluster_1_Phi_3_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_4_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_4_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_5_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_5_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_6_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_6_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_7_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_7_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_8_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_8_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_9_rea", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_9_rea", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_10_re", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_10_re", "role": "default" }} , 
 	{ "name": "Cluster_1_Phi_11_re", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "Cluster_1_Phi_11_re", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "bitonic_1_8",
		"VariableLatency" : "0",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "Cluster_1_Deposits_0", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_2", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_3", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_4", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_5", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_6", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_7", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_8", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_9", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_3", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_4", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_0_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_1_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_2_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_3_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_4_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_5_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_6_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_7_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_8_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_9_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_10_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_11_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_0_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_1_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_2_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_3_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_4_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_5_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_6_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_7_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_8_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_9_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_10_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_11_re", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret_bitonic_1_16_fu_300", "Parent" : "0",
		"CDFG" : "bitonic_1_16",
		"VariableLatency" : "0",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "1",
		"ControlExist" : "0",
		"Port" : [
		{"Name" : "Cluster_1_Deposits_0", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_2", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_3", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_4", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_5", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_6", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_7", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_12", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_13", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_14", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Deposits_1_15", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_0_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_1_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_2_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_3_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_4_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_5_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_6_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_7_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_12_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_13_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_14_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Eta_15_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_0_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_1_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_2_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_3_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_4_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_5_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_6_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_7_rea", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_12_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_13_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_14_re", "Type" : "None", "Direction" : "I"},
		{"Name" : "Cluster_1_Phi_15_re", "Type" : "None", "Direction" : "I"}]}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set Spec2ImplPortList { 
	Cluster_1_Deposits_0 { ap_none {  { Cluster_1_Deposits_0 in_data 0 16 } } }
	Cluster_1_Deposits_1 { ap_none {  { Cluster_1_Deposits_1 in_data 0 16 } } }
	Cluster_1_Deposits_2 { ap_none {  { Cluster_1_Deposits_2 in_data 0 16 } } }
	Cluster_1_Deposits_3 { ap_none {  { Cluster_1_Deposits_3 in_data 0 16 } } }
	Cluster_1_Deposits_4 { ap_none {  { Cluster_1_Deposits_4 in_data 0 16 } } }
	Cluster_1_Deposits_5 { ap_none {  { Cluster_1_Deposits_5 in_data 0 16 } } }
	Cluster_1_Deposits_6 { ap_none {  { Cluster_1_Deposits_6 in_data 0 16 } } }
	Cluster_1_Deposits_7 { ap_none {  { Cluster_1_Deposits_7 in_data 0 16 } } }
	Cluster_1_Deposits_8 { ap_none {  { Cluster_1_Deposits_8 in_data 0 16 } } }
	Cluster_1_Deposits_9 { ap_none {  { Cluster_1_Deposits_9 in_data 0 16 } } }
	Cluster_1_Deposits_1_3 { ap_none {  { Cluster_1_Deposits_1_3 in_data 0 16 } } }
	Cluster_1_Deposits_1_4 { ap_none {  { Cluster_1_Deposits_1_4 in_data 0 16 } } }
	Cluster_1_Eta_0_rea { ap_none {  { Cluster_1_Eta_0_rea in_data 0 2 } } }
	Cluster_1_Eta_1_rea { ap_none {  { Cluster_1_Eta_1_rea in_data 0 2 } } }
	Cluster_1_Eta_2_rea { ap_none {  { Cluster_1_Eta_2_rea in_data 0 2 } } }
	Cluster_1_Eta_3_rea { ap_none {  { Cluster_1_Eta_3_rea in_data 0 2 } } }
	Cluster_1_Eta_4_rea { ap_none {  { Cluster_1_Eta_4_rea in_data 0 2 } } }
	Cluster_1_Eta_5_rea { ap_none {  { Cluster_1_Eta_5_rea in_data 0 2 } } }
	Cluster_1_Eta_6_rea { ap_none {  { Cluster_1_Eta_6_rea in_data 0 2 } } }
	Cluster_1_Eta_7_rea { ap_none {  { Cluster_1_Eta_7_rea in_data 0 2 } } }
	Cluster_1_Eta_8_rea { ap_none {  { Cluster_1_Eta_8_rea in_data 0 2 } } }
	Cluster_1_Eta_9_rea { ap_none {  { Cluster_1_Eta_9_rea in_data 0 2 } } }
	Cluster_1_Eta_10_re { ap_none {  { Cluster_1_Eta_10_re in_data 0 2 } } }
	Cluster_1_Eta_11_re { ap_none {  { Cluster_1_Eta_11_re in_data 0 2 } } }
	Cluster_1_Phi_0_rea { ap_none {  { Cluster_1_Phi_0_rea in_data 0 1 } } }
	Cluster_1_Phi_1_rea { ap_none {  { Cluster_1_Phi_1_rea in_data 0 1 } } }
	Cluster_1_Phi_2_rea { ap_none {  { Cluster_1_Phi_2_rea in_data 0 1 } } }
	Cluster_1_Phi_3_rea { ap_none {  { Cluster_1_Phi_3_rea in_data 0 1 } } }
	Cluster_1_Phi_4_rea { ap_none {  { Cluster_1_Phi_4_rea in_data 0 2 } } }
	Cluster_1_Phi_5_rea { ap_none {  { Cluster_1_Phi_5_rea in_data 0 2 } } }
	Cluster_1_Phi_6_rea { ap_none {  { Cluster_1_Phi_6_rea in_data 0 2 } } }
	Cluster_1_Phi_7_rea { ap_none {  { Cluster_1_Phi_7_rea in_data 0 2 } } }
	Cluster_1_Phi_8_rea { ap_none {  { Cluster_1_Phi_8_rea in_data 0 2 } } }
	Cluster_1_Phi_9_rea { ap_none {  { Cluster_1_Phi_9_rea in_data 0 2 } } }
	Cluster_1_Phi_10_re { ap_none {  { Cluster_1_Phi_10_re in_data 0 2 } } }
	Cluster_1_Phi_11_re { ap_none {  { Cluster_1_Phi_11_re in_data 0 2 } } }
}
