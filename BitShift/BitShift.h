#ifndef BitShift_h
#define BitShift_h

//#define Vivado 1

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint18_t ap_uint<18>
#define int7_t ap_int<7>
#define int19_t ap_int<19>
#define int25_t ap_int<25>
#else
#define uint18_t uint32_t
#define int7_t int8_t
#define int19_t int32_t
#define int25_t int32_t
#endif

void BitShift(uint18_t a[2], int19_t b[2]);

#endif
