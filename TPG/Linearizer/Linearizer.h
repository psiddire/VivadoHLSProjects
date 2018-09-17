#ifndef Linearizer_h
#define Linearizer_h

#define NXtls 5
#define NStrips 5
#define NTowers 1

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

void Linearizer(uint16_t data_input[NXtls * NStrips * NTowers], uint32_t lincoeff[NXtls * NStrips * NTowers][3], uint32_t trigger_data_output[NXtls * NStrips * NTowers]);

#endif
