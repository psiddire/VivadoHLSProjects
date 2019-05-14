set C_TypeInfoList {{ 
"TPG" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"in": [[], {"array": ["0", [1]]}] }, {"out": [[], {"array": ["1", [1]]}] }],[],""], 
"1": [ "outPut", {"struct": [[],[],[{ "filOut": [[32], "2"]},{ "peakOut": [[],  {"scalar": "bool"}]},{ "peakAmp": [[16], "3"]}],""]}], 
"0": [ "inPut", {"struct": [[],[],[{ "data_input": [[16], "3"]},{ "lincoeff": [[32], "2"]}],""]}], 
"2": [ "uint32_t", {"typedef": [[[], {"scalar": "unsigned int"}],""]}], 
"3": [ "uint16_t", {"typedef": [[[], {"scalar": "unsigned short"}],""]}]
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
	{ in_0_data_input int 16 regular {pointer 0}  }
	{ in_0_lincoeff int 32 regular {pointer 0}  }
	{ out_0_filOut int 32 regular {pointer 1}  }
	{ out_0_peakOut int 1 regular {pointer 1}  }
	{ out_0_peakAmp int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_0_data_input", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "in.data_input","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "in_0_lincoeff", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.lincoeff","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_filOut", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.filOut","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_peakOut", "interface" : "wire", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "out.peakOut","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_peakAmp", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "out.peakAmp","cData": "unsigned short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_0_data_input sc_in sc_lv 16 signal 0 } 
	{ in_0_lincoeff sc_in sc_lv 32 signal 1 } 
	{ out_0_filOut sc_out sc_lv 32 signal 2 } 
	{ out_0_filOut_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ out_0_peakOut sc_out sc_logic 1 signal 3 } 
	{ out_0_peakOut_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ out_0_peakAmp sc_out sc_lv 16 signal 4 } 
	{ out_0_peakAmp_ap_vld sc_out sc_logic 1 outvld 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_0_data_input", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "in_0_data_input", "role": "default" }} , 
 	{ "name": "in_0_lincoeff", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0_lincoeff", "role": "default" }} , 
 	{ "name": "out_0_filOut", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0_filOut", "role": "default" }} , 
 	{ "name": "out_0_filOut_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_filOut", "role": "ap_vld" }} , 
 	{ "name": "out_0_peakOut", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0_peakOut", "role": "default" }} , 
 	{ "name": "out_0_peakOut_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_peakOut", "role": "ap_vld" }} , 
 	{ "name": "out_0_peakAmp", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_0_peakAmp", "role": "default" }} , 
 	{ "name": "out_0_peakAmp_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_peakAmp", "role": "ap_vld" }}  ]}

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
		{"Name" : "in_0_data_input", "Type" : "None", "Direction" : "I"},
		{"Name" : "in_0_lincoeff", "Type" : "None", "Direction" : "I"},
		{"Name" : "out_0_filOut", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "out_0_peakOut", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "out_0_peakAmp", "Type" : "Vld", "Direction" : "O"},
		{"Name" : "reg_shift_reg_0_3", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_0_2", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_0_1", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_shift_reg_0_0", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_peak_reg_0_0", "Type" : "OVld", "Direction" : "IO"},
		{"Name" : "reg_peak_reg_0_1", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_am_submul_12nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.TPG_mul_mul_7s_21cud_U2", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "4"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "5"}
]}

set Spec2ImplPortList { 
	in_0_data_input { ap_none {  { in_0_data_input in_data 0 16 } } }
	in_0_lincoeff { ap_none {  { in_0_lincoeff in_data 0 32 } } }
	out_0_filOut { ap_vld {  { out_0_filOut out_data 1 32 }  { out_0_filOut_ap_vld out_vld 1 1 } } }
	out_0_peakOut { ap_vld {  { out_0_peakOut out_data 1 1 }  { out_0_peakOut_ap_vld out_vld 1 1 } } }
	out_0_peakAmp { ap_vld {  { out_0_peakAmp out_data 1 16 }  { out_0_peakAmp_ap_vld out_vld 1 1 } } }
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
