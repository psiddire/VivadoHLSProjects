set moduleName LinFil
set isCombinational 0
set isDatapathOnly 1
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {LinFil}
set C_modelType { int 127 }
set C_modelArgList {
	{ data_int_V int 14 regular  }
	{ lincoef_V int 24 regular  }
	{ shift_reg_0_V_read int 18 regular  }
	{ shift_reg_1_V_read int 18 regular  }
	{ shift_reg_2_V_read int 18 regular  }
	{ shift_reg_3_V_read int 18 regular  }
	{ peak_reg_0_V_read int 18 regular  }
	{ peak_reg_1_V_read int 18 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_int_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "lincoef_V", "interface" : "wire", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "shift_reg_0_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "shift_reg_1_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "shift_reg_2_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "shift_reg_3_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "peak_reg_0_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "peak_reg_1_V_read", "interface" : "wire", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 127} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ data_int_V sc_in sc_lv 14 signal 0 } 
	{ lincoef_V sc_in sc_lv 24 signal 1 } 
	{ shift_reg_0_V_read sc_in sc_lv 18 signal 2 } 
	{ shift_reg_1_V_read sc_in sc_lv 18 signal 3 } 
	{ shift_reg_2_V_read sc_in sc_lv 18 signal 4 } 
	{ shift_reg_3_V_read sc_in sc_lv 18 signal 5 } 
	{ peak_reg_0_V_read sc_in sc_lv 18 signal 6 } 
	{ peak_reg_1_V_read sc_in sc_lv 18 signal 7 } 
	{ ap_return_0 sc_out sc_lv 18 signal -1 } 
	{ ap_return_1 sc_out sc_lv 1 signal -1 } 
	{ ap_return_2 sc_out sc_lv 18 signal -1 } 
	{ ap_return_3 sc_out sc_lv 18 signal -1 } 
	{ ap_return_4 sc_out sc_lv 18 signal -1 } 
	{ ap_return_5 sc_out sc_lv 18 signal -1 } 
	{ ap_return_6 sc_out sc_lv 18 signal -1 } 
	{ ap_return_7 sc_out sc_lv 18 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "data_int_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "data_int_V", "role": "default" }} , 
 	{ "name": "lincoef_V", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "lincoef_V", "role": "default" }} , 
 	{ "name": "shift_reg_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shift_reg_0_V_read", "role": "default" }} , 
 	{ "name": "shift_reg_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shift_reg_1_V_read", "role": "default" }} , 
 	{ "name": "shift_reg_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shift_reg_2_V_read", "role": "default" }} , 
 	{ "name": "shift_reg_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shift_reg_3_V_read", "role": "default" }} , 
 	{ "name": "peak_reg_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "peak_reg_0_V_read", "role": "default" }} , 
 	{ "name": "peak_reg_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "peak_reg_1_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "LinFil",
		"VariableLatency" : "0",
		"AlignedPipeline" : "1",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "0",
		"Port" : [
		{"Name" : "data_int_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "lincoef_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "shift_reg_0_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "shift_reg_1_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "shift_reg_2_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "shift_reg_3_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "peak_reg_0_V_read", "Type" : "None", "Direction" : "I"},
		{"Name" : "peak_reg_1_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_am_submul_12nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_mac_muladd_7scud_U2", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set Spec2ImplPortList { 
	data_int_V { ap_none {  { data_int_V in_data 0 14 } } }
	lincoef_V { ap_none {  { lincoef_V in_data 0 24 } } }
	shift_reg_0_V_read { ap_none {  { shift_reg_0_V_read in_data 0 18 } } }
	shift_reg_1_V_read { ap_none {  { shift_reg_1_V_read in_data 0 18 } } }
	shift_reg_2_V_read { ap_none {  { shift_reg_2_V_read in_data 0 18 } } }
	shift_reg_3_V_read { ap_none {  { shift_reg_3_V_read in_data 0 18 } } }
	peak_reg_0_V_read { ap_none {  { peak_reg_0_V_read in_data 0 18 } } }
	peak_reg_1_V_read { ap_none {  { peak_reg_1_V_read in_data 0 18 } } }
}
