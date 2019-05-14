set C_TypeInfoList {{ 
"TPG" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"in": [[], {"array": ["0", [1]]}] }, {"out": [[], {"array": ["1", [1]]}] }],[],""], 
"0": [ "inPut", {"struct": [[],[],[{ "data_input": [[], "2"]},{ "lincoeff": [[], "3"]}],""]}], 
"3": [ "ap_uint<24>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 24}}]],""]}}], 
"2": [ "ap_uint<14>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"1": [ "outPut", {"struct": [[],[],[{ "filOut": [[], "4"]},{ "peakOut": [[],  {"scalar": "bool"}]}],""]}], 
"4": [ "ap_uint<18>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 18}}]],""]}}]
}}
set moduleName TPG
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {TPG}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_0_data_input_V int 14 regular {pointer 0}  }
	{ in_0_lincoeff_V int 24 regular {pointer 0}  }
	{ out_0_filOut_V int 18 regular {pointer 1}  }
	{ out_0_peakOut int 1 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_0_data_input_V", "interface" : "wire", "bitwidth" : 14, "direction" : "READONLY", "bitSlice":[{"low":0,"up":13,"cElement": [{"cName": "in.data_input.V","cData": "uint14","bit_use": { "low": 0,"up": 13},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "in_0_lincoeff_V", "interface" : "wire", "bitwidth" : 24, "direction" : "READONLY", "bitSlice":[{"low":0,"up":23,"cElement": [{"cName": "in.lincoeff.V","cData": "uint24","bit_use": { "low": 0,"up": 23},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_filOut_V", "interface" : "wire", "bitwidth" : 18, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "out.filOut.V","cData": "uint18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_peakOut", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.peakOut","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_0_data_input_V sc_in sc_lv 14 signal 0 } 
	{ in_0_lincoeff_V sc_in sc_lv 24 signal 1 } 
	{ out_0_filOut_V sc_out sc_lv 18 signal 2 } 
	{ out_0_filOut_V_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ out_0_peakOut sc_out sc_logic 1 signal 3 } 
	{ out_0_peakOut_ap_vld sc_out sc_logic 1 outvld 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_0_data_input_V", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_0_data_input_V", "role": "default" }} , 
 	{ "name": "in_0_lincoeff_V", "direction": "in", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "in_0_lincoeff_V", "role": "default" }} , 
 	{ "name": "out_0_filOut_V", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "out_0_filOut_V", "role": "default" }} , 
 	{ "name": "out_0_filOut_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_filOut_V", "role": "ap_vld" }} , 
 	{ "name": "out_0_peakOut", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0_peakOut", "role": "default" }} , 
 	{ "name": "out_0_peakOut_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_peakOut", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "TPG",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "in_0_data_input_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_0_lincoeff_V", "Type" : "None", "Direction" : "I"},
		{"Name" : "out_0_filOut_V", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "out_0_peakOut", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "reg_shift_reg_V_0_3", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_V_0_2", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_V_0_1", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_V_0_0", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_peak_reg_V_0_0", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_peak_reg_V_0_1", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_am_submul_12nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_mul_mul_7s_18cud_U2", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "4"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "5"}
]}

set Spec2ImplPortList { 
	in_0_data_input_V { ap_none {  { in_0_data_input_V in_data 0 14 } } }
	in_0_lincoeff_V { ap_none {  { in_0_lincoeff_V in_data 0 24 } } }
	out_0_filOut_V { ap_vld {  { out_0_filOut_V out_data 1 18 }  { out_0_filOut_V_ap_vld out_vld 1 1 } } }
	out_0_peakOut { ap_vld {  { out_0_peakOut out_data 1 1 }  { out_0_peakOut_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
