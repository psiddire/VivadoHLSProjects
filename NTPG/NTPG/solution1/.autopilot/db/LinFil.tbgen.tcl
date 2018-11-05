set moduleName LinFil
set isCombinational 1
set isDatapathOnly 0
set isPipelined 0
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {LinFil}
set C_modelType { int 19 }
set C_modelArgList {
	{ data_int_V int 14 regular  }
	{ lincoeff_V int 24 regular  }
	{ r_0_shift_reg_V int 18 regular {pointer 2}  }
	{ r_1_shift_reg_V int 18 regular {pointer 2}  }
	{ r_2_shift_reg_V int 18 regular {pointer 2}  }
	{ r_3_shift_reg_V int 18 regular {pointer 2}  }
	{ r_0_peak_reg_V int 18 regular {pointer 2}  }
	{ r_1_peak_reg_V int 18 regular {pointer 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_int_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY"} , 
 	{ "Name" : "lincoeff_V", "interface" : "wire", "bitwidth" : 24, "direction" : "READONLY"} , 
 	{ "Name" : "r_0_shift_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "r_1_shift_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "r_2_shift_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "r_3_shift_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "r_0_peak_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "r_1_peak_reg_V", "interface" : "wire", "bitwidth" : 18, "direction" : "READWRITE"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 19} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ data_int_V sc_in sc_lv 14 signal 0 } 
	{ lincoeff_V sc_in sc_lv 24 signal 1 } 
	{ r_0_shift_reg_V_i sc_in sc_lv 18 signal 2 } 
	{ r_0_shift_reg_V_o sc_out sc_lv 18 signal 2 } 
	{ r_0_shift_reg_V_o_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ r_1_shift_reg_V_i sc_in sc_lv 18 signal 3 } 
	{ r_1_shift_reg_V_o sc_out sc_lv 18 signal 3 } 
	{ r_1_shift_reg_V_o_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ r_2_shift_reg_V_i sc_in sc_lv 18 signal 4 } 
	{ r_2_shift_reg_V_o sc_out sc_lv 18 signal 4 } 
	{ r_2_shift_reg_V_o_ap_vld sc_out sc_logic 1 outvld 4 } 
	{ r_3_shift_reg_V_i sc_in sc_lv 18 signal 5 } 
	{ r_3_shift_reg_V_o sc_out sc_lv 18 signal 5 } 
	{ r_3_shift_reg_V_o_ap_vld sc_out sc_logic 1 outvld 5 } 
	{ r_0_peak_reg_V_i sc_in sc_lv 18 signal 6 } 
	{ r_0_peak_reg_V_o sc_out sc_lv 18 signal 6 } 
	{ r_0_peak_reg_V_o_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ r_1_peak_reg_V_i sc_in sc_lv 18 signal 7 } 
	{ r_1_peak_reg_V_o sc_out sc_lv 18 signal 7 } 
	{ r_1_peak_reg_V_o_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ ap_return_0 sc_out sc_lv 18 signal -1 } 
	{ ap_return_1 sc_out sc_lv 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "data_int_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "data_int_V", "role": "default" }} , 
 	{ "name": "lincoeff_V", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "lincoeff_V", "role": "default" }} , 
 	{ "name": "r_0_shift_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_0_shift_reg_V", "role": "i" }} , 
 	{ "name": "r_0_shift_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_0_shift_reg_V", "role": "o" }} , 
 	{ "name": "r_0_shift_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_0_shift_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "r_1_shift_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_1_shift_reg_V", "role": "i" }} , 
 	{ "name": "r_1_shift_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_1_shift_reg_V", "role": "o" }} , 
 	{ "name": "r_1_shift_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_1_shift_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "r_2_shift_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_2_shift_reg_V", "role": "i" }} , 
 	{ "name": "r_2_shift_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_2_shift_reg_V", "role": "o" }} , 
 	{ "name": "r_2_shift_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_2_shift_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "r_3_shift_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_3_shift_reg_V", "role": "i" }} , 
 	{ "name": "r_3_shift_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_3_shift_reg_V", "role": "o" }} , 
 	{ "name": "r_3_shift_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_3_shift_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "r_0_peak_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_0_peak_reg_V", "role": "i" }} , 
 	{ "name": "r_0_peak_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_0_peak_reg_V", "role": "o" }} , 
 	{ "name": "r_0_peak_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_0_peak_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "r_1_peak_reg_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_1_peak_reg_V", "role": "i" }} , 
 	{ "name": "r_1_peak_reg_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "r_1_peak_reg_V", "role": "o" }} , 
 	{ "name": "r_1_peak_reg_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "r_1_peak_reg_V", "role": "o_ap_vld" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "LinFil",
		"VariableLatency" : "0",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "1",
		"ControlExist" : "0",
		"Port" : [
		{"Name" : "data_int_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "lincoeff_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "r_0_shift_reg_V", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "r_1_shift_reg_V", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "r_2_shift_reg_V", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "r_3_shift_reg_V", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "r_0_peak_reg_V", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "r_1_peak_reg_V", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_am_submul_12nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_mul_mul_7s_18cud_U2", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "0"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set Spec2ImplPortList { 
	data_int_V { ap_none {  { data_int_V in_data 0 14 } } }
	lincoeff_V { ap_none {  { lincoeff_V in_data 0 24 } } }
	r_0_shift_reg_V { ap_ovld {  { r_0_shift_reg_V_i in_data 0 18 }  { r_0_shift_reg_V_o out_data 1 18 }  { r_0_shift_reg_V_o_ap_vld out_vld 1 1 } } }
	r_1_shift_reg_V { ap_ovld {  { r_1_shift_reg_V_i in_data 0 18 }  { r_1_shift_reg_V_o out_data 1 18 }  { r_1_shift_reg_V_o_ap_vld out_vld 1 1 } } }
	r_2_shift_reg_V { ap_ovld {  { r_2_shift_reg_V_i in_data 0 18 }  { r_2_shift_reg_V_o out_data 1 18 }  { r_2_shift_reg_V_o_ap_vld out_vld 1 1 } } }
	r_3_shift_reg_V { ap_ovld {  { r_3_shift_reg_V_i in_data 0 18 }  { r_3_shift_reg_V_o out_data 1 18 }  { r_3_shift_reg_V_o_ap_vld out_vld 1 1 } } }
	r_0_peak_reg_V { ap_ovld {  { r_0_peak_reg_V_i in_data 0 18 }  { r_0_peak_reg_V_o out_data 1 18 }  { r_0_peak_reg_V_o_ap_vld out_vld 1 1 } } }
	r_1_peak_reg_V { ap_ovld {  { r_1_peak_reg_V_i in_data 0 18 }  { r_1_peak_reg_V_o out_data 1 18 }  { r_1_peak_reg_V_o_ap_vld out_vld 1 1 } } }
}
