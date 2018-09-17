#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "Linearizer.h"

bool makeTestData(int argc, char** argv, uint16_t data_input[NXtls * NStrips * NTowers], uint32_t lincoeff[NXtls * NStrips * NTowers][3]) {
  int iXtl, j;
  uint32_t value = 0;
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--random", strlen(pattern)) == 0) {
    for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
      data_input[iXtl] = rand() & 0x3FFF;
      for(j = 0; j < 3; j++){
    	  lincoeff[iXtl][j] = rand() & 0xFFFFFF;
      }
    }
  }
  else if(strncmp(pattern, "--increasing", strlen(pattern)) == 0) {
    value = 0;
    for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
      data_input[iXtl] = value++;
      for(j = 0; j < 3; j++){
        lincoeff[iXtl][j] = data_input[iXtl];
      } 
    }
  }
  else if(strncmp(pattern, "--decreasing", strlen(pattern)) == 0) {
    value = NXtls * NStrips * NTowers;
    for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
      data_input[iXtl] = value--;
      for(j = 0; j < 3; j++){
        lincoeff[iXtl][j] = data_input[iXtl];
      } 
    }
  }
  else if(strncmp(pattern, "--constant", strlen(pattern)) == 0) {
    value = 0;
    if(argc == 3) value = atoi(argv[2]);
    for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
      data_input[iXtl] = value;
      for(j = 0; j < 3; j++){
        lincoeff[iXtl][j] = value;
      }
    }
  }
  else {
	for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
	  data_input[iXtl] = rand() & 0x3FFF;
	  for(j = 0; j < 3; j++){
	    lincoeff[iXtl][j] = rand() & 0xFFFFFF;
	  }
	}
  }
  return true;
}

int main(int argc, char **argv) {

  uint16_t data_input[NXtls * NStrips * NTowers];
  uint32_t lincoeff[NXtls * NStrips * NTowers][3];
  uint32_t trigger_data_output[NXtls * NStrips * NTowers];
  uint32_t hlstrigger_data_output[NXtls * NStrips * NTowers];

  uint16_t correctedADC = 0;
  uint16_t uncorrectedADC = 0;
  uint16_t base = 0;
  uint8_t gainID = 0;
  uint32_t coeff = 0;
  uint8_t shift = 0;
  uint8_t mult = 0;

  int iXtl, i;
  int event = 0;

  for (i = 0; i < NXtls * NStrips * NTowers; i++){
	  trigger_data_output[i] = 0;
	  hlstrigger_data_output[i] = 0;
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
    if(!makeTestData(argc, argv, data_input, lincoeff)) return 999;

    // Determine HT using software    
    for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
      if (data_input[iXtl] > 0X3FFF) {
	fprintf(stderr, "ERROR IN INPUT SAMPLE OF FENIX LINEARIZER");
      }
      uncorrectedADC = data_input[iXtl] & 0XFFF;
      gainID = (data_input[iXtl] & 0X3000) >> 12;

      if (gainID == 1) coeff = lincoeff[iXtl][0];
      else if (gainID == 2) coeff = lincoeff[iXtl][1];
      else if (gainID == 3) coeff = lincoeff[iXtl][2];
      else{
        if ((((lincoeff[iXtl][2] & 0XFF0000) >> 16) == 0) && (((lincoeff[iXtl][1] & 0XFF0000) >> 16) == 0) && (((lincoeff[iXtl][0] & 0XFF0000) >> 16) == 0)){
          coeff = 0;
        }
        else{
          coeff = 0XFF0000;
        }
      }

      base = coeff & 0XFFF;
      shift = (coeff & 0XF000) >> 12;
      mult = (coeff & 0XFF0000) >> 16;

      correctedADC = (uncorrectedADC - base);
      if (correctedADC < 0) trigger_data_output[iXtl] = shift << 12;
      trigger_data_output[iXtl] = (correctedADC * mult) >> (shift + 2);
      if (trigger_data_output[iXtl] > 0X3FFFF) trigger_data_output[iXtl] = 0X3FFFF;
    }

    // Determine HT using hardware simulation
    Linearizer(data_input, lincoeff, hlstrigger_data_output);
    
    // Compare
    if(trigger_data_output[5] != hlstrigger_data_output[5]) {
      fprintf(stderr, "C says: Trigger = %d; HLS says: Trigger = %d\n", trigger_data_output[0], hlstrigger_data_output[0]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }
  }
  
  printf("Test succeeded\n");
  return 0;

}