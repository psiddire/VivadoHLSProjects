# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 73 \
    name towerETRegions_0_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_0_0 \
    op interface \
    ports { towerETRegions_0_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 74 \
    name towerETRegions_0_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_0_1 \
    op interface \
    ports { towerETRegions_0_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 75 \
    name towerETRegions_0_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_0_2 \
    op interface \
    ports { towerETRegions_0_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 76 \
    name towerETRegions_0_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_0_3 \
    op interface \
    ports { towerETRegions_0_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 77 \
    name towerETRegions_1_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_1_0 \
    op interface \
    ports { towerETRegions_1_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 78 \
    name towerETRegions_1_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_1_1 \
    op interface \
    ports { towerETRegions_1_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
    name towerETRegions_1_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_1_2 \
    op interface \
    ports { towerETRegions_1_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 80 \
    name towerETRegions_1_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_1_3 \
    op interface \
    ports { towerETRegions_1_3 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name towerETRegions_2_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_2_0 \
    op interface \
    ports { towerETRegions_2_0 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name towerETRegions_2_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_2_1 \
    op interface \
    ports { towerETRegions_2_1 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name towerETRegions_2_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_2_2 \
    op interface \
    ports { towerETRegions_2_2 { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name towerETRegions_2_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_towerETRegions_2_3 \
    op interface \
    ports { towerETRegions_2_3 { I 16 vector } } \
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

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
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
    id -4 \
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


# Adapter definition:
set PortName ap_ce
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_ce] == "cg_default_interface_gen_ce"} {
eval "cg_default_interface_gen_ce { \
    id -5 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_ce \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


