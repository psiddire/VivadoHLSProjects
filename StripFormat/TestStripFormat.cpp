#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "StripFormat.h"

bool makeTestData(int argc, char** argv, uint32_t filtout[NXtl], uint8_t peakout[NXtl], uint8_t fgvbout[NXtl], uint8_t shift[NXtl]) {
  int i;
  uint32_t value = 0;
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--random", strlen(pattern)) == 0) {
    for(i = 0; i < NXtl; i++){
      filtout[i] = rand() & 0x3FFFF;
      peakout[i] = rand() & 0x1;
      fgvbout[i] = rand() & 0x1;
      shift[i] = rand() & 0xF;
    }  
  }
  else {
    value = 0;
    for(i = 0; i < NXtl; i++){
      filtout[i] = value++;
      peakout[i] = value%2;
      fgvbout[i] = value%2;
      shift[i] = value%16;
    }
  }
  return true;
}

int main(int argc, char **argv) {
  
  uint32_t filtout[NXtl];
  uint8_t peakout[NXtl];
  uint8_t fgvbout[NXtl];
  uint8_t shift[NXtl];
  uint16_t output[NXtl];
  uint16_t hlsoutput[NXtl];

  int i;
  uint16_t processedOutput = 0;
  int event = 0;

  for (i = 0; i < NXtl; i++) output[i] = 0;

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
    if(!makeTestData(argc, argv, filtout, peakout, fgvbout, shift)) return 999;
    
    // Determine HT using software    
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

    // Determine HT using hardware simulation
    StripFormat(filtout, peakout, fgvbout, shift, hlsoutput);
    
    // Compare
    if(output[10] != hlsoutput[10]) {
      fprintf(stderr, "C says: Output = %d; HLS says: Output = %d\n", output[10], hlsoutput[10]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }
  }
  
  printf("Test succeeded\n");
  return 0;
  
}
