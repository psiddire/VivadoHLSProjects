# 1 "TPG.cc"
# 1 "TPG.cc" 1
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
# 1 "TPG.cc" 2
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
# 27 "/usr/include/stdint.h" 2 3 4
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
# 2 "TPG.cc" 2
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
# 3 "TPG.cc" 2
# 1 "./TPG.h" 1





//#define Vivado 1
# 36 "./TPG.h"
# 1 "./LUTs.h" 1




static const uint16_t data[3000] = {
0x10c7, 0x10cb, 0x10c8, 0x10c4, 0x10c6, 0x10c3, 0x10c7, 0x10bf, 0x10c8, 0x10c4, 0x10c5, 0x10c4, 0x10c4, 0x10c9, 0x10c7, 0x10c2, 0x10c5, 0x10c3, 0x10c3, 0x10c4, 0x10c6, 0x10c5, 0x10ca, 0x10c4, 0x10c6, 0x10c3, 0x10c4, 0x10c6, 0x10c7, 0x10c8, 0x10c4, 0x10c4, 0x10c1, 0x10c2, 0x10c7, 0x10c5, 0x10c9, 0x10c2, 0x10bf, 0x10c2, 0x10c3, 0x10c9, 0x10c4, 0x10cb, 0x10c4, 0x10c7, 0x10cc, 0x10c9, 0x10c7, 0x10c7, 0x10c5, 0x10c5, 0x10c6, 0x10c3, 0x10c3, 0x10c5, 0x10c3, 0x10c5, 0x10c6, 0x10ca, 0x10c5, 0x10c6, 0x10c5, 0x10c6, 0x10c3, 0x10c8, 0x10c7, 0x10c6, 0x10c8, 0x10c5, 0x10c4, 0x10cc, 0x10c9, 0x10c7, 0x10ca, 0x10c9, 0x10c7, 0x10cb, 0x10c8, 0x10c7, 0x10c8, 0x10c5, 0x10c8, 0x10ca, 0x10cb, 0x10c9, 0x10c6, 0x10c4, 0x10c8, 0x10c6, 0x10c8, 0x10ca, 0x10ca, 0x10ca, 0x10c7, 0x10c6, 0x10c8, 0x10cb, 0x10c8, 0x10cb, 0x10ca, 0x10ca, 0x10c7, 0x10c4, 0x10c4, 0x10c9, 0x10c9, 0x10c9, 0x10ca, 0x10c9, 0x10c9, 0x10c7, 0x10c8, 0x10cb, 0x10ca, 0x10c7, 0x10ca, 0x10c9, 0x10ca, 0x10c9, 0x10c7, 0x10ca, 0x10c8, 0x10c7, 0x10c7, 0x10cc, 0x10ca, 0x10c7, 0x10c8, 0x10cc, 0x10ca, 0x10cb, 0x10c6, 0x10ca, 0x10c5, 0x10c9, 0x10c7, 0x10c9, 0x10c8, 0x10ca, 0x10c9, 0x10c9, 0x10c9, 0x10c4, 0x10c7, 0x10ca, 0x10c7, 0x10ca, 0x10c5, 0x10c8, 0x10c7, 0x10c9, 0x10c9, 0x10c8, 0x10ca, 0x10ca, 0x10c8, 0x10c8, 0x10ca, 0x10c7, 0x10c8, 0x10ca, 0x10cc, 0x10c6, 0x10cd, 0x10c9, 0x10c7, 0x10c6, 0x10c8, 0x10c7, 0x10c8, 0x10cb, 0x10c9, 0x10c7, 0x10c6, 0x10c6, 0x10cc, 0x10c8, 0x10c6, 0x10c6, 0x10c5, 0x10c9, 0x10c5, 0x10c5, 0x10c9, 0x10ca, 0x10c8, 0x10ca, 0x10c6, 0x10c5, 0x10ca, 0x10c5, 0x10c9, 0x10c8, 0x10c7, 0x10c7, 0x10c8, 0x10c8, 0x10c7, 0x10c8, 0x10c9, 0x10c4, 0x10c7, 0x10ca, 0x10ca, 0x10c9, 0x10c5, 0x10c9, 0x10c6, 0x10c8, 0x10c5, 0x10ca, 0x10c6, 0x10c8, 0x10c7, 0x10c9, 0x10ca, 0x10c6, 0x10c6, 0x10c4, 0x10c7, 0x10c8, 0x10c7, 0x10c4, 0x10c4, 0x10c6, 0x10c7, 0x10c5, 0x10c8, 0x10c9, 0x10c9, 0x10c8, 0x10c6, 0x10cb, 0x10cc, 0x10c6, 0x10ca, 0x10c9, 0x10c9, 0x10c9, 0x10c5, 0x10c9, 0x10c7, 0x10c5, 0x10c6, 0x10c7, 0x10c8, 0x10c6, 0x10c6, 0x10ca, 0x10cb, 0x10ca, 0x10c4, 0x10c7, 0x10c7, 0x10c6, 0x10c7, 0x10c8, 0x10c7, 0x10c7, 0x10c7, 0x10c8, 0x10c5, 0x10c8, 0x10c9, 0x10c8, 0x10c7, 0x10c5, 0x10c8, 0x10c2, 0x10ca, 0x10c5, 0x10cb, 0x10c5, 0x10c7, 0x10c9, 0x10ca, 0x10c4, 0x10c5, 0x10cb, 0x10cb, 0x10c7, 0x10c8, 0x10c8, 0x10c8, 0x10c9, 0x10ca, 0x10c5, 0x10c4, 0x10c8, 0x10c5, 0x10c6, 0x10c7, 0x10cd, 0x10c6, 0x10c8, 0x10cc, 0x10c8, 0x10c5, 0x10c8, 0x10c4, 0x10c8, 0x10c5, 0x10c5, 0x10c5, 0x10bf, 0x10c5, 0x10c1, 0x10c7, 0x10c3, 0x10c5, 0x10c5, 0x10c6, 0x10c4, 0x10c5, 0x10c3, 0x10c3, 0x10c3, 0x10c2, 0x10c2, 0x10c6, 0x10c4, 0x10c7, 0x10c6, 0x10c6, 0x10c2, 0x10c2, 0x10c8, 0x10c5, 0x10ca, 0x10c0, 0x10c4, 0x10c2, 0x10c3, 0x10c6, 0x10c7, 0x10c8, 0x10c1, 0x10c0, 0x10c3, 0x10c4, 0x10c8, 0x10c2, 0x10c8, 0x10c2, 0x10c2, 0x10ca, 0x10c4, 0x10c6, 0x10c7, 0x10c1, 0x10c0, 0x10c3, 0x10c1, 0x10c3, 0x10c4, 0x10c3, 0x10c3, 0x10c0, 0x10c6, 0x10c5, 0x10c6, 0x10c4, 0x10c6, 0x10c3, 0x10c5, 0x10c8, 0x10c5, 0x10c9, 0x10c5, 0x10c5, 0x10c9, 0x10c7, 0x10c6, 0x10c7, 0x10c9, 0x10c6, 0x10cb, 0x10c6, 0x10c7, 0x10c7, 0x10c6, 0x10c7, 0x10cb, 0x10ca, 0x10c6, 0x10c8, 0x10c4, 0x10c8, 0x10c8, 0x10ca, 0x10c8, 0x10c9, 0x10cc, 0x10c6, 0x10c6, 0x10c5, 0x10cb, 0x10ca, 0x10ca, 0x10cb, 0x10c8, 0x10cc, 0x10c8, 0x10c3, 0x10ca, 0x10c5, 0x10c7, 0x10c9, 0x10ca, 0x10c7, 0x10c8, 0x10c7, 0x10cc, 0x10c8, 0x10ca, 0x10ca, 0x10c9, 0x10ca, 0x10ca, 0x10c8, 0x10c7, 0x10c9, 0x10c9, 0x10c7, 0x10c7, 0x10ca, 0x10c8, 0x10c7, 0x10ca, 0x10cd, 0x10cb, 0x10c5, 0x10c8, 0x10c5, 0x10cc, 0x10c5, 0x10ca, 0x10c6, 0x10c9, 0x10c7, 0x10c6, 0x10c8, 0x10c3, 0x10c6, 0x10ca, 0x10c7, 0x10c6, 0x10c7, 0x10c9, 0x10c9, 0x10c9, 0x10c8, 0x10ca, 0x10cc, 0x10cc, 0x10c8, 0x10c6, 0x10c9, 0x10c6, 0x10c8, 0x10cb, 0x10cb, 0x10c6, 0x10cb, 0x10c9, 0x10c5, 0x10c7, 0x10c6, 0x10c8, 0x10c6, 0x10cb, 0x10cc, 0x10ca, 0x10c4, 0x10c8, 0x10cb, 0x10c8, 0x10c6, 0x10c6, 0x10c5, 0x10c8, 0x10c5, 0x10c4, 0x10cb, 0x10ca, 0x10c8, 0x10c7, 0x10c8, 0x10c8, 0x10c7, 0x10c7, 0x10cb, 0x10c8, 0x10c5, 0x10c8, 0x10c9, 0x10c9, 0x10c9, 0x10c8, 0x10c6, 0x10c4, 0x10c8, 0x10c8, 0x10cc, 0x10c6, 0x10c7, 0x10c9, 0x10c6, 0x10c8, 0x10c6, 0x10ca, 0x10c5, 0x10c6, 0x10c4, 0x10c9, 0x10ca, 0x10ca, 0x10c7, 0x10c4, 0x10c5, 0x10c8, 0x10c8, 0x10c3, 0x10c7, 0x10c7, 0x10c8, 0x10c5, 0x10ca, 0x10c9, 0x10ca, 0x10c8, 0x10c7, 0x10c7, 0x10cc, 0x10c8, 0x10cc, 0x10c6, 0x10c9, 0x10c8, 0x10c8, 0x10c7, 0x10c6, 0x10c7, 0x10c7, 0x10c7, 0x10c6, 0x10c8, 0x10c7, 0x10cb, 0x10ca, 0x10c8, 0x10c4, 0x10c6, 0x10c6, 0x10c9, 0x10c9, 0x10c8, 0x10c7, 0x10c6, 0x10c7, 0x10c5, 0x10c6, 0x10c9, 0x10c8, 0x10c9, 0x10c9, 0x10c4, 0x10cb, 0x10c1, 0x10c9, 0x10c4, 0x10cd, 0x10c6, 0x10c7, 0x10ca, 0x10c6, 0x10c4, 0x10c7, 0x10c9, 0x10cb, 0x10c6, 0x10c6, 0x10c6, 0x10c7, 0x10c8, 0x10c9, 0x10c6, 0x10c5, 0x10c7, 0x10c5, 0x10c6, 0x10c9, 0x10cb, 0x10c7, 0x10ca, 0x10cb, 0x10c7, 0x10c8, 0x10c7, 0x10c5, 0x10c7, 0x10c5, 0x10c3, 0x10c6, 0x10c1, 0x10c8, 0x10c4, 0x10c9, 0x10c6, 0x10c6, 0x10c5, 0x10c9, 0x10c6, 0x10c4, 0x10c5, 0x10c6, 0x10c6, 0x10c7, 0x10c3, 0x10c2, 0x10c4, 0x10c7, 0x10c4, 0x10c4, 0x10c3, 0x10c2, 0x10c6, 0x10c9, 0x10c8, 0x10c3, 0x10c6, 0x10c3, 0x10c4, 0x10c8, 0x10c4, 0x10ca, 0x10c0, 0x10c1, 0x10c3, 0x10c4, 0x10c9, 0x10c5, 0x10c7, 0x10c4, 0x10c2, 0x10c6, 0x10c6, 0x10c4, 0x10c5, 0x10c3, 0x10c1, 0x10c9, 0x10c2, 0x10c3, 0x10c8, 0x10c2, 0x10c4, 0x10c4, 0x10c8, 0x10c7, 0x10c7, 0x10c6, 0x10c4, 0x10c3, 0x10c3, 0x10c9, 0x10c6, 0x10c8, 0x10c4, 0x10c7, 0x10ca, 0x10c6, 0x10c7, 0x10c7, 0x10cb, 0x10c8, 0x10cc, 0x10c5, 0x10c7, 0x10c8, 0x10c6, 0x10c6, 0x10ca, 0x10cb, 0x10c6, 0x10c6, 0x10c6, 0x10c9, 0x10c6, 0x10cb, 0x10c8, 0x10ca, 0x10ca, 0x10c7, 0x10c4, 0x10c6, 0x10c9, 0x10c9, 0x10ca, 0x10ca, 0x10cc, 0x10cb, 0x10c8, 0x10c9, 0x10c8, 0x10c6, 0x10c6, 0x10c9, 0x10ca, 0x10c6, 0x10c9, 0x10c8, 0x10cb, 0x10cb, 0x10c9, 0x10ca, 0x10c8, 0x10ca, 0x10c7, 0x10c7, 0x10c9, 0x10c7, 0x10c9, 0x10c7, 0x10c8, 0x10cc, 0x10c9, 0x10c7, 0x10cb, 0x10cd, 0x10c9, 0x10c7, 0x10cb, 0x10c6, 0x10ca, 0x10c5, 0x10cc, 0x10c7, 0x10c9, 0x10c8, 0x10c5, 0x10c9, 0x10c2, 0x10c8, 0x10ca, 0x10c5, 0x10c8, 0x10c8, 0x10c8, 0x10c8, 0x10c8, 0x10cb, 0x10cc, 0x10cb, 0x10c9, 0x10cb, 0x10c7, 0x10c9, 0x10c9, 0x10c9, 0x10c7, 0x10cb, 0x10c5, 0x10c9, 0x10c8, 0x10c4, 0x10c7, 0x10c8, 0x10c7, 0x10c5, 0x10cc, 0x10c8, 0x10ca, 0x10c3, 0x10c7, 0x10ca, 0x10cc, 0x10c4, 0x10c6, 0x10c4, 0x10ca, 0x10c5, 0x10c5, 0x10ca, 0x10c9, 0x10c9, 0x10c7, 0x10c8, 0x10c7, 0x10c8, 0x10c7, 0x10c6, 0x10ca, 0x10c5, 0x10cc, 0x10ca, 0x10c9, 0x10c9, 0x10cb, 0x10c4, 0x10c5, 0x10c7, 0x10c8, 0x10cc, 0x10cb, 0x10c5, 0x10c8, 0x10c9, 0x10c7, 0x10c7, 0x10cc, 0x10c7, 0x10c7, 0x10c6, 0x10ca, 0x10c8, 0x10c7, 0x10cb, 0x10c4, 0x10c5, 0x10ca, 0x10c8, 0x10c6, 0x10c7, 0x10c9, 0x10c9, 0x10c4, 0x10ca, 0x10c7, 0x10cb, 0x10c9, 0x10c5, 0x10c7, 0x10cb, 0x10c7, 0x10cb, 0x10c7, 0x10cc, 0x10ca, 0x10c6, 0x10c9, 0x10c6, 0x10c5, 0x10c7, 0x10c9, 0x10c6, 0x10c8, 0x10c8, 0x10c9, 0x10ca, 0x10ca, 0x10c5, 0x10c7, 0x10c5, 0x10c8, 0x10c8, 0x10c7, 0x10c4, 0x10c4, 0x10c9, 0x10c6, 0x10ca, 0x10c9, 0x10c7, 0x10ca, 0x10c8, 0x10c6, 0x10c8, 0x10c1, 0x10c9, 0x10c3, 0x10cb, 0x10c6, 0x10c6, 0x10c8, 0x10c6, 0x10c7, 0x10c7, 0x10ca, 0x10cb, 0x10c5, 0x10c6, 0x10c9, 0x10c7, 0x10c8, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10c4, 0x10ca, 0x10c9, 0x10c5, 0x10c7, 0x10c5, 0x10c5, 0x10cb, 0x10c9, 0x10c4, 0x10c6, 0x10c2, 0x10c7, 0x10c3, 0x10c9, 0x10c6, 0x10c9, 0x10c5, 0x10ca, 0x10c7, 0x10c6, 0x10c7, 0x10c7, 0x10c7, 0x10c6, 0x10c3, 0x10c6, 0x10c6, 0x10c8, 0x10c5, 0x10c4, 0x10c3, 0x10c3, 0x10c8, 0x10c9, 0x10c8, 0x10c2, 0x10c7, 0x10c7, 0x10c6, 0x10c9, 0x10c4, 0x10c9, 0x10be, 0x10c2, 0x10c4, 0x10c4, 0x10ca, 0x10c5, 0x10c9, 0x10c6, 0x10c5, 0x10ca, 0x10c9, 0x10c4, 0x10c5, 0x10c3, 0x10c3, 0x10ca, 0x10c2, 0x10c3, 0x10c8, 0x10c2, 0x10c5, 0x10c5, 0x10ca, 0x10c7, 0x10c8, 0x10c7, 0x10c4, 0x10c4, 0x10c4, 0x10c7, 0x10c9, 0x10c6, 0x10c3, 0x10c6, 0x10c9, 0x10ca, 0x10c7, 0x10c6, 0x10cd, 0x10ca, 0x10cd, 0x10c6, 0x10c6, 0x10c9, 0x10c8, 0x10c9, 0x10cb, 0x10c9, 0x10c8, 0x10c6, 0x10c7, 0x10ca, 0x10c5, 0x10ca, 0x10c5, 0x10c9, 0x10c8, 0x10c6, 0x10c5, 0x10c9, 0x10cc, 0x10c7, 0x10c9, 0x10c7, 0x10ca, 0x10c9, 0x10c8, 0x10c8, 0x10c8, 0x10c9, 0x10c6, 0x10c9, 0x10c9, 0x10ca, 0x10c9, 0x10c8, 0x10c9, 0x10c9, 0x10c8, 0x10cc, 0x10c9, 0x10ca, 0x10c6, 0x10c7, 0x10c9, 0x10c8, 0x10c8, 0x10c8, 0x10c9, 0x10ca, 0x10ca, 0x10c7, 0x10ca, 0x10cc, 0x10c9, 0x10c7, 0x10c6, 0x10c6, 0x10c9, 0x10c5, 0x10cc, 0x10c5, 0x10c7, 0x10ca, 0x10c6, 0x10c6, 0x10c5, 0x10ca, 0x10c6, 0x10c7, 0x10c9, 0x10c9, 0x10c9, 0x10c8, 0x10c8, 0x10cd, 0x10cb, 0x10c8, 0x10c8, 0x10cb, 0x10c7, 0x10c9, 0x10c7, 0x10ca, 0x10c5, 0x10cb, 0x10c7, 0x10cb, 0x10c8, 0x10c4, 0x10c7, 0x10c7, 0x10c8, 0x10c7, 0x10cd, 0x10ca, 0x10cb, 0x10c3, 0x10c9, 0x10cd, 0x10c7, 0x10c8, 0x10c7, 0x10c6, 0x10c8, 0x10c4, 0x10c5, 0x10c7, 0x10ca, 0x10c5, 0x10c7, 0x10c8, 0x10c6, 0x10ca, 0x10c8, 0x10c6, 0x10c9, 0x10c5, 0x10c9, 0x10c8, 0x10c7, 0x10c5, 0x10c9, 0x10c6, 0x10c7, 0x10c8, 0x10ca, 0x10cb, 0x10ca, 0x10c4, 0x10c9, 0x10cf, 0x10c8, 0x10cb, 0x10cb, 0x10ca, 0x10cb, 0x10c6, 0x10c8, 0x10c9, 0x10ca, 0x10ca, 0x10c4, 0x10c9, 0x10c8, 0x10c7, 0x10c6, 0x10ca, 0x10c8, 0x10c6, 0x10c5, 0x10cb, 0x116c, 0x10d2, 0x10ca, 0x10c7, 0x10c6, 0x10e4, 0x10cd, 0x10cc, 0x10c9, 0x10cd, 0x10c9, 0x10c8, 0x10c7, 0x10c7, 0x10c8, 0x10c6, 0x10c6, 0x10c6, 0x10c8, 0x10c7, 0x10c8, 0x10ca, 0x10c8, 0x10c7, 0x10c5, 0x10c6, 0x10c6, 0x10ca, 0x10c5, 0x10c7, 0x10c5, 0x10c9, 0x10c6, 0x10c8, 0x10ca, 0x10c8, 0x10c9, 0x10c8, 0x10c4, 0x10c9, 0x10c4, 0x10c8, 0x10c2, 0x10ca, 0x10c5, 0x10c7, 0x10c8, 0x10c5, 0x10c6, 0x10c7, 0x10c9, 0x10cb, 0x10c8, 0x10c6, 0x10cb, 0x10c8, 0x10c9, 0x10c7, 0x10c7, 0x10c8, 0x10cc, 0x10c5, 0x10c7, 0x10c7, 0x10ca, 0x10c4, 0x10c6, 0x10ca, 0x10c5, 0x10c7, 0x10c7, 0x10ca, 0x10cc, 0x10ca, 0x10c7, 0x10cb, 0x10c6, 0x10ca, 0x10c6, 0x10cc, 0x10c8, 0x10cd, 0x10ca, 0x10cb, 0x10ca, 0x10ca, 0x10c8, 0x10cb, 0x10c9, 0x10c9, 0x10c7, 0x10c9, 0x10c9, 0x10c9, 0x10c8, 0x10c8, 0x10c5, 0x10c8, 0x10cb, 0x10cc, 0x10cc, 0x10c5, 0x10c7, 0x10c8, 0x10c9, 0x10ce, 0x10ca, 0x10cd, 0x10c5, 0x10c5, 0x10c6, 0x10c8, 0x10cd, 0x10c8, 0x10cb, 0x10c9, 0x10c9, 0x10ce, 0x10cc, 0x10ca, 0x10c8, 0x10c6, 0x10c8, 0x10cc, 0x10c5, 0x10c6, 0x10cc, 0x10c6, 0x10c7, 0x10c8, 0x10cc, 0x10cc, 0x10cc, 0x10cb, 0x10c8, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10c6, 0x10c6, 0x10c6, 0x10c8, 0x10ca, 0x10c8, 0x10c8, 0x10c9, 0x10c9, 0x10cd, 0x10c6, 0x10c8, 0x10c7, 0x10c7, 0x10c7, 0x10cc, 0x10ca, 0x10c8, 0x10c9, 0x10c6, 0x10c9, 0x10c6, 0x10ca, 0x10c3, 0x10ca, 0x10ce, 0x10cf, 0x10d3, 0x10ca, 0x10cb, 0x10c9, 0x10ce, 0x10cc, 0x10ca, 0x10c8, 0x10c5, 0x10c9, 0x10ca, 0x10ca, 0x10c7, 0x10c8, 0x10cb, 0x10ca, 0x10c9, 0x10c8, 0x10ca, 0x10ca, 0x10c9, 0x10dd, 0x10d5, 0x10d2, 0x10c9, 0x10c8, 0x10d1, 0x10cf, 0x10cc, 0x10ca, 0x10ca, 0x10cb, 0x10cc, 0x10c7, 0x10c9, 0x10cc, 0x10c9, 0x10c9, 0x10c8, 0x10c4, 0x10c9, 0x10c5, 0x10cb, 0x10c7, 0x10c7, 0x10cb, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10c7, 0x10c7, 0x10ca, 0x10c9, 0x10c9, 0x10c8, 0x10c8, 0x10cf, 0x10cc, 0x10c9, 0x10c8, 0x10ca, 0x10c5, 0x10c4, 0x10c8, 0x10cb, 0x10c7, 0x10cb, 0x10c6, 0x10cd, 0x10c8, 0x10c9, 0x10cb, 0x10cb, 0x10c7, 0x10c6, 0x10ca, 0x10c8, 0x10ca, 0x10c5, 0x10c8, 0x10cf, 0x10c8, 0x10c9, 0x10c7, 0x10c5, 0x10c6, 0x10c5, 0x10c5, 0x10c8, 0x10c8, 0x10c6, 0x10cb, 0x10c6, 0x10c7, 0x10c8, 0x10c5, 0x10c7, 0x10c9, 0x10c5, 0x10ca, 0x10cc, 0x10d0, 0x10d7, 0x10c8, 0x10c7, 0x10ce, 0x10e1, 0x111d, 0x10cb, 0x10cb, 0x10d0, 0x10f8, 0x128f, 0x10c9, 0x10cd, 0x10d7, 0x10ff, 0x121b, 0x10c8, 0x10cc, 0x10d2, 0x10dd, 0x110c, 0x10db, 0x10d9, 0x10ce, 0x10c9, 0x10c8, 0x116c, 0x111a, 0x10e4, 0x10cf, 0x10cf, 0x34b6, 0x12f2, 0x1105, 0x10d2, 0x10cc, 0x18e5, 0x125e, 0x110c, 0x10d9, 0x10ce, 0x112c, 0x1109, 0x10e0, 0x10cf, 0x10c7, 0x10c5, 0x10c9, 0x10c5, 0x10c8, 0x10c6, 0x10ca, 0x10cb, 0x10cb, 0x10c5, 0x10c5, 0x10c7, 0x10c8, 0x10c5, 0x10c7, 0x10c5, 0x10ca, 0x10c9, 0x10c5, 0x10c7, 0x10ca, 0x10ca, 0x10ca, 0x10ca, 0x10c5, 0x10c9, 0x10c7, 0x10cd, 0x10c8, 0x10cc, 0x10c5, 0x10c7, 0x10c7, 0x10c7, 0x10c9, 0x10c7, 0x10c9, 0x10cc, 0x10c6, 0x10c6, 0x10ca, 0x10c4, 0x10c8, 0x10c9, 0x10c8, 0x10cb, 0x10cc, 0x10c5, 0x10c6, 0x10cb, 0x10c9, 0x10c5, 0x10c5, 0x10c9, 0x10c6, 0x10c9, 0x10c5, 0x10cb, 0x10ce, 0x10cb, 0x10cb, 0x10ca, 0x10c6, 0x10cd, 0x10c6, 0x10ce, 0x10ca, 0x10cb, 0x10cb, 0x10d0, 0x10cc, 0x10ce, 0x10ca, 0x10cb, 0x10ca, 0x10ca, 0x10c7, 0x10ca, 0x10ca, 0x10ce, 0x10cc, 0x10cb, 0x10c9, 0x10cb, 0x10cd, 0x10cd, 0x10d0, 0x10c7, 0x10cd, 0x10cb, 0x10ca, 0x10cf, 0x10cd, 0x10d0, 0x10c6, 0x10c7, 0x10ca, 0x10cb, 0x10cf, 0x10c9, 0x10cd, 0x10cb, 0x10c7, 0x10ce, 0x10cb, 0x10cb, 0x10cb, 0x10c8, 0x10c9, 0x10cd, 0x10c8, 0x10c9, 0x10cc, 0x10ca, 0x10cb, 0x10c7, 0x10ce, 0x10cc, 0x10ce, 0x10cd, 0x10cc, 0x10ca, 0x10ca, 0x10c6, 0x10c6, 0x10c6, 0x10c5, 0x10c8, 0x10c9, 0x10ca, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10cd, 0x10c7, 0x10c9, 0x10c6, 0x10c8, 0x10c7, 0x10cb, 0x10c9, 0x10c7, 0x10c8, 0x10c8, 0x10c8, 0x10c7, 0x10ca, 0x10c6, 0x10c9, 0x10cd, 0x10d2, 0x10da, 0x10c9, 0x10ca, 0x10c9, 0x10ce, 0x10cd, 0x10ca, 0x10ca, 0x10c5, 0x10ca, 0x10cb, 0x10c8, 0x10c9, 0x10c7, 0x10cd, 0x10cb, 0x10cb, 0x10c8, 0x10ca, 0x10cb, 0x10ca, 0x10e2, 0x10d9, 0x10d7, 0x10ce, 0x10c9, 0x10d1, 0x10ce, 0x10cd, 0x10ca, 0x10ca, 0x10ca, 0x10cc, 0x10c8, 0x10c9, 0x10ca, 0x10cd, 0x10c9, 0x10c9, 0x10c7, 0x10c9, 0x10c6, 0x10cb, 0x10c8, 0x10c7, 0x10cb, 0x10c9, 0x10ca, 0x10c9, 0x10c9, 0x10c8, 0x10c6, 0x10cc, 0x10c7, 0x10c9, 0x10ca, 0x10ca, 0x10cc, 0x10c9, 0x10ca, 0x10c9, 0x10cb, 0x10c8, 0x10c6, 0x10c6, 0x10c9, 0x10c6, 0x10cb, 0x10c4, 0x10cf, 0x10c8, 0x10cb, 0x10cd, 0x10cd, 0x10c9, 0x10c4, 0x10cd, 0x10c9, 0x10c9, 0x10c8, 0x10c9, 0x10cd, 0x10c6, 0x10c9, 0x10c7, 0x10c7, 0x10c5, 0x10c6, 0x10c3, 0x10c6, 0x10c9, 0x10c7, 0x10cd, 0x10c6, 0x10c7, 0x10c9, 0x10c8, 0x10c6, 0x10c9, 0x10c3, 0x10c9, 0x10cc, 0x10d1, 0x10dd, 0x10c8, 0x10cb, 0x10d0, 0x10eb, 0x1138, 0x10cc, 0x10c8, 0x10d4, 0x1109, 0x1326, 0x10c7, 0x10ce, 0x10d7, 0x1110, 0x128b, 0x10c7, 0x10ca, 0x10d5, 0x10e2, 0x1122, 0x10e3, 0x10df, 0x10d2, 0x10cb, 0x10ca, 0x11a2, 0x1138, 0x10ec, 0x10d4, 0x10d1, 0x3602, 0x13a9, 0x1117, 0x10d9, 0x10cd, 0x1b93, 0x12e1, 0x1123, 0x10dc, 0x10cf, 0x114d, 0x1121, 0x10e7, 0x10d2, 0x10c9, 0x10c9, 0x10ca, 0x10c8, 0x10c8, 0x10c7, 0x10cb, 0x10ca, 0x10cb, 0x10c4, 0x10c7, 0x10c8, 0x10c9, 0x10c4, 0x10c8, 0x10c6, 0x10ca, 0x10c7, 0x10c4, 0x10c8, 0x10c9, 0x10ca, 0x10cc, 0x10cb, 0x10c5, 0x10c8, 0x10c7, 0x10ce, 0x10c9, 0x10cc, 0x10c5, 0x10c7, 0x10c6, 0x10c9, 0x10c6, 0x10c7, 0x10ca, 0x10c8, 0x10c7, 0x10c5, 0x10c7, 0x10c7, 0x10c9, 0x10cb, 0x10c7, 0x10ca, 0x10c9, 0x10c8, 0x10c9, 0x10cb, 0x10c9, 0x10ca, 0x10c5, 0x10ca, 0x10c6, 0x10c7, 0x10c7, 0x10cc, 0x10cf, 0x10cd, 0x10c8, 0x10cc, 0x10c6, 0x10ce, 0x10cb, 0x10ce, 0x10cc, 0x10cc, 0x10c9, 0x10cd, 0x10cc, 0x10ce, 0x10cd, 0x10cb, 0x10cc, 0x10cb, 0x10c9, 0x10cb, 0x10ca, 0x10ce, 0x10c9, 0x10cc, 0x10c9, 0x10c9, 0x10cd, 0x10cd, 0x10cf, 0x10c8, 0x10cb, 0x10c8, 0x10c9, 0x10cd, 0x10c8, 0x10ce, 0x10c5, 0x10c6, 0x10c8, 0x10cb, 0x10ce, 0x10ca, 0x10cf, 0x10c9, 0x10c9, 0x10cd, 0x10cc, 0x10c8, 0x10cd, 0x10c8, 0x10c9, 0x10cc, 0x10c9, 0x10c9, 0x10cb, 0x10c8, 0x10cb, 0x10ca, 0x10cd, 0x10cc, 0x10cb, 0x10cc, 0x10ca, 0x10c7, 0x10c9, 0x10c6, 0x10c7, 0x10c9, 0x10c8, 0x10c8, 0x10ca, 0x10c9, 0x10cb, 0x10c9, 0x10c8, 0x10c8, 0x10ca, 0x10c6, 0x10cb, 0x10c8, 0x10c8, 0x10c5, 0x10cb, 0x10c9, 0x10c7, 0x10c9, 0x10c6, 0x10c6, 0x10c8, 0x10c8, 0x10c9, 0x10c9, 0x10cc, 0x10d3, 0x10d8, 0x10c9, 0x10c6, 0x10ca, 0x10d0, 0x10cf, 0x10ca, 0x10cb, 0x10c7, 0x10ca, 0x10cb, 0x10c9, 0x10ca, 0x10c8, 0x10d0, 0x10cb, 0x10c8, 0x10cb, 0x10ca, 0x10ca, 0x10ca, 0x10e1, 0x10d9, 0x10d3, 0x10cc, 0x10c8, 0x10d0, 0x10ce, 0x10cd, 0x10cb, 0x10c8, 0x10cb, 0x10cb, 0x10c7, 0x10ca, 0x10cb, 0x10cb, 0x10cc, 0x10c9, 0x10c8, 0x10c9, 0x10c7, 0x10cc, 0x10c9, 0x10c8, 0x10ca, 0x10cb, 0x10cd, 0x10c9, 0x10c7, 0x10c7, 0x10c8, 0x10ca, 0x10c5, 0x10c8, 0x10c8, 0x10ca, 0x10c9, 0x10ca, 0x10cc, 0x10c9, 0x10cc, 0x10c8, 0x10c8, 0x10c7, 0x10c7, 0x10c7, 0x10cb, 0x10c6, 0x10cd, 0x10c8, 0x10cb, 0x10cc, 0x10cd, 0x10c7, 0x10c5, 0x10cd, 0x10c9, 0x10c9, 0x10c7, 0x10c6, 0x10cb, 0x10c7, 0x10ca, 0x10c6, 0x10c7, 0x10c6, 0x10c7, 0x10c3, 0x10c8, 0x10c9, 0x10c6, 0x10ca, 0x10c7, 0x10c8, 0x10c8, 0x10c6, 0x10c7, 0x10c8, 0x10c6, 0x10c8, 0x10ce, 0x10d0, 0x10db, 0x10c9, 0x10cc, 0x10d0, 0x10e7, 0x112e, 0x10cb, 0x10c9, 0x10d5, 0x1101, 0x12e1, 0x10c7, 0x10ce, 0x10d5, 0x110a, 0x1259, 0x10c8, 0x10cb, 0x10d3, 0x10e2, 0x111a, 0x10e0, 0x10de, 0x10d1, 0x10cc, 0x10ca, 0x118a, 0x112d, 0x10e8, 0x10d3, 0x10cd, 0x356e, 0x1358, 0x110c, 0x10d6, 0x10cd, 0x1a63, 0x12a7, 0x111a, 0x10d8, 0x10ce, 0x113c, 0x1115, 0x10e3, 0x10d1, 0x10c9, 0x10c8, 0x10c8, 0x10c5, 0x10c9, 0x10c8, 0x10cb, 0x10ca, 0x10c9, 0x10c4, 0x10c8, 0x10c8, 0x10cb, 0x10c5, 0x10c9, 0x10c6, 0x10c8, 0x10ca, 0x10c5, 0x10c9, 0x10c9, 0x10cb, 0x10c9, 0x10cb, 0x10c9, 0x10c6, 0x10c8, 0x10ce, 0x10c7, 0x10ca, 0x10c2, 0x10c7, 0x10c6, 0x10c9, 0x10c5, 0x10c7, 0x10ca, 0x10c9, 0x10c6, 0x10c8, 0x10c7, 0x10c7, 0x10c9, 0x10cc, 0x10ca, 0x10c9, 0x10c8, 0x10c5, 0x10c9, 0x10c8, 0x10c9, 0x10cb, 0x10c8, 0x10c9, 0x10c6, 0x10c8, 0x10c8, 0x10ca, 0x10ce, 0x10ce, 0x10c6, 0x10cb, 0x10c7, 0x10cc, 0x10c8, 0x10cc, 0x10c9, 0x10c9, 0x10c8, 0x10cc, 0x10c8, 0x10ce, 0x10ca, 0x10c9, 0x10c9, 0x10c9, 0x10c9, 0x10cb, 0x10c7, 0x10c9, 0x10c9, 0x10cc, 0x10c9, 0x10c6, 0x10ca, 0x10cc, 0x10cb, 0x10c6, 0x10c8, 0x10c8, 0x10ca, 0x10cb, 0x10c7, 0x10cc, 0x10c6, 0x10c7, 0x10c7, 0x10c8, 0x10cb, 0x10cc, 0x10ca, 0x10c5, 0x10c8, 0x10cb, 0x10ca, 0x10c7, 0x10cb, 0x10c8, 0x10c6, 0x10cc, 0x10c4, 0x10c6, 0x10ca, 0x10c5, 0x10ca, 0x10c9, 0x10cc, 0x10c9, 0x10ca, 0x10ca, 0x10ca, 0x10c6, 0x10ca, 0x10c7, 0x10c5, 0x10c9, 0x10c8, 0x10c8, 0x10c9, 0x10c9, 0x10c8, 0x10c7, 0x10c8, 0x10ca, 0x10cc, 0x10c6, 0x10c8, 0x10c6, 0x10c9, 0x10c6, 0x10c8, 0x10ca, 0x10c9, 0x10c8, 0x10c6, 0x10c4, 0x10c8, 0x10c9, 0x10c9, 0x10c9, 0x10cb, 0x10d0, 0x10d2, 0x10c9, 0x10cb, 0x10c8, 0x10ce, 0x10cb, 0x10c9, 0x10ca, 0x10c7, 0x10c9, 0x10c9, 0x10ca, 0x10cc, 0x10ca, 0x10cf, 0x10ca, 0x10c9, 0x10c9, 0x10c8, 0x10c8, 0x10c9, 0x10dc, 0x10d5, 0x10d0, 0x10cc, 0x10c8, 0x10d1, 0x10cd, 0x10cb, 0x10c6, 0x10ca, 0x10ca, 0x10ca, 0x10c7, 0x10ca, 0x10ce, 0x10c8, 0x10ca, 0x10ca, 0x10c7, 0x10c9, 0x10c8, 0x10cb, 0x10ca, 0x10ca, 0x10c9, 0x10cc, 0x10cf, 0x10c9, 0x10c8, 0x10c8, 0x10c8, 0x10c8, 0x10c9, 0x10c6, 0x10c7, 0x10ca, 0x10ca, 0x10c7, 0x10c9, 0x10c9, 0x10cb, 0x10c8, 0x10c7, 0x10c9, 0x10c9, 0x10c6, 0x10cd, 0x10c7, 0x10cc, 0x10c6, 0x10c9, 0x10cb, 0x10cb, 0x10c9, 0x10c3, 0x10cc, 0x10c9, 0x10c9, 0x10c8, 0x10c6, 0x10cc, 0x10c6, 0x10ca, 0x10c8, 0x10c4, 0x10c5, 0x10c7, 0x10c7, 0x10c9, 0x10c9, 0x10c6, 0x10c9, 0x10c9, 0x10c6, 0x10cb, 0x10c7, 0x10c6, 0x10c6, 0x10c8, 0x10c9, 0x10cd, 0x10cd, 0x10d8, 0x10ca, 0x10ca, 0x10cd, 0x10e0, 0x1115, 0x10cc, 0x10c8, 0x10cf, 0x10f3, 0x1260, 0x10c8, 0x10cc, 0x10d1, 0x10f9, 0x11f9, 0x10c8, 0x10cb, 0x10d2, 0x10dd, 0x1105, 0x10da, 0x10da, 0x10cd, 0x10cc, 0x10c7, 0x115c, 0x1114, 0x10e0, 0x10d0, 0x10cc, 0x3450, 0x12ba, 0x10fd, 0x10d3, 0x10cb, 0x1815, 0x1235, 0x1106, 0x10d3, 0x10ce, 0x111d, 0x1103, 0x10de, 0x10d0, 0x10ca, 0x10c5, 0x10c6, 0x10c5, 0x10c7, 0x10c6, 0x10ca, 0x10c8, 0x10c9, 0x10c6, 0x10c9, 0x10c7, 0x10ca, 0x10c7, 0x10ca, 0x10c7, 0x10c9, 0x10c8, 0x10c7, 0x10c6, 0x10cb, 0x10cc, 0x10c7, 0x10c9, 0x10c7, 0x10c7, 0x10c9, 0x10cb, 0x10c9, 0x10c7, 0x10c6, 0x10c8, 0x10c6, 0x10c8, 0x10c6, 0x10c6, 0x10c9, 0x10c9, 0x10c6, 0x10c7, 0x10c8, 0x10c8, 0x10c7, 0x10ce, 0x10c6, 0x10c7, 0x10cb, 0x10c7, 0x10c8, 0x10c7, 0x10ca, 0x10c8, 0x10c8, 0x10c9, 0x10c6, 0x10ca, 0x10c8, 0x10cb, 0x10ce, 0x10cc, 0x10c5, 0x10ca, 0x10c3, 0x10cc, 0x10c8, 0x10cd, 0x10c8, 0x10c9, 0x10ca, 0x10ca, 0x10c9, 0x10cc, 0x10c9, 0x10c9, 0x10c6, 0x10c9, 0x10c8, 0x10c6, 0x10c8, 0x10cc, 0x10c8, 0x10cc, 0x10ca, 0x10c6, 0x10c9, 0x10cc, 0x10c7, 0x10c6, 0x10c7, 0x10c6, 0x10c6, 0x10ca, 0x10c7, 0x10c9, 0x10c5, 0x10c8, 0x10ca, 0x10c8, 0x10c8, 0x10cb, 0x10cb, 0x10c5, 0x10c6, 0x10cc, 0x10ce, 0x10c9, 0x10ca, 0x10c7, 0x10c7, 0x10c9, 0x10c5, 0x10c7, 0x10c9, 0x10c7, 0x10ca, 0x10c8, 0x10cb, 0x10c9, 0x10ca, 0x10cb, 0x10ca, 0x10c8, 0x10c9, 0x10c8, 0x10c6, 0x10c9, 0x10c7, 0x10c8, 0x10c9, 0x10cb, 0x10c9, 0x10c7, 0x10c8, 0x10ca, 0x10ca, 0x10c7, 0x10c8, 0x10c6, 0x10c9, 0x10c7, 0x10c8, 0x10ca, 0x10c9, 0x10c8, 0x10c8, 0x10c4, 0x10ca, 0x10c9, 0x10c8, 0x10ca, 0x10ca, 0x10ce, 0x10cd, 0x10c6, 0x10c8, 0x10ca, 0x10d0, 0x10c9, 0x10ca, 0x10ca, 0x10c6, 0x10c8, 0x10c8, 0x10c8, 0x10c9, 0x10c9, 0x10cd, 0x10c9, 0x10ca, 0x10c8, 0x10ca, 0x10c9, 0x10c9, 0x10d7, 0x10d2, 0x10ce, 0x10ce, 0x10c8, 0x10cd, 0x10c8, 0x10c8, 0x10c7, 0x10cc, 0x10c9, 0x10cc, 0x10c4, 0x10cb, 0x10cb, 0x10c8, 0x10cc, 0x10c9, 0x10c6, 0x10ca, 0x10c8, 0x10ca, 0x10c9, 0x10cb, 0x10c8, 0x10cc, 0x10cc, 0x10ca, 0x10c7, 0x10c8, 0x10c4, 0x10c9, 0x10c8, 0x10c6, 0x10c6, 0x10cb, 0x10cb, 0x10ca, 0x10c7, 0x10c7, 0x10c9, 0x10ca, 0x10c8, 0x10cc, 0x10c7, 0x10c6, 0x10cd, 0x10c8, 0x10cc, 0x10c8, 0x10c9, 0x10cc, 0x10cb, 0x10c9, 0x10c4, 0x10c8, 0x10c6, 0x10c6, 0x10c7, 0x10c7, 0x10cd, 0x10c7, 0x10ca, 0x10c3, 0x10c7, 0x10c3, 0x10c9, 0x10c6, 0x10ca, 0x10ca, 0x10c7, 0x10cb, 0x10ca, 0x10c6, 0x10c9, 0x10c6, 0x10c6, 0x10c7, 0x10c8, 0x10c7, 0x10c9, 0x10cc, 0x10d4, 0x10c9, 0x10c8, 0x10cb, 0x10d8, 0x10fd, 0x10ca, 0x10c8, 0x10cb, 0x10e4, 0x11e7, 0x10c9, 0x10cb, 0x10cf, 0x10ea, 0x119c, 0x10ca, 0x10c9, 0x10d1, 0x10d6, 0x10f5, 0x10d3, 0x10d6, 0x10ca, 0x10cc, 0x10c9, 0x1130, 0x10fe, 0x10d9, 0x10cd, 0x10cb, 0x3345, 0x1227, 0x10ed, 0x10cf, 0x10ca, 0x15ea, 0x11c8, 0x10f4, 0x10cf, 0x10cd, 0x1106, 0x10f1, 0x10d8, 0x10ce, 0x10c8, 0x10c7, 0x10c7, 0x10c6, 0x10c7, 0x10c7, 0x10c8, 0x10c7, 0x10c7, 0x10c7, 0x10c8, 0x10c6, 0x10cd, 0x10c6, 0x10c8, 0x10c7, 0x10ca, 0x10ca, 0x10c7, 0x10c5, 0x10c8, 0x10ca, 0x10c6, 0x10c8, 0x10c9, 0x10c9, 0x10ca, 0x10ca, 0x10c8, 0x10c8, 0x10c6, 0x10c6, 0x10c6, 0x10cb, 0x10c6, 0x10c9, 0x10c9, 0x10cb, 0x10c5, 0x10c9, 0x10cb, 0x10c8, 0x10ca, 0x10cc, 0x10c6, 0x10c8, 0x10cb, 0x10c8, 0x10c7, 0x10c8, 0x10c9, 0x10c5, 0x10c7, 0x10c9, 0x10c5, 0x10c9, 0x10c9, 0x10cb, 0x10ce, 0x10cb, 0x10c4, 0x10cb, 0x10c4, 0x10cd, 0x10c6, 0x10cc, 0x10c9, 0x10ca, 0x10cc, 0x10c8, 0x10cb, 0x10cc, 0x10c9, 0x10c7, 0x10c8, 0x10c9, 0x10c7, 0x10c5, 0x10ca, 0x10cc, 0x10c8, 0x10c9, 0x10cc, 0x10c6, 0x10ca, 0x10cc, 0x10c8, 0x10c4, 0x10c6, 0x10c8, 0x10c4, 0x10ca, 0x10c7, 0x10cb, 0x10c4, 0x10c8, 0x10c8, 0x10ca, 0x10c9, 0x10c9, 0x10cb, 0x10c7, 0x10c4, 0x10cc, 0x10ca, 0x10c9, 0x10c8, 0x10c6, 0x10c6, 0x10c8, 0x10c4, 0x10c8, 0x10c7, 0x10c6, 0x10cb, 0x10c7, 0x10cb, 0x10c9, 0x10ca, 0x10c7, 0x10ca, 0x10c8, 0x10c8, 0x10c9, 0x10c3, 0x10c9, 0x10c6, 0x10c9, 0x10c8, 0x10cb, 0x10c6, 0x10c8, 0x10c8, 0x10c7, 0x10ce, 0x10c3, 0x10c9, 0x10c6, 0x10ca, 0x10c8, 0x10c8, 0x10ca, 0x10c7, 0x10c6, 0x10c5, 0x10c5, 0x10cb, 0x10c8, 0x10c8, 0x10c9, 0x10c9, 0x10cc, 0x10cb, 0x10c7, 0x10c9, 0x10ca, 0x10cc, 0x10cb, 0x10c8, 0x10cb, 0x10c5, 0x10c8, 0x10c9, 0x10cb, 0x10c9, 0x10c9, 0x10cc, 0x10c6, 0x10cb, 0x10c7, 0x10c9, 0x10c9, 0x10c8, 0x10d4, 0x10ce, 0x10cd, 0x10cc, 0x10ca, 0x10ca, 0x10c8, 0x10c8, 0x10cb, 0x10c8, 0x10cb, 0x10c8, 0x10c4, 0x10cb, 0x10ca, 0x10c9, 0x10ca, 0x10ca, 0x10c8, 0x10ca, 0x10c7, 0x10ca, 0x10c8, 0x10ca, 0x10c7, 0x10c9, 0x10ca, 0x10c9, 0x10c7, 0x10ca, 0x10c5, 0x10c7, 0x10c7, 0x10c7, 0x10c7, 0x10cb, 0x10c9, 0x10cb, 0x10c6, 0x10c8, 0x10c9, 0x10ca, 0x10c7, 0x10cc, 0x10c9, 0x10c7, 0x10cd, 0x10c6, 0x10c9, 0x10c9, 0x10c7, 0x10cb, 0x10cc, 0x10c7, 0x10c4, 0x10cc, 0x10c8, 0x10ca, 0x10c8, 0x10c9, 0x10cc, 0x10c8, 0x10c9, 0x10c5, 0x10c5, 0x10c7, 0x10c7, 0x10c6, 0x10c8, 0x10ca, 0x10c7, 0x10c8, 0x10c7, 0x10c6, 0x10c8, 0x10c2, 0x10c7, 0x10c6, 0x10c8, 0x10c8, 0x10c9, 0x10cb, 0x10d0, 0x10c7, 0x10c8, 0x10cc, 0x10d3, 0x10eb, 0x10cb, 0x10c9, 0x10c9, 0x10dc, 0x118a, 0x10c8, 0x10c9, 0x10cc, 0x10dc, 0x1157, 0x10c8, 0x10c8, 0x10d0, 0x10d1, 0x10e6, 0x10cf, 0x10cf, 0x10c9, 0x10cb, 0x10c8, 0x1112, 0x10eb, 0x10d5, 0x10cc, 0x10cc, 0x3275, 0x11b9, 0x10e1, 0x10cb, 0x10ca, 0x143f, 0x1176, 0x10e7, 0x10cc, 0x10cb, 0x10ee, 0x10e4, 0x10d2, 0x10cb, 0x10c7, 0x10c7, 0x10c6, 0x10c9, 0x10c8, 0x10c7, 0x10c8, 0x10c9, 0x10c8, 0x10c8, 0x10cb, 0x10c8, 0x10ce, 0x10c7, 0x10cb, 0x10c6, 0x10c8, 0x10c9, 0x10c6, 0x10c7, 0x10c9, 0x10c5, 0x10c5, 0x10c8, 0x10c7, 0x10c8, 0x10ca, 0x10c9, 0x10c5, 0x10cb, 0x10c6, 0x10c8, 0x10c8, 0x10cb, 0x10c4, 0x10c7, 0x10c9, 0x10cd, 0x10c5, 0x10c6, 0x10cb, 0x10ce, 0x10c8, 0x10cc, 0x10c4, 0x10c9, 0x10cb, 0x10ca, 0x10c8, 0x10c7, 0x10c9, 0x10c5, 0x10c7, 0x10c8, 0x10c6, 0x10c9, 0x10ca
};

static const uint32_t coef[3000] = {
0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0xb7506a, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0xb7506a, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0xb7506a, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0xb7506a, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a, 0xaf6068, 0xef6082, 0xc36072, 0x956058, 0xcf6077, 0xee6081, 0xb06067, 0xd9607a, 0xad6064, 0xe0607b, 0xa7605f, 0x8c604b, 0xc1606c, 0xcd6071, 0xdb6074, 0xb86064, 0xaa605a, 0xa76058, 0xbb6063, 0xca606a, 0xe66074, 0xd96070, 0xe96074, 0xcc6067, 0xf36077, 0xe76072, 0xe96073, 0xc56061, 0xd5606b, 0xd9606c, 0xe2606e, 0xef6072, 0xe0606c, 0x815077, 0xf86073, 0xd16062, 0xf16070, 0xc4605a, 0x8f5078, 0xf5606a, 0xf9606c, 0xf36066, 0x905075, 0xae5082, 0x995078, 0x905073, 0x945074, 0xe8605d, 0x87506c, 0x8d506e, 0x8c506d, 0x985073, 0x9a5072, 0xf8605d, 0x895065, 0x94506c, 0x99506f, 0x8d5064, 0x8d5063, 0xac5074, 0x9e506a, 0xb75075, 0x915060, 0xa7506b, 0xac506c, 0xb2506e, 0xc75074, 0xb15069, 0x9d505d, 0xaf5068, 0xaf5068, 0xa25061, 0xbb506f, 0xac5067, 0xa25061, 0xab5067, 0xa55064, 0xae5069, 0xad5069, 0xa85066, 0xb6506d, 0xa55065, 0xa55065, 0x9e5061, 0x9c505f, 0x96505b, 0xb2506d, 0xa85068, 0xa15063, 0xa45065, 0xa85068, 0xad5067, 0xaa5065, 0xa65063, 0xb15069, 0xa45062, 0xaa5066, 0xa35062, 0xa15061, 0xa45063, 0xab5067, 0xa95066, 0xa55064, 0xa15062, 0xa45063, 0xa15062, 0xab5068, 0xa45064, 0xa05062, 0xa85067, 0x9f5061, 0xa25064, 0xac506a, 0x98505e, 0xb2506d, 0xb7506f, 0xb4506b, 0xbb506e, 0xb7506c, 0xb05069, 0xb2506a, 0xa65064, 0xaa5066, 0xa75064, 0xa75064, 0xab5067, 0xa75065, 0xab5068, 0xbd5071, 0xad5069, 0xb5506d, 0xa35064, 0xa35064, 0xaa5068, 0xc35074, 0xb0506b, 0xa45065, 0xb2506d, 0xa25064, 0xa85068, 0xa75067, 0xaf5068, 0xaf5068, 0xac5066, 0xa85064, 0xb05069, 0xac5067, 0xb2506b, 0xa25061, 0xc65074, 0xa15061, 0xaa5067, 0xa65065, 0xae5069, 0xbc5070, 0xab5068, 0xac5069, 0xa55065, 0xa55065, 0xc55075, 0xac5069, 0xb7506f, 0xa05063, 0xac506a, 0xad506a, 0xa85068, 0xbb5071, 0x965059, 0xb15068, 0x9f505a, 0xb75069, 0xb85069, 0xb05065, 0xb85069, 0x985056, 0xa95061, 0xb35067, 0xb35067, 0xb05066, 0xb45068, 0xa2505e, 0xcd5074, 0xad5065, 0xb45068, 0xa0505d, 0xa45060, 0xac5065, 0xb25068, 0xaa5064, 0xa35060, 0xb15068, 0xaa5065, 0xa75063, 0xae5067, 0xbd506c, 0xbb506b, 0xbb506b, 0xb85069, 0xb55068, 0xae5064, 0xb65069, 0xad5064, 0xb25067, 0xb35067, 0xb35068, 0xb05066, 0xaf5066, 0xb05066, 0xae5065, 0xaf5067, 0xb15068, 0xb7506b, 0xa95063, 0xab5064, 0xac5066, 0xad5066, 0xa75063, 0xb05068, 0xac5066, 0xb65068, 0xbc506b, 0xb9506a, 0xb45067, 0xbd506c, 0xab5063, 0xb65069, 0xc45070, 0xc1506e, 0xb45068, 0x8910c0, 0xb25067, 0xc65071, 0xb7506a, 0xb8506b, 0xaf5067, 0xbb506d, 0xab5064, 0xb35069, 0xa95063, 0xa95064, 0xaf5067, 0xb15068, 0xce5076, 0xb6506b, 0xc65070, 0xcc5072, 0xbb506b, 0xc1506e, 0xcc5072, 0xc65070, 0xca5072, 0xaf5065, 0xbc506c, 0xd25075, 0xa2505e, 0xc75072, 0xc65071, 0xb6506a, 0xa2505e, 0xb35069, 0xc0506f, 0xb6506a, 0xb8506b, 0xb05067, 0xae5067, 0xc15070, 0xbd506e, 0xba506d, 0xae5067, 0xb8506a, 0xa95061, 0xc85071, 0xb95066, 0xc4506c, 0xb85066, 0xb55064, 0xb35063, 0xbe5069, 0xbe5069, 0xb15062, 0xbd5069, 0xc5506d, 0xbe506a, 0xb75066, 0xbf506a, 0xc7506e, 0xc2506c, 0xd75075, 0xc4506d, 0xc0506c, 0xc3506d, 0xcc5071, 0xb75068, 0xcc5072, 0xb15064, 0xcc5072, 0xce5072, 0xc3506b, 0xb35063, 0xc1506a
};
# 37 "./TPG.h" 2

struct outPut {
  uint32_t filOut;
  bool peakOut;
  uint16_t peakAmp;
};

struct inPut {
  uint16_t data_input;
  uint32_t lincoeff;
};

struct registers {
  uint32_t shift_reg[4];
  uint32_t peak_reg[2];
};

void TPG(inPut in[1], outPut out[1]);

outPut LinFil(uint16_t data_input, uint32_t lincoeff, registers &r, short i);
# 4 "TPG.cc" 2

void TPG(inPut in[1], outPut out[1]) {
  static registers reg[1];
//#pragma HLS PIPELINE II=5
#pragma HLS ARRAY_PARTITION variable=in complete dim=0
#pragma HLS ARRAY_PARTITION variable=out complete dim=0
#pragma HLS ARRAY_PARTITION variable=reg complete dim=0

 short i;
  for (i = 0; i < 1; i++){
#pragma HLS UNROLL
 out[i] = LinFil(in[i].data_input, in[i].lincoeff, reg[i], i);
  }
}

outPut LinFil(uint16_t data_int, uint32_t lincoeff, registers &r, short i){
  int8_t j, k;
  int16_t correctedADC = 0;
  uint16_t uncorrectedADC = 0;
  uint32_t linearizerOutput = 0;
  uint16_t base = 0;
  uint32_t coeff = 0;
  uint8_t shiftlin = 0;
  uint8_t mult = 0;
  int32_t prod = 0;
  int32_t filterOutput = 0;
  uint8_t shiftfilter = 6;
  uint32_t m = 0;
  int32_t mul = 0;
  int32_t pro = 0;
  int32_t acc = 0;
  int8_t weight[5] = {24, 31, 16, -35, -36};
  int32_t ampPeak = 0;
  uint16_t tmpPeak = 0;
  outPut o;
  o.peakOut = false;

  // Linearizer
  if (data_int > 0X3FFF) fprintf(stderr, "ERROR IN INPUT SAMPLE");
  uncorrectedADC = data_int & 0XFFF;
  if (((lincoeff & 0XFF0000) >> 16) == 0) coeff = 0;
  else coeff = lincoeff;
  base = coeff & 0XFFF;
  shiftlin = (coeff & 0XF000) >> 12;
  mult = (coeff & 0XFF0000) >> 16;
  correctedADC = (uncorrectedADC - base);
  if (correctedADC < 0) linearizerOutput = shiftlin << 12;
  prod = correctedADC * mult;
  linearizerOutput = prod >> (shiftlin + 2);

  // Amplitude Filter
  m = r.shift_reg[3];
  for (j = 3; j >= 1; j--){
#pragma HLS UNROLL
#pragma HLS dependence variable=r.shift_reg inter false
 r.shift_reg[j] = r.shift_reg[j-1];
  }
  r.shift_reg[0] = linearizerOutput;
  pro = m*weight[4];
  mul = pro >> shiftfilter;
  acc = acc + mul;
  for (j = 3; j >= 0; j--){
#pragma HLS UNROLL
 pro = r.shift_reg[j]*weight[j];
    mul = pro >> shiftfilter;
    acc = acc + mul;
  }
  filterOutput = acc;
  if (filterOutput < 0) filterOutput = 0;
  if (filterOutput > 0X3FFFF) filterOutput = 0X3FFFF;
o.filOut = filterOutput;

  // Peak Finder
  if (r.peak_reg[0] > filterOutput && r.peak_reg[0] > r.peak_reg[1]){
   o.peakOut = true;
 // TCP Format
 ampPeak = r.peak_reg[0];
 if (ampPeak > 0XFFF){
   ampPeak = 0XFFF;
 }
 tmpPeak = ampPeak >> 2;
 if (tmpPeak > 0X3FF){
          tmpPeak = 0X3FF;
        }
 o.peakAmp = tmpPeak;
  }
  for (k = 1; k > 0; k--){
#pragma HLS UNROLL
#pragma HLS dependence variable=r.peak_reg inter false
 r.peak_reg[k] = r.peak_reg[k-1];
  }
  r.peak_reg[0] = filterOutput;
  return o;
}
