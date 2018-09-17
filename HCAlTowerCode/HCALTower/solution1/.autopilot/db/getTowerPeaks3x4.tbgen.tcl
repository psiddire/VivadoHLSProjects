set moduleName getTowerPeaks3x4
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {getTowerPeaks3x4}
set C_modelType { int 160 }
set C_modelArgList {
	{ towerETRegions_0_0 int 16 regular  }
	{ towerETRegions_0_1 int 16 regular  }
	{ towerETRegions_0_2 int 16 regular  }
	{ towerETRegions_0_3 int 16 regular  }
	{ towerETRegions_1_0 int 16 regular  }
	{ towerETRegions_1_1 int 16 regular  }
	{ towerETRegions_1_2 int 16 regular  }
	{ towerETRegions_1_3 int 16 regular  }
	{ towerETRegions_2_0 int 16 regular  }
	{ towerETRegions_2_1 int 16 regular  }
	{ towerETRegions_2_2 int 16 regular  }
	{ towerETRegions_2_3 int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "towerETRegions_0_0", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_0_1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_0_2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_0_3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_1_0", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_1_1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_1_2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_1_3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_2_0", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_2_1", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_2_2", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "towerETRegions_2_3", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 160} ]}
# RTL Port declarations: 
set portNum 29
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ towerETRegions_0_0 sc_in sc_lv 16 signal 0 } 
	{ towerETRegions_0_1 sc_in sc_lv 16 signal 1 } 
	{ towerETRegions_0_2 sc_in sc_lv 16 signal 2 } 
	{ towerETRegions_0_3 sc_in sc_lv 16 signal 3 } 
	{ towerETRegions_1_0 sc_in sc_lv 16 signal 4 } 
	{ towerETRegions_1_1 sc_in sc_lv 16 signal 5 } 
	{ towerETRegions_1_2 sc_in sc_lv 16 signal 6 } 
	{ towerETRegions_1_3 sc_in sc_lv 16 signal 7 } 
	{ towerETRegions_2_0 sc_in sc_lv 16 signal 8 } 
	{ towerETRegions_2_1 sc_in sc_lv 16 signal 9 } 
	{ towerETRegions_2_2 sc_in sc_lv 16 signal 10 } 
	{ towerETRegions_2_3 sc_in sc_lv 16 signal 11 } 
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
 	{ "name": "towerETRegions_0_0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_0_0", "role": "default" }} , 
 	{ "name": "towerETRegions_0_1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_0_1", "role": "default" }} , 
 	{ "name": "towerETRegions_0_2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_0_2", "role": "default" }} , 
 	{ "name": "towerETRegions_0_3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_0_3", "role": "default" }} , 
 	{ "name": "towerETRegions_1_0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_1_0", "role": "default" }} , 
 	{ "name": "towerETRegions_1_1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_1_1", "role": "default" }} , 
 	{ "name": "towerETRegions_1_2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_1_2", "role": "default" }} , 
 	{ "name": "towerETRegions_1_3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_1_3", "role": "default" }} , 
 	{ "name": "towerETRegions_2_0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_2_0", "role": "default" }} , 
 	{ "name": "towerETRegions_2_1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_2_1", "role": "default" }} , 
 	{ "name": "towerETRegions_2_2", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_2_2", "role": "default" }} , 
 	{ "name": "towerETRegions_2_3", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "towerETRegions_2_3", "role": "default" }} , 
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
		"CDFG" : "getTowerPeaks3x4",
		"VariableLatency" : "0",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "towerETRegions_0_0", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_0_1", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_0_2", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_0_3", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_1_0", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_1_1", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_1_2", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_1_3", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_2_0", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_2_1", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_2_2", "Type" : "None", "Direction" : "I"},
		{"Name" : "towerETRegions_2_3", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_bitonic_1_8_fu_120", "Parent" : "0", "Child" : ["2"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_bitonic_1_8_fu_120.call_ret_bitonic_1_16_fu_300", "Parent" : "1",
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
	{"Name" : "Latency", "Min" : "2", "Max" : "2"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set Spec2ImplPortList { 
	towerETRegions_0_0 { ap_none {  { towerETRegions_0_0 in_data 0 16 } } }
	towerETRegions_0_1 { ap_none {  { towerETRegions_0_1 in_data 0 16 } } }
	towerETRegions_0_2 { ap_none {  { towerETRegions_0_2 in_data 0 16 } } }
	towerETRegions_0_3 { ap_none {  { towerETRegions_0_3 in_data 0 16 } } }
	towerETRegions_1_0 { ap_none {  { towerETRegions_1_0 in_data 0 16 } } }
	towerETRegions_1_1 { ap_none {  { towerETRegions_1_1 in_data 0 16 } } }
	towerETRegions_1_2 { ap_none {  { towerETRegions_1_2 in_data 0 16 } } }
	towerETRegions_1_3 { ap_none {  { towerETRegions_1_3 in_data 0 16 } } }
	towerETRegions_2_0 { ap_none {  { towerETRegions_2_0 in_data 0 16 } } }
	towerETRegions_2_1 { ap_none {  { towerETRegions_2_1 in_data 0 16 } } }
	towerETRegions_2_2 { ap_none {  { towerETRegions_2_2 in_data 0 16 } } }
	towerETRegions_2_3 { ap_none {  { towerETRegions_2_3 in_data 0 16 } } }
}
