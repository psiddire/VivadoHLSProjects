#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "Linearizer.h"
#include "LUTs.h"

using namespace std;

bool makeTestData(int argc, char** argv, uint16_t data_input[NXtl * NSamples], uint32_t lincoeff[NXtl * NSamples][3], uint8_t event) {
  int iXtl, j;
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--fileinput", strlen(pattern)) == 0) {
    fstream f;
    f.open("inputfile.txt");
    int i = 0;
    int j = 0;
    uint16_t input[NXtl * NSamples];
    uint32_t param[NXtl * NSamples];
    uint16_t a;
    uint32_t b;
    while(!f.eof()){
      if (i >= NXtl*NSamples*event && i < NXtl*NSamples*(event+1)){
	f >> std::hex >> input[j] >> param[j];
	j++;
      }
      else{
	f >> std::hex >> a >> b;
      }
      i++;
    }
    for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {
      data_input[iXtl] = input[iXtl];
      for(j = 0; j < 3; j++){
	if (j==0){
	  lincoeff[iXtl][j] = param[iXtl];
	}
	else{
	  lincoeff[iXtl][j] = 0x000000;
	}
      }
    }
  }
  else if (strncmp(pattern, "--lut", strlen(pattern)) == 0){
    for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {
      data_input[iXtl] = input[iXtl];
      for(j = 0; j < 3; j++){
	lincoeff[iXtl][j] = param[iXtl][j];
      }
    }
  }
  else {
    for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {
      data_input[iXtl] = rand() & 0x3FFF;
      for(j = 0; j < 3; j++){
	lincoeff[iXtl][j] = rand() & 0xFFFFFF;
      }
    }
  }
  return true;
}

int main(int argc, char **argv) {

  uint16_t data_input[NXtl * NSamples];
  uint32_t lincoeff[NXtl * NSamples][3];
  uint32_t trigger_data_output[NXtl * NSamples];
  uint32_t hlstrigger_data_output[NXtl * NSamples];

  uint16_t correctedADC = 0;
  uint16_t uncorrectedADC = 0;
  uint16_t base = 0;
  uint8_t gainID = 0;
  uint32_t coeff = 0;
  uint8_t shift = 0;
  uint8_t mult = 0;

  int iXtl, i;
  int event = 0;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  for(event = 0; event < NEvents; event++) {
    
    if(!makeTestData(argc, argv, data_input, lincoeff, event)) return 999;

    // Determine HT using software    
    for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {

      trigger_data_output[iXtl] = 0;
      hlstrigger_data_output[iXtl] = 0;

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
      fprintf(stderr, "C says: Trigger = %d; HLS says: Trigger = %d\n", trigger_data_output[5], hlstrigger_data_output[5]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }

    for (i = 0; i < NXtl * NSamples; i++){
      printf("%d, Output: %d, HLS Output: %d, Input: %d %d \n", i, trigger_data_output[i], hlstrigger_data_output[i], data_input[i], lincoeff[i][0]);
    }

  }
  
  printf("Test succeeded\n");
  return 0;

}
