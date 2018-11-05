; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/BitShift/BitShift/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@BitShift_str = internal unnamed_addr constant [9 x i8] c"BitShift\00"

declare i25 @llvm.part.select.i25(i25, i32, i32) nounwind readnone

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25, i32, i32) nounwind readnone {
entry:
  %empty = call i25 @llvm.part.select.i25(i25 %0, i32 %1, i32 %2)
  %empty_4 = trunc i25 %empty to i19
  ret i19 %empty_4
}

define weak i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18, i5) nounwind readnone {
entry:
  %empty = zext i18 %0 to i23
  %empty_5 = zext i5 %1 to i23
  %empty_6 = shl i23 %empty, 5
  %empty_7 = or i23 %empty_6, %empty_5
  ret i23 %empty_7
}

define weak i20 @_ssdm_op_BitConcatenate.i20.i18.i2(i18, i2) nounwind readnone {
entry:
  %empty = zext i18 %0 to i20
  %empty_8 = zext i2 %1 to i20
  %empty_9 = shl i20 %empty, 2
  %empty_10 = or i20 %empty_9, %empty_8
  ret i20 %empty_10
}

declare void @_GLOBAL__I_a() nounwind section ".text.startup"

define void @BitShift([2 x i18]* %a_V, [2 x i19]* %b_V) {
_ZrsILi25ELb1EE11ap_int_baseIXT_EXT0_EXleT_Li64EEERKS1_i.exit2:
  call void (...)* @_ssdm_op_SpecBitsMap([2 x i18]* %a_V), !map !44
  call void (...)* @_ssdm_op_SpecBitsMap([2 x i19]* %b_V), !map !50
  %b_V_addr = getelementptr [2 x i19]* %b_V, i64 0, i64 0
  %a_V_addr = getelementptr [2 x i18]* %a_V, i64 0, i64 0
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @BitShift_str) nounwind
  %a_V_load = load i18* %a_V_addr, align 4
  %p_shl = call i23 @_ssdm_op_BitConcatenate.i23.i18.i5(i18 %a_V_load, i5 0)
  %p_shl_cast = zext i23 %p_shl to i24
  %p_neg = sub i24 0, %p_shl_cast
  %p_neg_cast = sext i24 %p_neg to i25
  %p_shl4 = call i20 @_ssdm_op_BitConcatenate.i20.i18.i2(i18 %a_V_load, i2 0)
  %p_shl4_cast = zext i20 %p_shl4 to i25
  %r_V_2 = sub i25 %p_neg_cast, %p_shl4_cast
  %phitmp = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %r_V_2, i32 6, i32 24)
  store i19 %phitmp, i19* %b_V_addr, align 4
  %a_V_addr_1 = getelementptr [2 x i18]* %a_V, i64 0, i64 1
  %a_V_load_1 = load i18* %a_V_addr_1, align 4
  %lhs_V = zext i18 %a_V_load_1 to i25
  %r_V = mul i25 %lhs_V, -35
  %phitmp1 = call i19 @_ssdm_op_PartSelect.i19.i25.i32.i32(i25 %r_V, i32 6, i32 24)
  %b_V_addr_1 = getelementptr [2 x i19]* %b_V, i64 0, i64 1
  store i19 %phitmp1, i19* %b_V_addr_1, align 4
  ret void
}

!opencl.kernels = !{!0, !7, !7, !13, !13, !19, !22, !13, !13, !13, !7, !7, !26, !28, !30, !30, !32, !32, !34, !34, !34, !34, !13, !13}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!37}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"ap_uint<18>*", metadata !"ap_int<19>*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<25, true> &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space"}
!15 = metadata !{metadata !"kernel_arg_access_qual"}
!16 = metadata !{metadata !"kernel_arg_type"}
!17 = metadata !{metadata !"kernel_arg_type_qual"}
!18 = metadata !{metadata !"kernel_arg_name"}
!19 = metadata !{null, metadata !8, metadata !9, metadata !20, metadata !11, metadata !21, metadata !6}
!20 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<19> &"}
!21 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!22 = metadata !{null, metadata !23, metadata !2, metadata !24, metadata !4, metadata !25, metadata !6}
!23 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!24 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<25, true> &", metadata !"int"}
!25 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!26 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !21, metadata !6}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<25> &"}
!28 = metadata !{null, metadata !23, metadata !2, metadata !29, metadata !4, metadata !25, metadata !6}
!29 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<18, false> &", metadata !"const ap_int_base<7, true> &"}
!30 = metadata !{null, metadata !8, metadata !9, metadata !31, metadata !11, metadata !12, metadata !6}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<7, true> &"}
!32 = metadata !{null, metadata !8, metadata !9, metadata !33, metadata !11, metadata !12, metadata !6}
!33 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<18, false> &"}
!34 = metadata !{null, metadata !8, metadata !9, metadata !35, metadata !11, metadata !36, metadata !6}
!35 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!36 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!37 = metadata !{metadata !38, [1 x i32]* @llvm_global_ctors_0}
!38 = metadata !{metadata !39}
!39 = metadata !{i32 0, i32 31, metadata !40}
!40 = metadata !{metadata !41}
!41 = metadata !{metadata !"llvm.global_ctors.0", metadata !42, metadata !"", i32 0, i32 31}
!42 = metadata !{metadata !43}
!43 = metadata !{i32 0, i32 0, i32 1}
!44 = metadata !{metadata !45}
!45 = metadata !{i32 0, i32 17, metadata !46}
!46 = metadata !{metadata !47}
!47 = metadata !{metadata !"a.V", metadata !48, metadata !"uint18", i32 0, i32 17}
!48 = metadata !{metadata !49}
!49 = metadata !{i32 0, i32 1, i32 1}
!50 = metadata !{metadata !51}
!51 = metadata !{i32 0, i32 18, metadata !52}
!52 = metadata !{metadata !53}
!53 = metadata !{metadata !"b.V", metadata !48, metadata !"int19", i32 0, i32 18}
