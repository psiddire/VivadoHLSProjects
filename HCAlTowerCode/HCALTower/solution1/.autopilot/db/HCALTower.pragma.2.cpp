# 1 "/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/HCAlTowerCode/HCALTower/solution1/.autopilot/db/HCALTower.pragma.1.cpp"
# 1 "/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/HCAlTowerCode/HCALTower/solution1/.autopilot/db/HCALTower.pragma.1.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1




# 1 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2016 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 145 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/




extern "C" {

    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations

    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));

    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));

    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 407 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 421 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
// XSIP watermark, do not delete 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
# 6 "<command line>" 2
# 1 "<built-in>" 2
# 1 "/afs/cern.ch/user/p/psiddire/CMSSW_10_2_2/src/VivadoHLSProjects/HCAlTowerCode/HCALTower/solution1/.autopilot/db/HCALTower.pragma.1.cpp" 2
# 1 "HCALTower.cpp"
# 1 "HCALTower.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1




# 1 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2016 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************

 *
 * $Id$
 */
# 145 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/




extern "C" {

    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations

    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;

    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));

    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));

    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));

    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */

    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 407 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
# 421 "/opt/Xilinx/Vivado_HLS/2016.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
// XSIP watermark, do not delete 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
# 6 "<command line>" 2
# 1 "<built-in>" 2
# 1 "HCALTower.cpp" 2
# 1 "./HCALTower.h" 1
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991, 1994-2008, 2009, 2010 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */







# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-1993,1995-2007,2009,2010 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler defines __STRICT_ANSI__.
   If none of these are defined, the default is to have _SVID_SOURCE,
   _BSD_SOURCE, and _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200112L.  If more than one of these are defined, they accumulate.
   For example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE
   together give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
   __FAVOR_BSD		Favor 4.3BSD things in cases of conflict.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */
# 122 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Always use ISO C things.  */


/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */
# 146 "/usr/include/features.h" 3 4
/* If _BSD_SOURCE was defined by the user, favor BSD over POSIX.  */






/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 177 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE) is defined,
   define _BSD_SOURCE and _SVID_SOURCE.  */







/* This is to enable the ISO C99 extension.  Also recognize the old macro
   which was used prior to the standard acceptance.  This macro will
   eventually go away and the features enabled by default once the ISO C99
   standard is widely adopted.  */





/* This is to enable the ISO C90 Amendment 1:1995 extension.  */





/* If none of the ANSI/POSIX macros are defined, use POSIX.1 and POSIX.2
   (and IEEE Std 1003.1b-1993 unless _XOPEN_SOURCE is defined).  */
# 326 "/usr/include/features.h" 3 4
/* We do support the IEC 559 math functionality, real and complex.  */



/* wchar_t uses ISO 10646-1 (2nd ed., published 2000-09-15) / Unicode 3.1.  */


/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* Decide whether a compiler supports the long long datatypes.  */







/* This is here only because every header file already includes this one.  */




# 1 "/usr/include/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2001, 2002, 2004, 2005, 2006, 2007, 2009
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */




/* Some user header file might have defined this before.  */





/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
# 72 "/usr/include/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */




/* C++ needs to know that types and declarations are C, not C++.  */
# 98 "/usr/include/sys/cdefs.h" 3 4
/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
# 111 "/usr/include/sys/cdefs.h" 3 4
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
# 123 "/usr/include/sys/cdefs.h" 3 4
/* Support for bounded pointers.  */







/* Fortify support.  */
# 150 "/usr/include/sys/cdefs.h" 3 4
/* Support for flexible arrays.  */

/* GCC 2.97 supports C99 flexible array members.  */
# 168 "/usr/include/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
# 191 "/usr/include/sys/cdefs.h" 3 4
/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/


/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
# 235 "/usr/include/sys/cdefs.h" 3 4
/* gcc allows marking deprecated functions.  */






/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */






/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
# 288 "/usr/include/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */






/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  */
# 324 "/usr/include/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
# 334 "/usr/include/sys/cdefs.h" 3 4
/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above. */




/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
# 373 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 374 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */


# 1 "/usr/include/gnu/stubs.h" 1 3 4
/* This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */



# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4

extern "C" {





# 1 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */






typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 56 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002, 2003, 2004, 2005, 2007 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */







# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 29 "/usr/include/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;





/* quad_t is also 64 bits.  */

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 70 "/usr/include/bits/types.h" 3 4
/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
# 126 "/usr/include/bits/types.h" 3 4
/* No need to mark the typedef with __extension__.   */






# 1 "/usr/include/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Generic version.
   Copyright (C) 2002, 2003 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 27 "/usr/include/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */
# 62 "/usr/include/bits/typesizes.h" 3 4
/* Number of descriptors that can fit in an `fd_set'.  */
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t; /* Type of device numbers.  */
typedef unsigned int __uid_t; /* Type of user identifications.  */
typedef unsigned int __gid_t; /* Type of group identifications.  */
typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
typedef unsigned long int __ino64_t; /* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t; /* Type of file link counts.  */
typedef long int __off_t; /* Type of file sizes and offsets.  */
typedef long int __off64_t; /* Type of file sizes and offsets (LFS).  */
typedef int __pid_t; /* Type of process identifications.  */
typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
typedef long int __clock_t; /* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
typedef unsigned long int __rlim64_t; /* Type for resource measurement (LFS).  */
typedef unsigned int __id_t; /* General type for IDs.  */
typedef long int __time_t; /* Seconds since the Epoch.  */
typedef unsigned int __useconds_t; /* Count of microseconds.  */
typedef long int __suseconds_t; /* Signed count of microseconds.  */

typedef int __daddr_t; /* The type of a disk address.  */
typedef long int __swblk_t; /* Type of a swap block maybe?  */
typedef int __key_t; /* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */
typedef void * __timer_t;

/* Type to represent block size.  */
typedef long int __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

/* Type to count file system blocks.  */
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

/* Type to count file system nodes.  */
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t; /* Type of a byte count, or error.  */

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4







/* Define outside of namespace so the C++ is happy.  */
struct _IO_FILE;


/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
/* Copyright (C) 1991-1995,1997-2006,2007,2009 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.

   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */






# 1 "/usr/include/_G_config.h" 1 3 4
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */




/* Define types for libio in terms of the standard internal type names.  */
# 16 "/usr/include/_G_config.h" 3 4
# 1 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
# 56 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
/* Copyright (C) 1995-2008, 2009, 2010 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */
# 82 "/usr/include/wchar.h" 3 4
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value; /* Value so far.  */
} __mbstate_t;




/* The rest of the file is only used if used if __need_mbstate_t is not
   defined.  */
# 895 "/usr/include/wchar.h" 3 4
/* Undefine all __need_* constants in case we are included to get those
   constants but the whole file was already read.  */
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));




/* These library features are always available in the GNU C library.  */
# 82 "/usr/include/_G_config.h" 3 4
/* This is defined by <bits/stat.h> if `st_blksize' exists.  */




/* These are the vtbl details for ELF.  */
# 33 "/usr/include/libio.h" 2 3 4
/* ALL of these should be defined in _G_config.h */
# 51 "/usr/include/libio.h" 3 4
/* This define avoids name pollution if we're using GNU stdarg.h */



# 1 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */





typedef __builtin_va_list va_list;






/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */






/* Hack required to make standard headers work, at least on Ubuntu */

typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 74 "/usr/include/libio.h" 3 4
/* For backward compatibility */
# 114 "/usr/include/libio.h" 3 4
/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */
# 150 "/usr/include/libio.h" 3 4
/* These are "formatting flags" matching the iostream fmtflags enum values. */
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;

/* Handle lock.  */







typedef void _IO_lock_t;



/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
# 203 "/usr/include/libio.h" 3 4
};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags; /* High-order word is _IO_MAGIC; rest is flags. */


  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr; /* Current read pointer */
  char* _IO_read_end; /* End of get area. */
  char* _IO_read_base; /* Start of putback+get area. */
  char* _IO_write_base; /* Start of put area. */
  char* _IO_write_ptr; /* Current put pointer. */
  char* _IO_write_end; /* End of put area. */
  char* _IO_buf_base; /* Start of reserve area. */
  char* _IO_buf_end; /* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base; /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset; /* This used to be _offset but it's too small.  */


  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
 __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
 void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 360 "/usr/include/libio.h" 3 4
/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written, or -1 if
   there is an error without writing anything.  If the file has been
   opened for append (__mode.__append set), then set the file pointer
   to the end of the file and then do the write; if not, just write at
   the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);



/* User-visible names for the above.  */
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;

/* The structure with the cookie function pointers.  */
typedef struct
{
  __io_read_fn *read; /* Read bytes.  */
  __io_write_fn *write; /* Write bytes.  */
  __io_seek_fn *seek; /* Seek/tell file position.  */
  __io_close_fn *close; /* Close file.  */
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;

/* Initialize one of those.  */
extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);

/* This one is for Emacs. */



extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;




/* The type of the second argument to `fgetpos' and `fsetpos'.  */


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;


/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */





/* End of file character.
   Some things throughout the library rely on this being -1.  */





/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */






/* Default path prefix for `tempnam' and `tmpnam'.  */




/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
   		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */


# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994, 1997, 1998, 1999, 2009 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 162 "/usr/include/stdio.h" 2 3 4


/* Standard streams.  */
extern struct _IO_FILE *stdin; /* Standard input stream.  */
extern struct _IO_FILE *stdout; /* Standard output stream.  */
extern struct _IO_FILE *stderr; /* Standard error output stream.  */

/* C89/C99 say they're macros.  Make them happy.  */






/* Remove file FILENAME.  */
extern int remove (__const char *__filename) throw ();
/* Rename file OLD to NEW.  */
extern int rename (__const char *__old, __const char *__new) throw ();



/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();



/* Create a temporary file and open it read/write.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */

extern FILE *tmpfile (void) /* Ignore */;
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) /* Ignore */;


/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) throw () /* Ignore */;



/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) throw () /* Ignore */;




/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) /* Ignore */;




/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);



/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);



/* Close all streams.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fcloseall (void);





/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) /* Ignore */;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) /* Ignore */;
# 296 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) /* Ignore */;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) /* Ignore */;



/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, __const char *__modes) throw () /* Ignore */;



/* Create a new stream that refers to the given magic cookie,
   and uses the given functions for input and output.  */
extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () /* Ignore */;



/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () /* Ignore */;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () /* Ignore */;




/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();



/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) throw ();




/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (__const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();




/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));




/* Write formatted output to a string dynamically allocated with `malloc'.
   Store the address of the string in *PTR.  */
extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) /* Ignore */;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) /* Ignore */;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) /* Ignore */;



/* Write formatted output to a file descriptor.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));




/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) /* Ignore */;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (__const char *__restrict __format, ...) /* Ignore */;
/* Read formatted input from S.  */
extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 471 "/usr/include/stdio.h" 3 4
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) /* Ignore */;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) /* Ignore */;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3 4
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);


/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */



/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);



/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);




/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);


/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */



/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);



/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);





/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);




/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     /* Ignore */;

/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) /* Ignore */;



/* This function does the same as `fgets' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) /* Ignore */;




/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) /* Ignore */;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) /* Ignore */;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) /* Ignore */;




/* Write a string to STREAM.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern int puts (__const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) /* Ignore */;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation points and therefore not
   marked with __THROW.  */
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) /* Ignore */;



/* This function does the same as `fputs' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);



/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) /* Ignore */;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) /* Ignore */;




/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) /* Ignore */;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);


/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */



/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) /* Ignore */;
# 789 "/usr/include/stdio.h" 3 4
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 813 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) /* Ignore */;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);



/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) throw ();
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) throw () /* Ignore */;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) throw () /* Ignore */;



/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () /* Ignore */;
extern int ferror_unlocked (FILE *__stream) throw () /* Ignore */;




/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (__const char *__s);


/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */


# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */


extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4



/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) throw () /* Ignore */;



/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) throw () /* Ignore */;





/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (__const char *__command, __const char *__modes) /* Ignore */;

/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);




/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) throw ();




/* Return the name of the current user.  */
extern char *cuserid (char *__s);




struct obstack; /* See <obstack.h>.  */

/* Write formatted output to an obstack.  */
extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));




/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) throw ();

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) throw () /* Ignore */;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) throw ();
# 926 "/usr/include/stdio.h" 3 4
/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
# 938 "/usr/include/stdio.h" 3 4
}
# 1 "./HCALTower.h" 2

# 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-1993, 1995-1999, 2001, 2002, 2004, 2006, 2009
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */






extern "C" {

/* Get machine-dependent HUGE_VAL value (returned on overflow).
   On all IEEE754 machines, this is +Infinity.  */


# 1 "/usr/include/bits/huge_val.h" 1 3 4
/* `HUGE_VAL' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1995, 1996, 1997, 1999, 2000, 2004
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
/* `HUGE_VALF' constant for IEEE 754 machines (where it is infinity).
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1995, 1996, 1997, 1999, 2000, 2004
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity (-HUGE_VAL is negative infinity).  */
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
/* Default `HUGE_VALL' constant.
   Used by <stdlib.h> and <math.h> functions for overflow.
   Copyright (C) 1992, 1996, 1997, 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 38 "/usr/include/math.h" 2 3 4

/* Get machine-dependent INFINITY value.  */


# 1 "/usr/include/bits/inf.h" 1 3 4
/* `INFINITY' constant for IEEE 754 machines.
   Copyright (C) 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */





/* IEEE positive infinity.  */
# 41 "/usr/include/math.h" 2 3 4

/* Get machine-dependent NAN value (returned for some domain errors).  */


# 1 "/usr/include/bits/nan.h" 1 3 4
/* `NAN' constant for IEEE 754 machines.
   Copyright (C) 1992,1996,1997,1999,2004,2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */






/* IEEE Not A Number.  */
# 44 "/usr/include/math.h" 2 3 4


/* Get general and ISO C99 specific information.  */


# 1 "/usr/include/bits/mathdef.h" 1 3 4
/* Copyright (C) 2001, 2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 27 "/usr/include/bits/mathdef.h" 2 3 4


/* The x86-64 architecture computes values with the precission of the
   used type.  Similarly for -m32 -mfpmath=sse.  */
typedef float float_t; /* `float' expressions are evaluated as `float'.  */
typedef double double_t; /* `double' expressions are evaluated
				   as `double'.  */
# 44 "/usr/include/bits/mathdef.h" 3 4
/* The values returned by `ilogb' for 0 and NaN respectively.  */
# 48 "/usr/include/math.h" 2 3 4

/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
/* Arc sine of X.  */
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
/* Arc tangent of X.  */
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
/* Arc tangent of Y/X.  */
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();

/* Cosine of X.  */
extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
/* Sine of X.  */
extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
/* Tangent of X.  */
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
/* Hyperbolic sine of X.  */
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
/* Hyperbolic tangent of X.  */
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();



/* Cosine and sine of X.  */
extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern double exp (double __x) throw (); extern double __exp (double __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern double log (double __x) throw (); extern double __log (double __x) throw ();

/* Base-ten logarithm of X.  */
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
/* Another name occasionally used.  */
extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();




/* Return exp(X) - 1.  */
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();

/* Return log(1 + X).  */
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();





/* Compute base-2 exponential of X.  */
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();

/* Compute base-2 logarithm of X.  */
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();

/* Return the square root of X.  */
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();





/* Return the cube root of X.  */
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinf (double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finite (double __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinf (double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finite (double __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();




/* Return X with its signed changed to Y's.  */
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnan (double __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnan (double __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();





/* Error and gamma functions.  */
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();





/* True gamma function.  */
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();




/* Obsolete alias for `lgamma'.  */
extern double gamma (double) throw (); extern double __gamma (double) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();


/* Return X times (2 to the Nth power).  */
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();



/* Return X times (2 to the Nth power).  */
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();


/* Return positive difference between X and Y.  */
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();


/* Classify given number.  */
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();







/* Return X times (2 to the Nth power).  */
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4








/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
/* Arc sine of X.  */
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
/* Arc tangent of X.  */
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
/* Arc tangent of Y/X.  */
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();

/* Cosine of X.  */
extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
/* Sine of X.  */
extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
/* Tangent of X.  */
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
/* Hyperbolic sine of X.  */
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
/* Hyperbolic tangent of X.  */
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();



/* Cosine and sine of X.  */
extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
/* Hyperbolic arc sine of X.  */
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern float expf (float __x) throw (); extern float __expf (float __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern float logf (float __x) throw (); extern float __logf (float __x) throw ();

/* Base-ten logarithm of X.  */
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
/* Another name occasionally used.  */
extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();




/* Return exp(X) - 1.  */
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();

/* Return log(1 + X).  */
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();





/* Compute base-2 exponential of X.  */
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();

/* Compute base-2 logarithm of X.  */
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();

/* Return the square root of X.  */
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();





/* Return the cube root of X.  */
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff (float __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitef (float __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinff (float __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitef (float __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();




/* Return X with its signed changed to Y's.  */
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnanf (float __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnanf (float __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();





/* Error and gamma functions.  */
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();





/* True gamma function.  */
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();




/* Obsolete alias for `lgamma'.  */
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();


/* Return X times (2 to the Nth power).  */
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();



/* Return X times (2 to the Nth power).  */
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();


/* Return positive difference between X and Y.  */
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();


/* Classify given number.  */
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();







/* Return X times (2 to the Nth power).  */
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2002, 2003, 2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */


/* Arc cosine of X.  */
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
/* Arc sine of X.  */
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
/* Arc tangent of X.  */
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
/* Arc tangent of Y/X.  */
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();

/* Cosine of X.  */
extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
/* Sine of X.  */
extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
/* Tangent of X.  */
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
/* Hyperbolic sine of X.  */
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
/* Hyperbolic tangent of X.  */
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();



/* Cosine and sine of X.  */
extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();





/* Hyperbolic arc cosine of X.  */
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();



/* Exponential and logarithmic functions.  */


/* Exponential function of X.  */
extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();

/* X times (two to the EXP power).  */
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();

/* Natural logarithm of X.  */
extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();

/* Base-ten logarithm of X.  */
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();

/* Break VALUE into integral and fractional parts.  */
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();



/* A function missing in all standards: compute exponent to base ten.  */
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
/* Another name occasionally used.  */
extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();




/* Return exp(X) - 1.  */
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();

/* Return log(1 + X).  */
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();

/* Return the base 2 signed integral exponent of X.  */
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();





/* Compute base-2 exponential of X.  */
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();

/* Compute base-2 logarithm of X.  */
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();




/* Power functions.  */


/* Return X to the Y power.  */
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();

/* Return the square root of X.  */
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();




/* Return `sqrt(X*X + Y*Y)'.  */
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();





/* Return the cube root of X.  */
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();




/* Nearest integer, absolute value, and remainder functions.  */


/* Smallest integral value not less than X.  */
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));

/* Absolute value of X.  */
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));

/* Largest integer not greater than X.  */
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));

/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();


/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int __finitel (long double __value) throw () __attribute__ ((__const__));



/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinfl (long double __value) throw () __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitel (long double __value) throw () __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();




/* Return X with its signed changed to Y's.  */
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));





/* Return representation of NaN for double type.  */
extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));




/* Return nonzero if VALUE is not a number.  */
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));


/* Return nonzero if VALUE is not a number.  */
extern int isnanl (long double __value) throw () __attribute__ ((__const__));

/* Bessel functions.  */
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();





/* Error and gamma functions.  */
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();





/* True gamma function.  */
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();




/* Obsolete alias for `lgamma'.  */
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();



/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();





/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));


/* Return the remainder of integer divison X / Y with infinite precision.  */
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();


/* Return X times (2 to the Nth power).  */
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();



/* Return X times (2 to the Nth power).  */
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();


/* Return positive difference between X and Y.  */
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();

/* Return maximum numeric value from X and Y.  */
extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();

/* Return minimum numeric value from X and Y.  */
extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();


/* Classify given number.  */
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));

/* Test for negative number.  */
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));


/* Multiply-add function computed as a ternary operation.  */
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();







/* Return X times (2 to the Nth power).  */
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 142 "/usr/include/math.h" 2 3 4
# 156 "/usr/include/math.h" 3 4
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;



/* ISO C99 defines some generic macros which work on any data type.  */


/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:

    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions

    FLT_EVAL_METHOD
		Defined to
		  0	if `float_t' is `float' and `double_t' is `double'
		  1	if `float_t' and `double_t' are `double'
		  2	if `float_t' and `double_t' are `long double'
		  else	`float_t' and `double_t' are unspecified

    INFINITY	representation of the infinity value of type `float'

    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.

    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.

    DECIMAL_DIG	Number of decimal digits supported by conversion between
		decimal and all internal floating-point formats.

*/

/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };

/* Return number of classification appropriate for X.  */
# 224 "/usr/include/math.h" 3 4
/* Return nonzero value if sign of X is negative.  */
# 236 "/usr/include/math.h" 3 4
/* Return nonzero value if X is not +-Inf or NaN.  */
# 248 "/usr/include/math.h" 3 4
/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */


/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
# 264 "/usr/include/math.h" 3 4
/* Return nonzero value is X is positive or negative infinity.  */
# 276 "/usr/include/math.h" 3 4
/* Bitmasks for the math_errhandling macro.  */



/* By default all functions support both errno and exception handling.
   In gcc's fast math mode and if inline functions are defined this
   might not be true.  */







/* Support for various different standard error handling behaviors.  */
typedef enum
{
  _IEEE_ = -1, /* According to IEEE 754/IEEE 854.  */
  _SVID_, /* According to System V, release 4.  */
  _XOPEN_, /* Nowadays also Unix98.  */
  _POSIX_,
  _ISOC_ /* Actually this is ISO C99.  */
} _LIB_VERSION_TYPE;

/* This variable can be changed at run-time to any of the values above to
   affect floating point error handling behavior (it may also be necessary
   to change the hardware FPU exception settings).  */
extern _LIB_VERSION_TYPE _LIB_VERSION;




/* In SVID error handling, `matherr' is called with this description
   of the exceptional condition.

   We have a problem when using C++ since `exception' is a reserved
   name in C++.  */

struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();






/* Types of exceptions in the `type' field.  */







/* SVID mode specifies returning this large value instead of infinity.  */
# 355 "/usr/include/math.h" 3 4
/* Some useful constants.  */
# 372 "/usr/include/math.h" 3 4
/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
# 392 "/usr/include/math.h" 3 4
/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */





/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in before 3.0.0, but not all cpus added their patterns.  We define
   versions that use the builtins here, and <bits/mathinline.h> will
   undef/redefine as appropriate for the specific GCC version in use.  */
# 414 "/usr/include/math.h" 3 4
/* Get machine-dependent inline versions (if there are any).  */





/* If we've still got undefined comparison macros, provide defaults.  */

/* Return nonzero value if X is greater than Y.  */







/* Return nonzero value if X is greater than or equal to Y.  */







/* Return nonzero value if X is less than Y.  */







/* Return nonzero value if X is less than or equal to Y.  */







/* Return nonzero value if either X is less than Y or Y is less than X.  */







/* Return nonzero value if arguments are unordered.  */
# 472 "/usr/include/math.h" 3 4
}
# 2 "./HCALTower.h" 2

# 1 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
\*===----------------------------------------------------------------------===*/




/* If we're hosted, fall back to the system's stdint.h, which might have
 * additional definitions.
 */




# 1 "/usr/include/stdint.h" 1 3 4
/* Copyright (C) 1997,1998,1999,2000,2001,2006 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	ISO C99: 7.18 Integer types <stdint.h>
 */







# 1 "/usr/include/bits/wchar.h" 1 3 4
/* wchar_t type related definitions.
   Copyright (C) 2000 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 29 "/usr/include/stdint.h" 2 3 4

/* Exact integral types.  */

/* Signed.  */

/* There is some amount of overlap with <sys/types.h> as known by inet code */


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;






/* Unsigned.  */
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;






/* Small types.  */

/* Signed.  */
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;





/* Unsigned.  */
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;






/* Fast types.  */

/* Signed.  */
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;







/* Unsigned.  */
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 117 "/usr/include/stdint.h" 3 4
/* Types for `void *' pointers.  */


typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 133 "/usr/include/stdint.h" 3 4
/* Largest integral types.  */

typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 145 "/usr/include/stdint.h" 3 4
/* The ISO C99 standard specifies that in C++ implementations these
   macros should only be defined if explicitly requested.  */
# 285 "/usr/include/stdint.h" 3 4
/* The ISO C99 standard specifies that in C++ implementations these
   should only be defined if explicitly requested.  */
# 34 "/home/sw_dir/Xilinx/Vivado_HLS/2016.4/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 3 "./HCALTower.h" 2

const uint8_t NCaloLayer1Eta=17;
const uint8_t NCaloLayer1Phi=4;

// void getTowerPeaks3x4(uint16_t towerETRegions[3][4],uint16_t cEta[5],
                        // uint16_t cPhi[5],uint16_t ClusterDeposits[32], uint16_t ClusterEta[32], uint16_t ClusterPhi[32]);
void TowerPeaks(uint16_t towerET[17][4], uint16_t TowerPhi[30], uint16_t TowerEta[30]);
# 2 "HCALTower.cpp" 2
void bitonic_1_16(uint16_t Cluster_1_Deposits[16], uint16_t Cluster_1_Eta[16], uint16_t Cluster_1_Phi[16])
{_ssdm_SpecArrayDimSize(Cluster_1_Phi,16);_ssdm_SpecArrayDimSize(Cluster_1_Eta,16);_ssdm_SpecArrayDimSize(Cluster_1_Deposits,16);// sorting blocks of size 16
  int temp;
// #pragma HLS dataflow
  for(int i=0;i<8;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+8])
    {
      temp=Cluster_1_Deposits[i+8];
      Cluster_1_Deposits[i+8]=Cluster_1_Deposits[i];
      Cluster_1_Deposits[i]=temp;
      temp=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=Cluster_1_Eta[i+8];
        Cluster_1_Eta[i+8]=temp;
        temp=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=Cluster_1_Phi[i+8];
        Cluster_1_Phi[i+8]=temp;
    }

    }


   for(int i=0;i<4;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+4])
    {
      temp=Cluster_1_Deposits[i+4];
      Cluster_1_Deposits[i+4]=Cluster_1_Deposits[i];
      Cluster_1_Deposits[i]=temp;
      temp=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=Cluster_1_Eta[i+4];
        Cluster_1_Eta[i+4]=temp;
        temp=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=Cluster_1_Phi[i+4];
        Cluster_1_Phi[i+4]=temp;
    }
    }
   for(int i=8;i<12;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+4])
    {
      temp=Cluster_1_Deposits[i+4];
      Cluster_1_Deposits[i+4]=Cluster_1_Deposits[i];
      Cluster_1_Deposits[i]=temp;
      temp=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=Cluster_1_Eta[i+4];
        Cluster_1_Eta[i+4]=temp;
        temp=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=Cluster_1_Phi[i+4];
        Cluster_1_Phi[i+4]=temp;
    }
    }


  for(int i=0;i<13;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+2])
    {
      temp=Cluster_1_Deposits[i+2];
      Cluster_1_Deposits[i+2]=Cluster_1_Deposits[i];
      Cluster_1_Deposits[i]=temp;
      temp=Cluster_1_Eta[i];
          Cluster_1_Eta[i]=Cluster_1_Eta[i+2];
          Cluster_1_Eta[i+2]=temp;
          temp=Cluster_1_Phi[i];
          Cluster_1_Phi[i]=Cluster_1_Phi[i+2];
          Cluster_1_Phi[i+2]=temp;
    }

    if(Cluster_1_Deposits[i+1]<Cluster_1_Deposits[i+3])
    {
      temp=Cluster_1_Deposits[i+3];
      Cluster_1_Deposits[i+3]=Cluster_1_Deposits[i+1];
      Cluster_1_Deposits[i+1]=temp;
       temp=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=Cluster_1_Eta[i+3];
              Cluster_1_Eta[i+3]=temp;
              temp=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=Cluster_1_Phi[i+3];
              Cluster_1_Phi[i+3]=temp;
    }
    }




  for(int i=0;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");/*may be faster if split into two loops*/
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+1])
    {
      temp=Cluster_1_Deposits[i+1];
      Cluster_1_Deposits[i+1]=Cluster_1_Deposits[i];
      Cluster_1_Deposits[i]=temp;
       temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=temp;
    }

    }



  }

void bitonic_1_8(uint16_t Cluster_1_Deposits[16], uint16_t Cluster_1_Eta[16], uint16_t Cluster_1_Phi[16])
{_ssdm_SpecArrayDimSize(Cluster_1_Phi,16);_ssdm_SpecArrayDimSize(Cluster_1_Eta,16);_ssdm_SpecArrayDimSize(Cluster_1_Deposits,16);// sorting blocks of size 8
  int temp;
// #pragma HLS dataflow
  for(int i=0;i<4;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+4])
      {
        temp=Cluster_1_Deposits[i+4];
        Cluster_1_Deposits[i+4]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
        temp=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=Cluster_1_Eta[i+4];
        Cluster_1_Eta[i+4]=temp;
        temp=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=Cluster_1_Phi[i+4];
        Cluster_1_Phi[i+4]=temp;
      }
  }
  for(int i=8;i<12;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+4])
      {
        temp=Cluster_1_Deposits[i+4];
        Cluster_1_Deposits[i+4]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
        temp=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=Cluster_1_Eta[i+4];
        Cluster_1_Eta[i+4]=temp;
        temp=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=Cluster_1_Phi[i+4];
        Cluster_1_Phi[i+4]=temp;
      }
  }


  for(int i=0;i<5;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+2])
      {
        temp=Cluster_1_Deposits[i+2];
        Cluster_1_Deposits[i+2]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
        temp=Cluster_1_Eta[i+2];
        Cluster_1_Eta[i+2]=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=temp;
        temp=Cluster_1_Phi[i+2];
        Cluster_1_Phi[i+2]=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=temp;
      }
    if(Cluster_1_Deposits[i+1]<Cluster_1_Deposits[i+3])
      {
        temp=Cluster_1_Deposits[i+3];
        Cluster_1_Deposits[i+3]=Cluster_1_Deposits[i+1];
        Cluster_1_Deposits[i+1]=temp;
          temp=Cluster_1_Eta[i+1];
        Cluster_1_Eta[i+1]=Cluster_1_Eta[i+3];
        Cluster_1_Eta[i+3]=temp;
        temp=Cluster_1_Phi[i+1];
        Cluster_1_Phi[i+1]=Cluster_1_Phi[i+3];
        Cluster_1_Phi[i+3]=temp;
      }
  }
  for(int i=8;i<13;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+2])
      {
        temp=Cluster_1_Deposits[i+2];
        Cluster_1_Deposits[i+2]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
        temp=Cluster_1_Eta[i+2];
        Cluster_1_Eta[i+2]=Cluster_1_Eta[i];
        Cluster_1_Eta[i]=temp;
        temp=Cluster_1_Phi[i+2];
        Cluster_1_Phi[i+2]=Cluster_1_Phi[i];
        Cluster_1_Phi[i]=temp;
      }
    if(Cluster_1_Deposits[i+1]>Cluster_1_Deposits[i+3])
      {
        temp=Cluster_1_Deposits[i+3];
        Cluster_1_Deposits[i+3]=Cluster_1_Deposits[i+1];
        Cluster_1_Deposits[i+1]=temp;
         temp=Cluster_1_Eta[i+1];
        Cluster_1_Eta[i+1]=Cluster_1_Eta[i+3];
        Cluster_1_Eta[i+3]=temp;
        temp=Cluster_1_Phi[i+1];
        Cluster_1_Phi[i+1]=Cluster_1_Phi[i+3];
        Cluster_1_Phi[i+3]=temp;
      }
  }

  for(int i=0;i<7;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+1])
      {
        temp=Cluster_1_Deposits[i+1];
        Cluster_1_Deposits[i+1]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
          temp=Cluster_1_Eta[i];
          Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
          Cluster_1_Eta[i+1]=temp;
          temp=Cluster_1_Phi[i];
          Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
          Cluster_1_Phi[i+1]=temp;
      }
  }
  for(int i=8;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+1])
      {
        temp=Cluster_1_Deposits[i+1];
        Cluster_1_Deposits[i+1]=Cluster_1_Deposits[i];
        Cluster_1_Deposits[i]=temp;
          temp=Cluster_1_Eta[i];
          Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
          Cluster_1_Eta[i+1]=temp;
          temp=Cluster_1_Phi[i];
          Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
          Cluster_1_Phi[i+1]=temp;
      }
  }
 bitonic_1_16(Cluster_1_Deposits,Cluster_1_Eta,Cluster_1_Phi);
}
void bitonic_1_4(uint16_t Cluster_1_Deposits[16], uint16_t Cluster_1_Eta[16], uint16_t Cluster_1_Phi[16])
{_ssdm_SpecArrayDimSize(Cluster_1_Phi,16);_ssdm_SpecArrayDimSize(Cluster_1_Eta,16);_ssdm_SpecArrayDimSize(Cluster_1_Deposits,16);
  int temp;
// #pragma HLS dataflow
// comparators in blocks of 4
  for(int i=0;i<2;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+2])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+2];
              Cluster_1_Deposits[i+2]=temp;
               temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+2];
              Cluster_1_Eta[i+2]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+2];
              Cluster_1_Phi[i+2]=temp;
              }
  }
  for(int i=4;i<6;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+2])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+2];
              Cluster_1_Deposits[i+2]=temp;
               temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+2];
              Cluster_1_Eta[i+2]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+2];
              Cluster_1_Phi[i+2]=temp;
              }
  }
  for(int i=8;i<10;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+2])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+2];
              Cluster_1_Deposits[i+2]=temp;
               temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+2];
              Cluster_1_Eta[i+2]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+2];
              Cluster_1_Phi[i+2]=temp;
              }
  }
  for(int i=12;i<14;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+2])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+2];
              Cluster_1_Deposits[i+2]=temp;
               temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+2];
              Cluster_1_Eta[i+2]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+2];
              Cluster_1_Phi[i+2]=temp;
              }
  }

  for(int i=0;i<3;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+1])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+1];
              Cluster_1_Deposits[i+1]=temp;
                temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=temp;
              }
  }
  for(int i=4;i<7;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+1])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+1];
              Cluster_1_Deposits[i+1]=temp;
                temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=temp;
              }
  }
  for(int i=8;i<11;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+1])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+1];
              Cluster_1_Deposits[i+1]=temp;
                temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=temp;
              }
  }
  for(int i=12;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(Cluster_1_Deposits[i]>Cluster_1_Deposits[i+1])
              {temp=Cluster_1_Deposits[i];
              Cluster_1_Deposits[i]=Cluster_1_Deposits[i+1];
              Cluster_1_Deposits[i+1]=temp;
                temp=Cluster_1_Eta[i];
              Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
              Cluster_1_Eta[i+1]=temp;
              temp=Cluster_1_Phi[i];
              Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
              Cluster_1_Phi[i+1]=temp;
              }
  }

  bitonic_1_8(Cluster_1_Deposits,Cluster_1_Eta,Cluster_1_Phi);

}
void bitonic32(uint16_t ClusterDeposits[32], uint16_t ClusterEta[32], uint16_t ClusterPhi[32])
{_ssdm_SpecArrayDimSize(ClusterPhi,32);_ssdm_SpecArrayDimSize(ClusterDeposits,32);_ssdm_SpecArrayDimSize(ClusterEta,32);// sorting blocks of size 32
  int temp;
// #pragma HLS dataflow
for(int i=0;i<16;i++)
{
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+16])
    {
      temp=ClusterDeposits[i+16];
      ClusterDeposits[i+16]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+16];
        ClusterEta[i+16]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+16];
        ClusterPhi[i+16]=temp;
    }
  }

  for(int i=0;i<8;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+8])
        {
          temp=ClusterDeposits[i+8];
          ClusterDeposits[i+8]=ClusterDeposits[i];
          ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+8];
        ClusterEta[i+8]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+8];
        ClusterPhi[i+8]=temp;
        }
  }
  for(int i=16;i<24;i++)
    {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+8])
          {
            temp=ClusterDeposits[i+8];
            ClusterDeposits[i+8]=ClusterDeposits[i];
            ClusterDeposits[i]=temp;
            temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+8];
        ClusterEta[i+8]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+8];
        ClusterPhi[i+8]=temp;
          }
    }



 for(int i=0;i<4;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
    {
      temp=ClusterDeposits[i+4];
      ClusterDeposits[i+4]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
    }
    }
 for(int i=8;i<12;i++)
      {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
        {
          temp=ClusterDeposits[i+4];
          ClusterDeposits[i+4]=ClusterDeposits[i];
          ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
        }
        }
 for(int i=16;i<20;i++)
      {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
        {
          temp=ClusterDeposits[i+4];
          ClusterDeposits[i+4]=ClusterDeposits[i];
          ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
        }
        }
 for(int i=24;i<28;i++)
      {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
        {
          temp=ClusterDeposits[i+4];
          ClusterDeposits[i+4]=ClusterDeposits[i];
          ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
        }
        }


 for(int i=0;i<29;i=i+4)
            {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
          {
              temp=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=ClusterDeposits[i];
              ClusterDeposits[i]=temp;
               temp=ClusterEta[i];
                ClusterEta[i]=ClusterEta[i+2];
                ClusterEta[i+2]=temp;
                temp=ClusterPhi[i];
                ClusterPhi[i]=ClusterPhi[i+2];
                ClusterPhi[i+2]=temp;
          }
          if(ClusterDeposits[i+1]<ClusterDeposits[i+3])
          {
              temp=ClusterDeposits[i+3];
              ClusterDeposits[i+3]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
              temp=ClusterEta[i+1];
               ClusterEta[i+1]=ClusterEta[i+3];
               ClusterEta[i+3]=temp;
               temp=ClusterPhi[i+1];
               ClusterPhi[i+1]=ClusterPhi[i+3];
               ClusterPhi[i+3]=temp;
          }
          }


     for(int i=0;i<31;i=i+2)
      {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
        {
          temp=ClusterDeposits[i+1];
          ClusterDeposits[i+1]=ClusterDeposits[i];
          ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
        }
      }

  }
void bitonic16(uint16_t ClusterDeposits[32], uint16_t ClusterEta[32], uint16_t ClusterPhi[32])
{_ssdm_SpecArrayDimSize(ClusterPhi,32);_ssdm_SpecArrayDimSize(ClusterDeposits,32);_ssdm_SpecArrayDimSize(ClusterEta,32);// sorting blocks of size 16
  int temp;
// #pragma HLS dataflow
  for(int i=0;i<8;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+8])
    {
      temp=ClusterDeposits[i+8];
      ClusterDeposits[i+8]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+8];
        ClusterEta[i+8]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+8];
        ClusterPhi[i+8]=temp;
    }

    }

  for(int i=16;i<24;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+8])
    {
      temp=ClusterDeposits[i+8];
      ClusterDeposits[i+8]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+8];
        ClusterEta[i+8]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+8];
        ClusterPhi[i+8]=temp;
    }

    }
   for(int i=0;i<4;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
    {
      temp=ClusterDeposits[i+4];
      ClusterDeposits[i+4]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
    }
    }
   for(int i=8;i<12;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
    {
      temp=ClusterDeposits[i+4];
      ClusterDeposits[i+4]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
    }
    }
   for(int i=16;i<20;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+4])
    {
      temp=ClusterDeposits[i+4];
      ClusterDeposits[i+4]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
    }
    }
  for(int i=24;i<28;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+4])
    {
      temp=ClusterDeposits[i+4];
      ClusterDeposits[i+4]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
    }
    }

  for(int i=0;i<13;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
    {
      temp=ClusterDeposits[i+2];
      ClusterDeposits[i+2]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+2];
          ClusterEta[i+2]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+2];
          ClusterPhi[i+2]=temp;
    }

    if(ClusterDeposits[i+1]<ClusterDeposits[i+3])
    {
      temp=ClusterDeposits[i+3];
      ClusterDeposits[i+3]=ClusterDeposits[i+1];
      ClusterDeposits[i+1]=temp;
       temp=ClusterEta[i+1];
              ClusterEta[i+1]=ClusterEta[i+3];
              ClusterEta[i+3]=temp;
              temp=ClusterPhi[i+1];
              ClusterPhi[i+1]=ClusterPhi[i+3];
              ClusterPhi[i+3]=temp;
    }
    }
  for(int i=16;i<29;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
    {
      temp=ClusterDeposits[i+2];
      ClusterDeposits[i+2]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
      temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+2];
          ClusterEta[i+2]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+2];
          ClusterPhi[i+2]=temp;
    }

    if(ClusterDeposits[i+1]>ClusterDeposits[i+3])
    {
      temp=ClusterDeposits[i+3];
      ClusterDeposits[i+3]=ClusterDeposits[i+1];
      ClusterDeposits[i+1]=temp;
       temp=ClusterEta[i+1];
              ClusterEta[i+1]=ClusterEta[i+3];
              ClusterEta[i+3]=temp;
              temp=ClusterPhi[i+1];
              ClusterPhi[i+1]=ClusterPhi[i+3];
              ClusterPhi[i+3]=temp;
    }
    }



  for(int i=0;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");/*may be faster if split into two loops*/
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
    {
      temp=ClusterDeposits[i+1];
      ClusterDeposits[i+1]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
       temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
    }

    }
  for(int i=16;i<31;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");/*may be faster if split into two loops*/
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
    {
      temp=ClusterDeposits[i+1];
      ClusterDeposits[i+1]=ClusterDeposits[i];
      ClusterDeposits[i]=temp;
       temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
    }

    }


bitonic32(ClusterDeposits,ClusterEta,ClusterPhi);
  }

void bitonic8(uint16_t ClusterDeposits[32], uint16_t ClusterEta[32], uint16_t ClusterPhi[32])
{_ssdm_SpecArrayDimSize(ClusterPhi,32);_ssdm_SpecArrayDimSize(ClusterDeposits,32);_ssdm_SpecArrayDimSize(ClusterEta,32);// sorting blocks of size 8
  int temp;
// #pragma HLS dataflow
  for(int i=0;i<4;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
      {
        temp=ClusterDeposits[i+4];
        ClusterDeposits[i+4]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
      }
  }
  for(int i=8;i<12;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+4])
      {
        temp=ClusterDeposits[i+4];
        ClusterDeposits[i+4]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
      }
  }
  for(int i=16;i<20;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+4])
      {
        temp=ClusterDeposits[i+4];
        ClusterDeposits[i+4]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
      }
  }
  for(int i=24;i<28;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+4])
      {
        temp=ClusterDeposits[i+4];
        ClusterDeposits[i+4]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i];
        ClusterEta[i]=ClusterEta[i+4];
        ClusterEta[i+4]=temp;
        temp=ClusterPhi[i];
        ClusterPhi[i]=ClusterPhi[i+4];
        ClusterPhi[i+4]=temp;
      }
  }


  for(int i=0;i<5;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
      {
        temp=ClusterDeposits[i+2];
        ClusterDeposits[i+2]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i+2];
        ClusterEta[i+2]=ClusterEta[i];
        ClusterEta[i]=temp;
        temp=ClusterPhi[i+2];
        ClusterPhi[i+2]=ClusterPhi[i];
        ClusterPhi[i]=temp;
      }
    if(ClusterDeposits[i+1]<ClusterDeposits[i+3])
      {
        temp=ClusterDeposits[i+3];
        ClusterDeposits[i+3]=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=temp;
          temp=ClusterEta[i+1];
        ClusterEta[i+1]=ClusterEta[i+3];
        ClusterEta[i+3]=temp;
        temp=ClusterPhi[i+1];
        ClusterPhi[i+1]=ClusterPhi[i+3];
        ClusterPhi[i+3]=temp;
      }
  }
  for(int i=8;i<13;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
      {
        temp=ClusterDeposits[i+2];
        ClusterDeposits[i+2]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i+2];
        ClusterEta[i+2]=ClusterEta[i];
        ClusterEta[i]=temp;
        temp=ClusterPhi[i+2];
        ClusterPhi[i+2]=ClusterPhi[i];
        ClusterPhi[i]=temp;
      }
    if(ClusterDeposits[i+1]>ClusterDeposits[i+3])
      {
        temp=ClusterDeposits[i+3];
        ClusterDeposits[i+3]=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=temp;
         temp=ClusterEta[i+1];
        ClusterEta[i+1]=ClusterEta[i+3];
        ClusterEta[i+3]=temp;
        temp=ClusterPhi[i+1];
        ClusterPhi[i+1]=ClusterPhi[i+3];
        ClusterPhi[i+3]=temp;
      }
  }
  for(int i=16;i<21;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
      {
        temp=ClusterDeposits[i+2];
        ClusterDeposits[i+2]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i+2];
        ClusterEta[i+2]=ClusterEta[i];
        ClusterEta[i]=temp;
        temp=ClusterPhi[i+2];
        ClusterPhi[i+2]=ClusterPhi[i];
        ClusterPhi[i]=temp;
      }
    if(ClusterDeposits[i+1]<ClusterDeposits[i+3])
      {
        temp=ClusterDeposits[i+3];
        ClusterDeposits[i+3]=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=temp;
         temp=ClusterEta[i+1];
        ClusterEta[i+1]=ClusterEta[i+3];
        ClusterEta[i+3]=temp;
        temp=ClusterPhi[i+1];
        ClusterPhi[i+1]=ClusterPhi[i+3];
        ClusterPhi[i+3]=temp;
      }
  }
  for(int i=24;i<29;i=i+4)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
      {
        temp=ClusterDeposits[i+2];
        ClusterDeposits[i+2]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
        temp=ClusterEta[i+2];
        ClusterEta[i+2]=ClusterEta[i];
        ClusterEta[i]=temp;
        temp=ClusterPhi[i+2];
        ClusterPhi[i+2]=ClusterPhi[i];
        ClusterPhi[i]=temp;
      }

    if(ClusterDeposits[i+1]>ClusterDeposits[i+3])
      {
        temp=ClusterDeposits[i+3];
        ClusterDeposits[i+3]=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=temp;
        temp=ClusterEta[i+1];
        ClusterEta[i+1]=ClusterEta[i+3];
        ClusterEta[i+3]=temp;
        temp=ClusterPhi[i+1];
        ClusterPhi[i+1]=ClusterPhi[i+3];
        ClusterPhi[i+3]=temp;
      }

  }


  for(int i=0;i<7;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
      {
        temp=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+1];
          ClusterEta[i+1]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+1];
          ClusterPhi[i+1]=temp;
      }
  }
  for(int i=8;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
      {
        temp=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+1];
          ClusterEta[i+1]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+1];
          ClusterPhi[i+1]=temp;
      }
  }
  for(int i=16;i<23;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
      {
        temp=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
          temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+1];
          ClusterEta[i+1]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+1];
          ClusterPhi[i+1]=temp;
      }
  }
  for(int i=24;i<31;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
      {
        temp=ClusterDeposits[i+1];
        ClusterDeposits[i+1]=ClusterDeposits[i];
        ClusterDeposits[i]=temp;
         temp=ClusterEta[i];
          ClusterEta[i]=ClusterEta[i+1];
          ClusterEta[i+1]=temp;
          temp=ClusterPhi[i];
          ClusterPhi[i]=ClusterPhi[i+1];
          ClusterPhi[i+1]=temp;
      }
  }

bitonic16(ClusterDeposits,ClusterEta,ClusterPhi);
}
void bitonic4(uint16_t ClusterDeposits[32], uint16_t ClusterEta[32], uint16_t ClusterPhi[32])
{_ssdm_SpecArrayDimSize(ClusterPhi,32);_ssdm_SpecArrayDimSize(ClusterDeposits,32);_ssdm_SpecArrayDimSize(ClusterEta,32);
  int temp;
// #pragma HLS dataflow
// comparators in blocks of 4
  for(int i=0;i<2;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=4;i<6;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=8;i<10;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=12;i<14;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=16;i<18;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=20;i<22;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=24;i<26;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }
  for(int i=28;i<30;i++)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+2])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+2];
              ClusterDeposits[i+2]=temp;
               temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+2];
              ClusterEta[i+2]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+2];
              ClusterPhi[i+2]=temp;
              }
  }

  for(int i=0;i<3;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=4;i<7;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=8;i<11;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=12;i<15;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=16;i<19;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=20;i<23;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=24;i<27;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]<ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }
  for(int i=28;i<31;i=i+2)
  {
_ssdm_Unroll(0,0,0, "");
 if(ClusterDeposits[i]>ClusterDeposits[i+1])
              {temp=ClusterDeposits[i];
              ClusterDeposits[i]=ClusterDeposits[i+1];
              ClusterDeposits[i+1]=temp;
                temp=ClusterEta[i];
              ClusterEta[i]=ClusterEta[i+1];
              ClusterEta[i+1]=temp;
              temp=ClusterPhi[i];
              ClusterPhi[i]=ClusterPhi[i+1];
              ClusterPhi[i+1]=temp;
              }
  }

  bitonic8(ClusterDeposits,ClusterEta,ClusterPhi);

}
void getTowerPeaks3x4(uint16_t towerETRegions[3][4],uint16_t cEta[5],
                        uint16_t cPhi[5])
{_ssdm_SpecArrayDimSize(cPhi,5);_ssdm_SpecArrayDimSize(cEta,5);_ssdm_SpecArrayDimSize(towerETRegions,3);
  int temp;// temporary copying variable
_ssdm_op_SpecPipeline(6, 1, 1, 0, "");
 uint16_t Cluster_1_Deposits[16];
  uint16_t Cluster_1_Eta[16];
  uint16_t Cluster_1_Phi[16];
_ssdm_SpecArrayPartition( Cluster_1_Deposits, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( Cluster_1_Eta, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( Cluster_1_Phi, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( cEta, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( cPhi, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( towerETRegions, 0, "COMPLETE", 0, "");

 for(int i=0;i<16;i++)
  {
    Cluster_1_Deposits[i]=0;
    Cluster_1_Phi[i]=0;
    Cluster_1_Eta[i]=0;

  }
  int i=0;
 for(int tPhi = 0; tPhi < 4; tPhi++) {
_ssdm_Unroll(0,0,0, "");
 for(int tEta = 0; tEta < 3; tEta++) {
_ssdm_Unroll(0,0,0, "");
 Cluster_1_Deposits[i] = towerETRegions[tEta][tPhi];
       Cluster_1_Phi[i]=tPhi;
      Cluster_1_Eta[i]=tEta;
     i++;
    }
  }
for (int i=13;i<16;i++)
{
_ssdm_Unroll(0,0,0, "");
 Cluster_1_Deposits[i]=0;
 Cluster_1_Phi[i]=0;
  Cluster_1_Eta[i]=0;
}
//first level of binary comparators
for(int i=0;i<16;i=i+4)
{
_ssdm_Unroll(0,0,0, "");
if(Cluster_1_Deposits[i]<Cluster_1_Deposits[i+1])
{temp=Cluster_1_Deposits[i+1];
Cluster_1_Deposits[i+1]=Cluster_1_Deposits[i];
Cluster_1_Deposits[i]=temp;
temp=Cluster_1_Eta[i];
Cluster_1_Eta[i]=Cluster_1_Eta[i+1];
Cluster_1_Eta[i+1]=temp;
temp=Cluster_1_Phi[i];
Cluster_1_Phi[i]=Cluster_1_Phi[i+1];
Cluster_1_Phi[i+1]=temp;
}

if(Cluster_1_Deposits[i+2]>Cluster_1_Deposits[i+3])
{temp=Cluster_1_Deposits[i+3];
Cluster_1_Deposits[i+3]=Cluster_1_Deposits[i+2];
Cluster_1_Deposits[i+2]=temp;
temp=Cluster_1_Eta[i+2];
Cluster_1_Eta[i+2]=Cluster_1_Eta[i+3];
Cluster_1_Eta[i+3]=temp;
temp=Cluster_1_Phi[i+2];
Cluster_1_Phi[i+2]=Cluster_1_Phi[i+3];
Cluster_1_Phi[i+3]=temp;

}
 }


    // passing control to second level of quaternary comparators
    bitonic_1_4(Cluster_1_Deposits,Cluster_1_Eta,Cluster_1_Phi);
    //copying sorted array back into output variable
for(int i=0;i<5;i++)
{
  cEta[i]=Cluster_1_Eta[i];
  cPhi[i]=Cluster_1_Phi[i];
}



}
void TowerPeaks(uint16_t towerET[17][4], uint16_t TowerPhi[30], uint16_t TowerEta[30])
{_ssdm_SpecArrayDimSize(towerET,17);_ssdm_SpecArrayDimSize(TowerEta,30);_ssdm_SpecArrayDimSize(TowerPhi,30);
_ssdm_op_SpecPipeline(6, 1, 1, 0, "");
_ssdm_SpecArrayPartition( towerET, 0, "COMPLETE", 0, "");

_ssdm_SpecArrayPartition( TowerEta, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( TowerPhi, 0, "COMPLETE", 0, "");

uint16_t regions[3][4];
_ssdm_SpecArrayPartition( regions, 0, "COMPLETE", 0, "");
uint16_t regionEta[5];
_ssdm_SpecArrayPartition( regionEta, 0, "COMPLETE", 0, "");
uint16_t regionPhi[5];
_ssdm_SpecArrayPartition( regionPhi, 0, "COMPLETE", 0, "");
uint16_t Tower_1_Eta[30];
_ssdm_SpecArrayPartition( Tower_1_Eta, 0, "COMPLETE", 0, "");
uint16_t Tower_1_Phi[30];
_ssdm_SpecArrayPartition( Tower_1_Phi, 0, "COMPLETE", 0, "");

_ssdm_Unroll(0,0,0, "");
 for (int j=0;j<3;j++)
  {
_ssdm_Unroll(0,0,0, "");
 for (int k=0;k<4;k++)
      {
_ssdm_Unroll(0,0,0, "");
 regions[j][k]=0;
      }
  }
  for (int i=0;i<5;i++)
  {
    regionEta[i]=0;
    regionPhi[i]=0;
  }
  for(int i=0;i<30;i++)
  {
    Tower_1_Eta[i]=0;
    Tower_1_Phi[i]=0;
  }

int x=0;
for (int i=0;i<15;i=i+3)
{
_ssdm_Unroll(0,0,0, "");
 for (int j=0;j<3;j++)
  {
_ssdm_Unroll(0,0,0, "");
 for (int k=0;k<4;k++)
      {
_ssdm_Unroll(0,0,0, "");
 regions[j][k]=towerET[i+j][k];
      }
  }

getTowerPeaks3x4(regions,regionEta,regionPhi);
Tower_1_Eta[x+0]=regionEta[0]+i;
Tower_1_Eta[x+1]=regionEta[1]+i;
Tower_1_Eta[x+2]=regionEta[2]+i;
Tower_1_Eta[x+3]=regionEta[3]+i;
Tower_1_Eta[x+4]=regionEta[4]+i;
Tower_1_Phi[x+0]=regionPhi[0];
Tower_1_Phi[x+1]=regionPhi[1];
Tower_1_Phi[x+2]=regionPhi[2];
Tower_1_Phi[x+3]=regionPhi[3];
Tower_1_Phi[x+4]=regionPhi[4];
x=x+5;
 }
for (int j=0;j<2;j++)
  {
_ssdm_Unroll(0,0,0, "");
 for (int k=0;k<4;k++)
      {
_ssdm_Unroll(0,0,0, "");
 regions[j][k]=towerET[j+15][k];
      }
  }
  regions[2][0]=0;
  regions[2][1]=0;
  regions[2][2]=0;
  regions[2][3]=0;
  getTowerPeaks3x4(regions,regionEta,regionPhi);
Tower_1_Eta[25+0]=regionEta[0]+15;
Tower_1_Eta[25+1]=regionEta[1]+15;
Tower_1_Eta[25+2]=regionEta[2]+15;
Tower_1_Eta[25+3]=regionEta[3]+15;
Tower_1_Eta[25+4]=regionEta[4]+15;
Tower_1_Phi[25+0]=regionPhi[0];
Tower_1_Phi[25+1]=regionPhi[1];
Tower_1_Phi[25+2]=regionPhi[2];
Tower_1_Phi[25+3]=regionPhi[3];
Tower_1_Phi[25+4]=regionPhi[4];
uint16_t ClusterDeposits2[32];
  uint16_t ClusterEta2[32];
  uint16_t ClusterPhi2[32];
  for(int i=0;i<32;i++)
{
  ClusterDeposits2[i]=0;
  ClusterEta2[i]=0;
  ClusterPhi2[i]=0;
}
_ssdm_SpecArrayPartition( ClusterDeposits2, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( ClusterEta2, 0, "COMPLETE", 0, "");
_ssdm_SpecArrayPartition( ClusterPhi2, 0, "COMPLETE", 0, "");
for(int i=0;i<30;i++)
{
  ClusterDeposits2[i]=towerET[Tower_1_Eta[i]][Tower_1_Phi[i]];
  ClusterEta2[i]=Tower_1_Eta[i];
  ClusterPhi2[i]=Tower_1_Phi[i];
}


int temp=0;
//first level of binary comparators
for(int i=0;i<32;i=i+4)
{
_ssdm_Unroll(0,0,0, "");
if(ClusterDeposits2[i]>ClusterDeposits2[i+1])
{temp=ClusterDeposits2[i+1];
ClusterDeposits2[i+1]=ClusterDeposits2[i];
ClusterDeposits2[i]=temp;
temp=ClusterEta2[i];
ClusterEta2[i]=ClusterEta2[i+1];
ClusterEta2[i+1]=temp;
temp=ClusterPhi2[i];
ClusterPhi2[i]=ClusterPhi2[i+1];
ClusterPhi2[i+1]=temp;
}

if(ClusterDeposits2[i+2]<ClusterDeposits2[i+3])
{temp=ClusterDeposits2[i+3];
ClusterDeposits2[i+3]=ClusterDeposits2[i+2];
ClusterDeposits2[i+2]=temp;
temp=ClusterEta2[i+2];
ClusterEta2[i+2]=ClusterEta2[i+3];
ClusterEta2[i+3]=temp;
temp=ClusterPhi2[i+2];
ClusterPhi2[i+2]=ClusterPhi2[i+3];
ClusterPhi2[i+3]=temp;

}
  }


    // passing control to second level of quaternary comparators
    bitonic4(ClusterDeposits2,ClusterEta2,ClusterPhi2);

    for(int i=0;i<30;i++)
{

  TowerEta[i]=ClusterEta2[i];
  TowerPhi[i]=ClusterPhi2[i];

}
}

class ssdm_global_array_HCALTowerpp0cppaplinecpp {
 public:
   inline __attribute__((always_inline)) ssdm_global_array_HCALTowerpp0cppaplinecpp() {
   _ssdm_SpecConstant(&NCaloLayer1Eta);
   _ssdm_SpecConstant(&NCaloLayer1Phi);
  }
};
static ssdm_global_array_HCALTowerpp0cppaplinecpp ssdm_global_array_ins;
