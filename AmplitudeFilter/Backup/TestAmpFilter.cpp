#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "AmpFilter.h"

bool makeTestData(int argc, char** argv, uint32_t data_input[NXtl], uint8_t fgvbIn[NXtl], uint8_t params[NXtl]) {
  int i, j;
  uint32_t value = 0;
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--random", strlen(pattern)) == 0) {
    for(i = 0; i < NXtl; i++) {
      data_input[i] = rand() & 0x3FFFF;
      params[i] = rand() & 0x7F;
      fgvbIn[i] = rand() & 0x1;
    }
  }
  else {
    value = 0;
    for(i = 0; i < NXtl; i++) {
      data_input[i] = value++;
      params[i] = value++;
      if (value%2 == 0) fgvbIn[i] = 0;
      else fgvbIn[i] = 1;
    }
  }
  return true;
}

int main(int argc, char **argv) {
  
  uint32_t data_input[NXtl];
  uint8_t fgvbIn[NXtl];
  uint8_t params[NXtl];
  uint32_t output[NXtl];
  uint32_t hlsoutput[NXtl];
  uint8_t fgvbOut[NXtl];
  uint8_t hlsfgvbOut[NXtl];

  uint8_t inputsAlreadyIn = 0;
  uint32_t processedOutput = 0;
  uint8_t processedFgvbOutput = 0;
  uint8_t fgvbInt = 0;
  uint8_t shift = 6;
  int buffer[5];
  int fgvbBuffer[5];
  int weights[5];

  int i, j;
  int event = 0;

  for (i = 0; i < NXtl; i++){
    output[i] = 0;
    hlsoutput[i] = 0;
  }

  bool last = false;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  // Event loop - 170 events maximum can be written out
  for(event = 0; event < 170; event++) {
    
    // Mark last event
    if(event == 169) last = true;
    
    // Make test data
    if(!makeTestData(argc, argv, data_input, fgvbIn, params)) return 999;
    
    // Determine HT using software    
    for(i = 0; i < NXtl; i++) {
      if (data_input[i] > 0X3FFFF) {
    	fprintf(stderr, "ERROR IN INPUT SAMPLE OF AMPLITUDE FILTER");
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

    // Determine HT using hardware simulation
    AmpFilter(data_input, hlsoutput, fgvbIn, hlsfgvbOut, params);
    
    // Compare
    if((output[100] != hlsoutput[100]) | fgvbOut[100] != hlsfgvbOut[100]) {
      fprintf(stderr, "C says: Output = %d; HLS says: Output = %d\n", output[100], hlsoutput[100]);
      fprintf(stderr, "C says: FGVB = %d; HLS says: FGVB = %d\n", fgvbOut[100], hlsfgvbOut[100]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }
  }
  
  printf("Test succeeded\n");
  return 0;
  
}