#ifndef Linearizer_h
#define Linearizer_h

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

void Linearizer(uint16_t data_input[NXtl * NSamples * NEvents], uint32_t lincoeff[NXtl * NSamples * NEvents][3], uint32_t trigger_data_output[NXtl * NSamples * NEvents]);

#endif
