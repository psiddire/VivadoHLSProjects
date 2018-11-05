#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "TPG.h"

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
    int gain;
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
      gain = (data_input[iXtl] & 0x3000) >> 12;
      for(j = 0; j < 3; j++){
	if (j==(gain-1)){
	  lincoeff[iXtl][j] = param[iXtl];
	}
	else{
	  lincoeff[iXtl][j] = 0x000000;
	}
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

  int params[5] = {92, 93, 16, 31, 24};
  int32_t filter_output[NXtl * NSamples];

  bool peak_finder_output[NXtl * NSamples];

  int16_t strip_format_output[NXtl * NSamples];

  int i;
  int event = 0;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  ofstream of;
  of.open("hlsoutput.txt");

  for(event = 0; event < NEvents; event++) {
    
    if(!makeTestData(argc, argv, data_input, lincoeff, event)) return 999;

    TPG(data_input, lincoeff, trigger_data_output, filter_output, params, peak_finder_output, strip_format_output);

    for (i = 0; i < NXtl * NSamples; i++){
      printf("%d, Input: %d, Coefficient: %d, Linearizer Output: %d, Filter Output: %d, Peak Finder Output: %d, Strip Format Output: %d \n", i, data_input[i], lincoeff[i][0], trigger_data_output[i], filter_output[i], peak_finder_output[i], strip_format_output[i]);
      of << trigger_data_output[i] << ' ' << filter_output[i] << ' ' << peak_finder_output[i] << ' ' << strip_format_output[i] << '\n';
    }

  }
  
}
