#ifndef PeakFinder_h
#define PeakFinder_h

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

void PeakFinder(uint32_t data_input[NXtl * NSamples], bool output[NXtl * NSamples]);

#endif
