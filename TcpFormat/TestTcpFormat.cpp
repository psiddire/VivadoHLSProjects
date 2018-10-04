#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "TcpFormat.h"

bool makeTestData(int argc, char** argv, uint16_t Et[NXtl], uint8_t fgvb[NXtl], uint8_t spikeZeroThresh[NXtl], uint8_t badTTStatus[NXtl]) {
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
      Et[i] = rand() & 0xFFF;
      fgvb[i] = rand() & 0x1;
      spikeZeroThresh[i] = rand() & 0x3FF;
      badTTStatus[i] = rand() & 0x1;
    }  
  }
  else {
    value = 0;
    for(i = 0; i < NXtl; i++){
      Et[i] = value++;
      fgvb[i] = value%2;
      spikeZeroThresh[i] = value++;
      badTTStatus[i] = value%2;
    }
  }
  return true;
}

int main(int argc, char **argv) {
  
  uint16_t Et[NXtl];
  uint8_t fgvb[NXtl];
  uint8_t spikeZeroThresh[NXtl];
  uint8_t badTTStatus[NXtl];
  uint16_t output[NXtl];
  uint16_t hlsoutput[NXtl];
  uint16_t TcpOutput[NXtl];
  uint16_t hlsTcpOutput[NXtl];

  bool isInInnerRings = false;
  bool isTcpFormat = false;

  int i;
  uint16_t lut_out = 0;
  uint16_t myEt = 0;
  uint16_t eTTotShift = 2;
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
    if(!makeTestData(argc, argv, Et, fgvb, spikeZeroThresh, badTTStatus)) return 999;
    
    // Determine HT using software    
    for (i = 0; i < NXtl; i++){

      TcpOutput[i] = 0;
      output[i] = 0;
      hlsTcpOutput[i] = 0;
      hlsoutput[i] = 0;

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

    // Determine HT using hardware simulation
    TcpFormat(Et, isInInnerRings, isTcpFormat, fgvb, spikeZeroThresh, badTTStatus, hlsoutput, hlsTcpOutput);
    
    // Compare
    if (isTcpFormat){
      if(TcpOutput[10] != hlsTcpOutput[10]) {
	fprintf(stderr, "C says: TcpOutput = %d; HLS says: hlsTcpOutput = %d\n", TcpOutput[10], hlsTcpOutput[10]);
	fprintf(stderr, "Test failed\n");
	return 1;
      }
    }
    else{
      if(output[10] != hlsoutput[10]) {
	fprintf(stderr, "C says: Output = %d; HLS says: Output = %d\n", output[10], hlsoutput[10]);
	fprintf(stderr, "Test failed\n");
	return 1;
      }
    }
  }
  
  printf("Test succeeded\n");
  return 0;
  
}
