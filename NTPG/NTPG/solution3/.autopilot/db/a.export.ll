; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG/NTPG/solution3/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@reg_shift_reg_V_0_3 = internal unnamed_addr global i18 0
@reg_shift_reg_V_0_2 = internal unnamed_addr global i18 0
@reg_shift_reg_V_0_1 = internal unnamed_addr global i18 0
@reg_shift_reg_V_0_0 = internal global i18 0
@reg_peak_reg_V_0_1 = internal unnamed_addr global i18 0
@reg_peak_reg_V_0_0 = internal global i18 0
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@TPG_str = internal unnamed_addr constant [4 x i8] c"TPG\00"
@p_str8 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1
@p_str6 = private unnamed_addr constant [12 x i8] c"hls_label_3\00", align 1

declare i25 @llvm.part.select.i25(i25, i32, i32) nounwind readnone

declare i24 @llvm.part.select.i24(i24, i32, i32) nounwind readnone

declare i18 @llvm.part.select.i18(i18, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_Write.ap_auto.i1P(i1*, i1) {
entry:
  store i1 %1, i1* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i18P(i18*, i18) {
entry:
  store i18 %1, i18* %0
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

define weak i24 @_ssdm_op_Read.ap_auto.i24P(i24*) {
entry:
  %empty = load i24* %0
  ret i24 %empty
}

define weak i14 @_ssdm_op_Read.ap_auto.i14P(i14*) {
entry:
  %empty = load i14* %0
  ret i14 %empty
}

define weak i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_8 = trunc i24 %empty to i8
  ret i8 %empty_8
}

define weak i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_9 = trunc i24 %empty to i4
  ret i4 %empty_9
}

define weak i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25, i32, i32) nounwind readnone {
entry:
  %empty = call i25 @llvm.part.select.i25(i25 %0, i32 %1, i32 %2)
  %empty_10 = trunc i25 %empty to i19
  ret i19 %empty_10
}

define weak i18 @_ssdm_op_PartSelect.i18.i25.i32.i32(i25, i32, i32) nounwind readnone {
entry:
  %empty = call i25 @llvm.part.select.i25(i25 %0, i32 %1, i32 %2)
  %empty_11 = trunc i25 %empty to i18
  ret i18 %empty_11
}

define weak i18 @_ssdm_op_PartSelect.i18.i24.i32.i32(i24, i32, i32) nounwind readnone {
entry:
  %empty = call i24 @llvm.part.select.i24(i24 %0, i32 %1, i32 %2)
  %empty_12 = trunc i24 %empty to i18
  ret i18 %empty_12
}

declare i18 @_ssdm_op_PartSelect.i18.i21.i32.i32(i21, i32, i32) nounwind readnone

define weak i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18, i32, i32) nounwind readnone {
entry:
  %empty = call i18 @llvm.part.select.i18(i18 %0, i32 %1, i32 %2)
  %empty_13 = trunc i18 %empty to i16
  ret i16 %empty_13
}

declare i12 @_ssdm_op_PartSelect.i12.i24.i32.i32(i24, i32, i32) nounwind readnone

declare i12 @_ssdm_op_PartSelect.i12.i14.i32.i32(i14, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i19.i32(i19, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i19
  %empty_14 = shl i19 1, %empty
  %empty_15 = and i19 %0, %empty_14
  %empty_16 = icmp ne i19 %empty_15, 0
  ret i1 %empty_16
}

define weak i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18, i5) nounwind readnone {
entry:
  %empty = zext i18 %0 to i23
  %empty_17 = zext i5 %1 to i23
  %empty_18 = shl i23 %empty, 5
  %empty_19 = or i23 %empty_18, %empty_17
  ret i23 %empty_19
}

declare i21 @_ssdm_op_BitConcatenate.i21.i18.i3(i18, i3) nounwind readnone

define weak i20 @_ssdm_op_BitConcatenate.i20.i18.i2(i18, i2) nounwind readnone {
entry:
  %empty = zext i18 %0 to i20
  %empty_20 = zext i2 %1 to i20
  %empty_21 = shl i20 %empty, 2
  %empty_22 = or i20 %empty_21, %empty_20
  ret i20 %empty_22
}

declare void @_ssdm_SpecDependence(...) nounwind

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @TPG(i14* %in_0_data_input_V, i24* %in_0_lincoeff_V, i18* %out_0_filOut_V, i1* %out_0_peakOut) {
.preheader.preheader:
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %out_0_peakOut), !map !137
  call void (...)* @_ssdm_op_SpecBitsMap(i18* %out_0_filOut_V), !map !143
  call void (...)* @_ssdm_op_SpecBitsMap(i24* %in_0_lincoeff_V), !map !147
  call void (...)* @_ssdm_op_SpecBitsMap(i14* %in_0_data_input_V), !map !151
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @TPG_str) nounwind
  %in_0_data_input_V_r = call i14 @_ssdm_op_Read.ap_auto.i14P(i14* %in_0_data_input_V)
  %in_0_lincoeff_V_rea = call i24 @_ssdm_op_Read.ap_auto.i24P(i24* %in_0_lincoeff_V)
  %uncorrectedADC_V = trunc i14 %in_0_data_input_V_r to i12
  %tmp_10 = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %in_0_lincoeff_V_rea, i32 16, i32 23)
  %icmp = icmp eq i8 %tmp_10, 0
  %p_lincoeff_V_i = select i1 %icmp, i24 0, i24 %in_0_lincoeff_V_rea
  %base_V = trunc i24 %p_lincoeff_V_i to i12
  %shiftlin_V = call i4 @_ssdm_op_PartSelect.i4.i24.i32.i32(i24 %p_lincoeff_V_i, i32 12, i32 15)
  %mult = call i8 @_ssdm_op_PartSelect.i8.i24.i32.i32(i24 %p_lincoeff_V_i, i32 16, i32 23)
  %lhs_V = zext i12 %uncorrectedADC_V to i13
  %rhs_V = zext i12 %base_V to i13
  %r_V = sub i13 %lhs_V, %rhs_V
  %lhs_V_1 = sext i13 %r_V to i21
  %rhs_V_1 = zext i8 %mult to i21
  %r_V_1 = mul i21 %lhs_V_1, %rhs_V_1
  %tmp_3_i_cast8 = zext i4 %shiftlin_V to i5
  %tmp_1_i = add i5 2, %tmp_3_i_cast8
  %tmp_1_i_cast = zext i5 %tmp_1_i to i21
  %tmp_2_i = ashr i21 %r_V_1, %tmp_1_i_cast
  %linearizerOutput_V = trunc i21 %tmp_2_i to i18
  %m_V = load i18* @reg_shift_reg_V_0_3, align 4
  %tmp_9_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str6)
  %reg_shift_reg_V_0_2_s = load i18* @reg_shift_reg_V_0_2, align 4
  store i18 %reg_shift_reg_V_0_2_s, i18* @reg_shift_reg_V_0_3, align 4
  %empty = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str6, i32 %tmp_9_i)
  %tmp_10_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str6)
  %reg_shift_reg_V_0_1_s = load i18* @reg_shift_reg_V_0_1, align 4
  store i18 %reg_shift_reg_V_0_1_s, i18* @reg_shift_reg_V_0_2, align 4
  %empty_23 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str6, i32 %tmp_10_i)
  %tmp_11_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str6)
  %reg_shift_reg_V_0_0_s = load i18* @reg_shift_reg_V_0_0, align 4
  store i18 %reg_shift_reg_V_0_0_s, i18* @reg_shift_reg_V_0_1, align 4
  %empty_24 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str6, i32 %tmp_11_i)
  store i18 %linearizerOutput_V, i18* @reg_shift_reg_V_0_0, align 4
  %p_shl_i = call i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18 %m_V, i5 0)
  %p_shl_i_cast = zext i23 %p_shl_i to i24
  %p_neg_i = sub i24 0, %p_shl_i_cast
  %p_neg_i_cast = sext i24 %p_neg_i to i25
  %p_shl1_i = call i20 @_ssdm_op_BitConcatenate.i20.i18.i2(i18 %m_V, i2 0)
  %p_shl1_i_cast = zext i20 %p_shl1_i to i25
  %r_V_2 = sub i25 %p_neg_i_cast, %p_shl1_i_cast
  %tmp_13_i = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %r_V_2, i32 6, i32 24)
  %lhs_V_4_i = zext i18 %reg_shift_reg_V_0_2_s to i25
  %r_V_4_i = mul i25 -35, %lhs_V_4_i
  %mul_V_i = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %r_V_4_i, i32 6, i32 24)
  %tmp_19_1_i = call i16 @_ssdm_op_PartSelect.i16.i18.i32.i32(i18 %reg_shift_reg_V_0_1_s, i32 2, i32 17)
  %tmp = zext i16 %tmp_19_1_i to i18
  %tmp_19_1_i_cast = zext i16 %tmp_19_1_i to i19
  %lhs_V_4_2_i_cast6 = zext i18 %reg_shift_reg_V_0_0_s to i24
  %p_shl8_i = call i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18 %reg_shift_reg_V_0_0_s, i5 0)
  %p_shl8_i_cast = zext i23 %p_shl8_i to i24
  %r_V_4_2_i = sub i24 %p_shl8_i_cast, %lhs_V_4_2_i_cast6
  %tmp_1 = call i18 @_ssdm_op_PartSelect.i18.i24.i32.i32(i24 %r_V_4_2_i, i32 6, i32 23)
  %tmp_2 = sext i18 %tmp_1 to i19
  %p_shl6_i = call i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18 %linearizerOutput_V, i5 0)
  %p_shl6_i_cast = zext i23 %p_shl6_i to i24
  %tmp_13 = shl i21 %tmp_2_i, 3
  %p_shl7_i_cast = zext i21 %tmp_13 to i24
  %r_V_4_3_i = sub i24 %p_shl6_i_cast, %p_shl7_i_cast
  %tmp_4 = call i18 @_ssdm_op_PartSelect.i18.i24.i32.i32(i24 %r_V_4_3_i, i32 6, i32 23)
  %tmp_5 = sext i18 %tmp_4 to i19
  %tmp2 = add i19 %tmp_19_1_i_cast, %tmp_2
  %tmp_6 = call i18 @_ssdm_op_PartSelect.i18.i25.i32.i32(i25 %r_V_4_i, i32 6, i32 23)
  %tmp4 = add i19 %mul_V_i, %tmp_5
  %tmp_7 = call i18 @_ssdm_op_PartSelect.i18.i25.i32.i32(i25 %r_V_2, i32 6, i32 23)
  %tmp_8 = add i18 %tmp_4, %tmp_6
  %tmp3 = add i19 %tmp4, %tmp_13_i
  %tmp_9 = add i18 %tmp_7, %tmp_8
  %tmp_s = add i18 %tmp_1, %tmp
  %addconv_3_i = add i19 %tmp3, %tmp2
  %addconv_3_i_cast = add i18 %tmp_s, %tmp_9
  %tmp_14 = call i1 @_ssdm_op_BitSelect.i1.i19.i32(i19 %addconv_3_i, i32 18)
  %o_filOut_V = select i1 %tmp_14, i18 0, i18 %addconv_3_i_cast
  %reg_peak_reg_V_0_0_l = load i18* @reg_peak_reg_V_0_0, align 4
  %tmp_17_i = icmp ugt i18 %reg_peak_reg_V_0_0_l, %o_filOut_V
  %reg_peak_reg_V_0_1_l = load i18* @reg_peak_reg_V_0_1, align 4
  %tmp_18_i = icmp ugt i18 %reg_peak_reg_V_0_0_l, %reg_peak_reg_V_0_1_l
  %agg_result_peakOut_w = and i1 %tmp_17_i, %tmp_18_i
  %tmp_20_i = call i32 (...)* @_ssdm_op_SpecRegionBegin([12 x i8]* @p_str8)
  store i18 %reg_peak_reg_V_0_0_l, i18* @reg_peak_reg_V_0_1, align 4
  %empty_25 = call i32 (...)* @_ssdm_op_SpecRegionEnd([12 x i8]* @p_str8, i32 %tmp_20_i)
  store i18 %o_filOut_V, i18* @reg_peak_reg_V_0_0, align 4
  call void @_ssdm_op_Write.ap_auto.i18P(i18* %out_0_filOut_V, i18 %o_filOut_V)
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %out_0_peakOut, i1 %agg_result_peakOut_w)
  ret void
}

!opencl.kernels = !{!0, !7, !13, !19, !21, !21, !24, !24, !30, !34, !34, !24, !36, !30, !36, !38, !38, !24, !24, !40, !24, !24, !24, !42, !42, !43, !43, !45, !46, !24, !24, !24, !24, !43, !43, !48, !50, !52, !52, !54, !54, !55, !55, !57, !59, !24, !24, !24, !24, !59, !24, !34, !34, !24, !61, !24, !24, !24, !63, !63, !64, !64, !66, !63, !63, !24, !68, !24, !70, !70, !74, !77, !24, !24, !24, !79, !79, !80, !80, !55, !55, !81, !83, !85, !85, !24, !87, !89, !89, !91, !91, !80, !80, !93, !24, !24, !24, !94, !36, !91, !91, !24, !24, !96, !98, !24, !100, !100, !24, !79, !79, !102, !104, !106, !36, !106, !24, !24, !108, !110, !112, !112, !79, !79, !24, !24, !114, !116, !118, !120, !120, !122, !36, !123, !123, !24, !24, !123, !123, !123, !123, !123, !123, !123, !123, !123, !123, !123, !123, !123, !123, !125, !123, !123, !24, !24, !123, !123, !24, !24, !24, !24, !24, !24, !24, !24, !127, !24, !24}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!130}

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
!10 = metadata !{metadata !"kernel_arg_type", metadata !"ap_uint<14>", metadata !"ap_uint<24>", metadata !"struct registers &", metadata !"short"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"data_int", metadata !"lincoeff", metadata !"r", metadata !"i"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<18, false> &"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!19 = metadata !{null, metadata !14, metadata !15, metadata !20, metadata !17, metadata !18, metadata !6}
!20 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &"}
!21 = metadata !{null, metadata !14, metadata !15, metadata !22, metadata !17, metadata !23, metadata !6}
!22 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<19> &"}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!24 = metadata !{null, metadata !25, metadata !26, metadata !27, metadata !28, metadata !29, metadata !6}
!25 = metadata !{metadata !"kernel_arg_addr_space"}
!26 = metadata !{metadata !"kernel_arg_access_qual"}
!27 = metadata !{metadata !"kernel_arg_type"}
!28 = metadata !{metadata !"kernel_arg_type_qual"}
!29 = metadata !{metadata !"kernel_arg_name"}
!30 = metadata !{null, metadata !31, metadata !2, metadata !32, metadata !4, metadata !33, metadata !6}
!31 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"int"}
!33 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!34 = metadata !{null, metadata !14, metadata !15, metadata !35, metadata !17, metadata !23, metadata !6}
!35 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!36 = metadata !{null, metadata !14, metadata !15, metadata !37, metadata !17, metadata !18, metadata !6}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!38 = metadata !{null, metadata !14, metadata !15, metadata !39, metadata !17, metadata !23, metadata !6}
!39 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<20, true> &"}
!40 = metadata !{null, metadata !31, metadata !2, metadata !41, metadata !4, metadata !33, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<19, true> &", metadata !"const ap_int_base<19, true> &"}
!42 = metadata !{null, metadata !14, metadata !15, metadata !20, metadata !17, metadata !23, metadata !6}
!43 = metadata !{null, metadata !14, metadata !15, metadata !44, metadata !17, metadata !23, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<25, true> &"}
!45 = metadata !{null, metadata !14, metadata !15, metadata !22, metadata !17, metadata !18, metadata !6}
!46 = metadata !{null, metadata !14, metadata !15, metadata !47, metadata !17, metadata !18, metadata !6}
!47 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &"}
!48 = metadata !{null, metadata !14, metadata !15, metadata !49, metadata !17, metadata !18, metadata !6}
!49 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<25> &"}
!50 = metadata !{null, metadata !31, metadata !2, metadata !51, metadata !4, metadata !33, metadata !6}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<18, false> &", metadata !"const ap_int_base<7, true> &"}
!52 = metadata !{null, metadata !14, metadata !15, metadata !53, metadata !17, metadata !23, metadata !6}
!53 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<7, true> &"}
!54 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !23, metadata !6}
!55 = metadata !{null, metadata !14, metadata !15, metadata !56, metadata !17, metadata !23, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<21, true> &"}
!57 = metadata !{null, metadata !14, metadata !15, metadata !58, metadata !17, metadata !18, metadata !6}
!58 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, true> &"}
!59 = metadata !{null, metadata !14, metadata !15, metadata !60, metadata !17, metadata !18, metadata !6}
!60 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<33, false> &"}
!61 = metadata !{null, metadata !31, metadata !2, metadata !62, metadata !4, metadata !33, metadata !6}
!62 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &", metadata !"const ap_int_base<33, true> &"}
!63 = metadata !{null, metadata !14, metadata !15, metadata !58, metadata !17, metadata !23, metadata !6}
!64 = metadata !{null, metadata !14, metadata !15, metadata !65, metadata !17, metadata !23, metadata !6}
!65 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &"}
!66 = metadata !{null, metadata !14, metadata !15, metadata !67, metadata !17, metadata !18, metadata !6}
!67 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<34, true> &"}
!68 = metadata !{null, metadata !14, metadata !15, metadata !35, metadata !17, metadata !69, metadata !6}
!69 = metadata !{metadata !"kernel_arg_name", metadata !"index"}
!70 = metadata !{null, metadata !71, metadata !2, metadata !72, metadata !4, metadata !73, metadata !6}
!71 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 0}
!72 = metadata !{metadata !"kernel_arg_type", metadata !"ap_int_base<33, true>*", metadata !"int"}
!73 = metadata !{metadata !"kernel_arg_name", metadata !"bv", metadata !"index"}
!74 = metadata !{null, metadata !31, metadata !2, metadata !75, metadata !4, metadata !76, metadata !6}
!75 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"int"}
!76 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"i_op"}
!77 = metadata !{null, metadata !31, metadata !2, metadata !78, metadata !4, metadata !33, metadata !6}
!78 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"const ap_int_base<32, true> &"}
!79 = metadata !{null, metadata !14, metadata !15, metadata !37, metadata !17, metadata !23, metadata !6}
!80 = metadata !{null, metadata !14, metadata !15, metadata !47, metadata !17, metadata !23, metadata !6}
!81 = metadata !{null, metadata !14, metadata !15, metadata !82, metadata !17, metadata !18, metadata !6}
!82 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<21> &"}
!83 = metadata !{null, metadata !31, metadata !2, metadata !84, metadata !4, metadata !76, metadata !6}
!84 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<13, true> &", metadata !"uchar"}
!85 = metadata !{null, metadata !14, metadata !15, metadata !86, metadata !17, metadata !23, metadata !6}
!86 = metadata !{metadata !"kernel_arg_type", metadata !"uchar"}
!87 = metadata !{null, metadata !31, metadata !2, metadata !88, metadata !4, metadata !33, metadata !6}
!88 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<13, true> &", metadata !"const ap_int_base<8, false> &"}
!89 = metadata !{null, metadata !14, metadata !15, metadata !90, metadata !17, metadata !23, metadata !6}
!90 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &"}
!91 = metadata !{null, metadata !14, metadata !15, metadata !92, metadata !17, metadata !23, metadata !6}
!92 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<13, true> &"}
!93 = metadata !{null, metadata !31, metadata !2, metadata !75, metadata !4, metadata !33, metadata !6}
!94 = metadata !{null, metadata !31, metadata !2, metadata !95, metadata !4, metadata !33, metadata !6}
!95 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<13, true> &", metadata !"int"}
!96 = metadata !{null, metadata !14, metadata !15, metadata !97, metadata !17, metadata !18, metadata !6}
!97 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<13> &"}
!98 = metadata !{null, metadata !31, metadata !2, metadata !99, metadata !4, metadata !33, metadata !6}
!99 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<12, false> &", metadata !"const ap_int_base<12, false> &"}
!100 = metadata !{null, metadata !14, metadata !15, metadata !101, metadata !17, metadata !23, metadata !6}
!101 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<12, false> &"}
!102 = metadata !{null, metadata !14, metadata !15, metadata !103, metadata !17, metadata !18, metadata !6}
!103 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<4> &"}
!104 = metadata !{null, metadata !14, metadata !15, metadata !105, metadata !17, metadata !18, metadata !6}
!105 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<24> &"}
!106 = metadata !{null, metadata !31, metadata !2, metadata !107, metadata !4, metadata !33, metadata !6}
!107 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"int"}
!108 = metadata !{null, metadata !31, metadata !2, metadata !109, metadata !4, metadata !76, metadata !6}
!109 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<24, false> &", metadata !"int"}
!110 = metadata !{null, metadata !31, metadata !2, metadata !111, metadata !4, metadata !33, metadata !6}
!111 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<24, false> &", metadata !"const ap_int_base<32, true> &"}
!112 = metadata !{null, metadata !14, metadata !15, metadata !113, metadata !17, metadata !23, metadata !6}
!113 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<24, false> &"}
!114 = metadata !{null, metadata !14, metadata !15, metadata !115, metadata !17, metadata !18, metadata !6}
!115 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<12> &"}
!116 = metadata !{null, metadata !31, metadata !2, metadata !117, metadata !4, metadata !76, metadata !6}
!117 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, false> &", metadata !"int"}
!118 = metadata !{null, metadata !31, metadata !2, metadata !119, metadata !4, metadata !33, metadata !6}
!119 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, false> &", metadata !"const ap_int_base<32, true> &"}
!120 = metadata !{null, metadata !14, metadata !15, metadata !121, metadata !17, metadata !23, metadata !6}
!121 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<14, false> &"}
!122 = metadata !{null, metadata !31, metadata !2, metadata !117, metadata !4, metadata !33, metadata !6}
!123 = metadata !{null, metadata !14, metadata !15, metadata !35, metadata !17, metadata !124, metadata !6}
!124 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!125 = metadata !{null, metadata !14, metadata !15, metadata !126, metadata !17, metadata !18, metadata !6}
!126 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<18> &"}
!127 = metadata !{null, metadata !14, metadata !15, metadata !128, metadata !17, metadata !129, metadata !6}
!128 = metadata !{metadata !"kernel_arg_type", metadata !"const struct outPut &"}
!129 = metadata !{metadata !"kernel_arg_name", metadata !""}
!130 = metadata !{metadata !131, [1 x i32]* @llvm_global_ctors_0}
!131 = metadata !{metadata !132}
!132 = metadata !{i32 0, i32 31, metadata !133}
!133 = metadata !{metadata !134}
!134 = metadata !{metadata !"llvm.global_ctors.0", metadata !135, metadata !"", i32 0, i32 31}
!135 = metadata !{metadata !136}
!136 = metadata !{i32 0, i32 0, i32 1}
!137 = metadata !{metadata !138}
!138 = metadata !{i32 0, i32 0, metadata !139}
!139 = metadata !{metadata !140}
!140 = metadata !{metadata !"out.peakOut", metadata !141, metadata !"bool", i32 0, i32 0}
!141 = metadata !{metadata !142}
!142 = metadata !{i32 0, i32 0, i32 2}
!143 = metadata !{metadata !144}
!144 = metadata !{i32 0, i32 17, metadata !145}
!145 = metadata !{metadata !146}
!146 = metadata !{metadata !"out.filOut.V", metadata !141, metadata !"uint18", i32 0, i32 17}
!147 = metadata !{metadata !148}
!148 = metadata !{i32 0, i32 23, metadata !149}
!149 = metadata !{metadata !150}
!150 = metadata !{metadata !"in.lincoeff.V", metadata !141, metadata !"uint24", i32 0, i32 23}
!151 = metadata !{metadata !152}
!152 = metadata !{i32 0, i32 13, metadata !153}
!153 = metadata !{metadata !154}
!154 = metadata !{metadata !"in.data_input.V", metadata !141, metadata !"uint14", i32 0, i32 13}
