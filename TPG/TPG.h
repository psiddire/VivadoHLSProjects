#ifndef TPG_h
#define TPG_h

#define NXtl 1 //Also tested with 300 crystals
#define NEvents 570 //This is only for testing on the test bench
//#define Vivado 1 //Uncomment for synthesis

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint4_t ap_uint<4>
#define uint12_t ap_uint<12>
#define uint14_t ap_uint<14>
#define uint16_t ap_uint<16>
#define uint18_t ap_uint<18>
#define uint24_t ap_uint<24>
#define int7_t ap_int<7>
#define int13_t ap_int<13>
#define int19_t ap_int<19>
#define int21_t ap_int<21>
#define int25_t ap_int<25>
#else
#define uint4_t uint8_t
#define uint12_t uint16_t
#define uint14_t uint16_t
#define uint16_t uint16_t
#define uint18_t uint32_t
#define uint24_t uint32_t
#define int7_t int8_t
#define int13_t int16_t
#define int19_t int32_t
#define int21_t int32_t
#define int25_t int32_t
#endif

#include "LUTs.h"

struct outPut {
  uint18_t filOut; //Amplitude Filter Output
  bool peakOut; //Peak Finder Output
  uint16_t peakAmp; //Amplitude of the Peak
};

struct inPut {
  uint14_t data_input; //Digi Information
  uint24_t lincoeff; //Linearizer Coefficient Information
};

struct registers {
  uint18_t shift_reg[4]; //4-stage Shift Register for Amplitude Filter
  uint18_t peak_reg[2]; //2-stage Shift Register for Peak Finder
};

void TPG(inPut in[NXtl], outPut out[NXtl]);

outPut LinFil(uint14_t data_input, uint24_t lincoeff, registers &r, short i);

#endif
