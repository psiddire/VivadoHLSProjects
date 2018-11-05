; ModuleID = '/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG/NTPG/solution2/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.registers.0 = type { [4 x i32], [2 x i32] }
%struct.inPut.4 = type { i16, i32 }
%struct.outPut.5 = type { i32, i1 }

@weight1 = internal unnamed_addr constant [5 x i8] c"\18\1F\10\DD\DC" ; [#uses=1 type=[5 x i8]*]
@reg = internal global [300 x %struct.registers.0] zeroinitializer, align 16 ; [#uses=2 type=[300 x %struct.registers.0]*]
@llvm.global_ctors = appending global [1 x { i32, void ()* }] [{ i32, void ()* } { i32 65535, void ()* @_GLOBAL__I_a }] ; [#uses=0 type=[1 x { i32, void ()* }]*]
@TPG.str = internal unnamed_addr constant [4 x i8] c"TPG\00" ; [#uses=1 type=[4 x i8]*]
@.str6 = private unnamed_addr constant [12 x i8] c"hls_label_1\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"hls_label_2\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [12 x i8] c"hls_label_3\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str2 = private unnamed_addr constant [12 x i8] c"hls_label_0\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str = private unnamed_addr constant [9 x i8] c"COMPLETE\00", align 1 ; [#uses=1 type=[9 x i8]*]

; [#uses=26]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=3]
declare void @_ssdm_Unroll(...) nounwind

; [#uses=13]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=2]
declare void @_ssdm_SpecDependence(...) nounwind

; [#uses=3]
declare void @_ssdm_SpecArrayPartition(...) nounwind

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind section ".text.startup"

; [#uses=0]
define void @TPG(%struct.inPut.4* %in, %struct.outPut.5* %out) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @TPG.str) nounwind
  %1 = alloca %struct.outPut.5, align 4           ; [#uses=3 type=%struct.outPut.5*]
  call void @llvm.dbg.value(metadata !{%struct.inPut.4* %in}, i64 0, metadata !165), !dbg !166 ; [debug line = 5:16] [debug variable = in]
  call void @llvm.dbg.value(metadata !{%struct.outPut.5* %out}, i64 0, metadata !167), !dbg !168 ; [debug line = 5:32] [debug variable = out]
  call void (...)* @_ssdm_SpecArrayDimSize(%struct.inPut.4* %in, i32 300) nounwind, !dbg !169 ; [debug line = 5:43]
  call void (...)* @_ssdm_SpecArrayDimSize(%struct.outPut.5* %out, i32 300) nounwind, !dbg !171 ; [debug line = 5:74]
  call void (...)* @_ssdm_SpecArrayPartition(%struct.inPut.4* %in, i32 0, i8* getelementptr inbounds ([9 x i8]* @.str, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !172 ; [debug line = 8:1]
  call void (...)* @_ssdm_SpecArrayPartition(%struct.outPut.5* %out, i32 0, i8* getelementptr inbounds ([9 x i8]* @.str, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !173 ; [debug line = 9:1]
  call void (...)* @_ssdm_SpecArrayPartition(%struct.registers.0* getelementptr inbounds ([300 x %struct.registers.0]* @reg, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([9 x i8]* @.str, i64 0, i64 0), i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !174 ; [debug line = 10:1]
  %.addr = getelementptr inbounds %struct.outPut.5* %1, i64 0, i32 0, !dbg !175 ; [#uses=1 type=i32*] [debug line = 15:11]
  %.addr.1 = getelementptr inbounds %struct.outPut.5* %1, i64 0, i32 1, !dbg !175 ; [#uses=1 type=i1*] [debug line = 15:11]
  br label %2, !dbg !178                          ; [debug line = 13:8]

; <label>:2                                       ; preds = %3, %0
  %i = phi i16 [ 0, %0 ], [ %i.1, %3 ]            ; [#uses=3 type=i16]
  %exitcond = icmp eq i16 %i, 300, !dbg !178      ; [#uses=1 type=i1] [debug line = 13:8]
  br i1 %exitcond, label %6, label %3, !dbg !178  ; [debug line = 13:8]

; <label>:3                                       ; preds = %2
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0)) nounwind, !dbg !179 ; [#uses=1 type=i32] [debug line = 13:29]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !180 ; [debug line = 14:1]
  %tmp = sext i16 %i to i64, !dbg !181            ; [#uses=5 type=i64] [debug line = 15:2]
  %in.addr = getelementptr inbounds %struct.inPut.4* %in, i64 %tmp, i32 0, !dbg !175 ; [#uses=1 type=i16*] [debug line = 15:11]
  %in.load = load i16* %in.addr, align 2, !dbg !175 ; [#uses=2 type=i16] [debug line = 15:11]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i16 %in.load) nounwind
  %in.addr.1 = getelementptr inbounds %struct.inPut.4* %in, i64 %tmp, i32 1, !dbg !175 ; [#uses=1 type=i32*] [debug line = 15:11]
  %in.load.1 = load i32* %in.addr.1, align 4, !dbg !175 ; [#uses=2 type=i32] [debug line = 15:11]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %in.load.1) nounwind
  %reg.addr = getelementptr inbounds [300 x %struct.registers.0]* @reg, i64 0, i64 %tmp, !dbg !175 ; [#uses=1 type=%struct.registers.0*] [debug line = 15:11]
  call fastcc void @LinFil(%struct.outPut.5* sret %1, i16 zeroext %in.load, i32 %in.load.1, %struct.registers.0* %reg.addr), !dbg !175 ; [debug line = 15:11]
  %out.addr = getelementptr inbounds %struct.outPut.5* %out, i64 %tmp, i32 0, !dbg !175 ; [#uses=1 type=i32*] [debug line = 15:11]
  %4 = load i32* %.addr, align 4, !dbg !175       ; [#uses=2 type=i32] [debug line = 15:11]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %4) nounwind
  store i32 %4, i32* %out.addr, align 4, !dbg !175 ; [debug line = 15:11]
  %out.addr.1 = getelementptr inbounds %struct.outPut.5* %out, i64 %tmp, i32 1, !dbg !175 ; [#uses=1 type=i1*] [debug line = 15:11]
  %5 = load i1* %.addr.1, align 4, !dbg !175      ; [#uses=2 type=i1] [debug line = 15:11]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i1 %5) nounwind
  store i1 %5, i1* %out.addr.1, align 1, !dbg !175 ; [debug line = 15:11]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !182 ; [#uses=0 type=i32] [debug line = 16:3]
  %i.1 = add i16 %i, 1, !dbg !183                 ; [#uses=1 type=i16] [debug line = 13:24]
  call void @llvm.dbg.value(metadata !{i16 %i.1}, i64 0, metadata !184), !dbg !183 ; [debug line = 13:24] [debug variable = i]
  br label %2, !dbg !183                          ; [debug line = 13:24]

; <label>:6                                       ; preds = %2
  ret void, !dbg !185                             ; [debug line = 17:1]
}

; [#uses=1]
define internal fastcc void @LinFil(%struct.outPut.5* noalias sret %agg.result, i16 zeroext %data_int, i32 %lincoeff, %struct.registers.0* %r) nounwind uwtable {
._crit_edge:
  call void @llvm.dbg.value(metadata !{i16 %data_int}, i64 0, metadata !186), !dbg !187 ; [debug line = 19:24] [debug variable = data_int]
  call void @llvm.dbg.value(metadata !{i32 %lincoeff}, i64 0, metadata !188), !dbg !189 ; [debug line = 19:43] [debug variable = lincoeff]
  call void @llvm.dbg.value(metadata !{%struct.registers.0* %r}, i64 0, metadata !190), !dbg !191 ; [debug line = 19:64] [debug variable = r]
  call void @llvm.dbg.value(metadata !192, i64 0, metadata !193), !dbg !194 ; [debug line = 19:73] [debug variable = i]
  call void @llvm.dbg.declare(metadata !{%struct.outPut.5* %agg.result}, metadata !195), !dbg !197 ; [debug line = 36:10] [debug variable = o]
  %agg.result.addr = getelementptr inbounds %struct.outPut.5* %agg.result, i64 0, i32 1, !dbg !198 ; [#uses=2 type=i1*] [debug line = 37:3]
  store i1 false, i1* %agg.result.addr, align 1, !dbg !198 ; [debug line = 37:3]
  %uncorrectedADC = and i16 %data_int, 4095, !dbg !199 ; [#uses=1 type=i16] [debug line = 40:3]
  call void @llvm.dbg.value(metadata !{i16 %uncorrectedADC}, i64 0, metadata !200), !dbg !199 ; [debug line = 40:3] [debug variable = uncorrectedADC]
  %tmp = and i32 %lincoeff, 16711680, !dbg !201   ; [#uses=1 type=i32] [debug line = 41:3]
  %tmp.2 = icmp eq i32 %tmp, 0, !dbg !201         ; [#uses=1 type=i1] [debug line = 41:3]
  call void @llvm.dbg.value(metadata !{i32 %lincoeff}, i64 0, metadata !202), !dbg !203 ; [debug line = 42:8] [debug variable = coeff]
  %coeff = select i1 %tmp.2, i32 0, i32 %lincoeff, !dbg !201 ; [#uses=3 type=i32] [debug line = 41:3]
  call void @llvm.dbg.value(metadata !{i32 %coeff}, i64 0, metadata !202), !dbg !201 ; [debug line = 41:3] [debug variable = coeff]
  %tmp.3 = trunc i32 %coeff to i16, !dbg !204     ; [#uses=1 type=i16] [debug line = 43:3]
  %base = and i16 %tmp.3, 4095, !dbg !204         ; [#uses=1 type=i16] [debug line = 43:3]
  call void @llvm.dbg.value(metadata !{i16 %base}, i64 0, metadata !205), !dbg !204 ; [debug line = 43:3] [debug variable = base]
  %tmp.5 = lshr i32 %coeff, 12, !dbg !206         ; [#uses=1 type=i32] [debug line = 44:3]
  %tmp.6 = trunc i32 %tmp.5 to i8, !dbg !206      ; [#uses=1 type=i8] [debug line = 44:3]
  %shiftlin = and i8 %tmp.6, 15, !dbg !206        ; [#uses=1 type=i8] [debug line = 44:3]
  call void @llvm.dbg.value(metadata !{i8 %shiftlin}, i64 0, metadata !207), !dbg !206 ; [debug line = 44:3] [debug variable = shiftlin]
  %tmp.8 = lshr i32 %coeff, 16, !dbg !210         ; [#uses=1 type=i32] [debug line = 45:3]
  %mult = trunc i32 %tmp.8 to i8, !dbg !210       ; [#uses=1 type=i8] [debug line = 45:3]
  call void @llvm.dbg.value(metadata !{i8 %mult}, i64 0, metadata !211), !dbg !210 ; [debug line = 45:3] [debug variable = mult]
  %correctedADC = sub i16 %uncorrectedADC, %base, !dbg !212 ; [#uses=1 type=i16] [debug line = 46:3]
  call void @llvm.dbg.value(metadata !{i16 %correctedADC}, i64 0, metadata !213), !dbg !212 ; [debug line = 46:3] [debug variable = correctedADC]
  %tmp.11 = sext i16 %correctedADC to i32, !dbg !215 ; [#uses=1 type=i32] [debug line = 48:3]
  %tmp.12 = zext i8 %mult to i32, !dbg !215       ; [#uses=1 type=i32] [debug line = 48:3]
  %prod = mul nsw i32 %tmp.11, %tmp.12, !dbg !215 ; [#uses=1 type=i32] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i32 %prod}, i64 0, metadata !216), !dbg !215 ; [debug line = 48:3] [debug variable = prod]
  %tmp.14 = zext i8 %shiftlin to i32, !dbg !218   ; [#uses=1 type=i32] [debug line = 49:3]
  %tmp.15 = add nsw i32 %tmp.14, 2, !dbg !218     ; [#uses=1 type=i32] [debug line = 49:3]
  %linearizerOutput = ashr i32 %prod, %tmp.15, !dbg !218 ; [#uses=1 type=i32] [debug line = 49:3]
  call void @llvm.dbg.value(metadata !{i32 %linearizerOutput}, i64 0, metadata !219), !dbg !218 ; [debug line = 49:3] [debug variable = linearizerOutput]
  %r.addr = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 0, i64 3, !dbg !220 ; [#uses=1 type=i32*] [debug line = 51:3]
  %m = load i32* %r.addr, align 4, !dbg !220      ; [#uses=2 type=i32] [debug line = 51:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %m) nounwind
  call void @llvm.dbg.value(metadata !{i32 %m}, i64 0, metadata !221), !dbg !220 ; [debug line = 51:3] [debug variable = m]
  %r.addr.1 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 0, i64 0, !dbg !222 ; [#uses=2 type=i32*] [debug line = 54:1]
  br label %0, !dbg !225                          ; [debug line = 52:8]

; <label>:0                                       ; preds = %1, %._crit_edge
  %j = phi i8 [ 3, %._crit_edge ], [ %j.2, %1 ]   ; [#uses=4 type=i8]
  %tmp.17 = icmp sgt i8 %j, 0, !dbg !225          ; [#uses=1 type=i1] [debug line = 52:8]
  br i1 %tmp.17, label %1, label %2, !dbg !225    ; [debug line = 52:8]

; <label>:1                                       ; preds = %0
  %rbegin1 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0)) nounwind, !dbg !226 ; [#uses=1 type=i32] [debug line = 52:28]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !227 ; [debug line = 53:1]
  call void (...)* @_ssdm_SpecDependence(i32* %r.addr.1, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !222 ; [debug line = 54:1]
  %tmp.18 = sext i8 %j to i32, !dbg !228          ; [#uses=1 type=i32] [debug line = 55:2]
  %tmp.19 = add nsw i32 %tmp.18, -1, !dbg !228    ; [#uses=1 type=i32] [debug line = 55:2]
  %tmp.20 = sext i32 %tmp.19 to i64, !dbg !228    ; [#uses=1 type=i64] [debug line = 55:2]
  %r.addr.2 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 0, i64 %tmp.20, !dbg !228 ; [#uses=1 type=i32*] [debug line = 55:2]
  %r.load = load i32* %r.addr.2, align 4, !dbg !228 ; [#uses=2 type=i32] [debug line = 55:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load) nounwind
  %tmp.21 = sext i8 %j to i64, !dbg !228          ; [#uses=1 type=i64] [debug line = 55:2]
  %r.addr.3 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 0, i64 %tmp.21, !dbg !228 ; [#uses=1 type=i32*] [debug line = 55:2]
  store i32 %r.load, i32* %r.addr.3, align 4, !dbg !228 ; [debug line = 55:2]
  %rend18 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str4, i64 0, i64 0), i32 %rbegin1) nounwind, !dbg !229 ; [#uses=0 type=i32] [debug line = 56:3]
  %j.2 = add i8 %j, -1, !dbg !230                 ; [#uses=1 type=i8] [debug line = 52:23]
  call void @llvm.dbg.value(metadata !{i8 %j.2}, i64 0, metadata !231), !dbg !230 ; [debug line = 52:23] [debug variable = j]
  br label %0, !dbg !230                          ; [debug line = 52:23]

; <label>:2                                       ; preds = %0
  store i32 %linearizerOutput, i32* %r.addr.1, align 4, !dbg !233 ; [debug line = 57:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 -36) nounwind
  %pro = mul i32 %m, -36, !dbg !234               ; [#uses=1 type=i32] [debug line = 58:3]
  call void @llvm.dbg.value(metadata !{i32 %pro}, i64 0, metadata !235), !dbg !234 ; [debug line = 58:3] [debug variable = pro]
  %mul.1 = ashr i32 %pro, 6, !dbg !236            ; [#uses=1 type=i32] [debug line = 59:3]
  call void @llvm.dbg.value(metadata !{i32 %mul.1}, i64 0, metadata !237), !dbg !236 ; [debug line = 59:3] [debug variable = mul]
  call void @llvm.dbg.value(metadata !{i32 %mul.1}, i64 0, metadata !238), !dbg !239 ; [debug line = 60:3] [debug variable = acc]
  br label %3, !dbg !240                          ; [debug line = 61:8]

; <label>:3                                       ; preds = %4, %2
  %j.1 = phi i8 [ 3, %2 ], [ %j.3, %4 ]           ; [#uses=3 type=i8]
  %filterOutput = phi i32 [ %mul.1, %2 ], [ %acc.2, %4 ] ; [#uses=2 type=i32]
  %tmp.25 = icmp sgt i8 %j.1, -1, !dbg !240       ; [#uses=1 type=i1] [debug line = 61:8]
  br i1 %tmp.25, label %4, label %5, !dbg !240    ; [debug line = 61:8]

; <label>:4                                       ; preds = %3
  %rbegin2 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0)) nounwind, !dbg !242 ; [#uses=1 type=i32] [debug line = 61:28]
  call void (...)* @_ssdm_Unroll(i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !244 ; [debug line = 62:1]
  %tmp.26 = sext i8 %j.1 to i64, !dbg !245        ; [#uses=2 type=i64] [debug line = 63:2]
  %r.addr.4 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 0, i64 %tmp.26, !dbg !245 ; [#uses=1 type=i32*] [debug line = 63:2]
  %r.load.1 = load i32* %r.addr.4, align 4, !dbg !245 ; [#uses=2 type=i32] [debug line = 63:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load.1) nounwind
  %weight1.addr = getelementptr inbounds [5 x i8]* @weight1, i64 0, i64 %tmp.26, !dbg !245 ; [#uses=1 type=i8*] [debug line = 63:2]
  %weight1.load = load i8* %weight1.addr, align 1, !dbg !245 ; [#uses=2 type=i8] [debug line = 63:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %weight1.load) nounwind
  %tmp.27 = sext i8 %weight1.load to i32, !dbg !245 ; [#uses=1 type=i32] [debug line = 63:2]
  %pro.1 = mul i32 %tmp.27, %r.load.1, !dbg !245  ; [#uses=1 type=i32] [debug line = 63:2]
  call void @llvm.dbg.value(metadata !{i32 %pro.1}, i64 0, metadata !235), !dbg !245 ; [debug line = 63:2] [debug variable = pro]
  %mul = ashr i32 %pro.1, 6, !dbg !246            ; [#uses=1 type=i32] [debug line = 64:5]
  call void @llvm.dbg.value(metadata !{i32 %mul}, i64 0, metadata !237), !dbg !246 ; [debug line = 64:5] [debug variable = mul]
  %acc.2 = add nsw i32 %mul, %filterOutput, !dbg !247 ; [#uses=1 type=i32] [debug line = 65:5]
  call void @llvm.dbg.value(metadata !{i32 %acc.2}, i64 0, metadata !238), !dbg !247 ; [debug line = 65:5] [debug variable = acc]
  %rend16 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i64 0, i64 0), i32 %rbegin2) nounwind, !dbg !248 ; [#uses=0 type=i32] [debug line = 66:3]
  %j.3 = add i8 %j.1, -1, !dbg !249               ; [#uses=1 type=i8] [debug line = 61:23]
  call void @llvm.dbg.value(metadata !{i8 %j.3}, i64 0, metadata !231), !dbg !249 ; [debug line = 61:23] [debug variable = j]
  br label %3, !dbg !249                          ; [debug line = 61:23]

; <label>:5                                       ; preds = %3
  %acc.0.lcssa = phi i32 [ %filterOutput, %3 ]    ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %filterOutput}, i64 0, metadata !250), !dbg !251 ; [debug line = 67:3] [debug variable = filterOutput]
  %tmp.32 = icmp slt i32 %acc.0.lcssa, 0, !dbg !252 ; [#uses=1 type=i1] [debug line = 68:3]
  %.acc = select i1 %tmp.32, i32 0, i32 %acc.0.lcssa, !dbg !252 ; [#uses=2 type=i32] [debug line = 68:3]
  %tmp.33 = icmp sgt i32 %.acc, 262143, !dbg !253 ; [#uses=1 type=i1] [debug line = 69:3]
  %filterOutput.1 = select i1 %tmp.33, i32 262143, i32 %.acc, !dbg !253 ; [#uses=3 type=i32] [debug line = 69:3]
  %agg.result.addr.1 = getelementptr inbounds %struct.outPut.5* %agg.result, i64 0, i32 0, !dbg !254 ; [#uses=1 type=i32*] [debug line = 70:3]
  store i32 %filterOutput.1, i32* %agg.result.addr.1, align 4, !dbg !254 ; [debug line = 70:3]
  %r.addr.5 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 1, i64 0, !dbg !255 ; [#uses=3 type=i32*] [debug line = 72:3]
  %r.load.2 = load i32* %r.addr.5, align 4, !dbg !255 ; [#uses=6 type=i32] [debug line = 72:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load.2) nounwind
  %tmp.34 = icmp ugt i32 %r.load.2, %filterOutput.1, !dbg !255 ; [#uses=1 type=i1] [debug line = 72:3]
  br i1 %tmp.34, label %6, label %._crit_edge1, !dbg !255 ; [debug line = 72:3]

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load.2) nounwind
  %r.addr.6 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 1, i64 1, !dbg !255 ; [#uses=1 type=i32*] [debug line = 72:3]
  %r.load.3 = load i32* %r.addr.6, align 4, !dbg !255 ; [#uses=2 type=i32] [debug line = 72:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load.3) nounwind
  %tmp.35 = icmp ugt i32 %r.load.2, %r.load.3, !dbg !255 ; [#uses=1 type=i1] [debug line = 72:3]
  br i1 %tmp.35, label %7, label %._crit_edge1, !dbg !255 ; [debug line = 72:3]

; <label>:7                                       ; preds = %6
  store i1 true, i1* %agg.result.addr, align 1, !dbg !256 ; [debug line = 73:4]
  br label %._crit_edge1, !dbg !258               ; [debug line = 74:3]

._crit_edge1:                                     ; preds = %7, %6, %5
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str6, i64 0, i64 0)) nounwind, !dbg !259 ; [#uses=1 type=i32] [debug line = 75:27]
  call void (...)* @_ssdm_SpecDependence(i32* %r.addr.5, i32 0, i32 0, i32 -1, i32 0, i32 1) nounwind, !dbg !262 ; [debug line = 77:1]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %r.load.2) nounwind
  %r.addr.7 = getelementptr inbounds %struct.registers.0* %r, i64 0, i32 1, i64 1, !dbg !263 ; [#uses=1 type=i32*] [debug line = 78:2]
  store i32 %r.load.2, i32* %r.addr.7, align 4, !dbg !263 ; [debug line = 78:2]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str6, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !264 ; [#uses=0 type=i32] [debug line = 79:3]
  store i32 %filterOutput.1, i32* %r.addr.5, align 4, !dbg !265 ; [debug line = 80:3]
  ret void, !dbg !266                             ; [debug line = 81:3]
}

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!146, !153, !159, !159}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG/NTPG/solution2/.autopilot/db/TPG.pragma.2.cc", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !64} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !37, metadata !56, metadata !63}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"TPG", metadata !"TPG", metadata !"_Z3TPGP5inPutP6outPut", metadata !6, i32 5, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.inPut.4*, %struct.outPut.5*)* @TPG, null, null, metadata !29, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"TPG.cc", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !19}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786434, null, metadata !"inPut", metadata !11, i32 41, i64 64, i64 32, i32 0, i32 0, null, metadata !12, i32 0, null, null} ; [ DW_TAG_class_type ]
!11 = metadata !{i32 786473, metadata !"./TPG.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!12 = metadata !{metadata !13, metadata !16}
!13 = metadata !{i32 786445, metadata !10, metadata !"data_input", metadata !11, i32 42, i64 16, i64 16, i64 0, i32 0, metadata !14} ; [ DW_TAG_member ]
!14 = metadata !{i32 786454, null, metadata !"uint16_t", metadata !11, i32 50, i64 0, i64 0, i64 0, i32 0, metadata !15} ; [ DW_TAG_typedef ]
!15 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!16 = metadata !{i32 786445, metadata !10, metadata !"lincoeff", metadata !11, i32 43, i64 32, i64 32, i64 32, i32 0, metadata !17} ; [ DW_TAG_member ]
!17 = metadata !{i32 786454, null, metadata !"uint32_t", metadata !11, i32 52, i64 0, i64 0, i64 0, i32 0, metadata !18} ; [ DW_TAG_typedef ]
!18 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!19 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !20} ; [ DW_TAG_pointer_type ]
!20 = metadata !{i32 786434, null, metadata !"outPut", metadata !11, i32 36, i64 64, i64 32, i32 0, i32 0, null, metadata !21, i32 0, null, null} ; [ DW_TAG_class_type ]
!21 = metadata !{metadata !22, metadata !23, metadata !25, metadata !31}
!22 = metadata !{i32 786445, metadata !20, metadata !"filOut", metadata !11, i32 37, i64 32, i64 32, i64 0, i32 0, metadata !17} ; [ DW_TAG_member ]
!23 = metadata !{i32 786445, metadata !20, metadata !"peakOut", metadata !11, i32 38, i64 8, i64 8, i64 32, i32 0, metadata !24} ; [ DW_TAG_member ]
!24 = metadata !{i32 786468, null, metadata !"bool", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 2} ; [ DW_TAG_base_type ]
!25 = metadata !{i32 786478, i32 0, metadata !20, metadata !"~outPut", metadata !"~outPut", metadata !"", metadata !11, i32 36, metadata !26, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !29, i32 36} ; [ DW_TAG_subprogram ]
!26 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !27, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!27 = metadata !{null, metadata !28}
!28 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !20} ; [ DW_TAG_pointer_type ]
!29 = metadata !{metadata !30}
!30 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!31 = metadata !{i32 786478, i32 0, metadata !20, metadata !"operator=", metadata !"operator=", metadata !"_ZN6outPutaSERKS_", metadata !11, i32 36, metadata !32, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !29, i32 36} ; [ DW_TAG_subprogram ]
!32 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !33, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!33 = metadata !{metadata !34, metadata !28, metadata !35}
!34 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !20} ; [ DW_TAG_reference_type ]
!35 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !36} ; [ DW_TAG_reference_type ]
!36 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !20} ; [ DW_TAG_const_type ]
!37 = metadata !{i32 786478, i32 0, metadata !6, metadata !"LinFil", metadata !"LinFil", metadata !"_Z6LinFiltjR9registerss", metadata !6, i32 19, metadata !38, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !29, i32 19} ; [ DW_TAG_subprogram ]
!38 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !39, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!39 = metadata !{metadata !20, metadata !14, metadata !17, metadata !40, metadata !55}
!40 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !41} ; [ DW_TAG_reference_type ]
!41 = metadata !{i32 786434, null, metadata !"registers", metadata !11, i32 46, i64 192, i64 32, i32 0, i32 0, null, metadata !42, i32 0, null, null} ; [ DW_TAG_class_type ]
!42 = metadata !{metadata !43, metadata !47, metadata !51}
!43 = metadata !{i32 786445, metadata !41, metadata !"shift_reg", metadata !11, i32 47, i64 128, i64 32, i64 0, i32 0, metadata !44} ; [ DW_TAG_member ]
!44 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !17, metadata !45, i32 0, i32 0} ; [ DW_TAG_array_type ]
!45 = metadata !{metadata !46}
!46 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!47 = metadata !{i32 786445, metadata !41, metadata !"peak_reg", metadata !11, i32 48, i64 64, i64 32, i64 128, i32 0, metadata !48} ; [ DW_TAG_member ]
!48 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 64, i64 32, i32 0, i32 0, metadata !17, metadata !49, i32 0, i32 0} ; [ DW_TAG_array_type ]
!49 = metadata !{metadata !50}
!50 = metadata !{i32 786465, i64 0, i64 1}        ; [ DW_TAG_subrange_type ]
!51 = metadata !{i32 786478, i32 0, metadata !41, metadata !"registers", metadata !"registers", metadata !"", metadata !11, i32 46, metadata !52, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !29, i32 46} ; [ DW_TAG_subprogram ]
!52 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !53, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!53 = metadata !{null, metadata !54}
!54 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !41} ; [ DW_TAG_pointer_type ]
!55 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!56 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"_ZN34ssdm_global_array_TPGpp0ccaplineccC1Ev", metadata !6, i32 86, metadata !57, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !62, metadata !29, i32 86} ; [ DW_TAG_subprogram ]
!57 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !58, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!58 = metadata !{null, metadata !59}
!59 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !60} ; [ DW_TAG_pointer_type ]
!60 = metadata !{i32 786434, null, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !6, i32 84, i64 8, i64 8, i32 0, i32 0, null, metadata !61, i32 0, null, null} ; [ DW_TAG_class_type ]
!61 = metadata !{metadata !62}
!62 = metadata !{i32 786478, i32 0, metadata !60, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"", metadata !6, i32 86, metadata !57, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !29, i32 86} ; [ DW_TAG_subprogram ]
!63 = metadata !{i32 786478, i32 0, null, metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"ssdm_global_array_TPGpp0ccaplinecc", metadata !"_ZN34ssdm_global_array_TPGpp0ccaplineccC2Ev", metadata !6, i32 86, metadata !57, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !62, metadata !29, i32 86} ; [ DW_TAG_subprogram ]
!64 = metadata !{metadata !65}
!65 = metadata !{metadata !66, metadata !70, metadata !71, metadata !74, metadata !75, metadata !76, metadata !132, metadata !133, metadata !134, metadata !136, metadata !137, metadata !143}
!66 = metadata !{i32 786484, i32 0, metadata !5, metadata !"reg", metadata !"reg", metadata !"", metadata !6, i32 6, metadata !67, i32 1, i32 1, [300 x %struct.registers.0]* @reg} ; [ DW_TAG_variable ]
!67 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 57600, i64 32, i32 0, i32 0, metadata !41, metadata !68, i32 0, i32 0} ; [ DW_TAG_array_type ]
!68 = metadata !{metadata !69}
!69 = metadata !{i32 786465, i64 0, i64 299}      ; [ DW_TAG_subrange_type ]
!70 = metadata !{i32 786484, i32 0, null, metadata !"ssdm_global_array_ins", metadata !"ssdm_global_array_ins", metadata !"_ZL21ssdm_global_array_ins", metadata !6, i32 91, metadata !60, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!71 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !72, i32 346, metadata !73, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!72 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!73 = metadata !{i32 786434, null, metadata !"_IO_FILE_plus", metadata !72, i32 344, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_class_type ]
!74 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !72, i32 347, metadata !73, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!75 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !72, i32 348, metadata !73, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!76 = metadata !{i32 786484, i32 0, null, metadata !"stdin", metadata !"stdin", metadata !"", metadata !77, i32 165, metadata !78, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!77 = metadata !{i32 786473, metadata !"/usr/include/stdio.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!78 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !79} ; [ DW_TAG_pointer_type ]
!79 = metadata !{i32 786434, null, metadata !"_IO_FILE", metadata !72, i32 271, i64 1728, i64 64, i32 0, i32 0, null, metadata !80, i32 0, null, null} ; [ DW_TAG_class_type ]
!80 = metadata !{metadata !81, metadata !83, metadata !86, metadata !87, metadata !88, metadata !89, metadata !90, metadata !91, metadata !92, metadata !93, metadata !94, metadata !95, metadata !96, metadata !103, metadata !104, metadata !105, metadata !106, metadata !109, metadata !110, metadata !112, metadata !116, metadata !118, metadata !120, metadata !121, metadata !122, metadata !123, metadata !124, metadata !127, metadata !128}
!81 = metadata !{i32 786445, metadata !79, metadata !"_flags", metadata !72, i32 272, i64 32, i64 32, i64 0, i32 0, metadata !82} ; [ DW_TAG_member ]
!82 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!83 = metadata !{i32 786445, metadata !79, metadata !"_IO_read_ptr", metadata !72, i32 277, i64 64, i64 64, i64 64, i32 0, metadata !84} ; [ DW_TAG_member ]
!84 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !85} ; [ DW_TAG_pointer_type ]
!85 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!86 = metadata !{i32 786445, metadata !79, metadata !"_IO_read_end", metadata !72, i32 278, i64 64, i64 64, i64 128, i32 0, metadata !84} ; [ DW_TAG_member ]
!87 = metadata !{i32 786445, metadata !79, metadata !"_IO_read_base", metadata !72, i32 279, i64 64, i64 64, i64 192, i32 0, metadata !84} ; [ DW_TAG_member ]
!88 = metadata !{i32 786445, metadata !79, metadata !"_IO_write_base", metadata !72, i32 280, i64 64, i64 64, i64 256, i32 0, metadata !84} ; [ DW_TAG_member ]
!89 = metadata !{i32 786445, metadata !79, metadata !"_IO_write_ptr", metadata !72, i32 281, i64 64, i64 64, i64 320, i32 0, metadata !84} ; [ DW_TAG_member ]
!90 = metadata !{i32 786445, metadata !79, metadata !"_IO_write_end", metadata !72, i32 282, i64 64, i64 64, i64 384, i32 0, metadata !84} ; [ DW_TAG_member ]
!91 = metadata !{i32 786445, metadata !79, metadata !"_IO_buf_base", metadata !72, i32 283, i64 64, i64 64, i64 448, i32 0, metadata !84} ; [ DW_TAG_member ]
!92 = metadata !{i32 786445, metadata !79, metadata !"_IO_buf_end", metadata !72, i32 284, i64 64, i64 64, i64 512, i32 0, metadata !84} ; [ DW_TAG_member ]
!93 = metadata !{i32 786445, metadata !79, metadata !"_IO_save_base", metadata !72, i32 286, i64 64, i64 64, i64 576, i32 0, metadata !84} ; [ DW_TAG_member ]
!94 = metadata !{i32 786445, metadata !79, metadata !"_IO_backup_base", metadata !72, i32 287, i64 64, i64 64, i64 640, i32 0, metadata !84} ; [ DW_TAG_member ]
!95 = metadata !{i32 786445, metadata !79, metadata !"_IO_save_end", metadata !72, i32 288, i64 64, i64 64, i64 704, i32 0, metadata !84} ; [ DW_TAG_member ]
!96 = metadata !{i32 786445, metadata !79, metadata !"_markers", metadata !72, i32 290, i64 64, i64 64, i64 768, i32 0, metadata !97} ; [ DW_TAG_member ]
!97 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !98} ; [ DW_TAG_pointer_type ]
!98 = metadata !{i32 786434, null, metadata !"_IO_marker", metadata !72, i32 186, i64 192, i64 64, i32 0, i32 0, null, metadata !99, i32 0, null, null} ; [ DW_TAG_class_type ]
!99 = metadata !{metadata !100, metadata !101, metadata !102}
!100 = metadata !{i32 786445, metadata !98, metadata !"_next", metadata !72, i32 187, i64 64, i64 64, i64 0, i32 0, metadata !97} ; [ DW_TAG_member ]
!101 = metadata !{i32 786445, metadata !98, metadata !"_sbuf", metadata !72, i32 188, i64 64, i64 64, i64 64, i32 0, metadata !78} ; [ DW_TAG_member ]
!102 = metadata !{i32 786445, metadata !98, metadata !"_pos", metadata !72, i32 192, i64 32, i64 32, i64 128, i32 0, metadata !82} ; [ DW_TAG_member ]
!103 = metadata !{i32 786445, metadata !79, metadata !"_chain", metadata !72, i32 292, i64 64, i64 64, i64 832, i32 0, metadata !78} ; [ DW_TAG_member ]
!104 = metadata !{i32 786445, metadata !79, metadata !"_fileno", metadata !72, i32 294, i64 32, i64 32, i64 896, i32 0, metadata !82} ; [ DW_TAG_member ]
!105 = metadata !{i32 786445, metadata !79, metadata !"_flags2", metadata !72, i32 298, i64 32, i64 32, i64 928, i32 0, metadata !82} ; [ DW_TAG_member ]
!106 = metadata !{i32 786445, metadata !79, metadata !"_old_offset", metadata !72, i32 300, i64 64, i64 64, i64 960, i32 0, metadata !107} ; [ DW_TAG_member ]
!107 = metadata !{i32 786454, null, metadata !"__off_t", metadata !72, i32 141, i64 0, i64 0, i64 0, i32 0, metadata !108} ; [ DW_TAG_typedef ]
!108 = metadata !{i32 786468, null, metadata !"long int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!109 = metadata !{i32 786445, metadata !79, metadata !"_cur_column", metadata !72, i32 304, i64 16, i64 16, i64 1024, i32 0, metadata !15} ; [ DW_TAG_member ]
!110 = metadata !{i32 786445, metadata !79, metadata !"_vtable_offset", metadata !72, i32 305, i64 8, i64 8, i64 1040, i32 0, metadata !111} ; [ DW_TAG_member ]
!111 = metadata !{i32 786468, null, metadata !"signed char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!112 = metadata !{i32 786445, metadata !79, metadata !"_shortbuf", metadata !72, i32 306, i64 8, i64 8, i64 1048, i32 0, metadata !113} ; [ DW_TAG_member ]
!113 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 8, i64 8, i32 0, i32 0, metadata !85, metadata !114, i32 0, i32 0} ; [ DW_TAG_array_type ]
!114 = metadata !{metadata !115}
!115 = metadata !{i32 786465, i64 0, i64 0}       ; [ DW_TAG_subrange_type ]
!116 = metadata !{i32 786445, metadata !79, metadata !"_lock", metadata !72, i32 310, i64 64, i64 64, i64 1088, i32 0, metadata !117} ; [ DW_TAG_member ]
!117 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, null} ; [ DW_TAG_pointer_type ]
!118 = metadata !{i32 786445, metadata !79, metadata !"_offset", metadata !72, i32 319, i64 64, i64 64, i64 1152, i32 0, metadata !119} ; [ DW_TAG_member ]
!119 = metadata !{i32 786454, null, metadata !"__off64_t", metadata !72, i32 142, i64 0, i64 0, i64 0, i32 0, metadata !108} ; [ DW_TAG_typedef ]
!120 = metadata !{i32 786445, metadata !79, metadata !"__pad1", metadata !72, i32 328, i64 64, i64 64, i64 1216, i32 0, metadata !117} ; [ DW_TAG_member ]
!121 = metadata !{i32 786445, metadata !79, metadata !"__pad2", metadata !72, i32 329, i64 64, i64 64, i64 1280, i32 0, metadata !117} ; [ DW_TAG_member ]
!122 = metadata !{i32 786445, metadata !79, metadata !"__pad3", metadata !72, i32 330, i64 64, i64 64, i64 1344, i32 0, metadata !117} ; [ DW_TAG_member ]
!123 = metadata !{i32 786445, metadata !79, metadata !"__pad4", metadata !72, i32 331, i64 64, i64 64, i64 1408, i32 0, metadata !117} ; [ DW_TAG_member ]
!124 = metadata !{i32 786445, metadata !79, metadata !"__pad5", metadata !72, i32 332, i64 64, i64 64, i64 1472, i32 0, metadata !125} ; [ DW_TAG_member ]
!125 = metadata !{i32 786454, null, metadata !"size_t", metadata !72, i32 35, i64 0, i64 0, i64 0, i32 0, metadata !126} ; [ DW_TAG_typedef ]
!126 = metadata !{i32 786468, null, metadata !"long unsigned int", null, i32 0, i64 64, i64 64, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!127 = metadata !{i32 786445, metadata !79, metadata !"_mode", metadata !72, i32 334, i64 32, i64 32, i64 1536, i32 0, metadata !82} ; [ DW_TAG_member ]
!128 = metadata !{i32 786445, metadata !79, metadata !"_unused2", metadata !72, i32 336, i64 160, i64 8, i64 1568, i32 0, metadata !129} ; [ DW_TAG_member ]
!129 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 160, i64 8, i32 0, i32 0, metadata !85, metadata !130, i32 0, i32 0} ; [ DW_TAG_array_type ]
!130 = metadata !{metadata !131}
!131 = metadata !{i32 786465, i64 0, i64 19}      ; [ DW_TAG_subrange_type ]
!132 = metadata !{i32 786484, i32 0, null, metadata !"stdout", metadata !"stdout", metadata !"", metadata !77, i32 166, metadata !78, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!133 = metadata !{i32 786484, i32 0, null, metadata !"stderr", metadata !"stderr", metadata !"", metadata !77, i32 167, metadata !78, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!134 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !135, i32 27, metadata !82, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!135 = metadata !{i32 786473, metadata !"/usr/include/bits/sys_errlist.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!136 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !135, i32 31, metadata !82, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!137 = metadata !{i32 786484, i32 0, null, metadata !"coef", metadata !"coef", metadata !"_ZL4coef", metadata !138, i32 9, metadata !139, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!138 = metadata !{i32 786473, metadata !"./LUTs.h", metadata !"/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/NTPG", null} ; [ DW_TAG_file_type ]
!139 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 96000, i64 32, i32 0, i32 0, metadata !140, metadata !141, i32 0, i32 0} ; [ DW_TAG_array_type ]
!140 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !17} ; [ DW_TAG_const_type ]
!141 = metadata !{metadata !142}
!142 = metadata !{i32 786465, i64 0, i64 2999}    ; [ DW_TAG_subrange_type ]
!143 = metadata !{i32 786484, i32 0, null, metadata !"data", metadata !"data", metadata !"_ZL4data", metadata !138, i32 5, metadata !144, i32 1, i32 1, null} ; [ DW_TAG_variable ]
!144 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 48000, i64 16, i32 0, i32 0, metadata !145, metadata !141, i32 0, i32 0} ; [ DW_TAG_array_type ]
!145 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !14} ; [ DW_TAG_const_type ]
!146 = metadata !{void (%struct.inPut.4*, %struct.outPut.5*)* @TPG, metadata !147, metadata !148, metadata !149, metadata !150, metadata !151, metadata !152}
!147 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!148 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!149 = metadata !{metadata !"kernel_arg_type", metadata !"struct inPut*", metadata !"struct outPut*"}
!150 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!151 = metadata !{metadata !"kernel_arg_name", metadata !"in", metadata !"out"}
!152 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!153 = metadata !{null, metadata !154, metadata !155, metadata !156, metadata !157, metadata !158, metadata !152}
!154 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0, i32 0, i32 0}
!155 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!156 = metadata !{metadata !"kernel_arg_type", metadata !"uint16_t", metadata !"uint32_t", metadata !"struct registers &", metadata !"short"}
!157 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!158 = metadata !{metadata !"kernel_arg_name", metadata !"data_int", metadata !"lincoeff", metadata !"r", metadata !"i"}
!159 = metadata !{null, metadata !160, metadata !161, metadata !162, metadata !163, metadata !164, metadata !152}
!160 = metadata !{metadata !"kernel_arg_addr_space"}
!161 = metadata !{metadata !"kernel_arg_access_qual"}
!162 = metadata !{metadata !"kernel_arg_type"}
!163 = metadata !{metadata !"kernel_arg_type_qual"}
!164 = metadata !{metadata !"kernel_arg_name"}
!165 = metadata !{i32 786689, metadata !5, metadata !"in", metadata !6, i32 16777221, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!166 = metadata !{i32 5, i32 16, metadata !5, null}
!167 = metadata !{i32 786689, metadata !5, metadata !"out", metadata !6, i32 33554437, metadata !19, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!168 = metadata !{i32 5, i32 32, metadata !5, null}
!169 = metadata !{i32 5, i32 43, metadata !170, null}
!170 = metadata !{i32 786443, metadata !5, i32 5, i32 42, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!171 = metadata !{i32 5, i32 74, metadata !170, null}
!172 = metadata !{i32 8, i32 1, metadata !170, null}
!173 = metadata !{i32 9, i32 1, metadata !170, null}
!174 = metadata !{i32 10, i32 1, metadata !170, null}
!175 = metadata !{i32 15, i32 11, metadata !176, null}
!176 = metadata !{i32 786443, metadata !177, i32 13, i32 28, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!177 = metadata !{i32 786443, metadata !170, i32 13, i32 3, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!178 = metadata !{i32 13, i32 8, metadata !177, null}
!179 = metadata !{i32 13, i32 29, metadata !176, null}
!180 = metadata !{i32 14, i32 1, metadata !176, null}
!181 = metadata !{i32 15, i32 2, metadata !176, null}
!182 = metadata !{i32 16, i32 3, metadata !176, null}
!183 = metadata !{i32 13, i32 24, metadata !177, null}
!184 = metadata !{i32 786688, metadata !170, metadata !"i", metadata !6, i32 12, metadata !55, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!185 = metadata !{i32 17, i32 1, metadata !170, null}
!186 = metadata !{i32 786689, metadata !37, metadata !"data_int", metadata !6, i32 16777235, metadata !14, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!187 = metadata !{i32 19, i32 24, metadata !37, null}
!188 = metadata !{i32 786689, metadata !37, metadata !"lincoeff", metadata !6, i32 33554451, metadata !17, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!189 = metadata !{i32 19, i32 43, metadata !37, null}
!190 = metadata !{i32 786689, metadata !37, metadata !"r", metadata !6, i32 50331667, metadata !40, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!191 = metadata !{i32 19, i32 64, metadata !37, null}
!192 = metadata !{i16 0}                          
!193 = metadata !{i32 786689, metadata !37, metadata !"i", metadata !6, i32 67108883, metadata !55, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!194 = metadata !{i32 19, i32 73, metadata !37, null}
!195 = metadata !{i32 786688, metadata !196, metadata !"o", metadata !6, i32 36, metadata !34, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!196 = metadata !{i32 786443, metadata !37, i32 19, i32 75, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!197 = metadata !{i32 36, i32 10, metadata !196, null}
!198 = metadata !{i32 37, i32 3, metadata !196, null}
!199 = metadata !{i32 40, i32 3, metadata !196, null}
!200 = metadata !{i32 786688, metadata !196, metadata !"uncorrectedADC", metadata !6, i32 22, metadata !14, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!201 = metadata !{i32 41, i32 3, metadata !196, null}
!202 = metadata !{i32 786688, metadata !196, metadata !"coeff", metadata !6, i32 25, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!203 = metadata !{i32 42, i32 8, metadata !196, null}
!204 = metadata !{i32 43, i32 3, metadata !196, null}
!205 = metadata !{i32 786688, metadata !196, metadata !"base", metadata !6, i32 24, metadata !14, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!206 = metadata !{i32 44, i32 3, metadata !196, null}
!207 = metadata !{i32 786688, metadata !196, metadata !"shiftlin", metadata !6, i32 26, metadata !208, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!208 = metadata !{i32 786454, null, metadata !"uint8_t", metadata !6, i32 49, i64 0, i64 0, i64 0, i32 0, metadata !209} ; [ DW_TAG_typedef ]
!209 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!210 = metadata !{i32 45, i32 3, metadata !196, null}
!211 = metadata !{i32 786688, metadata !196, metadata !"mult", metadata !6, i32 27, metadata !208, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!212 = metadata !{i32 46, i32 3, metadata !196, null}
!213 = metadata !{i32 786688, metadata !196, metadata !"correctedADC", metadata !6, i32 21, metadata !214, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!214 = metadata !{i32 786454, null, metadata !"int16_t", metadata !6, i32 38, i64 0, i64 0, i64 0, i32 0, metadata !55} ; [ DW_TAG_typedef ]
!215 = metadata !{i32 48, i32 3, metadata !196, null}
!216 = metadata !{i32 786688, metadata !196, metadata !"prod", metadata !6, i32 28, metadata !217, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!217 = metadata !{i32 786454, null, metadata !"int32_t", metadata !6, i32 39, i64 0, i64 0, i64 0, i32 0, metadata !82} ; [ DW_TAG_typedef ]
!218 = metadata !{i32 49, i32 3, metadata !196, null}
!219 = metadata !{i32 786688, metadata !196, metadata !"linearizerOutput", metadata !6, i32 23, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!220 = metadata !{i32 51, i32 3, metadata !196, null}
!221 = metadata !{i32 786688, metadata !196, metadata !"m", metadata !6, i32 31, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!222 = metadata !{i32 54, i32 1, metadata !223, null}
!223 = metadata !{i32 786443, metadata !224, i32 52, i32 27, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!224 = metadata !{i32 786443, metadata !196, i32 52, i32 3, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!225 = metadata !{i32 52, i32 8, metadata !224, null}
!226 = metadata !{i32 52, i32 28, metadata !223, null}
!227 = metadata !{i32 53, i32 1, metadata !223, null}
!228 = metadata !{i32 55, i32 2, metadata !223, null}
!229 = metadata !{i32 56, i32 3, metadata !223, null}
!230 = metadata !{i32 52, i32 23, metadata !224, null}
!231 = metadata !{i32 786688, metadata !196, metadata !"j", metadata !6, i32 20, metadata !232, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!232 = metadata !{i32 786454, null, metadata !"int8_t", metadata !6, i32 37, i64 0, i64 0, i64 0, i32 0, metadata !111} ; [ DW_TAG_typedef ]
!233 = metadata !{i32 57, i32 3, metadata !196, null}
!234 = metadata !{i32 58, i32 3, metadata !196, null}
!235 = metadata !{i32 786688, metadata !196, metadata !"pro", metadata !6, i32 33, metadata !217, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!236 = metadata !{i32 59, i32 3, metadata !196, null}
!237 = metadata !{i32 786688, metadata !196, metadata !"mul", metadata !6, i32 32, metadata !217, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!238 = metadata !{i32 786688, metadata !196, metadata !"acc", metadata !6, i32 34, metadata !217, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!239 = metadata !{i32 60, i32 3, metadata !196, null}
!240 = metadata !{i32 61, i32 8, metadata !241, null}
!241 = metadata !{i32 786443, metadata !196, i32 61, i32 3, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!242 = metadata !{i32 61, i32 28, metadata !243, null}
!243 = metadata !{i32 786443, metadata !241, i32 61, i32 27, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!244 = metadata !{i32 62, i32 1, metadata !243, null}
!245 = metadata !{i32 63, i32 2, metadata !243, null}
!246 = metadata !{i32 64, i32 5, metadata !243, null}
!247 = metadata !{i32 65, i32 5, metadata !243, null}
!248 = metadata !{i32 66, i32 3, metadata !243, null}
!249 = metadata !{i32 61, i32 23, metadata !241, null}
!250 = metadata !{i32 786688, metadata !196, metadata !"filterOutput", metadata !6, i32 29, metadata !217, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!251 = metadata !{i32 67, i32 3, metadata !196, null}
!252 = metadata !{i32 68, i32 3, metadata !196, null}
!253 = metadata !{i32 69, i32 3, metadata !196, null}
!254 = metadata !{i32 70, i32 3, metadata !196, null}
!255 = metadata !{i32 72, i32 3, metadata !196, null}
!256 = metadata !{i32 73, i32 4, metadata !257, null}
!257 = metadata !{i32 786443, metadata !196, i32 72, i32 69, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!258 = metadata !{i32 74, i32 3, metadata !257, null}
!259 = metadata !{i32 75, i32 27, metadata !260, null}
!260 = metadata !{i32 786443, metadata !261, i32 75, i32 26, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!261 = metadata !{i32 786443, metadata !196, i32 75, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!262 = metadata !{i32 77, i32 1, metadata !260, null}
!263 = metadata !{i32 78, i32 2, metadata !260, null}
!264 = metadata !{i32 79, i32 3, metadata !260, null}
!265 = metadata !{i32 80, i32 3, metadata !196, null}
!266 = metadata !{i32 81, i32 3, metadata !196, null}
