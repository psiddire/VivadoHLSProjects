#include <stdint.h>
#include <stdio.h>
#include "TcpFormat.h"

void TcpFormat(uint16_t Et[NXtl], bool isInInnerRings, bool isTcpFormat, uint8_t fgvb[NXtl], uint8_t spikeZeroThresh[NXtl], uint8_t badTTStatus[NXtl], uint16_t output[NXtl], uint16_t TcpOutput[NXtl]) {
#pragma HLS INTERFACE ap_none port=output
#pragma HLS ARRAY_PARTITION variable=Et complete dim=0
#pragma HLS ARRAY_PARTITION variable=output complete dim=0
#pragma HLS ARRAY_PARTITION variable=TcpOutput complete dim=0
#pragma HLS ARRAY_PARTITION variable=spikeZeroThresh complete dim=0
#pragma HLS ARRAY_PARTITION variable=badTTStatus complete dim=0
#pragma HLS ARRAY_PARTITION variable=fgvb complete dim=0

  int i;
  uint16_t lut_out = 0;
  uint16_t myEt = 0;
  uint16_t eTTotShift = 2;

  for (i = 0; i < NXtl; i++){

    TcpOutput[i] = 0;
    output[i] = 0;

    myEt = Et[i]; 

    if (myEt > 0xFFF) myEt = 0xFFF;

    if (isInInnerRings) myEt = myEt/2;
  
    myEt >>= eTTotShift;

    if (myEt > 0x3FF) myEt = 0x3FF;

    if ((myEt > spikeZeroThresh[i]) && (fgvb[i] == 0)) myEt = 0;

    if (badTTStatus[i] != 0) lut_out = 0;
    else lut_out = lut[myEt];
      
    if (isTcpFormat) TcpOutput[i] = (myEt & 0x3FF);

    myEt = lut_out & 0xFF;
    output[i] = myEt; 
  
  }
}
