#include <stdint.h>
#include <stdio.h>
#include "StripFormat.h"

void StripFormat(uint32_t filtout[NXtl], uint8_t peakout[NXtl], uint8_t fgvbout[NXtl], uint8_t shift[NXtl], uint16_t output[NXtl]) {
#pragma HLS INTERFACE ap_none port=output
#pragma HLS ARRAY_PARTITION variable=filtout complete dim=0
#pragma HLS ARRAY_PARTITION variable=output complete dim=0
#pragma HLS ARRAY_PARTITION variable=fgvbout complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakout complete dim=0
#pragma HLS ARRAY_PARTITION variable=shift complete dim=0

  int i;
  uint16_t processedOutput = 0;

  for (i = 0; i < NXtl; i++){

    if (peakout[i] == 0){
      output[i] = ((fgvbout[i] & 0x1) << 12);
    }
    else{
      processedOutput = filtout[i] >> shift[i];
      if (processedOutput > 0XFFF) processedOutput = 0XFFF;
      processedOutput |= ((fgvbout[i] & 0x1) << 12);
      output[i] = processedOutput;
    }
  
  }
}
