#include <stdint.h>
#include <stdio.h>
#include "AmpFilter.h"

void AmpFilter(uint32_t data_input[NXtl * NSamples], int32_t output[NXtl * NSamples], int params[5]) {
#pragma HLS INTERFACE ap_none port=output
#pragma HLS ARRAY_PARTITION variable=data_input complete dim=0
#pragma HLS ARRAY_PARTITION variable=params complete dim=0
#pragma HLS ARRAY_PARTITION variable=output complete dim=0
  int inputsAlreadyIn = 0;
  int32_t processedOutput = 0;
  int shift = 6;
  int buffer[5];
  int weights[5];
  int i, j;

  for (i = 0; i < 5; i++){
    buffer[i] = 0;
    weights[i] = (params[i] & 0x40) ? (int)(params[i] | 0xffffffc0) : (int)(params[i]);
  }

  for (i = 0; i < NXtl * NSamples; i++){

    if (data_input[i] > 0X3FFFF){
      fprintf(stderr, "ERROR IN INPUT OF AMPLITUDE FILTER");
    }

    if (inputsAlreadyIn < 4){
      buffer[inputsAlreadyIn] = data_input[i];
      output[i] = 0;
      inputsAlreadyIn++;
      continue;
    }
    else if (inputsAlreadyIn == 4){
      buffer[inputsAlreadyIn] = data_input[i];
      output[i] = 0;
      inputsAlreadyIn++;
    }
    else{
      for(j = 0; j < 4; j++){
	buffer[j] = buffer[j+1];
      }
      buffer[4] = data_input[i];
    }

    processedOutput = 0;

    for(j = 0; j < 5; j++){
      processedOutput += (weights[j] * buffer[j]) >> shift;
    }

    if (processedOutput < 0) processedOutput = 0;
    if (processedOutput > 0X3FFFF) processedOutput = 0X3FFFF;

    output[i] = processedOutput;
  }

  for (i = 0; i < NXtl * NSamples; i++){
    if (i!=NXtl*NSamples-1){
      output[i] = output[i+1];
    }
    else{
      output[i] = 0;
    }
  }
}
