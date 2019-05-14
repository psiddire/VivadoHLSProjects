; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/TPG/TPG/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@reg_shift_reg_0_3 = internal unnamed_addr global i32 0
@reg_shift_reg_0_2 = internal global i21 0
@reg_shift_reg_0_1 = internal global i21 0
@reg_shift_reg_0_0 = internal global i21 0
@reg_peak_reg_0_1 = internal global i18 0
@reg_peak_reg_0_0 = internal global i18 0
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@TPG_str = internal unnamed_addr constant [4 x i8] c"TPG\00"
@p_str6 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1
@p_str4 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1

declare i32 @llvm.part.select.i32(i32, i32, i32) nounwind readnone

declare i28 @llvm.part.select.i28(i28, i32, i32) nounwind readnone

declare i27 @llvm.part.select.i27(i27, i32, i32) nounwind readnone

declare i25 @llvm.part.select.i25(i25, i32, i32) nounwind readnone

declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

declare i21 @llvm.part.select.i21(i21, i32, i32) nounwind readnone

declare i18 @llvm.part.select.i18(i18, i32, i32) nounwind readnone

declare i16 @llvm.part.select.i16(i16, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_Write.ap_auto.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i1P(i1*, i1) {
entry:
  store i1 %1, i1* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i16P(i16*, i16) {
entry:
  store i16 %1, i16* %0
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_Read.ap_auto.i32P(i32*) {
entry:
  %empty = load i32* %0
  ret i32 %empty
}

define weak i16 @_ssdm_op_Read.ap_auto.i16P(i16*) {
entry:
  %empty = load i16* %0
  ret i16 %empty
}

define weak i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_18 = trunc i32 %empty to i8
  ret i8 %empty_18
}

define weak i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_19 = trunc i24 %empty to i8
  ret i8 %empty_19
}

define weak i6 @_ssdm_op_PartSelect.i6.i18.i32.i32(i18, i32, i32) nounwind readnone {
entry:
  %empty = call i18 @llvm.part.select.i18(i18 %0, i32 %1, i32 %2)
  %empty_20 = trunc i18 %empty to i6
  ret i6 %empty_20
}

define weak i6 @_ssdm_op_PartSelect.i6.i16.i32.i32(i16, i32, i32) nounwind readnone {
entry:
  %empty = call i16 @llvm.part.select.i16(i16 %0, i32 %1, i32 %2)
  %empty_21 = trunc i16 %empty to i6
  ret i6 %empty_21
}

define weak i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_22 = trunc i24 %empty to i4
  ret i4 %empty_22
}

declare i30 @_ssdm_op_PartSelect.i30.i32.i32.i32(i32, i32, i32) nounwind readnone

declare i27 @_ssdm_op_PartSelect.i27.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32, i32, i32) nounwind readnone {
entry:
  %empty = call i32 @llvm.part.select.i32(i32 %0, i32 %1, i32 %2)
  %empty_23 = trunc i32 %empty to i26
  ret i26 %empty_23
}

declare i24 @_ssdm_op_PartSelect.i24.i32.i32.i32(i32, i32, i32) nounwind readnone

define weak i21 @_ssdm_op_PartSelect.i21.i27.i32.i32(i27, i32, i32) nounwind readnone {
entry:
  %empty = call i27 @llvm.part.select.i27(i27 %0, i32 %1, i32 %2)
  %empty_24 = trunc i27 %empty to i21
  ret i21 %empty_24
}

define weak i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25, i32, i32) nounwind readnone {
entry:
  %empty = call i25 @llvm.part.select.i25(i25 %0, i32 %1, i32 %2)
  %empty_25 = trunc i25 %empty to i19
  ret i19 %empty_25
}

define weak i19 @_ssdm_op_PartSelect.i19.i21.i32.i32(i21, i32, i32) nounwind readnone {
entry:
  %empty = call i21 @llvm.part.select.i21(i21 %0, i32 %1, i32 %2)
  %empty_26 = trunc i21 %empty to i19
  ret i19 %empty_26
}

declare i18 @_ssdm_op_PartSelect.i18.i28.i32.i32(i28, i32, i32) nounwind readnone

define weak i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18, i32, i32) nounwind readnone {
entry:
  %empty = call i18 @llvm.part.select.i18(i18 %0, i32 %1, i32 %2)
  %empty_27 = trunc i18 %empty to i16
  ret i16 %empty_27
}

declare i12 @_ssdm_op_PartSelect.i12.i24.i32.i32(i24, i32, i32) nounwind readnone

declare i12 @_ssdm_op_PartSelect.i12.i16.i32.i32(i16, i32, i32) nounwind readnone

define weak i10 @_ssdm_op_PartSelect.i10.i28.i32.i32(i28, i32, i32) nounwind readnone {
entry:
  %empty = call i28 @llvm.part.select.i28(i28 %0, i32 %1, i32 %2)
  %empty_28 = trunc i28 %empty to i10
  ret i10 %empty_28
}

declare i10 @_ssdm_op_PartSelect.i10.i16.i32.i32(i16, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i29.i32(i29, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i29
  %empty_29 = shl i29 1, %empty
  %empty_30 = and i29 %0, %empty_29
  %empty_31 = icmp ne i29 %empty_30, 0
  ret i1 %empty_31
}

declare i32 @_ssdm_op_BitConcatenate.i32.i30.i2(i30, i2) nounwind readnone

declare i32 @_ssdm_op_BitConcatenate.i32.i27.i5(i27, i5) nounwind readnone

define weak i26 @_ssdm_op_BitConcatenate.i26.i21.i5(i21, i5) nounwind readnone {
entry:
  %empty = zext i21 %0 to i26
  %empty_32 = zext i5 %1 to i26
  %empty_33 = shl i26 %empty, 5
  %empty_34 = or i26 %empty_33, %empty_32
  ret i26 %empty_34
}

define weak i24 @_ssdm_op_BitConcatenate.i24.i19.i5(i19, i5) nounwind readnone {
entry:
  %empty = zext i19 %0 to i24
  %empty_35 = zext i5 %1 to i24
  %empty_36 = shl i24 %empty, 5
  %empty_37 = or i24 %empty_36, %empty_35
  ret i24 %empty_37
}

define weak i22 @_ssdm_op_BitConcatenate.i22.i19.i3(i19, i3) nounwind readnone {
entry:
  %empty = zext i19 %0 to i22
  %empty_38 = zext i3 %1 to i22
  %empty_39 = shl i22 %empty, 3
  %empty_40 = or i22 %empty_39, %empty_38
  ret i22 %empty_40
}

declare void @_ssdm_SpecDependence(...) nounwind

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @TPG(i16* %in_0_data_input, i32* %in_0_lincoeff, i32* %out_0_filOut, i1* %out_0_peakOut, i16* %out_0_peakAmp) {
_ifconv:
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %out_0_peakAmp), !map !26
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_0_peakOut), !map !32
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %out_0_filOut), !map !36
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %in_0_lincoeff), !map !40
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %in_0_data_input), !map !44
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @TPG_str) nounwind
  %in_0_data_input_rea = call i16 @_ssdm_op_Read.ap_auto.i16P(i16* %in_0_data_input)
  %uncorrectedADC = trunc i16 %in_0_data_input_rea to i12
  %coeff = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %in_0_lincoeff)
  %tmp_2 = trunc i32 %coeff to i24
  %uncorrectedADC_cast = zext i12 %uncorrectedADC to i13
  %tmp = call i8 @_ssdm_op_PartSelect.i8.i32.i32.i32(i32 %coeff, i32 16, i32 23)
  %icmp = icmp eq i8 %tmp, 0
  %tmp_1 = select i1 %icmp, i24 0, i24 %tmp_2
  %base = trunc i24 %tmp_1 to i12
  %base_cast = zext i12 %base to i13
  %shiftlin = call i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24 %tmp_1, i32 12, i32 15)
  %mult = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %tmp_1, i32 16, i32 23)
  %correctedADC = sub i13 %uncorrectedADC_cast, %base_cast
  %tmp_i_cast = sext i13 %correctedADC to i21
  %tmp_3_i_cast = zext i8 %mult to i21
  %prod = mul i21 %tmp_3_i_cast, %tmp_i_cast
  %tmp_6_i_cast = zext i4 %shiftlin to i5
  %tmp_8_i = add i5 2, %tmp_6_i_cast
  %tmp_8_i_cast = zext i5 %tmp_8_i to i21
  %linearizerOutput = ashr i21 %prod, %tmp_8_i_cast
  %m = load i32* @reg_shift_reg_0_3, align 4
  %tmp_9_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4)
  %reg_shift_reg_0_2_lo = load i21* @reg_shift_reg_0_2, align 4
  %extLd9 = sext i21 %reg_shift_reg_0_2_lo to i32
  store i32 %extLd9, i32* @reg_shift_reg_0_3, align 4
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_9_i)
  %tmp_10_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4)
  %reg_shift_reg_0_1_lo = load i21* @reg_shift_reg_0_1, align 4
  store i21 %reg_shift_reg_0_1_lo, i21* @reg_shift_reg_0_2, align 4
  %empty_41 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_10_i)
  %tmp_11_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str4)
  %reg_shift_reg_0_0_lo = load i21* @reg_shift_reg_0_0, align 4
  %extLd_cast = sext i21 %reg_shift_reg_0_0_lo to i27
  store i21 %reg_shift_reg_0_0_lo, i21* @reg_shift_reg_0_1, align 4
  %empty_42 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str4, i32 %tmp_11_i)
  store i21 %linearizerOutput, i21* @reg_shift_reg_0_0, align 4
  %tmp_7 = shl i32 %m, 5
  %p_neg_i = sub i32 0, %tmp_7
  %tmp_9 = shl i32 %m, 2
  %pro = sub i32 %p_neg_i, %tmp_9
  %tmp_13_i = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %pro, i32 6, i32 31)
  %mul_cast = sext i26 %tmp_13_i to i28
  %pro_1_i = mul i32 -35, %extLd9
  %tmp_15_i = call i26 @_ssdm_op_PartSelect.i26.i32.i32.i32(i32 %pro_1_i, i32 6, i32 31)
  %mul_i_cast = sext i26 %tmp_15_i to i27
  %tmp_11 = call i19 @_ssdm_op_PartSelect.i19.i21.i32.i32(i21 %reg_shift_reg_0_1_lo, i32 2, i32 20)
  %mul_1_i_cast = sext i19 %tmp_11 to i27
  %tmp_3 = call i26 @_ssdm_op_BitConcatenate.i26.i21.i5(i21 %reg_shift_reg_0_0_lo, i5 0)
  %p_shl1_i_cast = sext i26 %tmp_3 to i27
  %pro_1_2_i = sub i27 %p_shl1_i_cast, %extLd_cast
  %tmp_12 = call i21 @_ssdm_op_PartSelect.i21.i27.i32.i32(i27 %pro_1_2_i, i32 6, i32 26)
  %mul_i_cast_43 = sext i21 %tmp_12 to i27
  %tmp_13 = trunc i21 %linearizerOutput to i19
  %p_shl8_i = call i24 @_ssdm_op_BitConcatenate.i24.i19.i5(i19 %tmp_13, i5 0)
  %p_shl8_i_cast = sext i24 %p_shl8_i to i25
  %p_shl9_i = call i22 @_ssdm_op_BitConcatenate.i22.i19.i3(i19 %tmp_13, i3 0)
  %p_shl9_i_cast = sext i22 %p_shl9_i to i25
  %pro_1_3_i = sub i25 %p_shl8_i_cast, %p_shl9_i_cast
  %tmp_5 = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %pro_1_3_i, i32 6, i32 24)
  %mul_3_i_cast = sext i19 %tmp_5 to i27
  %tmp2 = add i27 %mul_i_cast_43, %mul_1_i_cast
  %tmp2_cast = sext i27 %tmp2 to i29
  %tmp4 = add i27 %mul_3_i_cast, %mul_i_cast
  %tmp4_cast = sext i27 %tmp4 to i28
  %tmp3 = add i28 %mul_cast, %tmp4_cast
  %tmp3_cast = sext i28 %tmp3 to i29
  %tmp_6 = sext i27 %tmp2 to i28
  %acc_1_3_i = add i29 %tmp2_cast, %tmp3_cast
  %acc_1_3_i_cast = add i28 %tmp3, %tmp_6
  %tmp_14 = call i1 @_ssdm_op_BitSelect.i1.i29.i32(i29 %acc_1_3_i, i32 28)
  %p_acc_i = select i1 %tmp_14, i28 0, i28 %acc_1_3_i_cast
  %tmp_15 = trunc i28 %p_acc_i to i18
  %tmp_16 = call i10 @_ssdm_op_PartSelect.i10.i28.i32.i32(i28 %p_acc_i, i32 18, i32 27)
  %icmp1 = icmp ne i10 %tmp_16, 0
  %o_filOut = select i1 %icmp1, i18 -1, i18 %tmp_15
  %o_filOut_cast = zext i18 %o_filOut to i32
  %reg_peak_reg_0_0_loa = load i18* @reg_peak_reg_0_0, align 4
  %tmp_19_i = icmp ugt i18 %reg_peak_reg_0_0_loa, %o_filOut
  %reg_peak_reg_0_1_loa = load i18* @reg_peak_reg_0_1, align 4
  %tmp_20_i = icmp ugt i18 %reg_peak_reg_0_0_loa, %reg_peak_reg_0_1_loa
  %agg_result_peakOut_w = and i1 %tmp_19_i, %tmp_20_i
  %tmp_17 = call i6 @_ssdm_op_PartSelect.i6.i18.i32.i32(i18 %reg_peak_reg_0_0_loa, i32 12, i32 17)
  %icmp2 = icmp ne i6 %tmp_17, 0
  %tmp_8 = call i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18 %reg_peak_reg_0_0_loa, i32 2, i32 17)
  %tmpPeak = select i1 %icmp2, i16 1023, i16 %tmp_8
  %tmp_18 = trunc i16 %tmpPeak to i10
  %tmp_19 = call i6 @_ssdm_op_PartSelect.i6.i16.i32.i32(i16 %tmpPeak, i32 10, i32 15)
  %icmp3 = icmp ne i6 %tmp_19, 0
  %tmpPeak_2 = select i1 %icmp3, i10 -1, i10 %tmp_18
  %tmpPeak_2_cast = zext i10 %tmpPeak_2 to i16
  %tmp_29_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str6)
  store i18 %reg_peak_reg_0_0_loa, i18* @reg_peak_reg_0_1, align 4
  %empty_44 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str6, i32 %tmp_29_i)
  store i18 %o_filOut, i18* @reg_peak_reg_0_0, align 4
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %out_0_filOut, i32 %o_filOut_cast)
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %out_0_peakOut, i1 %agg_result_peakOut_w)
  call void @_ssdm_op_Write.ap_auto.i16P(i16* %out_0_peakAmp, i16 %tmpPeak_2_cast)
  ret void
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
