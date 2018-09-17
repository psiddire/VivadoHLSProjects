# This script segment is generated automatically by AutoPilot

set id 459
set name TowerPeaks_mux_68bkb
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set in1_width 16
set in1_signed 0
set in2_width 16
set in2_signed 0
set in3_width 16
set in3_signed 0
set in4_width 16
set in4_signed 0
set in5_width 16
set in5_signed 0
set in6_width 16
set in6_signed 0
set in7_width 16
set in7_signed 0
set in8_width 16
set in8_signed 0
set in9_width 16
set in9_signed 0
set in10_width 16
set in10_signed 0
set in11_width 16
set in11_signed 0
set in12_width 16
set in12_signed 0
set in13_width 16
set in13_signed 0
set in14_width 16
set in14_signed 0
set in15_width 16
set in15_signed 0
set in16_width 16
set in16_signed 0
set in17_width 16
set in17_signed 0
set in18_width 16
set in18_signed 0
set in19_width 16
set in19_signed 0
set in20_width 16
set in20_signed 0
set in21_width 16
set in21_signed 0
set in22_width 16
set in22_signed 0
set in23_width 16
set in23_signed 0
set in24_width 16
set in24_signed 0
set in25_width 16
set in25_signed 0
set in26_width 16
set in26_signed 0
set in27_width 16
set in27_signed 0
set in28_width 16
set in28_signed 0
set in29_width 16
set in29_signed 0
set in30_width 16
set in30_signed 0
set in31_width 16
set in31_signed 0
set in32_width 16
set in32_signed 0
set in33_width 16
set in33_signed 0
set in34_width 16
set in34_signed 0
set in35_width 16
set in35_signed 0
set in36_width 16
set in36_signed 0
set in37_width 16
set in37_signed 0
set in38_width 16
set in38_signed 0
set in39_width 16
set in39_signed 0
set in40_width 16
set in40_signed 0
set in41_width 16
set in41_signed 0
set in42_width 16
set in42_signed 0
set in43_width 16
set in43_signed 0
set in44_width 16
set in44_signed 0
set in45_width 16
set in45_signed 0
set in46_width 16
set in46_signed 0
set in47_width 16
set in47_signed 0
set in48_width 16
set in48_signed 0
set in49_width 16
set in49_signed 0
set in50_width 16
set in50_signed 0
set in51_width 16
set in51_signed 0
set in52_width 16
set in52_signed 0
set in53_width 16
set in53_signed 0
set in54_width 16
set in54_signed 0
set in55_width 16
set in55_signed 0
set in56_width 16
set in56_signed 0
set in57_width 16
set in57_signed 0
set in58_width 16
set in58_signed 0
set in59_width 16
set in59_signed 0
set in60_width 16
set in60_signed 0
set in61_width 16
set in61_signed 0
set in62_width 16
set in62_signed 0
set in63_width 16
set in63_signed 0
set in64_width 16
set in64_signed 0
set in65_width 16
set in65_signed 0
set in66_width 16
set in66_signed 0
set in67_width 16
set in67_signed 0
set in68_width 16
set in68_signed 0
set in69_width 7
set in69_signed 0
set out_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    in15_width ${in15_width} \
    in15_signed ${in15_signed} \
    in16_width ${in16_width} \
    in16_signed ${in16_signed} \
    in17_width ${in17_width} \
    in17_signed ${in17_signed} \
    in18_width ${in18_width} \
    in18_signed ${in18_signed} \
    in19_width ${in19_width} \
    in19_signed ${in19_signed} \
    in20_width ${in20_width} \
    in20_signed ${in20_signed} \
    in21_width ${in21_width} \
    in21_signed ${in21_signed} \
    in22_width ${in22_width} \
    in22_signed ${in22_signed} \
    in23_width ${in23_width} \
    in23_signed ${in23_signed} \
    in24_width ${in24_width} \
    in24_signed ${in24_signed} \
    in25_width ${in25_width} \
    in25_signed ${in25_signed} \
    in26_width ${in26_width} \
    in26_signed ${in26_signed} \
    in27_width ${in27_width} \
    in27_signed ${in27_signed} \
    in28_width ${in28_width} \
    in28_signed ${in28_signed} \
    in29_width ${in29_width} \
    in29_signed ${in29_signed} \
    in30_width ${in30_width} \
    in30_signed ${in30_signed} \
    in31_width ${in31_width} \
    in31_signed ${in31_signed} \
    in32_width ${in32_width} \
    in32_signed ${in32_signed} \
    in33_width ${in33_width} \
    in33_signed ${in33_signed} \
    in34_width ${in34_width} \
    in34_signed ${in34_signed} \
    in35_width ${in35_width} \
    in35_signed ${in35_signed} \
    in36_width ${in36_width} \
    in36_signed ${in36_signed} \
    in37_width ${in37_width} \
    in37_signed ${in37_signed} \
    in38_width ${in38_width} \
    in38_signed ${in38_signed} \
    in39_width ${in39_width} \
    in39_signed ${in39_signed} \
    in40_width ${in40_width} \
    in40_signed ${in40_signed} \
    in41_width ${in41_width} \
    in41_signed ${in41_signed} \
    in42_width ${in42_width} \
    in42_signed ${in42_signed} \
    in43_width ${in43_width} \
    in43_signed ${in43_signed} \
    in44_width ${in44_width} \
    in44_signed ${in44_signed} \
    in45_width ${in45_width} \
    in45_signed ${in45_signed} \
    in46_width ${in46_width} \
    in46_signed ${in46_signed} \
    in47_width ${in47_width} \
    in47_signed ${in47_signed} \
    in48_width ${in48_width} \
    in48_signed ${in48_signed} \
    in49_width ${in49_width} \
    in49_signed ${in49_signed} \
    in50_width ${in50_width} \
    in50_signed ${in50_signed} \
    in51_width ${in51_width} \
    in51_signed ${in51_signed} \
    in52_width ${in52_width} \
    in52_signed ${in52_signed} \
    in53_width ${in53_width} \
    in53_signed ${in53_signed} \
    in54_width ${in54_width} \
    in54_signed ${in54_signed} \
    in55_width ${in55_width} \
    in55_signed ${in55_signed} \
    in56_width ${in56_width} \
    in56_signed ${in56_signed} \
    in57_width ${in57_width} \
    in57_signed ${in57_signed} \
    in58_width ${in58_width} \
    in58_signed ${in58_signed} \
    in59_width ${in59_width} \
    in59_signed ${in59_signed} \
    in60_width ${in60_width} \
    in60_signed ${in60_signed} \
    in61_width ${in61_width} \
    in61_signed ${in61_signed} \
    in62_width ${in62_width} \
    in62_signed ${in62_signed} \
    in63_width ${in63_width} \
    in63_signed ${in63_signed} \
    in64_width ${in64_width} \
    in64_signed ${in64_signed} \
    in65_width ${in65_width} \
    in65_signed ${in65_signed} \
    in66_width ${in66_width} \
    in66_signed ${in66_signed} \
    in67_width ${in67_width} \
    in67_signed ${in67_signed} \
    in68_width ${in68_width} \
    in68_signed ${in68_signed} \
    in69_width ${in69_width} \
    in69_signed ${in69_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    in5_width ${in5_width} \
    in5_signed ${in5_signed} \
    in6_width ${in6_width} \
    in6_signed ${in6_signed} \
    in7_width ${in7_width} \
    in7_signed ${in7_signed} \
    in8_width ${in8_width} \
    in8_signed ${in8_signed} \
    in9_width ${in9_width} \
    in9_signed ${in9_signed} \
    in10_width ${in10_width} \
    in10_signed ${in10_signed} \
    in11_width ${in11_width} \
    in11_signed ${in11_signed} \
    in12_width ${in12_width} \
    in12_signed ${in12_signed} \
    in13_width ${in13_width} \
    in13_signed ${in13_signed} \
    in14_width ${in14_width} \
    in14_signed ${in14_signed} \
    in15_width ${in15_width} \
    in15_signed ${in15_signed} \
    in16_width ${in16_width} \
    in16_signed ${in16_signed} \
    in17_width ${in17_width} \
    in17_signed ${in17_signed} \
    in18_width ${in18_width} \
    in18_signed ${in18_signed} \
    in19_width ${in19_width} \
    in19_signed ${in19_signed} \
    in20_width ${in20_width} \
    in20_signed ${in20_signed} \
    in21_width ${in21_width} \
    in21_signed ${in21_signed} \
    in22_width ${in22_width} \
    in22_signed ${in22_signed} \
    in23_width ${in23_width} \
    in23_signed ${in23_signed} \
    in24_width ${in24_width} \
    in24_signed ${in24_signed} \
    in25_width ${in25_width} \
    in25_signed ${in25_signed} \
    in26_width ${in26_width} \
    in26_signed ${in26_signed} \
    in27_width ${in27_width} \
    in27_signed ${in27_signed} \
    in28_width ${in28_width} \
    in28_signed ${in28_signed} \
    in29_width ${in29_width} \
    in29_signed ${in29_signed} \
    in30_width ${in30_width} \
    in30_signed ${in30_signed} \
    in31_width ${in31_width} \
    in31_signed ${in31_signed} \
    in32_width ${in32_width} \
    in32_signed ${in32_signed} \
    in33_width ${in33_width} \
    in33_signed ${in33_signed} \
    in34_width ${in34_width} \
    in34_signed ${in34_signed} \
    in35_width ${in35_width} \
    in35_signed ${in35_signed} \
    in36_width ${in36_width} \
    in36_signed ${in36_signed} \
    in37_width ${in37_width} \
    in37_signed ${in37_signed} \
    in38_width ${in38_width} \
    in38_signed ${in38_signed} \
    in39_width ${in39_width} \
    in39_signed ${in39_signed} \
    in40_width ${in40_width} \
    in40_signed ${in40_signed} \
    in41_width ${in41_width} \
    in41_signed ${in41_signed} \
    in42_width ${in42_width} \
    in42_signed ${in42_signed} \
    in43_width ${in43_width} \
    in43_signed ${in43_signed} \
    in44_width ${in44_width} \
    in44_signed ${in44_signed} \
    in45_width ${in45_width} \
    in45_signed ${in45_signed} \
    in46_width ${in46_width} \
    in46_signed ${in46_signed} \
    in47_width ${in47_width} \
    in47_signed ${in47_signed} \
    in48_width ${in48_width} \
    in48_signed ${in48_signed} \
    in49_width ${in49_width} \
    in49_signed ${in49_signed} \
    in50_width ${in50_width} \
    in50_signed ${in50_signed} \
    in51_width ${in51_width} \
    in51_signed ${in51_signed} \
    in52_width ${in52_width} \
    in52_signed ${in52_signed} \
    in53_width ${in53_width} \
    in53_signed ${in53_signed} \
    in54_width ${in54_width} \
    in54_signed ${in54_signed} \
    in55_width ${in55_width} \
    in55_signed ${in55_signed} \
    in56_width ${in56_width} \
    in56_signed ${in56_signed} \
    in57_width ${in57_width} \
    in57_signed ${in57_signed} \
    in58_width ${in58_width} \
    in58_signed ${in58_signed} \
    in59_width ${in59_width} \
    in59_signed ${in59_signed} \
    in60_width ${in60_width} \
    in60_signed ${in60_signed} \
    in61_width ${in61_width} \
    in61_signed ${in61_signed} \
    in62_width ${in62_width} \
    in62_signed ${in62_signed} \
    in63_width ${in63_width} \
    in63_signed ${in63_signed} \
    in64_width ${in64_width} \
    in64_signed ${in64_signed} \
    in65_width ${in65_width} \
    in65_signed ${in65_signed} \
    in66_width ${in66_width} \
    in66_signed ${in66_signed} \
    in67_width ${in67_width} \
    in67_signed ${in67_signed} \
    in68_width ${in68_width} \
    in68_signed ${in68_signed} \
    in69_width ${in69_width} \
    in69_signed ${in69_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 489 \
    name towerET_0_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_0_0 \
    op interface \
    ports { towerET_0_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 490 \
    name towerET_0_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_0_1 \
    op interface \
    ports { towerET_0_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 491 \
    name towerET_0_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_0_2 \
    op interface \
    ports { towerET_0_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 492 \
    name towerET_0_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_0_3 \
    op interface \
    ports { towerET_0_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 493 \
    name towerET_1_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_1_0 \
    op interface \
    ports { towerET_1_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 494 \
    name towerET_1_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_1_1 \
    op interface \
    ports { towerET_1_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 495 \
    name towerET_1_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_1_2 \
    op interface \
    ports { towerET_1_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 496 \
    name towerET_1_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_1_3 \
    op interface \
    ports { towerET_1_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 497 \
    name towerET_2_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_2_0 \
    op interface \
    ports { towerET_2_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
    name towerET_2_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_2_1 \
    op interface \
    ports { towerET_2_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 499 \
    name towerET_2_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_2_2 \
    op interface \
    ports { towerET_2_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 500 \
    name towerET_2_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_2_3 \
    op interface \
    ports { towerET_2_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 501 \
    name towerET_3_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_3_0 \
    op interface \
    ports { towerET_3_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 502 \
    name towerET_3_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_3_1 \
    op interface \
    ports { towerET_3_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 503 \
    name towerET_3_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_3_2 \
    op interface \
    ports { towerET_3_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 504 \
    name towerET_3_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_3_3 \
    op interface \
    ports { towerET_3_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name towerET_4_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_4_0 \
    op interface \
    ports { towerET_4_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name towerET_4_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_4_1 \
    op interface \
    ports { towerET_4_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name towerET_4_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_4_2 \
    op interface \
    ports { towerET_4_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name towerET_4_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_4_3 \
    op interface \
    ports { towerET_4_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name towerET_5_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_5_0 \
    op interface \
    ports { towerET_5_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name towerET_5_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_5_1 \
    op interface \
    ports { towerET_5_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name towerET_5_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_5_2 \
    op interface \
    ports { towerET_5_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name towerET_5_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_5_3 \
    op interface \
    ports { towerET_5_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name towerET_6_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_6_0 \
    op interface \
    ports { towerET_6_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name towerET_6_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_6_1 \
    op interface \
    ports { towerET_6_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name towerET_6_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_6_2 \
    op interface \
    ports { towerET_6_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name towerET_6_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_6_3 \
    op interface \
    ports { towerET_6_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name towerET_7_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_7_0 \
    op interface \
    ports { towerET_7_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name towerET_7_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_7_1 \
    op interface \
    ports { towerET_7_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name towerET_7_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_7_2 \
    op interface \
    ports { towerET_7_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name towerET_7_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_7_3 \
    op interface \
    ports { towerET_7_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name towerET_8_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_8_0 \
    op interface \
    ports { towerET_8_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name towerET_8_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_8_1 \
    op interface \
    ports { towerET_8_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name towerET_8_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_8_2 \
    op interface \
    ports { towerET_8_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name towerET_8_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_8_3 \
    op interface \
    ports { towerET_8_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name towerET_9_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_9_0 \
    op interface \
    ports { towerET_9_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name towerET_9_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_9_1 \
    op interface \
    ports { towerET_9_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name towerET_9_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_9_2 \
    op interface \
    ports { towerET_9_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name towerET_9_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_9_3 \
    op interface \
    ports { towerET_9_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name towerET_10_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_10_0 \
    op interface \
    ports { towerET_10_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name towerET_10_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_10_1 \
    op interface \
    ports { towerET_10_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name towerET_10_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_10_2 \
    op interface \
    ports { towerET_10_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name towerET_10_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_10_3 \
    op interface \
    ports { towerET_10_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name towerET_11_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_11_0 \
    op interface \
    ports { towerET_11_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name towerET_11_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_11_1 \
    op interface \
    ports { towerET_11_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name towerET_11_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_11_2 \
    op interface \
    ports { towerET_11_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name towerET_11_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_11_3 \
    op interface \
    ports { towerET_11_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name towerET_12_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_12_0 \
    op interface \
    ports { towerET_12_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name towerET_12_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_12_1 \
    op interface \
    ports { towerET_12_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name towerET_12_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_12_2 \
    op interface \
    ports { towerET_12_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name towerET_12_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_12_3 \
    op interface \
    ports { towerET_12_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name towerET_13_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_13_0 \
    op interface \
    ports { towerET_13_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name towerET_13_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_13_1 \
    op interface \
    ports { towerET_13_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name towerET_13_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_13_2 \
    op interface \
    ports { towerET_13_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name towerET_13_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_13_3 \
    op interface \
    ports { towerET_13_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name towerET_14_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_14_0 \
    op interface \
    ports { towerET_14_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name towerET_14_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_14_1 \
    op interface \
    ports { towerET_14_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 547 \
    name towerET_14_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_14_2 \
    op interface \
    ports { towerET_14_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 548 \
    name towerET_14_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_14_3 \
    op interface \
    ports { towerET_14_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 549 \
    name towerET_15_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_15_0 \
    op interface \
    ports { towerET_15_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 550 \
    name towerET_15_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_15_1 \
    op interface \
    ports { towerET_15_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 551 \
    name towerET_15_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_15_2 \
    op interface \
    ports { towerET_15_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 552 \
    name towerET_15_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_15_3 \
    op interface \
    ports { towerET_15_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 553 \
    name towerET_16_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_16_0 \
    op interface \
    ports { towerET_16_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 554 \
    name towerET_16_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_16_1 \
    op interface \
    ports { towerET_16_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 555 \
    name towerET_16_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_16_2 \
    op interface \
    ports { towerET_16_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 556 \
    name towerET_16_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerET_16_3 \
    op interface \
    ports { towerET_16_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 557 \
    name TowerPhi_0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_0 \
    op interface \
    ports { TowerPhi_0 { O 16 vector } TowerPhi_0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 558 \
    name TowerPhi_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_1 \
    op interface \
    ports { TowerPhi_1 { O 16 vector } TowerPhi_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 559 \
    name TowerPhi_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_2 \
    op interface \
    ports { TowerPhi_2 { O 16 vector } TowerPhi_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 560 \
    name TowerPhi_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_3 \
    op interface \
    ports { TowerPhi_3 { O 16 vector } TowerPhi_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 561 \
    name TowerPhi_4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_4 \
    op interface \
    ports { TowerPhi_4 { O 16 vector } TowerPhi_4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 562 \
    name TowerPhi_5 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_5 \
    op interface \
    ports { TowerPhi_5 { O 16 vector } TowerPhi_5_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 563 \
    name TowerPhi_6 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_6 \
    op interface \
    ports { TowerPhi_6 { O 16 vector } TowerPhi_6_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 564 \
    name TowerPhi_7 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_7 \
    op interface \
    ports { TowerPhi_7 { O 16 vector } TowerPhi_7_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 565 \
    name TowerPhi_8 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_8 \
    op interface \
    ports { TowerPhi_8 { O 16 vector } TowerPhi_8_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 566 \
    name TowerPhi_9 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_9 \
    op interface \
    ports { TowerPhi_9 { O 16 vector } TowerPhi_9_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 567 \
    name TowerPhi_10 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_10 \
    op interface \
    ports { TowerPhi_10 { O 16 vector } TowerPhi_10_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 568 \
    name TowerPhi_11 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_11 \
    op interface \
    ports { TowerPhi_11 { O 16 vector } TowerPhi_11_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 569 \
    name TowerPhi_12 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_12 \
    op interface \
    ports { TowerPhi_12 { O 16 vector } TowerPhi_12_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 570 \
    name TowerPhi_13 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_13 \
    op interface \
    ports { TowerPhi_13 { O 16 vector } TowerPhi_13_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 571 \
    name TowerPhi_14 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_14 \
    op interface \
    ports { TowerPhi_14 { O 16 vector } TowerPhi_14_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 572 \
    name TowerPhi_15 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_15 \
    op interface \
    ports { TowerPhi_15 { O 16 vector } TowerPhi_15_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 573 \
    name TowerPhi_16 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_16 \
    op interface \
    ports { TowerPhi_16 { O 16 vector } TowerPhi_16_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 574 \
    name TowerPhi_17 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_17 \
    op interface \
    ports { TowerPhi_17 { O 16 vector } TowerPhi_17_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 575 \
    name TowerPhi_18 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_18 \
    op interface \
    ports { TowerPhi_18 { O 16 vector } TowerPhi_18_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 576 \
    name TowerPhi_19 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_19 \
    op interface \
    ports { TowerPhi_19 { O 16 vector } TowerPhi_19_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 577 \
    name TowerPhi_20 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_20 \
    op interface \
    ports { TowerPhi_20 { O 16 vector } TowerPhi_20_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 578 \
    name TowerPhi_21 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_21 \
    op interface \
    ports { TowerPhi_21 { O 16 vector } TowerPhi_21_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 579 \
    name TowerPhi_22 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_22 \
    op interface \
    ports { TowerPhi_22 { O 16 vector } TowerPhi_22_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 580 \
    name TowerPhi_23 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_23 \
    op interface \
    ports { TowerPhi_23 { O 16 vector } TowerPhi_23_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 581 \
    name TowerPhi_24 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_24 \
    op interface \
    ports { TowerPhi_24 { O 16 vector } TowerPhi_24_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 582 \
    name TowerPhi_25 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_25 \
    op interface \
    ports { TowerPhi_25 { O 16 vector } TowerPhi_25_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 583 \
    name TowerPhi_26 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_26 \
    op interface \
    ports { TowerPhi_26 { O 16 vector } TowerPhi_26_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 584 \
    name TowerPhi_27 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_27 \
    op interface \
    ports { TowerPhi_27 { O 16 vector } TowerPhi_27_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 585 \
    name TowerPhi_28 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_28 \
    op interface \
    ports { TowerPhi_28 { O 16 vector } TowerPhi_28_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 586 \
    name TowerPhi_29 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerPhi_29 \
    op interface \
    ports { TowerPhi_29 { O 16 vector } TowerPhi_29_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 587 \
    name TowerEta_0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_0 \
    op interface \
    ports { TowerEta_0 { O 16 vector } TowerEta_0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 588 \
    name TowerEta_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_1 \
    op interface \
    ports { TowerEta_1 { O 16 vector } TowerEta_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 589 \
    name TowerEta_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_2 \
    op interface \
    ports { TowerEta_2 { O 16 vector } TowerEta_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 590 \
    name TowerEta_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_3 \
    op interface \
    ports { TowerEta_3 { O 16 vector } TowerEta_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 591 \
    name TowerEta_4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_4 \
    op interface \
    ports { TowerEta_4 { O 16 vector } TowerEta_4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 592 \
    name TowerEta_5 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_5 \
    op interface \
    ports { TowerEta_5 { O 16 vector } TowerEta_5_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 593 \
    name TowerEta_6 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_6 \
    op interface \
    ports { TowerEta_6 { O 16 vector } TowerEta_6_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 594 \
    name TowerEta_7 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_7 \
    op interface \
    ports { TowerEta_7 { O 16 vector } TowerEta_7_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 595 \
    name TowerEta_8 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_8 \
    op interface \
    ports { TowerEta_8 { O 16 vector } TowerEta_8_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 596 \
    name TowerEta_9 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_9 \
    op interface \
    ports { TowerEta_9 { O 16 vector } TowerEta_9_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 597 \
    name TowerEta_10 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_10 \
    op interface \
    ports { TowerEta_10 { O 16 vector } TowerEta_10_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 598 \
    name TowerEta_11 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_11 \
    op interface \
    ports { TowerEta_11 { O 16 vector } TowerEta_11_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 599 \
    name TowerEta_12 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_12 \
    op interface \
    ports { TowerEta_12 { O 16 vector } TowerEta_12_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 600 \
    name TowerEta_13 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_13 \
    op interface \
    ports { TowerEta_13 { O 16 vector } TowerEta_13_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 601 \
    name TowerEta_14 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_14 \
    op interface \
    ports { TowerEta_14 { O 16 vector } TowerEta_14_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 602 \
    name TowerEta_15 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_15 \
    op interface \
    ports { TowerEta_15 { O 16 vector } TowerEta_15_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 603 \
    name TowerEta_16 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_16 \
    op interface \
    ports { TowerEta_16 { O 16 vector } TowerEta_16_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 604 \
    name TowerEta_17 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_17 \
    op interface \
    ports { TowerEta_17 { O 16 vector } TowerEta_17_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 605 \
    name TowerEta_18 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_18 \
    op interface \
    ports { TowerEta_18 { O 16 vector } TowerEta_18_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 606 \
    name TowerEta_19 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_19 \
    op interface \
    ports { TowerEta_19 { O 16 vector } TowerEta_19_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 607 \
    name TowerEta_20 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_20 \
    op interface \
    ports { TowerEta_20 { O 16 vector } TowerEta_20_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 608 \
    name TowerEta_21 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_21 \
    op interface \
    ports { TowerEta_21 { O 16 vector } TowerEta_21_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 609 \
    name TowerEta_22 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_22 \
    op interface \
    ports { TowerEta_22 { O 16 vector } TowerEta_22_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 610 \
    name TowerEta_23 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_23 \
    op interface \
    ports { TowerEta_23 { O 16 vector } TowerEta_23_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 611 \
    name TowerEta_24 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_24 \
    op interface \
    ports { TowerEta_24 { O 16 vector } TowerEta_24_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 612 \
    name TowerEta_25 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_25 \
    op interface \
    ports { TowerEta_25 { O 16 vector } TowerEta_25_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 613 \
    name TowerEta_26 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_26 \
    op interface \
    ports { TowerEta_26 { O 16 vector } TowerEta_26_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 614 \
    name TowerEta_27 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_27 \
    op interface \
    ports { TowerEta_27 { O 16 vector } TowerEta_27_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 615 \
    name TowerEta_28 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_28 \
    op interface \
    ports { TowerEta_28 { O 16 vector } TowerEta_28_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 616 \
    name TowerEta_29 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_TowerEta_29 \
    op interface \
    ports { TowerEta_29 { O 16 vector } TowerEta_29_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


