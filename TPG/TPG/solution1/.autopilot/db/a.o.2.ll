; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG/TPG/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@reg.shift_reg.0.3 = internal unnamed_addr global i32 0 ; [#uses=2 type=i32*]
@reg.shift_reg.0.2 = internal unnamed_addr global i32 0 ; [#uses=2 type=i32*]
@reg.shift_reg.0.1 = internal unnamed_addr global i32 0 ; [#uses=2 type=i32*]
@reg.shift_reg.0.0 = internal global i21 0        ; [#uses=5 type=i21*]
@reg.peak_reg.0.1 = internal unnamed_addr global i29 0 ; [#uses=2 type=i29*]
@reg.peak_reg.0.0 = internal global i29 0         ; [#uses=3 type=i29*]
@llvm.global_ctors.1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm.global_ctors.0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@TPG.str = internal unnamed_addr constant [4 x i8] c"TPG\00" ; [#uses=1 type=[4 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=2 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1 ; [#uses=6 type=[12 x i8]*]

; [#uses=23]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=5]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=4]
declare void @_ssdm_SpecDependence(...) nounwind

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind section ".text.startup"

; [#uses=0]
define void @TPG(i16* %"in[0].data_input", i32* %"in[0].lincoeff", i32* %"out[0].filOut", i1* %"out[0].peakOut", i16* %"out[0].peakAmp") {
_ifconv:
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %"out[0].peakAmp"), !map !168
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %"out[0].peakOut"), !map !174
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %"out[0].filOut"), !map !178
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %"in[0].lincoeff"), !map !182
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %"in[0].data_input"), !map !186
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @TPG.str) nounwind
  call void @llvm.dbg.value(metadata !{i16* %"in[0].data_input"}, i64 0, metadata !190), !dbg !195 ; [debug line = 5:16] [debug variable = in[0].data_input]
  call void @llvm.dbg.value(metadata !{i32* %"in[0].lincoeff"}, i64 0, metadata !196), !dbg !195 ; [debug line = 5:16] [debug variable = in[0].lincoeff]
  call void @llvm.dbg.value(metadata !{i32* %"out[0].filOut"}, i64 0, metadata !200), !dbg !205 ; [debug line = 5:30] [debug variable = out[0].filOut]
  call void @llvm.dbg.value(metadata !{i1* %"out[0].peakOut"}, i64 0, metadata !206), !dbg !205 ; [debug line = 5:30] [debug variable = out[0].peakOut]
  call void @llvm.dbg.value(metadata !{i16* %"out[0].peakAmp"}, i64 0, metadata !210), !dbg !205 ; [debug line = 5:30] [debug variable = out[0].peakAmp]
  %data_int.assign = load i16* %"in[0].data_input", align 2, !dbg !214 ; [#uses=1 type=i16] [debug line = 15:11]
  %uncorrectedADC = trunc i16 %data_int.assign to i12, !dbg !214 ; [#uses=1 type=i12] [debug line = 15:11]
  %lincoeff.assign = load i32* %"in[0].lincoeff", align 4, !dbg !214 ; [#uses=2 type=i32] [debug line = 15:11]
  %lincoeff.assign.cast = trunc i32 %lincoeff.assign to i24, !dbg !218 ; [#uses=1 type=i24] [debug line = 19:24@15:11]
  call void @llvm.dbg.value(metadata !{i16 %data_int.assign}, i64 0, metadata !224), !dbg !218 ; [debug line = 19:24@15:11] [debug variable = data_int]
  call void @llvm.dbg.value(metadata !{i32 %lincoeff.assign}, i64 0, metadata !225), !dbg !226 ; [debug line = 19:43@15:11] [debug variable = lincoeff]
  %uncorrectedADC.cast = zext i12 %uncorrectedADC to i13, !dbg !227 ; [#uses=1 type=i13] [debug line = 43:3@15:11]
  call void @llvm.dbg.value(metadata !{i12 %uncorrectedADC}, i64 0, metadata !229), !dbg !227 ; [debug line = 43:3@15:11] [debug variable = uncorrectedADC]
  %tmp.1.i = icmp ult i24 %lincoeff.assign.cast, 65536, !dbg !230 ; [#uses=1 type=i1] [debug line = 44:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %lincoeff.assign}, i64 0, metadata !231), !dbg !232 ; [debug line = 45:8@15:11] [debug variable = coeff]
  %tmp = trunc i32 %lincoeff.assign to i24, !dbg !230 ; [#uses=1 type=i24] [debug line = 44:3@15:11]
  %tmp.1 = select i1 %tmp.1.i, i24 0, i24 %tmp, !dbg !230 ; [#uses=3 type=i24] [debug line = 44:3@15:11]
  %base = trunc i24 %tmp.1 to i12, !dbg !233      ; [#uses=1 type=i12] [debug line = 46:3@15:11]
  %tmp.3 = trunc i24 %tmp.1 to i20, !dbg !230     ; [#uses=1 type=i20] [debug line = 44:3@15:11]
  %base.cast = zext i12 %base to i13, !dbg !233   ; [#uses=1 type=i13] [debug line = 46:3@15:11]
  call void @llvm.dbg.value(metadata !{i12 %base}, i64 0, metadata !234), !dbg !233 ; [debug line = 46:3@15:11] [debug variable = base]
  %tmp.4.i = lshr i20 %tmp.3, 12, !dbg !235       ; [#uses=1 type=i20] [debug line = 47:3@15:11]
  %shiftlin = trunc i20 %tmp.4.i to i4, !dbg !235 ; [#uses=1 type=i4] [debug line = 47:3@15:11]
  call void @llvm.dbg.value(metadata !{i4 %shiftlin}, i64 0, metadata !236), !dbg !235 ; [debug line = 47:3@15:11] [debug variable = shiftlin]
  %tmp.7.i = lshr i24 %tmp.1, 16, !dbg !239       ; [#uses=1 type=i24] [debug line = 48:3@15:11]
  %mult = trunc i24 %tmp.7.i to i8, !dbg !239     ; [#uses=1 type=i8] [debug line = 48:3@15:11]
  call void @llvm.dbg.value(metadata !{i8 %mult}, i64 0, metadata !240), !dbg !239 ; [debug line = 48:3@15:11] [debug variable = mult]
  %correctedADC = sub i13 %uncorrectedADC.cast, %base.cast, !dbg !241 ; [#uses=1 type=i13] [debug line = 49:3@15:11]
  call void @llvm.dbg.value(metadata !{i13 %correctedADC}, i64 0, metadata !242), !dbg !241 ; [debug line = 49:3@15:11] [debug variable = correctedADC]
  %tmp..i.cast = sext i13 %correctedADC to i21, !dbg !244 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %tmp.3.i.cast = zext i8 %mult to i21, !dbg !244 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %prod = mul i21 %tmp.3.i.cast, %tmp..i.cast, !dbg !244 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %tmp.6.i.cast = zext i4 %shiftlin to i5, !dbg !245 ; [#uses=1 type=i5] [debug line = 52:3@15:11]
  %tmp.8.i = add i5 %tmp.6.i.cast, 2, !dbg !245   ; [#uses=1 type=i5] [debug line = 52:3@15:11]
  %tmp.8.i.cast = zext i5 %tmp.8.i to i21, !dbg !245 ; [#uses=1 type=i21] [debug line = 52:3@15:11]
  %linearizerOutput = ashr i21 %prod, %tmp.8.i.cast, !dbg !245 ; [#uses=3 type=i21] [debug line = 52:3@15:11]
  %linearizerOutput.cast = zext i21 %linearizerOutput to i22, !dbg !245 ; [#uses=1 type=i22] [debug line = 52:3@15:11]
  %linearizerOutput.cast1 = zext i21 %linearizerOutput to i24, !dbg !245 ; [#uses=1 type=i24] [debug line = 52:3@15:11]
  call void @llvm.dbg.value(metadata !{i21 %linearizerOutput}, i64 0, metadata !246), !dbg !245 ; [debug line = 52:3@15:11] [debug variable = linearizerOutput]
  %m = load i32* @reg.shift_reg.0.3, align 4, !dbg !247 ; [#uses=2 type=i32] [debug line = 55:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %m}, i64 0, metadata !248), !dbg !247 ; [debug line = 55:3@15:11] [debug variable = m]
  %tmp.9.i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str4), !dbg !249 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  call void (...)* @_ssdm_SpecDependence(i21* @reg.shift_reg.0.0, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !252 ; [debug line = 58:1@15:11]
  %reg.shift_reg.0.2.load = load i32* @reg.shift_reg.0.2, align 4, !dbg !253 ; [#uses=2 type=i32] [debug line = 59:2@15:11]
  store i32 %reg.shift_reg.0.2.load, i32* @reg.shift_reg.0.3, align 4, !dbg !253 ; [debug line = 59:2@15:11]
  %0 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str4, i32 %tmp.9.i), !dbg !254 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  %tmp.10.i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str4), !dbg !249 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  call void (...)* @_ssdm_SpecDependence(i21* @reg.shift_reg.0.0, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !252 ; [debug line = 58:1@15:11]
  %reg.shift_reg.0.1.load = load i32* @reg.shift_reg.0.1, align 4, !dbg !253 ; [#uses=2 type=i32] [debug line = 59:2@15:11]
  %reg.shift_reg.0.1.load.cast = trunc i32 %reg.shift_reg.0.1.load to i28, !dbg !253 ; [#uses=1 type=i28] [debug line = 59:2@15:11]
  store i32 %reg.shift_reg.0.1.load, i32* @reg.shift_reg.0.2, align 4, !dbg !253 ; [debug line = 59:2@15:11]
  %1 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str4, i32 %tmp.10.i), !dbg !254 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  %tmp.11.i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str4), !dbg !249 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  call void (...)* @_ssdm_SpecDependence(i21* @reg.shift_reg.0.0, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !252 ; [debug line = 58:1@15:11]
  %reg.shift_reg.0.0.load = load i21* @reg.shift_reg.0.0, align 4 ; [#uses=1 type=i21]
  %extLd = sext i21 %reg.shift_reg.0.0.load to i32 ; [#uses=3 type=i32]
  store i32 %extLd, i32* @reg.shift_reg.0.1, align 4, !dbg !253 ; [debug line = 59:2@15:11]
  %2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str4, i32 %tmp.11.i), !dbg !254 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  store i21 %linearizerOutput, i21* @reg.shift_reg.0.0, align 4, !dbg !255 ; [debug line = 61:3@15:11]
  %_shl.i = shl i32 %m, 5, !dbg !256              ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  %_neg.i = sub i32 0, %_shl.i                    ; [#uses=1 type=i32]
  %_shl2.i = shl i32 %m, 2, !dbg !256             ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  %pro = sub i32 %_neg.i, %_shl2.i, !dbg !256     ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %pro}, i64 0, metadata !257), !dbg !256 ; [debug line = 62:3@15:11] [debug variable = pro]
  %tmp.12.i = lshr i32 %pro, 6, !dbg !259         ; [#uses=1 type=i32] [debug line = 63:3@15:11]
  %tmp.13.i = trunc i32 %tmp.12.i to i26, !dbg !259 ; [#uses=1 type=i26] [debug line = 63:3@15:11]
  %mul.cast = sext i26 %tmp.13.i to i28, !dbg !259 ; [#uses=1 type=i28] [debug line = 63:3@15:11]
  %pro.1.i = mul i32 %reg.shift_reg.0.2.load, -35, !dbg !260 ; [#uses=1 type=i32] [debug line = 67:2@15:11]
  %tmp.14.i = lshr i32 %pro.1.i, 6, !dbg !263     ; [#uses=1 type=i32] [debug line = 68:5@15:11]
  %tmp.15.i = trunc i32 %tmp.14.i to i26, !dbg !263 ; [#uses=1 type=i26] [debug line = 68:5@15:11]
  %mul.i.cast = sext i26 %tmp.15.i to i27, !dbg !263 ; [#uses=1 type=i27] [debug line = 68:5@15:11]
  %tmp.16.i = lshr i28 %reg.shift_reg.0.1.load.cast, 2, !dbg !263 ; [#uses=1 type=i28] [debug line = 68:5@15:11]
  %tmp.24.i = trunc i28 %tmp.16.i to i26, !dbg !263 ; [#uses=1 type=i26] [debug line = 68:5@15:11]
  %mul.1.i.cast = sext i26 %tmp.24.i to i27, !dbg !260 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %_shl1.i = shl nsw i32 %extLd, 5, !dbg !260     ; [#uses=1 type=i32] [debug line = 67:2@15:11]
  %pro.1.2.i = sub i32 %_shl1.i, %extLd, !dbg !260 ; [#uses=1 type=i32] [debug line = 67:2@15:11]
  %tmp.25.i = lshr i32 %pro.1.2.i, 6, !dbg !263   ; [#uses=1 type=i32] [debug line = 68:5@15:11]
  %tmp.26.i = trunc i32 %tmp.25.i to i26, !dbg !263 ; [#uses=1 type=i26] [debug line = 68:5@15:11]
  %mul..i.cast = sext i26 %tmp.26.i to i27, !dbg !260 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %_shl8.i = shl i24 %linearizerOutput.cast1, 5, !dbg !260 ; [#uses=1 type=i24] [debug line = 67:2@15:11]
  %_shl8.i.cast = sext i24 %_shl8.i to i25, !dbg !260 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %_shl9.i = shl i22 %linearizerOutput.cast, 3, !dbg !260 ; [#uses=1 type=i22] [debug line = 67:2@15:11]
  %_shl9.i.cast = sext i22 %_shl9.i to i25, !dbg !260 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %pro.1.3.i = sub i25 %_shl8.i.cast, %_shl9.i.cast, !dbg !260 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %tmp.4 = lshr i25 %pro.1.3.i, 6, !dbg !263      ; [#uses=1 type=i25] [debug line = 68:5@15:11]
  %tmp.5 = trunc i25 %tmp.4 to i19, !dbg !263     ; [#uses=1 type=i19] [debug line = 68:5@15:11]
  %mul.3.i.cast = sext i19 %tmp.5 to i27, !dbg !264 ; [#uses=1 type=i27] [debug line = 69:5@15:11]
  %tmp2 = add i27 %mul..i.cast, %mul.1.i.cast, !dbg !264 ; [#uses=2 type=i27] [debug line = 69:5@15:11]
  %tmp2.cast = sext i27 %tmp2 to i29, !dbg !264   ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %tmp4 = add i27 %mul.3.i.cast, %mul.i.cast, !dbg !264 ; [#uses=1 type=i27] [debug line = 69:5@15:11]
  %tmp4.cast = sext i27 %tmp4 to i28, !dbg !264   ; [#uses=1 type=i28] [debug line = 69:5@15:11]
  %tmp3 = add i28 %mul.cast, %tmp4.cast, !dbg !264 ; [#uses=2 type=i28] [debug line = 69:5@15:11]
  %tmp3.cast = sext i28 %tmp3 to i29, !dbg !264   ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %tmp.6 = sext i27 %tmp2 to i28                  ; [#uses=1 type=i28]
  %acc.1.3.i = add i29 %tmp2.cast, %tmp3.cast, !dbg !264 ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %acc.1.3.i.cast = add i28 %tmp3, %tmp.6, !dbg !264 ; [#uses=1 type=i28] [debug line = 69:5@15:11]
  %tmp.17.i = icmp slt i29 %acc.1.3.i, 0, !dbg !265 ; [#uses=1 type=i1] [debug line = 72:3@15:11]
  %.acc.i = select i1 %tmp.17.i, i28 0, i28 %acc.1.3.i.cast, !dbg !265 ; [#uses=2 type=i28] [debug line = 72:3@15:11]
  %.acc.i.cast5 = trunc i28 %.acc.i to i18, !dbg !265 ; [#uses=1 type=i18] [debug line = 72:3@15:11]
  %tmp.18.i = icmp ugt i28 %.acc.i, 262143, !dbg !266 ; [#uses=1 type=i1] [debug line = 73:3@15:11]
  %o.filOut = select i1 %tmp.18.i, i18 -1, i18 %.acc.i.cast5, !dbg !266 ; [#uses=3 type=i18] [debug line = 73:3@15:11]
  %o.filOut.cast = zext i18 %o.filOut to i32, !dbg !266 ; [#uses=1 type=i32] [debug line = 73:3@15:11]
  %o.filOut.cast.cast1 = zext i18 %o.filOut to i29, !dbg !267 ; [#uses=1 type=i29] [debug line = 74:1@15:11]
  call void @llvm.dbg.value(metadata !{i18 %o.filOut}, i64 0, metadata !268), !dbg !267 ; [debug line = 74:1@15:11] [debug variable = o.filOut]
  %reg.peak_reg.0.0.load = load i29* @reg.peak_reg.0.0, align 4 ; [#uses=5 type=i29]
  %tmp.19.i = icmp ugt i29 %reg.peak_reg.0.0.load, %o.filOut.cast.cast1, !dbg !270 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %reg.peak_reg.0.1.load = load i29* @reg.peak_reg.0.1, align 4 ; [#uses=1 type=i29]
  %tmp.20.i = icmp ugt i29 %reg.peak_reg.0.0.load, %reg.peak_reg.0.1.load, !dbg !270 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %agg.result.peakOut.write.assign = and i1 %tmp.19.i, %tmp.20.i, !dbg !270 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %tmp.21.i = icmp sgt i29 %reg.peak_reg.0.0.load, 4095, !dbg !271 ; [#uses=1 type=i1] [debug line = 81:2@15:11]
  %tmp.7 = trunc i29 %reg.peak_reg.0.0.load to i18, !dbg !271 ; [#uses=1 type=i18] [debug line = 81:2@15:11]
  %..i.cast = select i1 %tmp.21.i, i18 4092, i18 %tmp.7, !dbg !271 ; [#uses=1 type=i18] [debug line = 81:2@15:11]
  %tmp.22.i = lshr i18 %..i.cast, 2, !dbg !273    ; [#uses=2 type=i18] [debug line = 84:2@15:11]
  %tmpPeak = trunc i18 %tmp.22.i to i16, !dbg !273 ; [#uses=1 type=i16] [debug line = 84:2@15:11]
  %tmpPeak.cast = trunc i18 %tmp.22.i to i10, !dbg !273 ; [#uses=1 type=i10] [debug line = 84:2@15:11]
  call void @llvm.dbg.value(metadata !{i16 %tmpPeak}, i64 0, metadata !274), !dbg !273 ; [debug line = 84:2@15:11] [debug variable = tmpPeak]
  %tmp.23.i = icmp ugt i16 %tmpPeak, 1023, !dbg !275 ; [#uses=1 type=i1] [debug line = 85:2@15:11]
  %tmpPeak.2 = select i1 %tmp.23.i, i10 -1, i10 %tmpPeak.cast, !dbg !275 ; [#uses=1 type=i10] [debug line = 85:2@15:11]
  %tmpPeak.2.cast = zext i10 %tmpPeak.2 to i16, !dbg !275 ; [#uses=1 type=i16] [debug line = 85:2@15:11]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak.2}, i64 0, metadata !274), !dbg !275 ; [debug line = 85:2@15:11] [debug variable = tmpPeak]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak.2}, i64 0, metadata !276), !dbg !277 ; [debug line = 88:2@15:11] [debug variable = o.peakAmp]
  %tmp.29.i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @.str6), !dbg !278 ; [#uses=1 type=i32] [debug line = 90:27@15:11]
  call void (...)* @_ssdm_SpecDependence(i29* @reg.peak_reg.0.0, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !281 ; [debug line = 92:1@15:11]
  store i29 %reg.peak_reg.0.0.load, i29* @reg.peak_reg.0.1, align 4, !dbg !282 ; [debug line = 93:2@15:11]
  %3 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @.str6, i32 %tmp.29.i), !dbg !283 ; [#uses=0 type=i32] [debug line = 94:3@15:11]
  %o.filOut.cast.cast = zext i18 %o.filOut to i29, !dbg !284 ; [#uses=1 type=i29] [debug line = 95:3@15:11]
  store i29 %o.filOut.cast.cast, i29* @reg.peak_reg.0.0, align 4, !dbg !284 ; [debug line = 95:3@15:11]
  call void @llvm.dbg.value(metadata !{i18 %o.filOut}, i64 0, metadata !285) ; [debug variable = agg.result.filOut]
  call void @llvm.dbg.value(metadata !{i1 %agg.result.peakOut.write.assign}, i64 0, metadata !287) ; [debug variable = agg.result.peakOut]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak.2}, i64 0, metadata !288) ; [debug variable = agg.result.peakAmp]
  store i32 %o.filOut.cast, i32* %"out[0].filOut", align 4, !dbg !214 ; [debug line = 15:11]
  store i1 %agg.result.peakOut.write.assign, i1* %"out[0].peakOut", align 1, !dbg !214 ; [debug line = 15:11]
  store i16 %tmpPeak.2.cast, i16* %"out[0].peakAmp", align 2, !dbg !214 ; [debug line = 15:11]
  ret void, !dbg !289                             ; [debug line = 17:1]
}

!opencl.kernels = !{!0, !7, !13, !13}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!19}
!llvm.dbg.cu = !{!26}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"struct inPut*", metadata !"struct outPut*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"in", metadata !"out"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"uint16_t", metadata !"uint32_t", metadata !"struct registers &", metadata !"short"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"data_int", metadata !"lincoeff", metadata !"r", metadata !"i"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space"}
!15 = metadata !{metadata !"kernel_arg_access_qual"}
!16 = metadata !{metadata !"kernel_arg_type"}
!17 = metadata !{metadata !"kernel_arg_type_qual"}
!18 = metadata !{metadata !"kernel_arg_name"}
!19 = metadata !{metadata !20, [1 x i32]* @llvm.global_ctors.0}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 31, metadata !22}
!22 = metadata !{metadata !23}
!23 = metadata !{metadata !"llvm.global_ctors.0", metadata !24, metadata !"", i32 0, i32 31}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 0, i32 1}
!26 = metadata !{i32 786449, i32 0, i32 4, metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG/TPG/solution1/.autopilot/db/TPG.pragma.2.cc", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, null, null, metadata !27, metadata !60} ; [ DW_TAG_compile_unit ]
!27 = metadata !{i32 786478, i32 0, metadata !28, metadata !"TPG", metadata !"TPG", metadata !"_Z3TPGP5inPutP6outPut", metadata !28, i32 5, metadata !29, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !52, i32 5} ; [ DW_TAG_subprogram ]
!28 = metadata !{i32 786473, metadata !"TPG.cc", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!29 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !30, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!30 = metadata !{null, metadata !31, metadata !41}
!31 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !32} ; [ DW_TAG_pointer_type ]
!32 = metadata !{i32 786434, null, metadata !"inPut", metadata !33, i32 44, i64 64, i64 32, i32 0, i32 0, null, metadata !34, i32 0, null, null} ; [ DW_TAG_class_type ]
!33 = metadata !{i32 786473, metadata !"./TPG.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!34 = metadata !{metadata !35, metadata !38}
!35 = metadata !{i32 786445, metadata !32, metadata !"data_input", metadata !33, i32 45, i64 16, i64 16, i64 0, i32 0, metadata !36} ; [ DW_TAG_member ]
!36 = metadata !{i32 786454, null, metadata !"uint16_t", metadata !33, i32 50, i64 0, i64 0, i64 0, i32 0, metadata !37} ; [ DW_TAG_typedef ]
!37 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!38 = metadata !{i32 786445, metadata !32, metadata !"lincoeff", metadata !33, i32 46, i64 32, i64 32, i64 32, i32 0, metadata !39} ; [ DW_TAG_member ]
!39 = metadata !{i32 786454, null, metadata !"uint32_t", metadata !33, i32 52, i64 0, i64 0, i64 0, i32 0, metadata !40} ; [ DW_TAG_typedef ]
!40 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!41 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !42} ; [ DW_TAG_pointer_type ]
!42 = metadata !{i32 786434, null, metadata !"outPut", metadata !33, i32 38, i64 64, i64 32, i32 0, i32 0, null, metadata !43, i32 0, null, null} ; [ DW_TAG_class_type ]
!43 = metadata !{metadata !44, metadata !45, metadata !47, metadata !48, metadata !54}
!44 = metadata !{i32 786445, metadata !42, metadata !"filOut", metadata !33, i32 39, i64 32, i64 32, i64 0, i32 0, metadata !39} ; [ DW_TAG_member ]
!45 = metadata !{i32 786445, metadata !42, metadata !"peakOut", metadata !33, i32 40, i64 8, i64 8, i64 32, i32 0, metadata !46} ; [ DW_TAG_member ]
!46 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!47 = metadata !{i32 786445, metadata !42, metadata !"peakAmp", metadata !33, i32 41, i64 16, i64 16, i64 48, i32 0, metadata !36} ; [ DW_TAG_member ]
!48 = metadata !{i32 786478, i32 0, metadata !42, metadata !"~outPut", metadata !"~outPut", metadata !"", metadata !33, i32 38, metadata !49, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !52, i32 38} ; [ DW_TAG_subprogram ]
!49 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !50, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!50 = metadata !{null, metadata !51}
!51 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !42} ; [ DW_TAG_pointer_type ]
!52 = metadata !{metadata !53}
!53 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!54 = metadata !{i32 786478, i32 0, metadata !42, metadata !"operator=", metadata !"operator=", metadata !"_ZN6outPutaSERKS_", metadata !33, i32 38, metadata !55, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !52, i32 38} ; [ DW_TAG_subprogram ]
!55 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !56, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!56 = metadata !{metadata !57, metadata !51, metadata !58}
!57 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !42} ; [ DW_TAG_reference_type ]
!58 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !59} ; [ DW_TAG_reference_type ]
!59 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !42} ; [ DW_TAG_const_type ]
!60 = metadata !{metadata !61}
!61 = metadata !{metadata !62, metadata !82, metadata !86, metadata !88, metadata !95, metadata !98, metadata !99, metadata !100, metadata !154, metadata !155, metadata !156, metadata !158, metadata !159, metadata !165}
!62 = metadata !{i32 790546, i32 0, null, metadata !"reg.shift_reg", metadata !"reg.shift_reg", metadata !"reg.shift_reg", metadata !28, i32 6, metadata !63, i32 1, i32 1, null} ; [ DW_TAG_variable_field ]
!63 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !64, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!64 = metadata !{i32 786438, null, metadata !"registers", metadata !33, i32 49, i64 128, i64 32, i32 0, i32 0, null, metadata !65, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!65 = metadata !{metadata !66}
!66 = metadata !{i32 786445, metadata !67, metadata !"shift_reg", metadata !33, i32 50, i64 128, i64 32, i64 0, i32 0, metadata !77} ; [ DW_TAG_member ]
!67 = metadata !{i32 786434, null, metadata !"registers", metadata !33, i32 49, i64 192, i64 32, i32 0, i32 0, null, metadata !68, i32 0, null, null} ; [ DW_TAG_class_type ]
!68 = metadata !{metadata !66, metadata !69, metadata !73}
!69 = metadata !{i32 786445, metadata !67, metadata !"peak_reg", metadata !33, i32 51, i64 64, i64 32, i64 128, i32 0, metadata !70} ; [ DW_TAG_member ]
!70 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !39, metadata !71, i32 0, i32 0} ; [ DW_TAG_array_type ]
!71 = metadata !{metadata !72}
!72 = metadata !{i32 786465, i64 0, i64 1}        ; [ DW_TAG_subrange_type ]
!73 = metadata !{i32 786478, i32 0, metadata !67, metadata !"registers", metadata !"registers", metadata !"", metadata !33, i32 49, metadata !74, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !52, i32 49} ; [ DW_TAG_subprogram ]
!74 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !75, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!75 = metadata !{null, metadata !76}
!76 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !67} ; [ DW_TAG_pointer_type ]
!77 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !39, metadata !78, i32 0, i32 0} ; [ DW_TAG_array_type ]
!78 = metadata !{metadata !79}
!79 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!80 = metadata !{metadata !81}
!81 = metadata !{i32 786465, i64 0, i64 0}        ; [ DW_TAG_subrange_type ]
!82 = metadata !{i32 790546, i32 0, null, metadata !"reg.peak_reg", metadata !"reg.peak_reg", metadata !"reg.peak_reg", metadata !28, i32 6, metadata !83, i32 1, i32 1, null} ; [ DW_TAG_variable_field ]
!83 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !84, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!84 = metadata !{i32 786438, null, metadata !"registers", metadata !33, i32 49, i64 64, i64 32, i32 0, i32 0, null, metadata !85, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!85 = metadata !{metadata !69}
!86 = metadata !{i32 786484, i32 0, metadata !27, metadata !"reg", metadata !"reg", metadata !"", metadata !28, i32 6, metadata !87, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!87 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 192, i64 32, i32 0, i32 0, metadata !67, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!88 = metadata !{i32 786484, i32 0, null, metadata !"ssdm_global_array_ins", metadata !"ssdm_global_array_ins", metadata !"_ZL21ssdm_global_array_ins", metadata !28, i32 106, metadata !89, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!89 = metadata !{i32 786434, null, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !28, i32 99, i64 8, i64 8, i32 0, i32 0, null, metadata !90, i32 0, null, null} ; [ DW_TAG_class_type ]
!90 = metadata !{metadata !91}
!91 = metadata !{i32 786478, i32 0, metadata !89, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"", metadata !28, i32 101, metadata !92, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !52, i32 101} ; [ DW_TAG_subprogram ]
!92 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !93, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!93 = metadata !{null, metadata !94}
!94 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !89} ; [ DW_TAG_pointer_type ]
!95 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !96, i32 346, metadata !97, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!96 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!97 = metadata !{i32 786434, null, metadata !"_IO_FILE_plus", metadata !96, i32 344, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!98 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !96, i32 347, metadata !97, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!99 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !96, i32 348, metadata !97, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!100 = metadata !{i32 786484, i32 0, null, metadata !"stdin", metadata !"stdin", metadata !"", metadata !101, i32 165, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!101 = metadata !{i32 786473, metadata !"/usr/include/stdio.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!102 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !103} ; [ DW_TAG_pointer_type ]
!103 = metadata !{i32 786434, null, metadata !"_IO_FILE", metadata !96, i32 271, i64 1728, i64 64, i32 0, i32 0, null, metadata !104, i32 0, null, null} ; [ DW_TAG_class_type ]
!104 = metadata !{metadata !105, metadata !107, metadata !110, metadata !111, metadata !112, metadata !113, metadata !114, metadata !115, metadata !116, metadata !117, metadata !118, metadata !119, metadata !120, metadata !127, metadata !128, metadata !129, metadata !130, metadata !133, metadata !134, metadata !136, metadata !138, metadata !140, metadata !142, metadata !143, metadata !144, metadata !145, metadata !146, metadata !149, metadata !150}
!105 = metadata !{i32 786445, metadata !103, metadata !"_flags", metadata !96, i32 272, i64 32, i64 32, i64 0, i32 0, metadata !106} ; [ DW_TAG_member ]
!106 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!107 = metadata !{i32 786445, metadata !103, metadata !"_IO_read_ptr", metadata !96, i32 277, i64 64, i64 64, i64 64, i32 0, metadata !108} ; [ DW_TAG_member ]
!108 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !109} ; [ DW_TAG_pointer_type ]
!109 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!110 = metadata !{i32 786445, metadata !103, metadata !"_IO_read_end", metadata !96, i32 278, i64 64, i64 64, i64 128, i32 0, metadata !108} ; [ DW_TAG_member ]
!111 = metadata !{i32 786445, metadata !103, metadata !"_IO_read_base", metadata !96, i32 279, i64 64, i64 64, i64 192, i32 0, metadata !108} ; [ DW_TAG_member ]
!112 = metadata !{i32 786445, metadata !103, metadata !"_IO_write_base", metadata !96, i32 280, i64 64, i64 64, i64 256, i32 0, metadata !108} ; [ DW_TAG_member ]
!113 = metadata !{i32 786445, metadata !103, metadata !"_IO_write_ptr", metadata !96, i32 281, i64 64, i64 64, i64 320, i32 0, metadata !108} ; [ DW_TAG_member ]
!114 = metadata !{i32 786445, metadata !103, metadata !"_IO_write_end", metadata !96, i32 282, i64 64, i64 64, i64 384, i32 0, metadata !108} ; [ DW_TAG_member ]
!115 = metadata !{i32 786445, metadata !103, metadata !"_IO_buf_base", metadata !96, i32 283, i64 64, i64 64, i64 448, i32 0, metadata !108} ; [ DW_TAG_member ]
!116 = metadata !{i32 786445, metadata !103, metadata !"_IO_buf_end", metadata !96, i32 284, i64 64, i64 64, i64 512, i32 0, metadata !108} ; [ DW_TAG_member ]
!117 = metadata !{i32 786445, metadata !103, metadata !"_IO_save_base", metadata !96, i32 286, i64 64, i64 64, i64 576, i32 0, metadata !108} ; [ DW_TAG_member ]
!118 = metadata !{i32 786445, metadata !103, metadata !"_IO_backup_base", metadata !96, i32 287, i64 64, i64 64, i64 640, i32 0, metadata !108} ; [ DW_TAG_member ]
!119 = metadata !{i32 786445, metadata !103, metadata !"_IO_save_end", metadata !96, i32 288, i64 64, i64 64, i64 704, i32 0, metadata !108} ; [ DW_TAG_member ]
!120 = metadata !{i32 786445, metadata !103, metadata !"_markers", metadata !96, i32 290, i64 64, i64 64, i64 768, i32 0, metadata !121} ; [ DW_TAG_member ]
!121 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !122} ; [ DW_TAG_pointer_type ]
!122 = metadata !{i32 786434, null, metadata !"_IO_marker", metadata !96, i32 186, i64 192, i64 64, i32 0, i32 0, null, metadata !123, i32 0, null, null} ; [ DW_TAG_class_type ]
!123 = metadata !{metadata !124, metadata !125, metadata !126}
!124 = metadata !{i32 786445, metadata !122, metadata !"_next", metadata !96, i32 187, i64 64, i64 64, i64 0, i32 0, metadata !121} ; [ DW_TAG_member ]
!125 = metadata !{i32 786445, metadata !122, metadata !"_sbuf", metadata !96, i32 188, i64 64, i64 64, i64 64, i32 0, metadata !102} ; [ DW_TAG_member ]
!126 = metadata !{i32 786445, metadata !122, metadata !"_pos", metadata !96, i32 192, i64 32, i64 32, i64 128, i32 0, metadata !106} ; [ DW_TAG_member ]
!127 = metadata !{i32 786445, metadata !103, metadata !"_chain", metadata !96, i32 292, i64 64, i64 64, i64 832, i32 0, metadata !102} ; [ DW_TAG_member ]
!128 = metadata !{i32 786445, metadata !103, metadata !"_fileno", metadata !96, i32 294, i64 32, i64 32, i64 896, i32 0, metadata !106} ; [ DW_TAG_member ]
!129 = metadata !{i32 786445, metadata !103, metadata !"_flags2", metadata !96, i32 298, i64 32, i64 32, i64 928, i32 0, metadata !106} ; [ DW_TAG_member ]
!130 = metadata !{i32 786445, metadata !103, metadata !"_old_offset", metadata !96, i32 300, i64 64, i64 64, i64 960, i32 0, metadata !131} ; [ DW_TAG_member ]
!131 = metadata !{i32 786454, null, metadata !"__off_t", metadata !96, i32 141, i64 0, i64 0, i64 0, i32 0, metadata !132} ; [ DW_TAG_typedef ]
!132 = metadata !{i32 786468, null, metadata !"long int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!133 = metadata !{i32 786445, metadata !103, metadata !"_cur_column", metadata !96, i32 304, i64 16, i64 16, i64 1024, i32 0, metadata !37} ; [ DW_TAG_member ]
!134 = metadata !{i32 786445, metadata !103, metadata !"_vtable_offset", metadata !96, i32 305, i64 8, i64 8, i64 1040, i32 0, metadata !135} ; [ DW_TAG_member ]
!135 = metadata !{i32 786468, null, metadata !"signed char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!136 = metadata !{i32 786445, metadata !103, metadata !"_shortbuf", metadata !96, i32 306, i64 8, i64 8, i64 1048, i32 0, metadata !137} ; [ DW_TAG_member ]
!137 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 8, i64 8, i32 0, i32 0, metadata !109, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!138 = metadata !{i32 786445, metadata !103, metadata !"_lock", metadata !96, i32 310, i64 64, i64 64, i64 1088, i32 0, metadata !139} ; [ DW_TAG_member ]
!139 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!140 = metadata !{i32 786445, metadata !103, metadata !"_offset", metadata !96, i32 319, i64 64, i64 64, i64 1152, i32 0, metadata !141} ; [ DW_TAG_member ]
!141 = metadata !{i32 786454, null, metadata !"__off64_t", metadata !96, i32 142, i64 0, i64 0, i64 0, i32 0, metadata !132} ; [ DW_TAG_typedef ]
!142 = metadata !{i32 786445, metadata !103, metadata !"__pad1", metadata !96, i32 328, i64 64, i64 64, i64 1216, i32 0, metadata !139} ; [ DW_TAG_member ]
!143 = metadata !{i32 786445, metadata !103, metadata !"__pad2", metadata !96, i32 329, i64 64, i64 64, i64 1280, i32 0, metadata !139} ; [ DW_TAG_member ]
!144 = metadata !{i32 786445, metadata !103, metadata !"__pad3", metadata !96, i32 330, i64 64, i64 64, i64 1344, i32 0, metadata !139} ; [ DW_TAG_member ]
!145 = metadata !{i32 786445, metadata !103, metadata !"__pad4", metadata !96, i32 331, i64 64, i64 64, i64 1408, i32 0, metadata !139} ; [ DW_TAG_member ]
!146 = metadata !{i32 786445, metadata !103, metadata !"__pad5", metadata !96, i32 332, i64 64, i64 64, i64 1472, i32 0, metadata !147} ; [ DW_TAG_member ]
!147 = metadata !{i32 786454, null, metadata !"size_t", metadata !96, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !148} ; [ DW_TAG_typedef ]
!148 = metadata !{i32 786468, null, metadata !"long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!149 = metadata !{i32 786445, metadata !103, metadata !"_mode", metadata !96, i32 334, i64 32, i64 32, i64 1536, i32 0, metadata !106} ; [ DW_TAG_member ]
!150 = metadata !{i32 786445, metadata !103, metadata !"_unused2", metadata !96, i32 336, i64 160, i64 8, i64 1568, i32 0, metadata !151} ; [ DW_TAG_member ]
!151 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 160, i64 8, i32 0, i32 0, metadata !109, metadata !152, i32 0, i32 0} ; [ DW_TAG_array_type ]
!152 = metadata !{metadata !153}
!153 = metadata !{i32 786465, i64 0, i64 19}      ; [ DW_TAG_subrange_type ]
!154 = metadata !{i32 786484, i32 0, null, metadata !"stdout", metadata !"stdout", metadata !"", metadata !101, i32 166, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!155 = metadata !{i32 786484, i32 0, null, metadata !"stderr", metadata !"stderr", metadata !"", metadata !101, i32 167, metadata !102, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!156 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !157, i32 27, metadata !106, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!157 = metadata !{i32 786473, metadata !"/usr/include/bits/sys_errlist.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!158 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !157, i32 31, metadata !106, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!159 = metadata !{i32 786484, i32 0, null, metadata !"coef", metadata !"coef", metadata !"_ZL4coef", metadata !160, i32 9, metadata !161, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!160 = metadata !{i32 786473, metadata !"./LUTs.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!161 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 96000, i64 32, i32 0, i32 0, metadata !162, metadata !163, i32 0, i32 0} ; [ DW_TAG_array_type ]
!162 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !39} ; [ DW_TAG_const_type ]
!163 = metadata !{metadata !164}
!164 = metadata !{i32 786465, i64 0, i64 2999}    ; [ DW_TAG_subrange_type ]
!165 = metadata !{i32 786484, i32 0, null, metadata !"data", metadata !"data", metadata !"_ZL4data", metadata !160, i32 5, metadata !166, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!166 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 48000, i64 16, i32 0, i32 0, metadata !167, metadata !163, i32 0, i32 0} ; [ DW_TAG_array_type ]
!167 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !36} ; [ DW_TAG_const_type ]
!168 = metadata !{metadata !169}
!169 = metadata !{i32 0, i32 15, metadata !170}
!170 = metadata !{metadata !171}
!171 = metadata !{metadata !"out.peakAmp", metadata !172, metadata !"unsigned short", i32 0, i32 15}
!172 = metadata !{metadata !173}
!173 = metadata !{i32 0, i32 0, i32 2}
!174 = metadata !{metadata !175}
!175 = metadata !{i32 0, i32 0, metadata !176}
!176 = metadata !{metadata !177}
!177 = metadata !{metadata !"out.peakOut", metadata !172, metadata !"bool", i32 0, i32 0}
!178 = metadata !{metadata !179}
!179 = metadata !{i32 0, i32 31, metadata !180}
!180 = metadata !{metadata !181}
!181 = metadata !{metadata !"out.filOut", metadata !172, metadata !"unsigned int", i32 0, i32 31}
!182 = metadata !{metadata !183}
!183 = metadata !{i32 0, i32 31, metadata !184}
!184 = metadata !{metadata !185}
!185 = metadata !{metadata !"in.lincoeff", metadata !172, metadata !"unsigned int", i32 0, i32 31}
!186 = metadata !{metadata !187}
!187 = metadata !{i32 0, i32 15, metadata !188}
!188 = metadata !{metadata !189}
!189 = metadata !{metadata !"in.data_input", metadata !172, metadata !"unsigned short", i32 0, i32 15}
!190 = metadata !{i32 790531, metadata !191, metadata !"in[0].data_input", null, i32 5, metadata !192, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!191 = metadata !{i32 786689, metadata !27, metadata !"in", metadata !28, i32 16777221, metadata !31, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!192 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !193} ; [ DW_TAG_pointer_type ]
!193 = metadata !{i32 786438, null, metadata !"inPut", metadata !33, i32 44, i64 16, i64 32, i32 0, i32 0, null, metadata !194, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!194 = metadata !{metadata !35}
!195 = metadata !{i32 5, i32 16, metadata !27, null}
!196 = metadata !{i32 790531, metadata !191, metadata !"in[0].lincoeff", null, i32 5, metadata !197, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!197 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !198} ; [ DW_TAG_pointer_type ]
!198 = metadata !{i32 786438, null, metadata !"inPut", metadata !33, i32 44, i64 32, i64 32, i32 0, i32 0, null, metadata !199, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!199 = metadata !{metadata !38}
!200 = metadata !{i32 790531, metadata !201, metadata !"out[0].filOut", null, i32 5, metadata !202, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!201 = metadata !{i32 786689, metadata !27, metadata !"out", metadata !28, i32 33554437, metadata !41, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!202 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !203} ; [ DW_TAG_pointer_type ]
!203 = metadata !{i32 786438, null, metadata !"outPut", metadata !33, i32 38, i64 32, i64 32, i32 0, i32 0, null, metadata !204, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!204 = metadata !{metadata !44}
!205 = metadata !{i32 5, i32 30, metadata !27, null}
!206 = metadata !{i32 790531, metadata !201, metadata !"out[0].peakOut", null, i32 5, metadata !207, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!207 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !208} ; [ DW_TAG_pointer_type ]
!208 = metadata !{i32 786438, null, metadata !"outPut", metadata !33, i32 38, i64 8, i64 32, i32 0, i32 0, null, metadata !209, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!209 = metadata !{metadata !45}
!210 = metadata !{i32 790531, metadata !201, metadata !"out[0].peakAmp", null, i32 5, metadata !211, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!211 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !212} ; [ DW_TAG_pointer_type ]
!212 = metadata !{i32 786438, null, metadata !"outPut", metadata !33, i32 38, i64 16, i64 32, i32 0, i32 0, null, metadata !213, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!213 = metadata !{metadata !47}
!214 = metadata !{i32 15, i32 11, metadata !215, null}
!215 = metadata !{i32 786443, metadata !216, i32 13, i32 26, metadata !28, i32 2} ; [ DW_TAG_lexical_block ]
!216 = metadata !{i32 786443, metadata !217, i32 13, i32 3, metadata !28, i32 1} ; [ DW_TAG_lexical_block ]
!217 = metadata !{i32 786443, metadata !27, i32 5, i32 38, metadata !28, i32 0} ; [ DW_TAG_lexical_block ]
!218 = metadata !{i32 19, i32 24, metadata !219, metadata !214}
!219 = metadata !{i32 786478, i32 0, metadata !28, metadata !"LinFil", metadata !"LinFil", metadata !"_Z6LinFiltjR9registerss", metadata !28, i32 19, metadata !220, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !52, i32 19} ; [ DW_TAG_subprogram ]
!220 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !221, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!221 = metadata !{metadata !42, metadata !36, metadata !39, metadata !222, metadata !223}
!222 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !67} ; [ DW_TAG_reference_type ]
!223 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!224 = metadata !{i32 786689, metadata !219, metadata !"data_int", metadata !28, i32 16777235, metadata !36, i32 0, metadata !214} ; [ DW_TAG_arg_variable ]
!225 = metadata !{i32 786689, metadata !219, metadata !"lincoeff", metadata !28, i32 33554451, metadata !39, i32 0, metadata !214} ; [ DW_TAG_arg_variable ]
!226 = metadata !{i32 19, i32 43, metadata !219, metadata !214}
!227 = metadata !{i32 43, i32 3, metadata !228, metadata !214}
!228 = metadata !{i32 786443, metadata !219, i32 19, i32 75, metadata !28, i32 3} ; [ DW_TAG_lexical_block ]
!229 = metadata !{i32 786688, metadata !228, metadata !"uncorrectedADC", metadata !28, i32 22, metadata !36, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!230 = metadata !{i32 44, i32 3, metadata !228, metadata !214}
!231 = metadata !{i32 786688, metadata !228, metadata !"coeff", metadata !28, i32 25, metadata !39, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!232 = metadata !{i32 45, i32 8, metadata !228, metadata !214}
!233 = metadata !{i32 46, i32 3, metadata !228, metadata !214}
!234 = metadata !{i32 786688, metadata !228, metadata !"base", metadata !28, i32 24, metadata !36, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!235 = metadata !{i32 47, i32 3, metadata !228, metadata !214}
!236 = metadata !{i32 786688, metadata !228, metadata !"shiftlin", metadata !28, i32 26, metadata !237, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!237 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !28, i32 49, i64 0, i64 0, i64 0, i32 0, metadata !238} ; [ DW_TAG_typedef ]
!238 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!239 = metadata !{i32 48, i32 3, metadata !228, metadata !214}
!240 = metadata !{i32 786688, metadata !228, metadata !"mult", metadata !28, i32 27, metadata !237, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!241 = metadata !{i32 49, i32 3, metadata !228, metadata !214}
!242 = metadata !{i32 786688, metadata !228, metadata !"correctedADC", metadata !28, i32 21, metadata !243, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!243 = metadata !{i32 786454, null, metadata !"int16_t", metadata !28, i32 38, i64 0, i64 0, i64 0, i32 0, metadata !223} ; [ DW_TAG_typedef ]
!244 = metadata !{i32 51, i32 3, metadata !228, metadata !214}
!245 = metadata !{i32 52, i32 3, metadata !228, metadata !214}
!246 = metadata !{i32 786688, metadata !228, metadata !"linearizerOutput", metadata !28, i32 23, metadata !39, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!247 = metadata !{i32 55, i32 3, metadata !228, metadata !214}
!248 = metadata !{i32 786688, metadata !228, metadata !"m", metadata !28, i32 31, metadata !39, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!249 = metadata !{i32 56, i32 28, metadata !250, metadata !214}
!250 = metadata !{i32 786443, metadata !251, i32 56, i32 27, metadata !28, i32 5} ; [ DW_TAG_lexical_block ]
!251 = metadata !{i32 786443, metadata !228, i32 56, i32 3, metadata !28, i32 4} ; [ DW_TAG_lexical_block ]
!252 = metadata !{i32 58, i32 1, metadata !250, metadata !214}
!253 = metadata !{i32 59, i32 2, metadata !250, metadata !214}
!254 = metadata !{i32 60, i32 3, metadata !250, metadata !214}
!255 = metadata !{i32 61, i32 3, metadata !228, metadata !214}
!256 = metadata !{i32 62, i32 3, metadata !228, metadata !214}
!257 = metadata !{i32 786688, metadata !228, metadata !"pro", metadata !28, i32 33, metadata !258, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!258 = metadata !{i32 786454, null, metadata !"int32_t", metadata !28, i32 39, i64 0, i64 0, i64 0, i32 0, metadata !106} ; [ DW_TAG_typedef ]
!259 = metadata !{i32 63, i32 3, metadata !228, metadata !214}
!260 = metadata !{i32 67, i32 2, metadata !261, metadata !214}
!261 = metadata !{i32 786443, metadata !262, i32 65, i32 27, metadata !28, i32 7} ; [ DW_TAG_lexical_block ]
!262 = metadata !{i32 786443, metadata !228, i32 65, i32 3, metadata !28, i32 6} ; [ DW_TAG_lexical_block ]
!263 = metadata !{i32 68, i32 5, metadata !261, metadata !214}
!264 = metadata !{i32 69, i32 5, metadata !261, metadata !214}
!265 = metadata !{i32 72, i32 3, metadata !228, metadata !214}
!266 = metadata !{i32 73, i32 3, metadata !228, metadata !214}
!267 = metadata !{i32 74, i32 1, metadata !228, metadata !214}
!268 = metadata !{i32 790529, metadata !269, metadata !"o.filOut", null, i32 38, metadata !203, i32 0, metadata !214} ; [ DW_TAG_auto_variable_field ]
!269 = metadata !{i32 786688, metadata !228, metadata !"o", metadata !28, i32 38, metadata !57, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!270 = metadata !{i32 77, i32 3, metadata !228, metadata !214}
!271 = metadata !{i32 81, i32 2, metadata !272, metadata !214}
!272 = metadata !{i32 786443, metadata !228, i32 77, i32 69, metadata !28, i32 8} ; [ DW_TAG_lexical_block ]
!273 = metadata !{i32 84, i32 2, metadata !272, metadata !214}
!274 = metadata !{i32 786688, metadata !228, metadata !"tmpPeak", metadata !28, i32 37, metadata !36, i32 0, metadata !214} ; [ DW_TAG_auto_variable ]
!275 = metadata !{i32 85, i32 2, metadata !272, metadata !214}
!276 = metadata !{i32 790529, metadata !269, metadata !"o.peakAmp", null, i32 38, metadata !212, i32 0, metadata !214} ; [ DW_TAG_auto_variable_field ]
!277 = metadata !{i32 88, i32 2, metadata !272, metadata !214}
!278 = metadata !{i32 90, i32 27, metadata !279, metadata !214}
!279 = metadata !{i32 786443, metadata !280, i32 90, i32 26, metadata !28, i32 12} ; [ DW_TAG_lexical_block ]
!280 = metadata !{i32 786443, metadata !228, i32 90, i32 3, metadata !28, i32 11} ; [ DW_TAG_lexical_block ]
!281 = metadata !{i32 92, i32 1, metadata !279, metadata !214}
!282 = metadata !{i32 93, i32 2, metadata !279, metadata !214}
!283 = metadata !{i32 94, i32 3, metadata !279, metadata !214}
!284 = metadata !{i32 95, i32 3, metadata !228, metadata !214}
!285 = metadata !{i32 790535, metadata !286, metadata !"agg.result.filOut", null, i32 19, metadata !202, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!286 = metadata !{i32 786690, metadata !219, metadata !"agg.result", metadata !28, i32 19, metadata !41, i32 0, i32 0} ; [ DW_TAG_return_variable ]
!287 = metadata !{i32 790535, metadata !286, metadata !"agg.result.peakOut", null, i32 19, metadata !207, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!288 = metadata !{i32 790535, metadata !286, metadata !"agg.result.peakAmp", null, i32 19, metadata !211, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!289 = metadata !{i32 17, i32 1, metadata !217, null}
