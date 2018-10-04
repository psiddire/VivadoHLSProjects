#include <stdint.h>
#include <stdio.h>
#include "PeakFinder.h"

void PeakFinder(uint32_t data_input[NXtl * NSamples], bool output[NXtl * NSamples]) {
#pragma HLS INTERFACE ap_none port=output
#pragma HLS ARRAY_PARTITION variable=data_input complete dim=0
#pragma HLS ARRAY_PARTITION variable=output complete dim=0
  int inputsAlreadyIn = 0;
  int buffer[3];
  int i, j;

  for (i = 0; i < 3; i++){
    buffer[i] = 0;
  }

  for (i = 0; i < NXtl * NSamples; i++){

    if (inputsAlreadyIn < 2){
      buffer[inputsAlreadyIn] = data_input[i];
      output[i] = 0;
      inputsAlreadyIn++;
      continue;
    }
    else if (inputsAlreadyIn == 2){
      buffer[inputsAlreadyIn] = data_input[i];
      output[i] = 0;
      inputsAlreadyIn++;
    }
    else{
      for (j = 0; j < 2; j++) buffer[j] = buffer[j+1];
      buffer[2] = data_input[i];
    }

    if (buffer[1] > buffer[0] && buffer[1] > buffer[2]) output[i-1] = 1;
    else output[i-1] = 0;

  }

}
