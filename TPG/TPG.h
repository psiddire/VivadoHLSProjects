#ifndef TPG_h
#define TPG_h

#define NXtl 100
#define NSamples 10
#define NEvents 57

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

void TPG(uint16_t data_input[NXtl * NSamples], uint32_t lincoeff[NXtl * NSamples][3], uint32_t trigger_data_output[NXtl * NSamples], int32_t filter_output[NXtl * NSamples], int params[5], bool peak_finder_output[NXtl * NSamples], int16_t strip_format_output[NXtl * NSamples]);

void Linearizer(uint16_t data_input[NXtl * NSamples], uint32_t lincoeff[NXtl * NSamples][3], uint32_t trigger_data_output[NXtl * NSamples]);

void AmpFilter(uint32_t trigger_data_output[NXtl * NSamples], int32_t filter_output[NXtl * NSamples], int params[5]);

void PeakFinder(int32_t filter_output[NXtl * NSamples], bool peak_finder_output[NXtl * NSamples]);

void StripFormat(int32_t filter_output[NXtl * NSamples], bool peak_finder_output[NXtl * NSamples], int16_t strip_format_output[NXtl * NSamples]);

#endif
