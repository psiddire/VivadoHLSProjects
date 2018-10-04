#include <stdint.h>
#include <stdio.h>
#include "AmpFilter.h"

void AmpFilter(uint32_t data_input[NXtl], uint32_t output[NXtl], uint8_t fgvbIn[NXtl], uint8_t fgvbOut[NXtl], uint8_t params[NXtl]) {
#pragma HLS INTERFACE ap_none port=output
#pragma HLS ARRAY_PARTITION variable=data_input complete dim=0
#pragma HLS ARRAY_PARTITION variable=params complete dim=0
#pragma HLS ARRAY_PARTITION variable=output complete dim=0
#pragma HLS ARRAY_PARTITION variable=fgvbIn complete dim=0
#pragma HLS ARRAY_PARTITION variable=fgvbOut complete dim=0
  uint8_t inputsAlreadyIn = 0;
  uint32_t processedOutput = 0;
  uint8_t processedFgvbOutput = 0;
  uint8_t fgvbInt = 0;
  uint8_t shift = 6;
  int buffer[5];
  int fgvbBuffer[5];
  int weights[5];
  int i, j;

  for (i = 0; i < 5; i++){
    buffer[i] = 0;
    fgvbBuffer[i] = 0;
  }

  for (i = 0; i < NXtl; i++){

    if (data_input[i] > 0X3FFFF){
      fprintf(stderr, "ERROR IN INPUT OF AMPLITUDE FILTER");
    }

    if (inputsAlreadyIn < 5){
      buffer[inputsAlreadyIn] = data_input[i];
      fgvbBuffer[inputsAlreadyIn] = fgvbIn[i];
      weights[inputsAlreadyIn] = (params[i] & 0x40) ? (int)(params[i] | 0xc0) : (int)(params[i]);
      output[i] = 0;
      fgvbOut[i] = 0;
      inputsAlreadyIn++;
      continue;
    }
    else{
      for(j = 0; j < 4; j++){
	buffer[j] = buffer[j+1];
	fgvbBuffer[j] = fgvbBuffer[j+1];
	weights[j] = weights[j+1];
      }
      buffer[4] = data_input[i];
      fgvbBuffer[4] = fgvbIn[i];
      weights[4] = (params[i] & 0x40) ? (int)(params[i] | 0xc0) : (int)(params[i]);
    }

    processedOutput = 0;
    processedFgvbOutput = 0;

    for(j = 0; j < 5; j++){
      processedOutput += (weights[j] * buffer[j]) >> shift;
      if((fgvbBuffer[j] == 1 && j == 3) || processedFgvbOutput == 1){
	processedFgvbOutput = 1;
      }
    }

    if (processedOutput < 0) processedOutput = 0;
    if (processedOutput > 0X3FFFF) processedOutput = 0X3FFFF;

    output[i] = processedOutput;
    fgvbOut[i] = processedFgvbOutput;
  }

  for (i = 0; i < NXtl; i++){
    if (i!=NXtl-1){
      output[i] = output[i+1];
      fgvbOut[i] = fgvbOut[i+1];
    }
    else{
      output[i] = 0;
      fgvbOut[i] = 0;
    }
  }
}
