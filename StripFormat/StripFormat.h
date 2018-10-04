#ifndef StripFormat_h
#define StripFormat_h

#define NXtl 300

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

void StripFormat(uint32_t filtout[NXtl], uint8_t peakout[NXtl], uint8_t fgvbout[NXtl], uint8_t shift[NXtl], uint16_t output[NXtl]);

#endif
