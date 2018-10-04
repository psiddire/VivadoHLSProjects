#ifndef AmpFilter_h
#define AmpFilter_h

#define NXtl 1
#define NSamples 10
#define NEvents 100

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

void AmpFilter(uint32_t data_input[NXtl * NSamples], int32_t output[NXtl * NSamples], int params[5]);

#endif
