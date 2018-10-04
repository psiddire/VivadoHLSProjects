#ifndef AmpFilter_h
#define AmpFilter_h

#define NXtl 300

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

void AmpFilter(uint32_t data_input[NXtl], uint32_t output[NXtl], uint8_t fgvbIn[NXtl], uint8_t fgvbOut[NXtl], uint8_t params[NXtl]);

#endif
