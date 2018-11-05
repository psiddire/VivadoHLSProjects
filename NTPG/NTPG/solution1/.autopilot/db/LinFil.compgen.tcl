# This script segment is generated automatically by AutoPilot

set id 1
set name TPG_am_submul_12nbkb
set corename simcore_am
set op am
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 0
set in1_width 12
set in1_signed 0
set in2_width 8
set in2_signed 0
set out_width 21
set exp (i0+i1)*i2
set arg_lists {i0 {12 0 +} i1 {12 0 -} s {13 0 +} i2 {8 0 +} p {21 1 +} c_expval {c} }
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_am] == "ap_gen_simcore_am"} {
eval "ap_gen_simcore_am { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_am, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op am
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 2
set name TPG_mul_mul_7s_18cud
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 7
set in0_signed 1
set in1_width 18
set in1_signed 0
set out_width 25
set exp i0*i1
set arg_lists {i0 {7 1 +} i1 {18 0 +} p {25 1 +} }
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
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
    id 3 \
    name data_int_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_int_V \
    op interface \
    ports { data_int_V { I 14 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name lincoeff_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_lincoeff_V \
    op interface \
    ports { lincoeff_V { I 24 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name r_0_shift_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_0_shift_reg_V \
    op interface \
    ports { r_0_shift_reg_V_i { I 18 vector } r_0_shift_reg_V_o { O 18 vector } r_0_shift_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name r_1_shift_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_1_shift_reg_V \
    op interface \
    ports { r_1_shift_reg_V_i { I 18 vector } r_1_shift_reg_V_o { O 18 vector } r_1_shift_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name r_2_shift_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_2_shift_reg_V \
    op interface \
    ports { r_2_shift_reg_V_i { I 18 vector } r_2_shift_reg_V_o { O 18 vector } r_2_shift_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name r_3_shift_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_3_shift_reg_V \
    op interface \
    ports { r_3_shift_reg_V_i { I 18 vector } r_3_shift_reg_V_o { O 18 vector } r_3_shift_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name r_0_peak_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_0_peak_reg_V \
    op interface \
    ports { r_0_peak_reg_V_i { I 18 vector } r_0_peak_reg_V_o { O 18 vector } r_0_peak_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name r_1_peak_reg_V \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_r_1_peak_reg_V \
    op interface \
    ports { r_1_peak_reg_V_i { I 18 vector } r_1_peak_reg_V_o { O 18 vector } r_1_peak_reg_V_o_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


