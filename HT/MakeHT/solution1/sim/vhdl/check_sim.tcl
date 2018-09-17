# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2016.4
# Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
# 
# ==============================================================

proc sc_sim_check {ret err logfile} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        while {[gets $fl line] >= 0} {
            if {[string first "AESL_mErrNo = " $line] == 0} {
                set mismatch_num [string range $line [string length "AESL_mErrNo = "] end]
                if {$mismatch_num != 0} {
                    ap_puts_err "COSIM" 403 "SystemC simulation FAILED with ${mismatch_num} mismatches detected."
                    break
                }
            }
        }
    }
    if {$ret || $err != ""} {
        if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
            set status [lindex $::errorCode 2]
            if {$status != ""} {
                ap_puts_err "COSIM" 404 "Simulation failed: Function \'main\' returns nonzero value \'$status\'."
            } else {
                ap_puts_err "COSIM" 405 "Simulation failed."
            }
        } else {
            ap_puts_err "COSIM" 405 "Simulation failed."
        }
    }
    if {[file exists $logfile]} {
        set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
        file delete -force $logfile
        if {$cmdret == 0} {
            ap_puts_err "COSIM" 405 "Simulation failed."
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc rtl_sim_check {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        set unmatch_num 0
        while {[gets $fl line] >= 0} {
            if {[string first "unmatched" $line] != -1} {
                set unmatch_num [expr $unmatch_num + 1]
            }
        }
        if {$unmatch_num != 0} {
            ap_puts_err "COSIM" 406 "Simulation FAILED with ${unmatch_num} mismatches detected."
        }
    }
    if {[file exists ".aesl_error"]} {
        set errfl [open ".aesl_error" r]
        gets $errfl line
        if {$line != 0} {
            ap_puts_err "COSIM" 407 "Simulation failed: Function \'main\' returns nonzero value \'$line\'."
        }
    }
    if {[file exists ".exit.err"]} {
        ap_puts_err "COSIM" 405 "Simulation failed."
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc check_tvin_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "c.MakeHT.autotvin_rgnET_0.dat"
         "c.MakeHT.autotvin_rgnET_1.dat"
         "c.MakeHT.autotvin_rgnET_2.dat"
         "c.MakeHT.autotvin_rgnET_3.dat"
         "c.MakeHT.autotvin_rgnET_4.dat"
         "c.MakeHT.autotvin_rgnET_5.dat"
         "c.MakeHT.autotvin_rgnET_6.dat"
         "c.MakeHT.autotvin_rgnET_7.dat"
         "c.MakeHT.autotvin_rgnET_8.dat"
         "c.MakeHT.autotvin_rgnET_9.dat"
         "c.MakeHT.autotvin_rgnET_10.dat"
         "c.MakeHT.autotvin_rgnET_11.dat"
         "c.MakeHT.autotvin_rgnET_12.dat"
         "c.MakeHT.autotvin_rgnET_13.dat"
         "c.MakeHT.autotvin_rgnET_14.dat"
         "c.MakeHT.autotvin_rgnET_15.dat"
         "c.MakeHT.autotvin_rgnET_16.dat"
         "c.MakeHT.autotvin_rgnET_17.dat"
         "c.MakeHT.autotvin_rgnET_18.dat"
         "c.MakeHT.autotvin_rgnET_19.dat"
         "c.MakeHT.autotvin_rgnET_20.dat"
         "c.MakeHT.autotvin_rgnET_21.dat"
         "c.MakeHT.autotvin_rgnET_22.dat"
         "c.MakeHT.autotvin_rgnET_23.dat"
         "c.MakeHT.autotvin_rgnET_24.dat"
         "c.MakeHT.autotvin_rgnET_25.dat"
         "c.MakeHT.autotvin_rgnET_26.dat"
         "c.MakeHT.autotvin_rgnET_27.dat"
         "c.MakeHT.autotvin_rgnET_28.dat"
         "c.MakeHT.autotvin_rgnET_29.dat"
         "c.MakeHT.autotvin_rgnET_30.dat"
         "c.MakeHT.autotvin_rgnET_31.dat"
         "c.MakeHT.autotvin_rgnET_32.dat"
         "c.MakeHT.autotvin_rgnET_33.dat"
         "c.MakeHT.autotvin_rgnET_34.dat"
         "c.MakeHT.autotvin_rgnET_35.dat"
         "c.MakeHT.autotvin_rgnET_36.dat"
         "c.MakeHT.autotvin_rgnET_37.dat"
         "c.MakeHT.autotvin_rgnET_38.dat"
         "c.MakeHT.autotvin_rgnET_39.dat"
         "c.MakeHT.autotvin_rgnET_40.dat"
         "c.MakeHT.autotvin_rgnET_41.dat"
         "c.MakeHT.autotvin_rgnET_42.dat"
         "c.MakeHT.autotvin_rgnET_43.dat"
         "c.MakeHT.autotvin_rgnET_44.dat"
         "c.MakeHT.autotvin_rgnET_45.dat"
         "c.MakeHT.autotvin_rgnET_46.dat"
         "c.MakeHT.autotvin_rgnET_47.dat"
         "c.MakeHT.autotvin_rgnET_48.dat"
         "c.MakeHT.autotvin_rgnET_49.dat"
         "c.MakeHT.autotvin_rgnET_50.dat"
         "c.MakeHT.autotvin_rgnET_51.dat"
         "c.MakeHT.autotvin_rgnET_52.dat"
         "c.MakeHT.autotvin_rgnET_53.dat"
         "c.MakeHT.autotvin_rgnET_54.dat"
         "c.MakeHT.autotvin_rgnET_55.dat"
         "c.MakeHT.autotvin_rgnET_56.dat"
         "c.MakeHT.autotvin_rgnET_57.dat"
         "c.MakeHT.autotvin_rgnET_58.dat"
         "c.MakeHT.autotvin_rgnET_59.dat"
         "c.MakeHT.autotvin_rgnET_60.dat"
         "c.MakeHT.autotvin_rgnET_61.dat"
         "c.MakeHT.autotvin_rgnET_62.dat"
         "c.MakeHT.autotvin_rgnET_63.dat"
         "c.MakeHT.autotvin_rgnET_64.dat"
         "c.MakeHT.autotvin_rgnET_65.dat"
         "c.MakeHT.autotvin_rgnET_66.dat"
         "c.MakeHT.autotvin_rgnET_67.dat"
         "c.MakeHT.autotvin_rgnET_68.dat"
         "c.MakeHT.autotvin_rgnET_69.dat"
         "c.MakeHT.autotvin_rgnET_70.dat"
         "c.MakeHT.autotvin_rgnET_71.dat"
         "c.MakeHT.autotvin_rgnET_72.dat"
         "c.MakeHT.autotvin_rgnET_73.dat"
         "c.MakeHT.autotvin_rgnET_74.dat"
         "c.MakeHT.autotvin_rgnET_75.dat"
         "c.MakeHT.autotvin_rgnET_76.dat"
         "c.MakeHT.autotvin_rgnET_77.dat"
         "c.MakeHT.autotvin_rgnET_78.dat"
         "c.MakeHT.autotvin_rgnET_79.dat"
         "c.MakeHT.autotvin_rgnET_80.dat"
         "c.MakeHT.autotvin_rgnET_81.dat"
         "c.MakeHT.autotvin_rgnET_82.dat"
         "c.MakeHT.autotvin_rgnET_83.dat"
         "c.MakeHT.autotvin_rgnET_84.dat"
         "c.MakeHT.autotvin_rgnET_85.dat"
         "c.MakeHT.autotvin_rgnET_86.dat"
         "c.MakeHT.autotvin_rgnET_87.dat"
         "c.MakeHT.autotvin_rgnET_88.dat"
         "c.MakeHT.autotvin_rgnET_89.dat"
         "c.MakeHT.autotvin_rgnET_90.dat"
         "c.MakeHT.autotvin_rgnET_91.dat"
         "c.MakeHT.autotvin_rgnET_92.dat"
         "c.MakeHT.autotvin_rgnET_93.dat"
         "c.MakeHT.autotvin_rgnET_94.dat"
         "c.MakeHT.autotvin_rgnET_95.dat"
         "c.MakeHT.autotvin_rgnET_96.dat"
         "c.MakeHT.autotvin_rgnET_97.dat"
         "c.MakeHT.autotvin_rgnET_98.dat"
         "c.MakeHT.autotvin_rgnET_99.dat"
         "c.MakeHT.autotvin_rgnET_100.dat"
         "c.MakeHT.autotvin_rgnET_101.dat"
         "c.MakeHT.autotvin_rgnET_102.dat"
         "c.MakeHT.autotvin_rgnET_103.dat"
         "c.MakeHT.autotvin_rgnET_104.dat"
         "c.MakeHT.autotvin_rgnET_105.dat"
         "c.MakeHT.autotvin_rgnET_106.dat"
         "c.MakeHT.autotvin_rgnET_107.dat"
         "c.MakeHT.autotvin_rgnET_108.dat"
         "c.MakeHT.autotvin_rgnET_109.dat"
         "c.MakeHT.autotvin_rgnET_110.dat"
         "c.MakeHT.autotvin_rgnET_111.dat"
         "c.MakeHT.autotvin_rgnET_112.dat"
         "c.MakeHT.autotvin_rgnET_113.dat"
         "c.MakeHT.autotvin_rgnET_114.dat"
         "c.MakeHT.autotvin_rgnET_115.dat"
         "c.MakeHT.autotvin_rgnET_116.dat"
         "c.MakeHT.autotvin_rgnET_117.dat"
         "c.MakeHT.autotvin_rgnET_118.dat"
         "c.MakeHT.autotvin_rgnET_119.dat"
         "c.MakeHT.autotvin_rgnET_120.dat"
         "c.MakeHT.autotvin_rgnET_121.dat"
         "c.MakeHT.autotvin_rgnET_122.dat"
         "c.MakeHT.autotvin_rgnET_123.dat"
         "c.MakeHT.autotvin_rgnET_124.dat"
         "c.MakeHT.autotvin_rgnET_125.dat"
         "c.MakeHT.autotvin_rgnET_126.dat"
         "c.MakeHT.autotvin_rgnET_127.dat"
         "c.MakeHT.autotvin_rgnET_128.dat"
         "c.MakeHT.autotvin_rgnET_129.dat"
         "c.MakeHT.autotvin_rgnET_130.dat"
         "c.MakeHT.autotvin_rgnET_131.dat"
         "c.MakeHT.autotvin_rgnET_132.dat"
         "c.MakeHT.autotvin_rgnET_133.dat"
         "c.MakeHT.autotvin_rgnET_134.dat"
         "c.MakeHT.autotvin_rgnET_135.dat"
         "c.MakeHT.autotvin_rgnET_136.dat"
         "c.MakeHT.autotvin_rgnET_137.dat"
         "c.MakeHT.autotvin_rgnET_138.dat"
         "c.MakeHT.autotvin_rgnET_139.dat"
         "c.MakeHT.autotvin_rgnET_140.dat"
         "c.MakeHT.autotvin_rgnET_141.dat"
         "c.MakeHT.autotvin_rgnET_142.dat"
         "c.MakeHT.autotvin_rgnET_143.dat"
         "c.MakeHT.autotvin_rgnET_144.dat"
         "c.MakeHT.autotvin_rgnET_145.dat"
         "c.MakeHT.autotvin_rgnET_146.dat"
         "c.MakeHT.autotvin_rgnET_147.dat"
         "c.MakeHT.autotvin_rgnET_148.dat"
         "c.MakeHT.autotvin_rgnET_149.dat"
         "c.MakeHT.autotvin_rgnET_150.dat"
         "c.MakeHT.autotvin_rgnET_151.dat"
         "c.MakeHT.autotvin_rgnET_152.dat"
         "c.MakeHT.autotvin_rgnET_153.dat"
         "c.MakeHT.autotvin_rgnET_154.dat"
         "c.MakeHT.autotvin_rgnET_155.dat"
         "c.MakeHT.autotvin_rgnET_156.dat"
         "c.MakeHT.autotvin_rgnET_157.dat"
         "c.MakeHT.autotvin_rgnET_158.dat"
         "c.MakeHT.autotvin_rgnET_159.dat"
         "c.MakeHT.autotvin_rgnET_160.dat"
         "c.MakeHT.autotvin_rgnET_161.dat"
         "c.MakeHT.autotvin_rgnET_162.dat"
         "c.MakeHT.autotvin_rgnET_163.dat"
         "c.MakeHT.autotvin_rgnET_164.dat"
         "c.MakeHT.autotvin_rgnET_165.dat"
         "c.MakeHT.autotvin_rgnET_166.dat"
         "c.MakeHT.autotvin_rgnET_167.dat"
         "c.MakeHT.autotvin_rgnET_168.dat"
         "c.MakeHT.autotvin_rgnET_169.dat"
         "c.MakeHT.autotvin_rgnET_170.dat"
         "c.MakeHT.autotvin_rgnET_171.dat"
         "c.MakeHT.autotvin_rgnET_172.dat"
         "c.MakeHT.autotvin_rgnET_173.dat"
         "c.MakeHT.autotvin_rgnET_174.dat"
         "c.MakeHT.autotvin_rgnET_175.dat"
         "c.MakeHT.autotvin_rgnET_176.dat"
         "c.MakeHT.autotvin_rgnET_177.dat"
         "c.MakeHT.autotvin_rgnET_178.dat"
         "c.MakeHT.autotvin_rgnET_179.dat"
         "c.MakeHT.autotvin_rgnET_180.dat"
         "c.MakeHT.autotvin_rgnET_181.dat"
         "c.MakeHT.autotvin_rgnET_182.dat"
         "c.MakeHT.autotvin_rgnET_183.dat"
         "c.MakeHT.autotvin_rgnET_184.dat"
         "c.MakeHT.autotvin_rgnET_185.dat"
         "c.MakeHT.autotvin_rgnET_186.dat"
         "c.MakeHT.autotvin_rgnET_187.dat"
         "c.MakeHT.autotvin_rgnET_188.dat"
         "c.MakeHT.autotvin_rgnET_189.dat"
         "c.MakeHT.autotvin_rgnET_190.dat"
         "c.MakeHT.autotvin_rgnET_191.dat"
         "c.MakeHT.autotvin_rgnET_192.dat"
         "c.MakeHT.autotvin_rgnET_193.dat"
         "c.MakeHT.autotvin_rgnET_194.dat"
         "c.MakeHT.autotvin_rgnET_195.dat"
         "c.MakeHT.autotvin_rgnET_196.dat"
         "c.MakeHT.autotvin_rgnET_197.dat"
         "c.MakeHT.autotvin_rgnET_198.dat"
         "c.MakeHT.autotvin_rgnET_199.dat"
         "c.MakeHT.autotvin_rgnET_200.dat"
         "c.MakeHT.autotvin_rgnET_201.dat"
         "c.MakeHT.autotvin_rgnET_202.dat"
         "c.MakeHT.autotvin_rgnET_203.dat"
         "c.MakeHT.autotvin_rgnET_204.dat"
         "c.MakeHT.autotvin_rgnET_205.dat"
         "c.MakeHT.autotvin_rgnET_206.dat"
         "c.MakeHT.autotvin_rgnET_207.dat"
         "c.MakeHT.autotvin_rgnET_208.dat"
         "c.MakeHT.autotvin_rgnET_209.dat"
         "c.MakeHT.autotvin_rgnET_210.dat"
         "c.MakeHT.autotvin_rgnET_211.dat"
         "c.MakeHT.autotvin_rgnET_212.dat"
         "c.MakeHT.autotvin_rgnET_213.dat"
         "c.MakeHT.autotvin_rgnET_214.dat"
         "c.MakeHT.autotvin_rgnET_215.dat"
         "c.MakeHT.autotvin_rgnET_216.dat"
         "c.MakeHT.autotvin_rgnET_217.dat"
         "c.MakeHT.autotvin_rgnET_218.dat"
         "c.MakeHT.autotvin_rgnET_219.dat"
         "c.MakeHT.autotvin_rgnET_220.dat"
         "c.MakeHT.autotvin_rgnET_221.dat"
         "c.MakeHT.autotvin_rgnET_222.dat"
         "c.MakeHT.autotvin_rgnET_223.dat"
         "c.MakeHT.autotvin_rgnET_224.dat"
         "c.MakeHT.autotvin_rgnET_225.dat"
         "c.MakeHT.autotvin_rgnET_226.dat"
         "c.MakeHT.autotvin_rgnET_227.dat"
         "c.MakeHT.autotvin_rgnET_228.dat"
         "c.MakeHT.autotvin_rgnET_229.dat"
         "c.MakeHT.autotvin_rgnET_230.dat"
         "c.MakeHT.autotvin_rgnET_231.dat"
         "c.MakeHT.autotvin_rgnET_232.dat"
         "c.MakeHT.autotvin_rgnET_233.dat"
         "c.MakeHT.autotvin_rgnET_234.dat"
         "c.MakeHT.autotvin_rgnET_235.dat"
         "c.MakeHT.autotvin_rgnET_236.dat"
         "c.MakeHT.autotvin_rgnET_237.dat"
         "c.MakeHT.autotvin_rgnET_238.dat"
         "c.MakeHT.autotvin_rgnET_239.dat"
         "c.MakeHT.autotvin_rgnET_240.dat"
         "c.MakeHT.autotvin_rgnET_241.dat"
         "c.MakeHT.autotvin_rgnET_242.dat"
         "c.MakeHT.autotvin_rgnET_243.dat"
         "c.MakeHT.autotvin_rgnET_244.dat"
         "c.MakeHT.autotvin_rgnET_245.dat"
         "c.MakeHT.autotvin_rgnET_246.dat"
         "c.MakeHT.autotvin_rgnET_247.dat"
         "c.MakeHT.autotvin_rgnET_248.dat"
         "c.MakeHT.autotvin_rgnET_249.dat"
         "c.MakeHT.autotvin_rgnET_250.dat"
         "c.MakeHT.autotvin_rgnET_251.dat"
         "c.MakeHT.autotvin_hfET_0.dat"
         "c.MakeHT.autotvin_hfET_1.dat"
         "c.MakeHT.autotvin_hfET_2.dat"
         "c.MakeHT.autotvin_hfET_3.dat"
         "c.MakeHT.autotvin_hfET_4.dat"
         "c.MakeHT.autotvin_hfET_5.dat"
         "c.MakeHT.autotvin_hfET_6.dat"
         "c.MakeHT.autotvin_hfET_7.dat"
         "c.MakeHT.autotvin_hfET_8.dat"
         "c.MakeHT.autotvin_hfET_9.dat"
         "c.MakeHT.autotvin_hfET_10.dat"
         "c.MakeHT.autotvin_hfET_11.dat"
         "c.MakeHT.autotvin_hfET_12.dat"
         "c.MakeHT.autotvin_hfET_13.dat"
         "c.MakeHT.autotvin_hfET_14.dat"
         "c.MakeHT.autotvin_hfET_15.dat"
         "c.MakeHT.autotvin_hfET_16.dat"
         "c.MakeHT.autotvin_hfET_17.dat"
         "c.MakeHT.autotvin_hfET_18.dat"
         "c.MakeHT.autotvin_hfET_19.dat"
         "c.MakeHT.autotvin_hfET_20.dat"
         "c.MakeHT.autotvin_hfET_21.dat"
         "c.MakeHT.autotvin_hfET_22.dat"
         "c.MakeHT.autotvin_hfET_23.dat"
         "c.MakeHT.autotvin_hfET_24.dat"
         "c.MakeHT.autotvin_hfET_25.dat"
         "c.MakeHT.autotvin_hfET_26.dat"
         "c.MakeHT.autotvin_hfET_27.dat"
         "c.MakeHT.autotvin_hfET_28.dat"
         "c.MakeHT.autotvin_hfET_29.dat"
         "c.MakeHT.autotvin_hfET_30.dat"
         "c.MakeHT.autotvin_hfET_31.dat"
         "c.MakeHT.autotvin_hfET_32.dat"
         "c.MakeHT.autotvin_hfET_33.dat"
         "c.MakeHT.autotvin_hfET_34.dat"
         "c.MakeHT.autotvin_hfET_35.dat"
         "c.MakeHT.autotvin_hfET_36.dat"
         "c.MakeHT.autotvin_hfET_37.dat"
         "c.MakeHT.autotvin_hfET_38.dat"
         "c.MakeHT.autotvin_hfET_39.dat"
         "c.MakeHT.autotvin_hfET_40.dat"
         "c.MakeHT.autotvin_hfET_41.dat"
         "c.MakeHT.autotvin_hfET_42.dat"
         "c.MakeHT.autotvin_hfET_43.dat"
         "c.MakeHT.autotvin_hfET_44.dat"
         "c.MakeHT.autotvin_hfET_45.dat"
         "c.MakeHT.autotvin_hfET_46.dat"
         "c.MakeHT.autotvin_hfET_47.dat"
         "c.MakeHT.autotvin_hfET_48.dat"
         "c.MakeHT.autotvin_hfET_49.dat"
         "c.MakeHT.autotvin_hfET_50.dat"
         "c.MakeHT.autotvin_hfET_51.dat"
         "c.MakeHT.autotvin_hfET_52.dat"
         "c.MakeHT.autotvin_hfET_53.dat"
         "c.MakeHT.autotvin_hfET_54.dat"
         "c.MakeHT.autotvin_hfET_55.dat"
         "c.MakeHT.autotvin_hfET_56.dat"
         "c.MakeHT.autotvin_hfET_57.dat"
         "c.MakeHT.autotvin_hfET_58.dat"
         "c.MakeHT.autotvin_hfET_59.dat"
         "c.MakeHT.autotvin_hfET_60.dat"
         "c.MakeHT.autotvin_hfET_61.dat"
         "c.MakeHT.autotvin_hfET_62.dat"
         "c.MakeHT.autotvin_hfET_63.dat"
         "c.MakeHT.autotvin_hfET_64.dat"
         "c.MakeHT.autotvin_hfET_65.dat"
         "c.MakeHT.autotvin_hfET_66.dat"
         "c.MakeHT.autotvin_hfET_67.dat"
         "c.MakeHT.autotvin_hfET_68.dat"
         "c.MakeHT.autotvin_hfET_69.dat"
         "c.MakeHT.autotvin_hfET_70.dat"
         "c.MakeHT.autotvin_hfET_71.dat"
         "c.MakeHT.autotvin_hfET_72.dat"
         "c.MakeHT.autotvin_hfET_73.dat"
         "c.MakeHT.autotvin_hfET_74.dat"
         "c.MakeHT.autotvin_hfET_75.dat"
         "c.MakeHT.autotvin_hfET_76.dat"
         "c.MakeHT.autotvin_hfET_77.dat"
         "c.MakeHT.autotvin_hfET_78.dat"
         "c.MakeHT.autotvin_hfET_79.dat"
         "c.MakeHT.autotvin_hfET_80.dat"
         "c.MakeHT.autotvin_hfET_81.dat"
         "c.MakeHT.autotvin_hfET_82.dat"
         "c.MakeHT.autotvin_hfET_83.dat"
         "c.MakeHT.autotvin_hfET_84.dat"
         "c.MakeHT.autotvin_hfET_85.dat"
         "c.MakeHT.autotvin_hfET_86.dat"
         "c.MakeHT.autotvin_hfET_87.dat"
         "c.MakeHT.autotvin_hfET_88.dat"
         "c.MakeHT.autotvin_hfET_89.dat"
         "c.MakeHT.autotvin_hfET_90.dat"
         "c.MakeHT.autotvin_hfET_91.dat"
         "c.MakeHT.autotvin_hfET_92.dat"
         "c.MakeHT.autotvin_hfET_93.dat"
         "c.MakeHT.autotvin_hfET_94.dat"
         "c.MakeHT.autotvin_hfET_95.dat"
         "c.MakeHT.autotvin_hfET_96.dat"
         "c.MakeHT.autotvin_hfET_97.dat"
         "c.MakeHT.autotvin_hfET_98.dat"
         "c.MakeHT.autotvin_hfET_99.dat"
         "c.MakeHT.autotvin_hfET_100.dat"
         "c.MakeHT.autotvin_hfET_101.dat"
         "c.MakeHT.autotvin_hfET_102.dat"
         "c.MakeHT.autotvin_hfET_103.dat"
         "c.MakeHT.autotvin_hfET_104.dat"
         "c.MakeHT.autotvin_hfET_105.dat"
         "c.MakeHT.autotvin_hfET_106.dat"
         "c.MakeHT.autotvin_hfET_107.dat"
         "c.MakeHT.autotvin_hfET_108.dat"
         "c.MakeHT.autotvin_hfET_109.dat"
         "c.MakeHT.autotvin_hfET_110.dat"
         "c.MakeHT.autotvin_hfET_111.dat"
         "c.MakeHT.autotvin_hfET_112.dat"
         "c.MakeHT.autotvin_hfET_113.dat"
         "c.MakeHT.autotvin_hfET_114.dat"
         "c.MakeHT.autotvin_hfET_115.dat"
         "c.MakeHT.autotvin_hfET_116.dat"
         "c.MakeHT.autotvin_hfET_117.dat"
         "c.MakeHT.autotvin_hfET_118.dat"
         "c.MakeHT.autotvin_hfET_119.dat"
         "c.MakeHT.autotvin_hfET_120.dat"
         "c.MakeHT.autotvin_hfET_121.dat"
         "c.MakeHT.autotvin_hfET_122.dat"
         "c.MakeHT.autotvin_hfET_123.dat"
         "c.MakeHT.autotvin_hfET_124.dat"
         "c.MakeHT.autotvin_hfET_125.dat"
         "c.MakeHT.autotvin_hfET_126.dat"
         "c.MakeHT.autotvin_hfET_127.dat"
         "c.MakeHT.autotvin_hfET_128.dat"
         "c.MakeHT.autotvin_hfET_129.dat"
         "c.MakeHT.autotvin_hfET_130.dat"
         "c.MakeHT.autotvin_hfET_131.dat"
         "c.MakeHT.autotvin_hfET_132.dat"
         "c.MakeHT.autotvin_hfET_133.dat"
         "c.MakeHT.autotvin_hfET_134.dat"
         "c.MakeHT.autotvin_hfET_135.dat"
         "c.MakeHT.autotvin_hfET_136.dat"
         "c.MakeHT.autotvin_hfET_137.dat"
         "c.MakeHT.autotvin_hfET_138.dat"
         "c.MakeHT.autotvin_hfET_139.dat"
         "c.MakeHT.autotvin_hfET_140.dat"
         "c.MakeHT.autotvin_hfET_141.dat"
         "c.MakeHT.autotvin_hfET_142.dat"
         "c.MakeHT.autotvin_hfET_143.dat"
         "c.MakeHT.autotvout_HT_0.dat"
         "c.MakeHT.autotvout_HT_1.dat"
         "c.MakeHT.autotvout_HT_2.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ap_puts_err "COSIM" 320 "C TB testing failed. Please check C TB or re-run cosim.  "
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ap_puts_err "COSIM" 320 "C TB testing failed. Please check C TB or re-run cosim.  "
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}

proc check_tvout_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "rtl.MakeHT.autotvout_HT_0.dat"
         "rtl.MakeHT.autotvout_HT_1.dat"
         "rtl.MakeHT.autotvout_HT_2.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ap_puts_err "COSIM" 303 "Aborting co-simulation: RTL simulation failed.  "
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ap_puts_err "COSIM" 303 "Aborting co-simulation: RTL simulation failed.  "
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}