#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("rgnET_0", 16, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("rgnET_1", 16, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("rgnET_2", 16, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("rgnET_3", 16, hls_in, 3, "ap_none", "in_data", 1),
	Port_Property("rgnET_4", 16, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("rgnET_5", 16, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("rgnET_6", 16, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("rgnET_7", 16, hls_in, 7, "ap_none", "in_data", 1),
	Port_Property("rgnET_8", 16, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("rgnET_9", 16, hls_in, 9, "ap_none", "in_data", 1),
	Port_Property("rgnET_10", 16, hls_in, 10, "ap_none", "in_data", 1),
	Port_Property("rgnET_11", 16, hls_in, 11, "ap_none", "in_data", 1),
	Port_Property("rgnET_12", 16, hls_in, 12, "ap_none", "in_data", 1),
	Port_Property("rgnET_13", 16, hls_in, 13, "ap_none", "in_data", 1),
	Port_Property("rgnET_14", 16, hls_in, 14, "ap_none", "in_data", 1),
	Port_Property("rgnET_15", 16, hls_in, 15, "ap_none", "in_data", 1),
	Port_Property("rgnET_16", 16, hls_in, 16, "ap_none", "in_data", 1),
	Port_Property("rgnET_17", 16, hls_in, 17, "ap_none", "in_data", 1),
	Port_Property("rgnET_18", 16, hls_in, 18, "ap_none", "in_data", 1),
	Port_Property("rgnET_19", 16, hls_in, 19, "ap_none", "in_data", 1),
	Port_Property("rgnET_20", 16, hls_in, 20, "ap_none", "in_data", 1),
	Port_Property("rgnET_21", 16, hls_in, 21, "ap_none", "in_data", 1),
	Port_Property("rgnET_22", 16, hls_in, 22, "ap_none", "in_data", 1),
	Port_Property("rgnET_23", 16, hls_in, 23, "ap_none", "in_data", 1),
	Port_Property("rgnET_24", 16, hls_in, 24, "ap_none", "in_data", 1),
	Port_Property("rgnET_25", 16, hls_in, 25, "ap_none", "in_data", 1),
	Port_Property("rgnET_26", 16, hls_in, 26, "ap_none", "in_data", 1),
	Port_Property("rgnET_27", 16, hls_in, 27, "ap_none", "in_data", 1),
	Port_Property("rgnET_28", 16, hls_in, 28, "ap_none", "in_data", 1),
	Port_Property("rgnET_29", 16, hls_in, 29, "ap_none", "in_data", 1),
	Port_Property("rgnET_30", 16, hls_in, 30, "ap_none", "in_data", 1),
	Port_Property("rgnET_31", 16, hls_in, 31, "ap_none", "in_data", 1),
	Port_Property("rgnET_32", 16, hls_in, 32, "ap_none", "in_data", 1),
	Port_Property("rgnET_33", 16, hls_in, 33, "ap_none", "in_data", 1),
	Port_Property("rgnET_34", 16, hls_in, 34, "ap_none", "in_data", 1),
	Port_Property("rgnET_35", 16, hls_in, 35, "ap_none", "in_data", 1),
	Port_Property("rgnET_36", 16, hls_in, 36, "ap_none", "in_data", 1),
	Port_Property("rgnET_37", 16, hls_in, 37, "ap_none", "in_data", 1),
	Port_Property("rgnET_38", 16, hls_in, 38, "ap_none", "in_data", 1),
	Port_Property("rgnET_39", 16, hls_in, 39, "ap_none", "in_data", 1),
	Port_Property("rgnET_40", 16, hls_in, 40, "ap_none", "in_data", 1),
	Port_Property("rgnET_41", 16, hls_in, 41, "ap_none", "in_data", 1),
	Port_Property("rgnET_42", 16, hls_in, 42, "ap_none", "in_data", 1),
	Port_Property("rgnET_43", 16, hls_in, 43, "ap_none", "in_data", 1),
	Port_Property("rgnET_44", 16, hls_in, 44, "ap_none", "in_data", 1),
	Port_Property("rgnET_45", 16, hls_in, 45, "ap_none", "in_data", 1),
	Port_Property("rgnET_46", 16, hls_in, 46, "ap_none", "in_data", 1),
	Port_Property("rgnET_47", 16, hls_in, 47, "ap_none", "in_data", 1),
	Port_Property("rgnET_48", 16, hls_in, 48, "ap_none", "in_data", 1),
	Port_Property("rgnET_49", 16, hls_in, 49, "ap_none", "in_data", 1),
	Port_Property("rgnET_50", 16, hls_in, 50, "ap_none", "in_data", 1),
	Port_Property("rgnET_51", 16, hls_in, 51, "ap_none", "in_data", 1),
	Port_Property("rgnET_52", 16, hls_in, 52, "ap_none", "in_data", 1),
	Port_Property("rgnET_53", 16, hls_in, 53, "ap_none", "in_data", 1),
	Port_Property("rgnET_54", 16, hls_in, 54, "ap_none", "in_data", 1),
	Port_Property("rgnET_55", 16, hls_in, 55, "ap_none", "in_data", 1),
	Port_Property("rgnET_56", 16, hls_in, 56, "ap_none", "in_data", 1),
	Port_Property("rgnET_57", 16, hls_in, 57, "ap_none", "in_data", 1),
	Port_Property("rgnET_58", 16, hls_in, 58, "ap_none", "in_data", 1),
	Port_Property("rgnET_59", 16, hls_in, 59, "ap_none", "in_data", 1),
	Port_Property("rgnET_60", 16, hls_in, 60, "ap_none", "in_data", 1),
	Port_Property("rgnET_61", 16, hls_in, 61, "ap_none", "in_data", 1),
	Port_Property("rgnET_62", 16, hls_in, 62, "ap_none", "in_data", 1),
	Port_Property("rgnET_63", 16, hls_in, 63, "ap_none", "in_data", 1),
	Port_Property("rgnET_64", 16, hls_in, 64, "ap_none", "in_data", 1),
	Port_Property("rgnET_65", 16, hls_in, 65, "ap_none", "in_data", 1),
	Port_Property("rgnET_66", 16, hls_in, 66, "ap_none", "in_data", 1),
	Port_Property("rgnET_67", 16, hls_in, 67, "ap_none", "in_data", 1),
	Port_Property("rgnET_68", 16, hls_in, 68, "ap_none", "in_data", 1),
	Port_Property("rgnET_69", 16, hls_in, 69, "ap_none", "in_data", 1),
	Port_Property("rgnET_70", 16, hls_in, 70, "ap_none", "in_data", 1),
	Port_Property("rgnET_71", 16, hls_in, 71, "ap_none", "in_data", 1),
	Port_Property("rgnET_72", 16, hls_in, 72, "ap_none", "in_data", 1),
	Port_Property("rgnET_73", 16, hls_in, 73, "ap_none", "in_data", 1),
	Port_Property("rgnET_74", 16, hls_in, 74, "ap_none", "in_data", 1),
	Port_Property("rgnET_75", 16, hls_in, 75, "ap_none", "in_data", 1),
	Port_Property("rgnET_76", 16, hls_in, 76, "ap_none", "in_data", 1),
	Port_Property("rgnET_77", 16, hls_in, 77, "ap_none", "in_data", 1),
	Port_Property("rgnET_78", 16, hls_in, 78, "ap_none", "in_data", 1),
	Port_Property("rgnET_79", 16, hls_in, 79, "ap_none", "in_data", 1),
	Port_Property("rgnET_80", 16, hls_in, 80, "ap_none", "in_data", 1),
	Port_Property("rgnET_81", 16, hls_in, 81, "ap_none", "in_data", 1),
	Port_Property("rgnET_82", 16, hls_in, 82, "ap_none", "in_data", 1),
	Port_Property("rgnET_83", 16, hls_in, 83, "ap_none", "in_data", 1),
	Port_Property("rgnET_84", 16, hls_in, 84, "ap_none", "in_data", 1),
	Port_Property("rgnET_85", 16, hls_in, 85, "ap_none", "in_data", 1),
	Port_Property("rgnET_86", 16, hls_in, 86, "ap_none", "in_data", 1),
	Port_Property("rgnET_87", 16, hls_in, 87, "ap_none", "in_data", 1),
	Port_Property("rgnET_88", 16, hls_in, 88, "ap_none", "in_data", 1),
	Port_Property("rgnET_89", 16, hls_in, 89, "ap_none", "in_data", 1),
	Port_Property("rgnET_90", 16, hls_in, 90, "ap_none", "in_data", 1),
	Port_Property("rgnET_91", 16, hls_in, 91, "ap_none", "in_data", 1),
	Port_Property("rgnET_92", 16, hls_in, 92, "ap_none", "in_data", 1),
	Port_Property("rgnET_93", 16, hls_in, 93, "ap_none", "in_data", 1),
	Port_Property("rgnET_94", 16, hls_in, 94, "ap_none", "in_data", 1),
	Port_Property("rgnET_95", 16, hls_in, 95, "ap_none", "in_data", 1),
	Port_Property("rgnET_96", 16, hls_in, 96, "ap_none", "in_data", 1),
	Port_Property("rgnET_97", 16, hls_in, 97, "ap_none", "in_data", 1),
	Port_Property("rgnET_98", 16, hls_in, 98, "ap_none", "in_data", 1),
	Port_Property("rgnET_99", 16, hls_in, 99, "ap_none", "in_data", 1),
	Port_Property("rgnET_100", 16, hls_in, 100, "ap_none", "in_data", 1),
	Port_Property("rgnET_101", 16, hls_in, 101, "ap_none", "in_data", 1),
	Port_Property("rgnET_102", 16, hls_in, 102, "ap_none", "in_data", 1),
	Port_Property("rgnET_103", 16, hls_in, 103, "ap_none", "in_data", 1),
	Port_Property("rgnET_104", 16, hls_in, 104, "ap_none", "in_data", 1),
	Port_Property("rgnET_105", 16, hls_in, 105, "ap_none", "in_data", 1),
	Port_Property("rgnET_106", 16, hls_in, 106, "ap_none", "in_data", 1),
	Port_Property("rgnET_107", 16, hls_in, 107, "ap_none", "in_data", 1),
	Port_Property("rgnET_108", 16, hls_in, 108, "ap_none", "in_data", 1),
	Port_Property("rgnET_109", 16, hls_in, 109, "ap_none", "in_data", 1),
	Port_Property("rgnET_110", 16, hls_in, 110, "ap_none", "in_data", 1),
	Port_Property("rgnET_111", 16, hls_in, 111, "ap_none", "in_data", 1),
	Port_Property("rgnET_112", 16, hls_in, 112, "ap_none", "in_data", 1),
	Port_Property("rgnET_113", 16, hls_in, 113, "ap_none", "in_data", 1),
	Port_Property("rgnET_114", 16, hls_in, 114, "ap_none", "in_data", 1),
	Port_Property("rgnET_115", 16, hls_in, 115, "ap_none", "in_data", 1),
	Port_Property("rgnET_116", 16, hls_in, 116, "ap_none", "in_data", 1),
	Port_Property("rgnET_117", 16, hls_in, 117, "ap_none", "in_data", 1),
	Port_Property("rgnET_118", 16, hls_in, 118, "ap_none", "in_data", 1),
	Port_Property("rgnET_119", 16, hls_in, 119, "ap_none", "in_data", 1),
	Port_Property("rgnET_120", 16, hls_in, 120, "ap_none", "in_data", 1),
	Port_Property("rgnET_121", 16, hls_in, 121, "ap_none", "in_data", 1),
	Port_Property("rgnET_122", 16, hls_in, 122, "ap_none", "in_data", 1),
	Port_Property("rgnET_123", 16, hls_in, 123, "ap_none", "in_data", 1),
	Port_Property("rgnET_124", 16, hls_in, 124, "ap_none", "in_data", 1),
	Port_Property("rgnET_125", 16, hls_in, 125, "ap_none", "in_data", 1),
	Port_Property("rgnET_126", 16, hls_in, 126, "ap_none", "in_data", 1),
	Port_Property("rgnET_127", 16, hls_in, 127, "ap_none", "in_data", 1),
	Port_Property("rgnET_128", 16, hls_in, 128, "ap_none", "in_data", 1),
	Port_Property("rgnET_129", 16, hls_in, 129, "ap_none", "in_data", 1),
	Port_Property("rgnET_130", 16, hls_in, 130, "ap_none", "in_data", 1),
	Port_Property("rgnET_131", 16, hls_in, 131, "ap_none", "in_data", 1),
	Port_Property("rgnET_132", 16, hls_in, 132, "ap_none", "in_data", 1),
	Port_Property("rgnET_133", 16, hls_in, 133, "ap_none", "in_data", 1),
	Port_Property("rgnET_134", 16, hls_in, 134, "ap_none", "in_data", 1),
	Port_Property("rgnET_135", 16, hls_in, 135, "ap_none", "in_data", 1),
	Port_Property("rgnET_136", 16, hls_in, 136, "ap_none", "in_data", 1),
	Port_Property("rgnET_137", 16, hls_in, 137, "ap_none", "in_data", 1),
	Port_Property("rgnET_138", 16, hls_in, 138, "ap_none", "in_data", 1),
	Port_Property("rgnET_139", 16, hls_in, 139, "ap_none", "in_data", 1),
	Port_Property("rgnET_140", 16, hls_in, 140, "ap_none", "in_data", 1),
	Port_Property("rgnET_141", 16, hls_in, 141, "ap_none", "in_data", 1),
	Port_Property("rgnET_142", 16, hls_in, 142, "ap_none", "in_data", 1),
	Port_Property("rgnET_143", 16, hls_in, 143, "ap_none", "in_data", 1),
	Port_Property("rgnET_144", 16, hls_in, 144, "ap_none", "in_data", 1),
	Port_Property("rgnET_145", 16, hls_in, 145, "ap_none", "in_data", 1),
	Port_Property("rgnET_146", 16, hls_in, 146, "ap_none", "in_data", 1),
	Port_Property("rgnET_147", 16, hls_in, 147, "ap_none", "in_data", 1),
	Port_Property("rgnET_148", 16, hls_in, 148, "ap_none", "in_data", 1),
	Port_Property("rgnET_149", 16, hls_in, 149, "ap_none", "in_data", 1),
	Port_Property("rgnET_150", 16, hls_in, 150, "ap_none", "in_data", 1),
	Port_Property("rgnET_151", 16, hls_in, 151, "ap_none", "in_data", 1),
	Port_Property("rgnET_152", 16, hls_in, 152, "ap_none", "in_data", 1),
	Port_Property("rgnET_153", 16, hls_in, 153, "ap_none", "in_data", 1),
	Port_Property("rgnET_154", 16, hls_in, 154, "ap_none", "in_data", 1),
	Port_Property("rgnET_155", 16, hls_in, 155, "ap_none", "in_data", 1),
	Port_Property("rgnET_156", 16, hls_in, 156, "ap_none", "in_data", 1),
	Port_Property("rgnET_157", 16, hls_in, 157, "ap_none", "in_data", 1),
	Port_Property("rgnET_158", 16, hls_in, 158, "ap_none", "in_data", 1),
	Port_Property("rgnET_159", 16, hls_in, 159, "ap_none", "in_data", 1),
	Port_Property("rgnET_160", 16, hls_in, 160, "ap_none", "in_data", 1),
	Port_Property("rgnET_161", 16, hls_in, 161, "ap_none", "in_data", 1),
	Port_Property("rgnET_162", 16, hls_in, 162, "ap_none", "in_data", 1),
	Port_Property("rgnET_163", 16, hls_in, 163, "ap_none", "in_data", 1),
	Port_Property("rgnET_164", 16, hls_in, 164, "ap_none", "in_data", 1),
	Port_Property("rgnET_165", 16, hls_in, 165, "ap_none", "in_data", 1),
	Port_Property("rgnET_166", 16, hls_in, 166, "ap_none", "in_data", 1),
	Port_Property("rgnET_167", 16, hls_in, 167, "ap_none", "in_data", 1),
	Port_Property("rgnET_168", 16, hls_in, 168, "ap_none", "in_data", 1),
	Port_Property("rgnET_169", 16, hls_in, 169, "ap_none", "in_data", 1),
	Port_Property("rgnET_170", 16, hls_in, 170, "ap_none", "in_data", 1),
	Port_Property("rgnET_171", 16, hls_in, 171, "ap_none", "in_data", 1),
	Port_Property("rgnET_172", 16, hls_in, 172, "ap_none", "in_data", 1),
	Port_Property("rgnET_173", 16, hls_in, 173, "ap_none", "in_data", 1),
	Port_Property("rgnET_174", 16, hls_in, 174, "ap_none", "in_data", 1),
	Port_Property("rgnET_175", 16, hls_in, 175, "ap_none", "in_data", 1),
	Port_Property("rgnET_176", 16, hls_in, 176, "ap_none", "in_data", 1),
	Port_Property("rgnET_177", 16, hls_in, 177, "ap_none", "in_data", 1),
	Port_Property("rgnET_178", 16, hls_in, 178, "ap_none", "in_data", 1),
	Port_Property("rgnET_179", 16, hls_in, 179, "ap_none", "in_data", 1),
	Port_Property("rgnET_180", 16, hls_in, 180, "ap_none", "in_data", 1),
	Port_Property("rgnET_181", 16, hls_in, 181, "ap_none", "in_data", 1),
	Port_Property("rgnET_182", 16, hls_in, 182, "ap_none", "in_data", 1),
	Port_Property("rgnET_183", 16, hls_in, 183, "ap_none", "in_data", 1),
	Port_Property("rgnET_184", 16, hls_in, 184, "ap_none", "in_data", 1),
	Port_Property("rgnET_185", 16, hls_in, 185, "ap_none", "in_data", 1),
	Port_Property("rgnET_186", 16, hls_in, 186, "ap_none", "in_data", 1),
	Port_Property("rgnET_187", 16, hls_in, 187, "ap_none", "in_data", 1),
	Port_Property("rgnET_188", 16, hls_in, 188, "ap_none", "in_data", 1),
	Port_Property("rgnET_189", 16, hls_in, 189, "ap_none", "in_data", 1),
	Port_Property("rgnET_190", 16, hls_in, 190, "ap_none", "in_data", 1),
	Port_Property("rgnET_191", 16, hls_in, 191, "ap_none", "in_data", 1),
	Port_Property("rgnET_192", 16, hls_in, 192, "ap_none", "in_data", 1),
	Port_Property("rgnET_193", 16, hls_in, 193, "ap_none", "in_data", 1),
	Port_Property("rgnET_194", 16, hls_in, 194, "ap_none", "in_data", 1),
	Port_Property("rgnET_195", 16, hls_in, 195, "ap_none", "in_data", 1),
	Port_Property("rgnET_196", 16, hls_in, 196, "ap_none", "in_data", 1),
	Port_Property("rgnET_197", 16, hls_in, 197, "ap_none", "in_data", 1),
	Port_Property("rgnET_198", 16, hls_in, 198, "ap_none", "in_data", 1),
	Port_Property("rgnET_199", 16, hls_in, 199, "ap_none", "in_data", 1),
	Port_Property("rgnET_200", 16, hls_in, 200, "ap_none", "in_data", 1),
	Port_Property("rgnET_201", 16, hls_in, 201, "ap_none", "in_data", 1),
	Port_Property("rgnET_202", 16, hls_in, 202, "ap_none", "in_data", 1),
	Port_Property("rgnET_203", 16, hls_in, 203, "ap_none", "in_data", 1),
	Port_Property("rgnET_204", 16, hls_in, 204, "ap_none", "in_data", 1),
	Port_Property("rgnET_205", 16, hls_in, 205, "ap_none", "in_data", 1),
	Port_Property("rgnET_206", 16, hls_in, 206, "ap_none", "in_data", 1),
	Port_Property("rgnET_207", 16, hls_in, 207, "ap_none", "in_data", 1),
	Port_Property("rgnET_208", 16, hls_in, 208, "ap_none", "in_data", 1),
	Port_Property("rgnET_209", 16, hls_in, 209, "ap_none", "in_data", 1),
	Port_Property("rgnET_210", 16, hls_in, 210, "ap_none", "in_data", 1),
	Port_Property("rgnET_211", 16, hls_in, 211, "ap_none", "in_data", 1),
	Port_Property("rgnET_212", 16, hls_in, 212, "ap_none", "in_data", 1),
	Port_Property("rgnET_213", 16, hls_in, 213, "ap_none", "in_data", 1),
	Port_Property("rgnET_214", 16, hls_in, 214, "ap_none", "in_data", 1),
	Port_Property("rgnET_215", 16, hls_in, 215, "ap_none", "in_data", 1),
	Port_Property("rgnET_216", 16, hls_in, 216, "ap_none", "in_data", 1),
	Port_Property("rgnET_217", 16, hls_in, 217, "ap_none", "in_data", 1),
	Port_Property("rgnET_218", 16, hls_in, 218, "ap_none", "in_data", 1),
	Port_Property("rgnET_219", 16, hls_in, 219, "ap_none", "in_data", 1),
	Port_Property("rgnET_220", 16, hls_in, 220, "ap_none", "in_data", 1),
	Port_Property("rgnET_221", 16, hls_in, 221, "ap_none", "in_data", 1),
	Port_Property("rgnET_222", 16, hls_in, 222, "ap_none", "in_data", 1),
	Port_Property("rgnET_223", 16, hls_in, 223, "ap_none", "in_data", 1),
	Port_Property("rgnET_224", 16, hls_in, 224, "ap_none", "in_data", 1),
	Port_Property("rgnET_225", 16, hls_in, 225, "ap_none", "in_data", 1),
	Port_Property("rgnET_226", 16, hls_in, 226, "ap_none", "in_data", 1),
	Port_Property("rgnET_227", 16, hls_in, 227, "ap_none", "in_data", 1),
	Port_Property("rgnET_228", 16, hls_in, 228, "ap_none", "in_data", 1),
	Port_Property("rgnET_229", 16, hls_in, 229, "ap_none", "in_data", 1),
	Port_Property("rgnET_230", 16, hls_in, 230, "ap_none", "in_data", 1),
	Port_Property("rgnET_231", 16, hls_in, 231, "ap_none", "in_data", 1),
	Port_Property("rgnET_232", 16, hls_in, 232, "ap_none", "in_data", 1),
	Port_Property("rgnET_233", 16, hls_in, 233, "ap_none", "in_data", 1),
	Port_Property("rgnET_234", 16, hls_in, 234, "ap_none", "in_data", 1),
	Port_Property("rgnET_235", 16, hls_in, 235, "ap_none", "in_data", 1),
	Port_Property("rgnET_236", 16, hls_in, 236, "ap_none", "in_data", 1),
	Port_Property("rgnET_237", 16, hls_in, 237, "ap_none", "in_data", 1),
	Port_Property("rgnET_238", 16, hls_in, 238, "ap_none", "in_data", 1),
	Port_Property("rgnET_239", 16, hls_in, 239, "ap_none", "in_data", 1),
	Port_Property("rgnET_240", 16, hls_in, 240, "ap_none", "in_data", 1),
	Port_Property("rgnET_241", 16, hls_in, 241, "ap_none", "in_data", 1),
	Port_Property("rgnET_242", 16, hls_in, 242, "ap_none", "in_data", 1),
	Port_Property("rgnET_243", 16, hls_in, 243, "ap_none", "in_data", 1),
	Port_Property("rgnET_244", 16, hls_in, 244, "ap_none", "in_data", 1),
	Port_Property("rgnET_245", 16, hls_in, 245, "ap_none", "in_data", 1),
	Port_Property("rgnET_246", 16, hls_in, 246, "ap_none", "in_data", 1),
	Port_Property("rgnET_247", 16, hls_in, 247, "ap_none", "in_data", 1),
	Port_Property("rgnET_248", 16, hls_in, 248, "ap_none", "in_data", 1),
	Port_Property("rgnET_249", 16, hls_in, 249, "ap_none", "in_data", 1),
	Port_Property("rgnET_250", 16, hls_in, 250, "ap_none", "in_data", 1),
	Port_Property("rgnET_251", 16, hls_in, 251, "ap_none", "in_data", 1),
	Port_Property("hfET_0", 16, hls_in, 252, "ap_none", "in_data", 1),
	Port_Property("hfET_1", 16, hls_in, 253, "ap_none", "in_data", 1),
	Port_Property("hfET_2", 16, hls_in, 254, "ap_none", "in_data", 1),
	Port_Property("hfET_3", 16, hls_in, 255, "ap_none", "in_data", 1),
	Port_Property("hfET_4", 16, hls_in, 256, "ap_none", "in_data", 1),
	Port_Property("hfET_5", 16, hls_in, 257, "ap_none", "in_data", 1),
	Port_Property("hfET_6", 16, hls_in, 258, "ap_none", "in_data", 1),
	Port_Property("hfET_7", 16, hls_in, 259, "ap_none", "in_data", 1),
	Port_Property("hfET_8", 16, hls_in, 260, "ap_none", "in_data", 1),
	Port_Property("hfET_9", 16, hls_in, 261, "ap_none", "in_data", 1),
	Port_Property("hfET_10", 16, hls_in, 262, "ap_none", "in_data", 1),
	Port_Property("hfET_11", 16, hls_in, 263, "ap_none", "in_data", 1),
	Port_Property("hfET_12", 16, hls_in, 264, "ap_none", "in_data", 1),
	Port_Property("hfET_13", 16, hls_in, 265, "ap_none", "in_data", 1),
	Port_Property("hfET_14", 16, hls_in, 266, "ap_none", "in_data", 1),
	Port_Property("hfET_15", 16, hls_in, 267, "ap_none", "in_data", 1),
	Port_Property("hfET_16", 16, hls_in, 268, "ap_none", "in_data", 1),
	Port_Property("hfET_17", 16, hls_in, 269, "ap_none", "in_data", 1),
	Port_Property("hfET_18", 16, hls_in, 270, "ap_none", "in_data", 1),
	Port_Property("hfET_19", 16, hls_in, 271, "ap_none", "in_data", 1),
	Port_Property("hfET_20", 16, hls_in, 272, "ap_none", "in_data", 1),
	Port_Property("hfET_21", 16, hls_in, 273, "ap_none", "in_data", 1),
	Port_Property("hfET_22", 16, hls_in, 274, "ap_none", "in_data", 1),
	Port_Property("hfET_23", 16, hls_in, 275, "ap_none", "in_data", 1),
	Port_Property("hfET_24", 16, hls_in, 276, "ap_none", "in_data", 1),
	Port_Property("hfET_25", 16, hls_in, 277, "ap_none", "in_data", 1),
	Port_Property("hfET_26", 16, hls_in, 278, "ap_none", "in_data", 1),
	Port_Property("hfET_27", 16, hls_in, 279, "ap_none", "in_data", 1),
	Port_Property("hfET_28", 16, hls_in, 280, "ap_none", "in_data", 1),
	Port_Property("hfET_29", 16, hls_in, 281, "ap_none", "in_data", 1),
	Port_Property("hfET_30", 16, hls_in, 282, "ap_none", "in_data", 1),
	Port_Property("hfET_31", 16, hls_in, 283, "ap_none", "in_data", 1),
	Port_Property("hfET_32", 16, hls_in, 284, "ap_none", "in_data", 1),
	Port_Property("hfET_33", 16, hls_in, 285, "ap_none", "in_data", 1),
	Port_Property("hfET_34", 16, hls_in, 286, "ap_none", "in_data", 1),
	Port_Property("hfET_35", 16, hls_in, 287, "ap_none", "in_data", 1),
	Port_Property("hfET_36", 16, hls_in, 288, "ap_none", "in_data", 1),
	Port_Property("hfET_37", 16, hls_in, 289, "ap_none", "in_data", 1),
	Port_Property("hfET_38", 16, hls_in, 290, "ap_none", "in_data", 1),
	Port_Property("hfET_39", 16, hls_in, 291, "ap_none", "in_data", 1),
	Port_Property("hfET_40", 16, hls_in, 292, "ap_none", "in_data", 1),
	Port_Property("hfET_41", 16, hls_in, 293, "ap_none", "in_data", 1),
	Port_Property("hfET_42", 16, hls_in, 294, "ap_none", "in_data", 1),
	Port_Property("hfET_43", 16, hls_in, 295, "ap_none", "in_data", 1),
	Port_Property("hfET_44", 16, hls_in, 296, "ap_none", "in_data", 1),
	Port_Property("hfET_45", 16, hls_in, 297, "ap_none", "in_data", 1),
	Port_Property("hfET_46", 16, hls_in, 298, "ap_none", "in_data", 1),
	Port_Property("hfET_47", 16, hls_in, 299, "ap_none", "in_data", 1),
	Port_Property("hfET_48", 16, hls_in, 300, "ap_none", "in_data", 1),
	Port_Property("hfET_49", 16, hls_in, 301, "ap_none", "in_data", 1),
	Port_Property("hfET_50", 16, hls_in, 302, "ap_none", "in_data", 1),
	Port_Property("hfET_51", 16, hls_in, 303, "ap_none", "in_data", 1),
	Port_Property("hfET_52", 16, hls_in, 304, "ap_none", "in_data", 1),
	Port_Property("hfET_53", 16, hls_in, 305, "ap_none", "in_data", 1),
	Port_Property("hfET_54", 16, hls_in, 306, "ap_none", "in_data", 1),
	Port_Property("hfET_55", 16, hls_in, 307, "ap_none", "in_data", 1),
	Port_Property("hfET_56", 16, hls_in, 308, "ap_none", "in_data", 1),
	Port_Property("hfET_57", 16, hls_in, 309, "ap_none", "in_data", 1),
	Port_Property("hfET_58", 16, hls_in, 310, "ap_none", "in_data", 1),
	Port_Property("hfET_59", 16, hls_in, 311, "ap_none", "in_data", 1),
	Port_Property("hfET_60", 16, hls_in, 312, "ap_none", "in_data", 1),
	Port_Property("hfET_61", 16, hls_in, 313, "ap_none", "in_data", 1),
	Port_Property("hfET_62", 16, hls_in, 314, "ap_none", "in_data", 1),
	Port_Property("hfET_63", 16, hls_in, 315, "ap_none", "in_data", 1),
	Port_Property("hfET_64", 16, hls_in, 316, "ap_none", "in_data", 1),
	Port_Property("hfET_65", 16, hls_in, 317, "ap_none", "in_data", 1),
	Port_Property("hfET_66", 16, hls_in, 318, "ap_none", "in_data", 1),
	Port_Property("hfET_67", 16, hls_in, 319, "ap_none", "in_data", 1),
	Port_Property("hfET_68", 16, hls_in, 320, "ap_none", "in_data", 1),
	Port_Property("hfET_69", 16, hls_in, 321, "ap_none", "in_data", 1),
	Port_Property("hfET_70", 16, hls_in, 322, "ap_none", "in_data", 1),
	Port_Property("hfET_71", 16, hls_in, 323, "ap_none", "in_data", 1),
	Port_Property("hfET_72", 16, hls_in, 324, "ap_none", "in_data", 1),
	Port_Property("hfET_73", 16, hls_in, 325, "ap_none", "in_data", 1),
	Port_Property("hfET_74", 16, hls_in, 326, "ap_none", "in_data", 1),
	Port_Property("hfET_75", 16, hls_in, 327, "ap_none", "in_data", 1),
	Port_Property("hfET_76", 16, hls_in, 328, "ap_none", "in_data", 1),
	Port_Property("hfET_77", 16, hls_in, 329, "ap_none", "in_data", 1),
	Port_Property("hfET_78", 16, hls_in, 330, "ap_none", "in_data", 1),
	Port_Property("hfET_79", 16, hls_in, 331, "ap_none", "in_data", 1),
	Port_Property("hfET_80", 16, hls_in, 332, "ap_none", "in_data", 1),
	Port_Property("hfET_81", 16, hls_in, 333, "ap_none", "in_data", 1),
	Port_Property("hfET_82", 16, hls_in, 334, "ap_none", "in_data", 1),
	Port_Property("hfET_83", 16, hls_in, 335, "ap_none", "in_data", 1),
	Port_Property("hfET_84", 16, hls_in, 336, "ap_none", "in_data", 1),
	Port_Property("hfET_85", 16, hls_in, 337, "ap_none", "in_data", 1),
	Port_Property("hfET_86", 16, hls_in, 338, "ap_none", "in_data", 1),
	Port_Property("hfET_87", 16, hls_in, 339, "ap_none", "in_data", 1),
	Port_Property("hfET_88", 16, hls_in, 340, "ap_none", "in_data", 1),
	Port_Property("hfET_89", 16, hls_in, 341, "ap_none", "in_data", 1),
	Port_Property("hfET_90", 16, hls_in, 342, "ap_none", "in_data", 1),
	Port_Property("hfET_91", 16, hls_in, 343, "ap_none", "in_data", 1),
	Port_Property("hfET_92", 16, hls_in, 344, "ap_none", "in_data", 1),
	Port_Property("hfET_93", 16, hls_in, 345, "ap_none", "in_data", 1),
	Port_Property("hfET_94", 16, hls_in, 346, "ap_none", "in_data", 1),
	Port_Property("hfET_95", 16, hls_in, 347, "ap_none", "in_data", 1),
	Port_Property("hfET_96", 16, hls_in, 348, "ap_none", "in_data", 1),
	Port_Property("hfET_97", 16, hls_in, 349, "ap_none", "in_data", 1),
	Port_Property("hfET_98", 16, hls_in, 350, "ap_none", "in_data", 1),
	Port_Property("hfET_99", 16, hls_in, 351, "ap_none", "in_data", 1),
	Port_Property("hfET_100", 16, hls_in, 352, "ap_none", "in_data", 1),
	Port_Property("hfET_101", 16, hls_in, 353, "ap_none", "in_data", 1),
	Port_Property("hfET_102", 16, hls_in, 354, "ap_none", "in_data", 1),
	Port_Property("hfET_103", 16, hls_in, 355, "ap_none", "in_data", 1),
	Port_Property("hfET_104", 16, hls_in, 356, "ap_none", "in_data", 1),
	Port_Property("hfET_105", 16, hls_in, 357, "ap_none", "in_data", 1),
	Port_Property("hfET_106", 16, hls_in, 358, "ap_none", "in_data", 1),
	Port_Property("hfET_107", 16, hls_in, 359, "ap_none", "in_data", 1),
	Port_Property("hfET_108", 16, hls_in, 360, "ap_none", "in_data", 1),
	Port_Property("hfET_109", 16, hls_in, 361, "ap_none", "in_data", 1),
	Port_Property("hfET_110", 16, hls_in, 362, "ap_none", "in_data", 1),
	Port_Property("hfET_111", 16, hls_in, 363, "ap_none", "in_data", 1),
	Port_Property("hfET_112", 16, hls_in, 364, "ap_none", "in_data", 1),
	Port_Property("hfET_113", 16, hls_in, 365, "ap_none", "in_data", 1),
	Port_Property("hfET_114", 16, hls_in, 366, "ap_none", "in_data", 1),
	Port_Property("hfET_115", 16, hls_in, 367, "ap_none", "in_data", 1),
	Port_Property("hfET_116", 16, hls_in, 368, "ap_none", "in_data", 1),
	Port_Property("hfET_117", 16, hls_in, 369, "ap_none", "in_data", 1),
	Port_Property("hfET_118", 16, hls_in, 370, "ap_none", "in_data", 1),
	Port_Property("hfET_119", 16, hls_in, 371, "ap_none", "in_data", 1),
	Port_Property("hfET_120", 16, hls_in, 372, "ap_none", "in_data", 1),
	Port_Property("hfET_121", 16, hls_in, 373, "ap_none", "in_data", 1),
	Port_Property("hfET_122", 16, hls_in, 374, "ap_none", "in_data", 1),
	Port_Property("hfET_123", 16, hls_in, 375, "ap_none", "in_data", 1),
	Port_Property("hfET_124", 16, hls_in, 376, "ap_none", "in_data", 1),
	Port_Property("hfET_125", 16, hls_in, 377, "ap_none", "in_data", 1),
	Port_Property("hfET_126", 16, hls_in, 378, "ap_none", "in_data", 1),
	Port_Property("hfET_127", 16, hls_in, 379, "ap_none", "in_data", 1),
	Port_Property("hfET_128", 16, hls_in, 380, "ap_none", "in_data", 1),
	Port_Property("hfET_129", 16, hls_in, 381, "ap_none", "in_data", 1),
	Port_Property("hfET_130", 16, hls_in, 382, "ap_none", "in_data", 1),
	Port_Property("hfET_131", 16, hls_in, 383, "ap_none", "in_data", 1),
	Port_Property("hfET_132", 16, hls_in, 384, "ap_none", "in_data", 1),
	Port_Property("hfET_133", 16, hls_in, 385, "ap_none", "in_data", 1),
	Port_Property("hfET_134", 16, hls_in, 386, "ap_none", "in_data", 1),
	Port_Property("hfET_135", 16, hls_in, 387, "ap_none", "in_data", 1),
	Port_Property("hfET_136", 16, hls_in, 388, "ap_none", "in_data", 1),
	Port_Property("hfET_137", 16, hls_in, 389, "ap_none", "in_data", 1),
	Port_Property("hfET_138", 16, hls_in, 390, "ap_none", "in_data", 1),
	Port_Property("hfET_139", 16, hls_in, 391, "ap_none", "in_data", 1),
	Port_Property("hfET_140", 16, hls_in, 392, "ap_none", "in_data", 1),
	Port_Property("hfET_141", 16, hls_in, 393, "ap_none", "in_data", 1),
	Port_Property("hfET_142", 16, hls_in, 394, "ap_none", "in_data", 1),
	Port_Property("hfET_143", 16, hls_in, 395, "ap_none", "in_data", 1),
	Port_Property("HT_0", 16, hls_out, 396, "ap_none", "out_data", 1),
	Port_Property("HT_1", 16, hls_out, 397, "ap_none", "out_data", 1),
	Port_Property("HT_2", 16, hls_out, 398, "ap_none", "out_data", 1),
};
const char* HLS_Design_Meta::dut_name = "MakeHT";
