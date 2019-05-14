; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG/TPG/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@reg_shift_reg_0_3 = internal unnamed_addr global i32 0 ; [#uses=2 type=i32*]
@reg_shift_reg_0_2 = internal global i21 0        ; [#uses=2 type=i21*]
@reg_shift_reg_0_1 = internal global i21 0        ; [#uses=2 type=i21*]
@reg_shift_reg_0_0 = internal global i21 0        ; [#uses=2 type=i21*]
@reg_peak_reg_0_1 = internal global i18 0         ; [#uses=2 type=i18*]
@reg_peak_reg_0_0 = internal global i18 0         ; [#uses=2 type=i18*]
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@TPG_str = internal unnamed_addr constant [4 x i8] c"TPG\00" ; [#uses=1 type=[4 x i8]*]
@p_str6 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=2 type=[12 x i8]*]
@p_str4 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1 ; [#uses=6 type=[12 x i8]*]

; [#uses=2]
declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
declare i28 @llvm.part.select.i28(i28, i32, i32) nounwind readnone

; [#uses=1]
declare i27 @llvm.part.select.i27(i27, i32, i32) nounwind readnone

; [#uses=1]
declare i25 @llvm.part.select.i25(i25, i32, i32) nounwind readnone

; [#uses=2]
declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

; [#uses=1]
declare i21 @llvm.part.select.i21(i21, i32, i32) nounwind readnone

; [#uses=2]
declare i18 @llvm.part.select.i18(i18, i32, i32) nounwind readnone

; [#uses=1]
declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

; [#uses=23]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_Write.ap_auto.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_Write.ap_auto.i1P(i1*, i1) {
entry:
  store i1 %1, i1* %0
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_Write.ap_auto.i16P(i16*, i16) {
entry:
  store i16 %1, i16* %0
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=4]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=5]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_Read.ap_auto.i32P(i32*) {
entry:
  %empty = load i32* %0                           ; [#uses=1 type=i32]
  ret i32 %empty
}

; [#uses=1]
define weak i16 @_ssdm_op_Read.ap_auto.i16P(i16*) {
entry:
  %empty = load i16* %0                           ; [#uses=1 type=i16]
  ret i16 %empty
}

; [#uses=1]
define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_18 = trunc i32 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_18
}

; [#uses=1]
define weak i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2) ; [#uses=1 type=i24]
  %empty_19 = trunc i24 %empty to i8              ; [#uses=1 type=i8]
  ret i8 %empty_19
}

; [#uses=1]
define weak i6 @_ssdm_op_PartSelect.i6.i18.i32.i32(i18, i32, i32) nounwind readnone {
entry:
  %empty = call i18 @llvm.part.select.i18(i18 %0, i32 %1, i32 %2) ; [#uses=1 type=i18]
  %empty_20 = trunc i18 %empty to i6              ; [#uses=1 type=i6]
  ret i6 %empty_20
}

; [#uses=1]
define weak i6 @_ssdm_op_PartSelect.i6.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2) ; [#uses=1 type=i16]
  %empty_21 = trunc i16 %empty to i6              ; [#uses=1 type=i6]
  ret i6 %empty_21
}

; [#uses=1]
define weak i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2) ; [#uses=1 type=i24]
  %empty_22 = trunc i24 %empty to i4              ; [#uses=1 type=i4]
  ret i4 %empty_22
}

; [#uses=0]
declare i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=0]
declare i27 @_ssdm_op_PartSelect.i27.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=2]
define weak i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2) ; [#uses=1 type=i32]
  %empty_23 = trunc i32 %empty to i26             ; [#uses=1 type=i26]
  ret i26 %empty_23
}

; [#uses=0]
declare i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone

; [#uses=1]
define weak i21 @_ssdm_op_PartSelect.i21.i27.i32.i32(i27, i32, i32) nounwind readnone {
entry:
  %empty = call i27 @llvm.part.select.i27(i27 %0, i32 %1, i32 %2) ; [#uses=1 type=i27]
  %empty_24 = trunc i27 %empty to i21             ; [#uses=1 type=i21]
  ret i21 %empty_24
}

; [#uses=1]
define weak i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25, i32, i32) nounwind readnone {
entry:
  %empty = call i25 @llvm.part.select.i25(i25 %0, i32 %1, i32 %2) ; [#uses=1 type=i25]
  %empty_25 = trunc i25 %empty to i19             ; [#uses=1 type=i19]
  ret i19 %empty_25
}

; [#uses=1]
define weak i19 @_ssdm_op_PartSelect.i19.i21.i32.i32(i21, i32, i32) nounwind readnone {
entry:
  %empty = call i21 @llvm.part.select.i21(i21 %0, i32 %1, i32 %2) ; [#uses=1 type=i21]
  %empty_26 = trunc i21 %empty to i19             ; [#uses=1 type=i19]
  ret i19 %empty_26
}

; [#uses=0]
declare i18 @_ssdm_op_PartSelect.i18.i28.i32.i32(i28, i32, i32) nounwind readnone

; [#uses=1]
define weak i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18, i32, i32) nounwind readnone {
entry:
  %empty = call i18 @llvm.part.select.i18(i18 %0, i32 %1, i32 %2) ; [#uses=1 type=i18]
  %empty_27 = trunc i18 %empty to i16             ; [#uses=1 type=i16]
  ret i16 %empty_27
}

; [#uses=0]
declare i12 @_ssdm_op_PartSelect.i12.i24.i32.i32(i24, i32, i32) nounwind readnone

; [#uses=0]
declare i12 @_ssdm_op_PartSelect.i12.i16.i32.i32(i16, i32, i32) nounwind readnone

; [#uses=1]
define weak i10 @_ssdm_op_PartSelect.i10.i28.i32.i32(i28, i32, i32) nounwind readnone {
entry:
  %empty = call i28 @llvm.part.select.i28(i28 %0, i32 %1, i32 %2) ; [#uses=1 type=i28]
  %empty_28 = trunc i28 %empty to i10             ; [#uses=1 type=i10]
  ret i10 %empty_28
}

; [#uses=0]
declare i10 @_ssdm_op_PartSelect.i10.i16.i32.i32(i16, i32, i32) nounwind readnone

; [#uses=1]
define weak i1 @_ssdm_op_BitSelect.i1.i29.i32(i29, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i29                    ; [#uses=1 type=i29]
  %empty_29 = shl i29 1, %empty                   ; [#uses=1 type=i29]
  %empty_30 = and i29 %0, %empty_29               ; [#uses=1 type=i29]
  %empty_31 = icmp ne i29 %empty_30, 0            ; [#uses=1 type=i1]
  ret i1 %empty_31
}

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i30.i2(i30, i2) nounwind readnone

; [#uses=0]
declare i32 @_ssdm_op_BitConcatenate.i32.i27.i5(i27, i5) nounwind readnone

; [#uses=1]
define weak i26 @_ssdm_op_BitConcatenate.i26.i21.i5(i21, i5) nounwind readnone {
entry:
  %empty = zext i21 %0 to i26                     ; [#uses=1 type=i26]
  %empty_32 = zext i5 %1 to i26                   ; [#uses=1 type=i26]
  %empty_33 = shl i26 %empty, 5                   ; [#uses=1 type=i26]
  %empty_34 = or i26 %empty_33, %empty_32         ; [#uses=1 type=i26]
  ret i26 %empty_34
}

; [#uses=1]
define weak i24 @_ssdm_op_BitConcatenate.i24.i19.i5(i19, i5) nounwind readnone {
entry:
  %empty = zext i19 %0 to i24                     ; [#uses=1 type=i24]
  %empty_35 = zext i5 %1 to i24                   ; [#uses=1 type=i24]
  %empty_36 = shl i24 %empty, 5                   ; [#uses=1 type=i24]
  %empty_37 = or i24 %empty_36, %empty_35         ; [#uses=1 type=i24]
  ret i24 %empty_37
}

; [#uses=1]
define weak i22 @_ssdm_op_BitConcatenate.i22.i19.i3(i19, i3) nounwind readnone {
entry:
  %empty = zext i19 %0 to i22                     ; [#uses=1 type=i22]
  %empty_38 = zext i3 %1 to i22                   ; [#uses=1 type=i22]
  %empty_39 = shl i22 %empty, 3                   ; [#uses=1 type=i22]
  %empty_40 = or i22 %empty_39, %empty_38         ; [#uses=1 type=i22]
  ret i22 %empty_40
}

; [#uses=0]
declare void @_ssdm_SpecDependence(...) nounwind

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind section ".text.startup"

; [#uses=0]
define void @TPG(i16* %in_0_data_input, i32* %in_0_lincoeff, i32* %out_0_filOut, i1* %out_0_peakOut, i16* %out_0_peakAmp) {
_ifconv:
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %out_0_peakAmp), !map !26
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_0_peakOut), !map !32
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %out_0_filOut), !map !36
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %in_0_lincoeff), !map !40
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %in_0_data_input), !map !44
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @TPG_str) nounwind
  call void @llvm.dbg.value(metadata !{i16* %in_0_data_input}, i64 0, metadata !48), !dbg !86 ; [debug line = 5:16] [debug variable = in[0].data_input]
  call void @llvm.dbg.value(metadata !{i32* %in_0_lincoeff}, i64 0, metadata !87), !dbg !86 ; [debug line = 5:16] [debug variable = in[0].lincoeff]
  call void @llvm.dbg.value(metadata !{i32* %out_0_filOut}, i64 0, metadata !91), !dbg !96 ; [debug line = 5:30] [debug variable = out[0].filOut]
  call void @llvm.dbg.value(metadata !{i1* %out_0_peakOut}, i64 0, metadata !97), !dbg !96 ; [debug line = 5:30] [debug variable = out[0].peakOut]
  call void @llvm.dbg.value(metadata !{i16* %out_0_peakAmp}, i64 0, metadata !101), !dbg !96 ; [debug line = 5:30] [debug variable = out[0].peakAmp]
  %in_0_data_input_rea = call i16 @_ssdm_op_Read.ap_auto.i16P(i16* %in_0_data_input), !dbg !105 ; [#uses=1 type=i16] [debug line = 15:11]
  %uncorrectedADC = trunc i16 %in_0_data_input_rea to i12, !dbg !105 ; [#uses=1 type=i12] [debug line = 15:11]
  %coeff = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %in_0_lincoeff), !dbg !105 ; [#uses=2 type=i32] [debug line = 15:11]
  %tmp_2 = trunc i32 %coeff to i24, !dbg !109     ; [#uses=1 type=i24] [debug line = 19:24@15:11]
  call void @llvm.dbg.value(metadata !{i16 %in_0_data_input_rea}, i64 0, metadata !129), !dbg !109 ; [debug line = 19:24@15:11] [debug variable = data_int]
  call void @llvm.dbg.value(metadata !{i32 %coeff}, i64 0, metadata !130), !dbg !131 ; [debug line = 19:43@15:11] [debug variable = lincoeff]
  %uncorrectedADC_cast = zext i12 %uncorrectedADC to i13, !dbg !132 ; [#uses=1 type=i13] [debug line = 43:3@15:11]
  call void @llvm.dbg.value(metadata !{i12 %uncorrectedADC}, i64 0, metadata !134), !dbg !132 ; [debug line = 43:3@15:11] [debug variable = uncorrectedADC]
  %tmp = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %coeff, i32 16, i32 23), !dbg !135 ; [#uses=1 type=i8] [debug line = 44:3@15:11]
  %icmp = icmp eq i8 %tmp, 0, !dbg !135           ; [#uses=1 type=i1] [debug line = 44:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %coeff}, i64 0, metadata !136), !dbg !137 ; [debug line = 45:8@15:11] [debug variable = coeff]
  %tmp_1 = select i1 %icmp, i24 0, i24 %tmp_2, !dbg !135 ; [#uses=3 type=i24] [debug line = 44:3@15:11]
  %base = trunc i24 %tmp_1 to i12, !dbg !138      ; [#uses=1 type=i12] [debug line = 46:3@15:11]
  %base_cast = zext i12 %base to i13, !dbg !138   ; [#uses=1 type=i13] [debug line = 46:3@15:11]
  call void @llvm.dbg.value(metadata !{i12 %base}, i64 0, metadata !139), !dbg !138 ; [debug line = 46:3@15:11] [debug variable = base]
  %shiftlin = call i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24 %tmp_1, i32 12, i32 15), !dbg !140 ; [#uses=1 type=i4] [debug line = 47:3@15:11]
  call void @llvm.dbg.value(metadata !{i4 %shiftlin}, i64 0, metadata !141), !dbg !140 ; [debug line = 47:3@15:11] [debug variable = shiftlin]
  %mult = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %tmp_1, i32 16, i32 23), !dbg !144 ; [#uses=1 type=i8] [debug line = 48:3@15:11]
  call void @llvm.dbg.value(metadata !{i8 %mult}, i64 0, metadata !145), !dbg !144 ; [debug line = 48:3@15:11] [debug variable = mult]
  %correctedADC = sub i13 %uncorrectedADC_cast, %base_cast, !dbg !146 ; [#uses=1 type=i13] [debug line = 49:3@15:11]
  call void @llvm.dbg.value(metadata !{i13 %correctedADC}, i64 0, metadata !147), !dbg !146 ; [debug line = 49:3@15:11] [debug variable = correctedADC]
  %tmp_i_cast = sext i13 %correctedADC to i21, !dbg !149 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %tmp_3_i_cast = zext i8 %mult to i21, !dbg !149 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %prod = mul i21 %tmp_3_i_cast, %tmp_i_cast, !dbg !149 ; [#uses=1 type=i21] [debug line = 51:3@15:11]
  %tmp_6_i_cast = zext i4 %shiftlin to i5, !dbg !150 ; [#uses=1 type=i5] [debug line = 52:3@15:11]
  %tmp_8_i = add i5 2, %tmp_6_i_cast, !dbg !150   ; [#uses=1 type=i5] [debug line = 52:3@15:11]
  %tmp_8_i_cast = zext i5 %tmp_8_i to i21, !dbg !150 ; [#uses=1 type=i21] [debug line = 52:3@15:11]
  %linearizerOutput = ashr i21 %prod, %tmp_8_i_cast, !dbg !150 ; [#uses=2 type=i21] [debug line = 52:3@15:11]
  call void @llvm.dbg.value(metadata !{i21 %linearizerOutput}, i64 0, metadata !151), !dbg !150 ; [debug line = 52:3@15:11] [debug variable = linearizerOutput]
  %m = load i32* @reg_shift_reg_0_3, align 4, !dbg !152 ; [#uses=2 type=i32] [debug line = 55:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %m}, i64 0, metadata !153), !dbg !152 ; [debug line = 55:3@15:11] [debug variable = m]
  %tmp_9_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4), !dbg !154 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  %reg_shift_reg_0_2_lo = load i21* @reg_shift_reg_0_2, align 4 ; [#uses=1 type=i21]
  %extLd9 = sext i21 %reg_shift_reg_0_2_lo to i32 ; [#uses=2 type=i32]
  store i32 %extLd9, i32* @reg_shift_reg_0_3, align 4, !dbg !157 ; [debug line = 59:2@15:11]
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_9_i), !dbg !158 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  %tmp_10_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4), !dbg !154 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  %reg_shift_reg_0_1_lo = load i21* @reg_shift_reg_0_1, align 4 ; [#uses=2 type=i21]
  store i21 %reg_shift_reg_0_1_lo, i21* @reg_shift_reg_0_2, align 4, !dbg !157 ; [debug line = 59:2@15:11]
  %empty_41 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_10_i), !dbg !158 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  %tmp_11_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4), !dbg !154 ; [#uses=1 type=i32] [debug line = 56:28@15:11]
  %reg_shift_reg_0_0_lo = load i21* @reg_shift_reg_0_0, align 4 ; [#uses=3 type=i21]
  %extLd_cast = sext i21 %reg_shift_reg_0_0_lo to i27, !dbg !157 ; [#uses=1 type=i27] [debug line = 59:2@15:11]
  store i21 %reg_shift_reg_0_0_lo, i21* @reg_shift_reg_0_1, align 4, !dbg !157 ; [debug line = 59:2@15:11]
  %empty_42 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_11_i), !dbg !158 ; [#uses=0 type=i32] [debug line = 60:3@15:11]
  store i21 %linearizerOutput, i21* @reg_shift_reg_0_0, align 4, !dbg !159 ; [debug line = 61:3@15:11]
  %tmp_7 = shl i32 %m, 5, !dbg !160               ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  %p_neg_i = sub i32 0, %tmp_7                    ; [#uses=1 type=i32]
  %tmp_9 = shl i32 %m, 2, !dbg !160               ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  %pro = sub i32 %p_neg_i, %tmp_9, !dbg !160      ; [#uses=1 type=i32] [debug line = 62:3@15:11]
  call void @llvm.dbg.value(metadata !{i32 %pro}, i64 0, metadata !161), !dbg !160 ; [debug line = 62:3@15:11] [debug variable = pro]
  %tmp_13_i = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %pro, i32 6, i32 31), !dbg !164 ; [#uses=1 type=i26] [debug line = 63:3@15:11]
  %mul_cast = sext i26 %tmp_13_i to i28, !dbg !164 ; [#uses=1 type=i28] [debug line = 63:3@15:11]
  %pro_1_i = mul i32 -35, %extLd9, !dbg !165      ; [#uses=1 type=i32] [debug line = 67:2@15:11]
  %tmp_15_i = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %pro_1_i, i32 6, i32 31), !dbg !168 ; [#uses=1 type=i26] [debug line = 68:5@15:11]
  %mul_i_cast = sext i26 %tmp_15_i to i27, !dbg !168 ; [#uses=1 type=i27] [debug line = 68:5@15:11]
  %tmp_11 = call i19 @_ssdm_op_PartSelect.i19.i21.i32.i32(i21 %reg_shift_reg_0_1_lo, i32 2, i32 20), !dbg !168 ; [#uses=1 type=i19] [debug line = 68:5@15:11]
  %mul_1_i_cast = sext i19 %tmp_11 to i27, !dbg !165 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %tmp_3 = call i26 @_ssdm_op_BitConcatenate.i26.i21.i5(i21 %reg_shift_reg_0_0_lo, i5 0) ; [#uses=1 type=i26]
  %p_shl1_i_cast = sext i26 %tmp_3 to i27, !dbg !165 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %pro_1_2_i = sub i27 %p_shl1_i_cast, %extLd_cast, !dbg !165 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %tmp_12 = call i21 @_ssdm_op_PartSelect.i21.i27.i32.i32(i27 %pro_1_2_i, i32 6, i32 26), !dbg !168 ; [#uses=1 type=i21] [debug line = 68:5@15:11]
  %mul_i_cast_43 = sext i21 %tmp_12 to i27, !dbg !165 ; [#uses=1 type=i27] [debug line = 67:2@15:11]
  %tmp_13 = trunc i21 %linearizerOutput to i19    ; [#uses=2 type=i19]
  %p_shl8_i = call i24 @_ssdm_op_BitConcatenate.i24.i19.i5(i19 %tmp_13, i5 0), !dbg !165 ; [#uses=1 type=i24] [debug line = 67:2@15:11]
  %p_shl8_i_cast = sext i24 %p_shl8_i to i25, !dbg !165 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %p_shl9_i = call i22 @_ssdm_op_BitConcatenate.i22.i19.i3(i19 %tmp_13, i3 0), !dbg !165 ; [#uses=1 type=i22] [debug line = 67:2@15:11]
  %p_shl9_i_cast = sext i22 %p_shl9_i to i25, !dbg !165 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %pro_1_3_i = sub i25 %p_shl8_i_cast, %p_shl9_i_cast, !dbg !165 ; [#uses=1 type=i25] [debug line = 67:2@15:11]
  %tmp_5 = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %pro_1_3_i, i32 6, i32 24), !dbg !168 ; [#uses=1 type=i19] [debug line = 68:5@15:11]
  %mul_3_i_cast = sext i19 %tmp_5 to i27, !dbg !169 ; [#uses=1 type=i27] [debug line = 69:5@15:11]
  %tmp2 = add i27 %mul_i_cast_43, %mul_1_i_cast, !dbg !169 ; [#uses=2 type=i27] [debug line = 69:5@15:11]
  %tmp2_cast = sext i27 %tmp2 to i29, !dbg !169   ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %tmp4 = add i27 %mul_3_i_cast, %mul_i_cast, !dbg !169 ; [#uses=1 type=i27] [debug line = 69:5@15:11]
  %tmp4_cast = sext i27 %tmp4 to i28, !dbg !169   ; [#uses=1 type=i28] [debug line = 69:5@15:11]
  %tmp3 = add i28 %mul_cast, %tmp4_cast, !dbg !169 ; [#uses=2 type=i28] [debug line = 69:5@15:11]
  %tmp3_cast = sext i28 %tmp3 to i29, !dbg !169   ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %tmp_6 = sext i27 %tmp2 to i28                  ; [#uses=1 type=i28]
  %acc_1_3_i = add i29 %tmp2_cast, %tmp3_cast, !dbg !169 ; [#uses=1 type=i29] [debug line = 69:5@15:11]
  %acc_1_3_i_cast = add i28 %tmp3, %tmp_6, !dbg !169 ; [#uses=1 type=i28] [debug line = 69:5@15:11]
  %tmp_14 = call i1 @_ssdm_op_BitSelect.i1.i29.i32(i29 %acc_1_3_i, i32 28), !dbg !170 ; [#uses=1 type=i1] [debug line = 72:3@15:11]
  %p_acc_i = select i1 %tmp_14, i28 0, i28 %acc_1_3_i_cast, !dbg !170 ; [#uses=2 type=i28] [debug line = 72:3@15:11]
  %tmp_15 = trunc i28 %p_acc_i to i18, !dbg !170  ; [#uses=1 type=i18] [debug line = 72:3@15:11]
  %tmp_16 = call i10 @_ssdm_op_PartSelect.i10.i28.i32.i32(i28 %p_acc_i, i32 18, i32 27), !dbg !171 ; [#uses=1 type=i10] [debug line = 73:3@15:11]
  %icmp1 = icmp ne i10 %tmp_16, 0, !dbg !171      ; [#uses=1 type=i1] [debug line = 73:3@15:11]
  %o_filOut = select i1 %icmp1, i18 -1, i18 %tmp_15, !dbg !171 ; [#uses=3 type=i18] [debug line = 73:3@15:11]
  %o_filOut_cast = zext i18 %o_filOut to i32, !dbg !171 ; [#uses=1 type=i32] [debug line = 73:3@15:11]
  call void @llvm.dbg.value(metadata !{i18 %o_filOut}, i64 0, metadata !172), !dbg !174 ; [debug line = 74:1@15:11] [debug variable = o.filOut]
  %reg_peak_reg_0_0_loa = load i18* @reg_peak_reg_0_0, align 4 ; [#uses=5 type=i18]
  %tmp_19_i = icmp ugt i18 %reg_peak_reg_0_0_loa, %o_filOut, !dbg !175 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %reg_peak_reg_0_1_loa = load i18* @reg_peak_reg_0_1, align 4 ; [#uses=1 type=i18]
  %tmp_20_i = icmp ugt i18 %reg_peak_reg_0_0_loa, %reg_peak_reg_0_1_loa, !dbg !175 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %agg_result_peakOut_w = and i1 %tmp_19_i, %tmp_20_i, !dbg !175 ; [#uses=1 type=i1] [debug line = 77:3@15:11]
  %tmp_17 = call i6 @_ssdm_op_PartSelect.i6.i18.i32.i32(i18 %reg_peak_reg_0_0_loa, i32 12, i32 17), !dbg !176 ; [#uses=1 type=i6] [debug line = 81:2@15:11]
  %icmp2 = icmp ne i6 %tmp_17, 0, !dbg !176       ; [#uses=1 type=i1] [debug line = 81:2@15:11]
  %tmp_8 = call i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18 %reg_peak_reg_0_0_loa, i32 2, i32 17), !dbg !178 ; [#uses=1 type=i16] [debug line = 84:2@15:11]
  %tmpPeak = select i1 %icmp2, i16 1023, i16 %tmp_8, !dbg !176 ; [#uses=2 type=i16] [debug line = 81:2@15:11]
  %tmp_18 = trunc i16 %tmpPeak to i10, !dbg !178  ; [#uses=1 type=i10] [debug line = 84:2@15:11]
  call void @llvm.dbg.value(metadata !{i16 %tmpPeak}, i64 0, metadata !179), !dbg !178 ; [debug line = 84:2@15:11] [debug variable = tmpPeak]
  %tmp_19 = call i6 @_ssdm_op_PartSelect.i6.i16.i32.i32(i16 %tmpPeak, i32 10, i32 15), !dbg !180 ; [#uses=1 type=i6] [debug line = 85:2@15:11]
  %icmp3 = icmp ne i6 %tmp_19, 0, !dbg !180       ; [#uses=1 type=i1] [debug line = 85:2@15:11]
  %tmpPeak_2 = select i1 %icmp3, i10 -1, i10 %tmp_18, !dbg !180 ; [#uses=1 type=i10] [debug line = 85:2@15:11]
  %tmpPeak_2_cast = zext i10 %tmpPeak_2 to i16, !dbg !180 ; [#uses=1 type=i16] [debug line = 85:2@15:11]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak_2}, i64 0, metadata !179), !dbg !180 ; [debug line = 85:2@15:11] [debug variable = tmpPeak]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak_2}, i64 0, metadata !181), !dbg !182 ; [debug line = 88:2@15:11] [debug variable = o.peakAmp]
  %tmp_29_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str6), !dbg !183 ; [#uses=1 type=i32] [debug line = 90:27@15:11]
  store i18 %reg_peak_reg_0_0_loa, i18* @reg_peak_reg_0_1, align 4, !dbg !186 ; [debug line = 93:2@15:11]
  %empty_44 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str6, i32 %tmp_29_i), !dbg !187 ; [#uses=0 type=i32] [debug line = 94:3@15:11]
  store i18 %o_filOut, i18* @reg_peak_reg_0_0, align 4, !dbg !188 ; [debug line = 95:3@15:11]
  call void @llvm.dbg.value(metadata !{i18 %o_filOut}, i64 0, metadata !189) ; [debug variable = agg.result.filOut]
  call void @llvm.dbg.value(metadata !{i1 %agg_result_peakOut_w}, i64 0, metadata !191) ; [debug variable = agg.result.peakOut]
  call void @llvm.dbg.value(metadata !{i10 %tmpPeak_2}, i64 0, metadata !192) ; [debug variable = agg.result.peakAmp]
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %out_0_filOut, i32 %o_filOut_cast), !dbg !105 ; [debug line = 15:11]
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %out_0_peakOut, i1 %agg_result_peakOut_w), !dbg !105 ; [debug line = 15:11]
  call void @_ssdm_op_Write.ap_auto.i16P(i16* %out_0_peakAmp, i16 %tmpPeak_2_cast), !dbg !105 ; [debug line = 15:11]
  ret void, !dbg !193                             ; [debug line = 17:1]
}

!opencl.kernels = !{!0, !7, !13, !13}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!19}

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
!19 = metadata !{metadata !20, [1 x i32]* @llvm_global_ctors_0}
!20 = metadata !{metadata !21}
!21 = metadata !{i32 0, i32 31, metadata !22}
!22 = metadata !{metadata !23}
!23 = metadata !{metadata !"llvm.global_ctors.0", metadata !24, metadata !"", i32 0, i32 31}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 0, i32 1}
!26 = metadata !{metadata !27}
!27 = metadata !{i32 0, i32 15, metadata !28}
!28 = metadata !{metadata !29}
!29 = metadata !{metadata !"out.peakAmp", metadata !30, metadata !"unsigned short", i32 0, i32 15}
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 0, i32 2}
!32 = metadata !{metadata !33}
!33 = metadata !{i32 0, i32 0, metadata !34}
!34 = metadata !{metadata !35}
!35 = metadata !{metadata !"out.peakOut", metadata !30, metadata !"bool", i32 0, i32 0}
!36 = metadata !{metadata !37}
!37 = metadata !{i32 0, i32 31, metadata !38}
!38 = metadata !{metadata !39}
!39 = metadata !{metadata !"out.filOut", metadata !30, metadata !"unsigned int", i32 0, i32 31}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 31, metadata !42}
!42 = metadata !{metadata !43}
!43 = metadata !{metadata !"in.lincoeff", metadata !30, metadata !"unsigned int", i32 0, i32 31}
!44 = metadata !{metadata !45}
!45 = metadata !{i32 0, i32 15, metadata !46}
!46 = metadata !{metadata !47}
!47 = metadata !{metadata !"in.data_input", metadata !30, metadata !"unsigned short", i32 0, i32 15}
!48 = metadata !{i32 790531, metadata !49, metadata !"in[0].data_input", null, i32 5, metadata !83, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!49 = metadata !{i32 786689, metadata !50, metadata !"in", metadata !51, i32 16777221, metadata !54, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!50 = metadata !{i32 786478, i32 0, metadata !51, metadata !"TPG", metadata !"TPG", metadata !"_Z3TPGP5inPutP6outPut", metadata !51, i32 5, metadata !52, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !75, i32 5} ; [ DW_TAG_subprogram ]
!51 = metadata !{i32 786473, metadata !"TPG.cc", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!52 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !53, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!53 = metadata !{null, metadata !54, metadata !64}
!54 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !55} ; [ DW_TAG_pointer_type ]
!55 = metadata !{i32 786434, null, metadata !"inPut", metadata !56, i32 44, i64 64, i64 32, i32 0, i32 0, null, metadata !57, i32 0, null, null} ; [ DW_TAG_class_type ]
!56 = metadata !{i32 786473, metadata !"./TPG.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG", null} ; [ DW_TAG_file_type ]
!57 = metadata !{metadata !58, metadata !61}
!58 = metadata !{i32 786445, metadata !55, metadata !"data_input", metadata !56, i32 45, i64 16, i64 16, i64 0, i32 0, metadata !59} ; [ DW_TAG_member ]
!59 = metadata !{i32 786454, null, metadata !"uint16_t", metadata !56, i32 50, i64 0, i64 0, i64 0, i32 0, metadata !60} ; [ DW_TAG_typedef ]
!60 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!61 = metadata !{i32 786445, metadata !55, metadata !"lincoeff", metadata !56, i32 46, i64 32, i64 32, i64 32, i32 0, metadata !62} ; [ DW_TAG_member ]
!62 = metadata !{i32 786454, null, metadata !"uint32_t", metadata !56, i32 52, i64 0, i64 0, i64 0, i32 0, metadata !63} ; [ DW_TAG_typedef ]
!63 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!64 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !65} ; [ DW_TAG_pointer_type ]
!65 = metadata !{i32 786434, null, metadata !"outPut", metadata !56, i32 38, i64 64, i64 32, i32 0, i32 0, null, metadata !66, i32 0, null, null} ; [ DW_TAG_class_type ]
!66 = metadata !{metadata !67, metadata !68, metadata !70, metadata !71, metadata !77}
!67 = metadata !{i32 786445, metadata !65, metadata !"filOut", metadata !56, i32 39, i64 32, i64 32, i64 0, i32 0, metadata !62} ; [ DW_TAG_member ]
!68 = metadata !{i32 786445, metadata !65, metadata !"peakOut", metadata !56, i32 40, i64 8, i64 8, i64 32, i32 0, metadata !69} ; [ DW_TAG_member ]
!69 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!70 = metadata !{i32 786445, metadata !65, metadata !"peakAmp", metadata !56, i32 41, i64 16, i64 16, i64 48, i32 0, metadata !59} ; [ DW_TAG_member ]
!71 = metadata !{i32 786478, i32 0, metadata !65, metadata !"~outPut", metadata !"~outPut", metadata !"", metadata !56, i32 38, metadata !72, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !75, i32 38} ; [ DW_TAG_subprogram ]
!72 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !73, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!73 = metadata !{null, metadata !74}
!74 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !65} ; [ DW_TAG_pointer_type ]
!75 = metadata !{metadata !76}
!76 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!77 = metadata !{i32 786478, i32 0, metadata !65, metadata !"operator=", metadata !"operator=", metadata !"_ZN6outPutaSERKS_", metadata !56, i32 38, metadata !78, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !75, i32 38} ; [ DW_TAG_subprogram ]
!78 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !79, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!79 = metadata !{metadata !80, metadata !74, metadata !81}
!80 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !65} ; [ DW_TAG_reference_type ]
!81 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !82} ; [ DW_TAG_reference_type ]
!82 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !65} ; [ DW_TAG_const_type ]
!83 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !84} ; [ DW_TAG_pointer_type ]
!84 = metadata !{i32 786438, null, metadata !"inPut", metadata !56, i32 44, i64 16, i64 32, i32 0, i32 0, null, metadata !85, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!85 = metadata !{metadata !58}
!86 = metadata !{i32 5, i32 16, metadata !50, null}
!87 = metadata !{i32 790531, metadata !49, metadata !"in[0].lincoeff", null, i32 5, metadata !88, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!88 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !89} ; [ DW_TAG_pointer_type ]
!89 = metadata !{i32 786438, null, metadata !"inPut", metadata !56, i32 44, i64 32, i64 32, i32 0, i32 0, null, metadata !90, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!90 = metadata !{metadata !61}
!91 = metadata !{i32 790531, metadata !92, metadata !"out[0].filOut", null, i32 5, metadata !93, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!92 = metadata !{i32 786689, metadata !50, metadata !"out", metadata !51, i32 33554437, metadata !64, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!93 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !94} ; [ DW_TAG_pointer_type ]
!94 = metadata !{i32 786438, null, metadata !"outPut", metadata !56, i32 38, i64 32, i64 32, i32 0, i32 0, null, metadata !95, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!95 = metadata !{metadata !67}
!96 = metadata !{i32 5, i32 30, metadata !50, null}
!97 = metadata !{i32 790531, metadata !92, metadata !"out[0].peakOut", null, i32 5, metadata !98, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!98 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !99} ; [ DW_TAG_pointer_type ]
!99 = metadata !{i32 786438, null, metadata !"outPut", metadata !56, i32 38, i64 8, i64 32, i32 0, i32 0, null, metadata !100, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!100 = metadata !{metadata !68}
!101 = metadata !{i32 790531, metadata !92, metadata !"out[0].peakAmp", null, i32 5, metadata !102, i32 0, i32 0} ; [ DW_TAG_arg_variable_field ]
!102 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !103} ; [ DW_TAG_pointer_type ]
!103 = metadata !{i32 786438, null, metadata !"outPut", metadata !56, i32 38, i64 16, i64 32, i32 0, i32 0, null, metadata !104, i32 0, null, null} ; [ DW_TAG_class_field_type ]
!104 = metadata !{metadata !70}
!105 = metadata !{i32 15, i32 11, metadata !106, null}
!106 = metadata !{i32 786443, metadata !107, i32 13, i32 26, metadata !51, i32 2} ; [ DW_TAG_lexical_block ]
!107 = metadata !{i32 786443, metadata !108, i32 13, i32 3, metadata !51, i32 1} ; [ DW_TAG_lexical_block ]
!108 = metadata !{i32 786443, metadata !50, i32 5, i32 38, metadata !51, i32 0} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 19, i32 24, metadata !110, metadata !105}
!110 = metadata !{i32 786478, i32 0, metadata !51, metadata !"LinFil", metadata !"LinFil", metadata !"_Z6LinFiltjR9registerss", metadata !51, i32 19, metadata !111, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !75, i32 19} ; [ DW_TAG_subprogram ]
!111 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !112, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!112 = metadata !{metadata !65, metadata !59, metadata !62, metadata !113, metadata !128}
!113 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !114} ; [ DW_TAG_reference_type ]
!114 = metadata !{i32 786434, null, metadata !"registers", metadata !56, i32 49, i64 192, i64 32, i32 0, i32 0, null, metadata !115, i32 0, null, null} ; [ DW_TAG_class_type ]
!115 = metadata !{metadata !116, metadata !120, metadata !124}
!116 = metadata !{i32 786445, metadata !114, metadata !"shift_reg", metadata !56, i32 50, i64 128, i64 32, i64 0, i32 0, metadata !117} ; [ DW_TAG_member ]
!117 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !62, metadata !118, i32 0, i32 0} ; [ DW_TAG_array_type ]
!118 = metadata !{metadata !119}
!119 = metadata !{i32 786465, i64 0, i64 3}       ; [ DW_TAG_subrange_type ]
!120 = metadata !{i32 786445, metadata !114, metadata !"peak_reg", metadata !56, i32 51, i64 64, i64 32, i64 128, i32 0, metadata !121} ; [ DW_TAG_member ]
!121 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !62, metadata !122, i32 0, i32 0} ; [ DW_TAG_array_type ]
!122 = metadata !{metadata !123}
!123 = metadata !{i32 786465, i64 0, i64 1}       ; [ DW_TAG_subrange_type ]
!124 = metadata !{i32 786478, i32 0, metadata !114, metadata !"registers", metadata !"registers", metadata !"", metadata !56, i32 49, metadata !125, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !75, i32 49} ; [ DW_TAG_subprogram ]
!125 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !126, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!126 = metadata !{null, metadata !127}
!127 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !114} ; [ DW_TAG_pointer_type ]
!128 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!129 = metadata !{i32 786689, metadata !110, metadata !"data_int", metadata !51, i32 16777235, metadata !59, i32 0, metadata !105} ; [ DW_TAG_arg_variable ]
!130 = metadata !{i32 786689, metadata !110, metadata !"lincoeff", metadata !51, i32 33554451, metadata !62, i32 0, metadata !105} ; [ DW_TAG_arg_variable ]
!131 = metadata !{i32 19, i32 43, metadata !110, metadata !105}
!132 = metadata !{i32 43, i32 3, metadata !133, metadata !105}
!133 = metadata !{i32 786443, metadata !110, i32 19, i32 75, metadata !51, i32 3} ; [ DW_TAG_lexical_block ]
!134 = metadata !{i32 786688, metadata !133, metadata !"uncorrectedADC", metadata !51, i32 22, metadata !59, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!135 = metadata !{i32 44, i32 3, metadata !133, metadata !105}
!136 = metadata !{i32 786688, metadata !133, metadata !"coeff", metadata !51, i32 25, metadata !62, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!137 = metadata !{i32 45, i32 8, metadata !133, metadata !105}
!138 = metadata !{i32 46, i32 3, metadata !133, metadata !105}
!139 = metadata !{i32 786688, metadata !133, metadata !"base", metadata !51, i32 24, metadata !59, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!140 = metadata !{i32 47, i32 3, metadata !133, metadata !105}
!141 = metadata !{i32 786688, metadata !133, metadata !"shiftlin", metadata !51, i32 26, metadata !142, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!142 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !51, i32 49, i64 0, i64 0, i64 0, i32 0, metadata !143} ; [ DW_TAG_typedef ]
!143 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!144 = metadata !{i32 48, i32 3, metadata !133, metadata !105}
!145 = metadata !{i32 786688, metadata !133, metadata !"mult", metadata !51, i32 27, metadata !142, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!146 = metadata !{i32 49, i32 3, metadata !133, metadata !105}
!147 = metadata !{i32 786688, metadata !133, metadata !"correctedADC", metadata !51, i32 21, metadata !148, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!148 = metadata !{i32 786454, null, metadata !"int16_t", metadata !51, i32 38, i64 0, i64 0, i64 0, i32 0, metadata !128} ; [ DW_TAG_typedef ]
!149 = metadata !{i32 51, i32 3, metadata !133, metadata !105}
!150 = metadata !{i32 52, i32 3, metadata !133, metadata !105}
!151 = metadata !{i32 786688, metadata !133, metadata !"linearizerOutput", metadata !51, i32 23, metadata !62, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!152 = metadata !{i32 55, i32 3, metadata !133, metadata !105}
!153 = metadata !{i32 786688, metadata !133, metadata !"m", metadata !51, i32 31, metadata !62, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!154 = metadata !{i32 56, i32 28, metadata !155, metadata !105}
!155 = metadata !{i32 786443, metadata !156, i32 56, i32 27, metadata !51, i32 5} ; [ DW_TAG_lexical_block ]
!156 = metadata !{i32 786443, metadata !133, i32 56, i32 3, metadata !51, i32 4} ; [ DW_TAG_lexical_block ]
!157 = metadata !{i32 59, i32 2, metadata !155, metadata !105}
!158 = metadata !{i32 60, i32 3, metadata !155, metadata !105}
!159 = metadata !{i32 61, i32 3, metadata !133, metadata !105}
!160 = metadata !{i32 62, i32 3, metadata !133, metadata !105}
!161 = metadata !{i32 786688, metadata !133, metadata !"pro", metadata !51, i32 33, metadata !162, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!162 = metadata !{i32 786454, null, metadata !"int32_t", metadata !51, i32 39, i64 0, i64 0, i64 0, i32 0, metadata !163} ; [ DW_TAG_typedef ]
!163 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!164 = metadata !{i32 63, i32 3, metadata !133, metadata !105}
!165 = metadata !{i32 67, i32 2, metadata !166, metadata !105}
!166 = metadata !{i32 786443, metadata !167, i32 65, i32 27, metadata !51, i32 7} ; [ DW_TAG_lexical_block ]
!167 = metadata !{i32 786443, metadata !133, i32 65, i32 3, metadata !51, i32 6} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 68, i32 5, metadata !166, metadata !105}
!169 = metadata !{i32 69, i32 5, metadata !166, metadata !105}
!170 = metadata !{i32 72, i32 3, metadata !133, metadata !105}
!171 = metadata !{i32 73, i32 3, metadata !133, metadata !105}
!172 = metadata !{i32 790529, metadata !173, metadata !"o.filOut", null, i32 38, metadata !94, i32 0, metadata !105} ; [ DW_TAG_auto_variable_field ]
!173 = metadata !{i32 786688, metadata !133, metadata !"o", metadata !51, i32 38, metadata !80, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!174 = metadata !{i32 74, i32 1, metadata !133, metadata !105}
!175 = metadata !{i32 77, i32 3, metadata !133, metadata !105}
!176 = metadata !{i32 81, i32 2, metadata !177, metadata !105}
!177 = metadata !{i32 786443, metadata !133, i32 77, i32 69, metadata !51, i32 8} ; [ DW_TAG_lexical_block ]
!178 = metadata !{i32 84, i32 2, metadata !177, metadata !105}
!179 = metadata !{i32 786688, metadata !133, metadata !"tmpPeak", metadata !51, i32 37, metadata !59, i32 0, metadata !105} ; [ DW_TAG_auto_variable ]
!180 = metadata !{i32 85, i32 2, metadata !177, metadata !105}
!181 = metadata !{i32 790529, metadata !173, metadata !"o.peakAmp", null, i32 38, metadata !103, i32 0, metadata !105} ; [ DW_TAG_auto_variable_field ]
!182 = metadata !{i32 88, i32 2, metadata !177, metadata !105}
!183 = metadata !{i32 90, i32 27, metadata !184, metadata !105}
!184 = metadata !{i32 786443, metadata !185, i32 90, i32 26, metadata !51, i32 12} ; [ DW_TAG_lexical_block ]
!185 = metadata !{i32 786443, metadata !133, i32 90, i32 3, metadata !51, i32 11} ; [ DW_TAG_lexical_block ]
!186 = metadata !{i32 93, i32 2, metadata !184, metadata !105}
!187 = metadata !{i32 94, i32 3, metadata !184, metadata !105}
!188 = metadata !{i32 95, i32 3, metadata !133, metadata !105}
!189 = metadata !{i32 790535, metadata !190, metadata !"agg.result.filOut", null, i32 19, metadata !93, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!190 = metadata !{i32 786690, metadata !110, metadata !"agg.result", metadata !51, i32 19, metadata !64, i32 0, i32 0} ; [ DW_TAG_return_variable ]
!191 = metadata !{i32 790535, metadata !190, metadata !"agg.result.peakOut", null, i32 19, metadata !98, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!192 = metadata !{i32 790535, metadata !190, metadata !"agg.result.peakAmp", null, i32 19, metadata !102, i32 0, i32 0} ; [ DW_TAG_arg_variable_field_wo ]
!193 = metadata !{i32 17, i32 1, metadata !108, null}
