#ifndef TPG_h
#define TPG_h

#define NXtl 300
#define NEvents 300
#define Vivado 1

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint4_t ap_uint<4>
#define uint12_t ap_uint<12>
#define uint14_t ap_uint<14>
#define uint18_t ap_uint<18>
#define uint20_t ap_uint<20>
#define uint24_t ap_uint<24>
#define int9_t ap_int<9>
#define int13_t ap_int<13>
#define int19_t ap_int<19>
#define int20_t ap_int<20>
#define int21_t ap_int<21>
#define int22_t ap_int<22>
#define int26_t ap_int<26>
#define int25_t ap_int<25>
#else
#define uint4_t uint8_t
#define uint12_t uint16_t
#define uint14_t uint16_t
#define uint18_t uint32_t
#define uint20_t uint32_t
#define uint24_t uint32_t
#define int9_t int16_t
#define int13_t int16_t
#define int19_t int32_t
#define int20_t int32_t
#define int21_t int32_t
#define int22_t int32_t
#define int26_t int32_t
#define int28_t int32_t
#endif

#include "LUTs.h"

struct outPut {
  uint18_t filOut;
  bool peakOut;
};

void TPG(uint14_t data_input[NXtl], uint24_t lincoeff[NXtl], outPut out[NXtl]);

outPut LinFil(uint14_t data_input, uint24_t lincoeff, uint18_t shift_reg[4], uint18_t peak_reg[2], short i);

#endif
