#ifndef TcpFormat_h
#define TcpFormat_h

#define NXtl 300

#include <stdint.h>
#ifdef Vivado
#include "ap_int.h"
#define uint10_t ap_uint<10>
#else
#define uint10_t uint16_t
#endif

#include "LUTs.h"

void TcpFormat(uint16_t Et[NXtl], bool isInInnerRings, bool isTcpFormat, uint8_t fgvb[NXtl], uint8_t spikeZeroThresh[NXtl], uint8_t badTTStatus[NXtl], uint16_t output[NXtl], uint16_t TcpOutput[NXtl]);

#endif
