#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "PeakFinder.h"

using namespace std;

bool makeTestData(int argc, char** argv, uint32_t data_input[NXtl * NSamples], int event) {
  int i, j, iXtl;
  uint32_t value = 0;
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
    i = 0;
    j = 0;
    uint32_t input[NXtl * NSamples];
    uint32_t a;
    while(!f.eof()){
      if (i >= NXtl * NSamples * event && i < NXtl * NSamples * (event+1)){
        f >> std::hex >> input[j];
        j++;
      }
      else{
        f >> std::hex >> a;
      }
      i++;
    }
    for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {
      data_input[iXtl] = input[iXtl];
    }
  }
  else {
    for(i = 0; i < NXtl * NSamples; i++) data_input[i] = rand() & 0x3FFFF;
  }
  return true;
}

int main(int argc, char **argv) {
  
  uint32_t data_input[NXtl * NSamples];
  bool output[NXtl * NSamples];
  bool hlsoutput[NXtl * NSamples];

  int inputsAlreadyIn = 0;
  int buffer[3];

  int i, j;
  int event = 0;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  ofstream of;
  of.open("outputPeakFinder.txt");

  for(event = 0; event < NEvents; event++) {
    
    if(!makeTestData(argc, argv, data_input, event)) return 999;
    
    int inputsAlreadyIn = 0;

    for(i = 0; i < NXtl * NSamples; i++) {

      output[i] = 0;
      hlsoutput[i] = 0;

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
	for(j = 0; j < 2; j++) buffer[j] = buffer[j+1];
	buffer[2] = data_input[i];
      }

      if (buffer[1] > buffer[0] && buffer[1] > buffer[2]) output[i-1] = 1;
      else output[i-1] = 0;

    }

    PeakFinder(data_input, hlsoutput);
    
    if(output[5] != hlsoutput[5]) {
      fprintf(stderr, "C says: Output = %d; HLS says: Output = %d\n", output[5], hlsoutput[5]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }

    for (i = 0; i < NXtl * NSamples; i++){
      printf("%d, Output: %d, HLS Output: %d, Input: %d \n", i, output[i], hlsoutput[i], data_input[i]);
      of << output[i] << '\n';
    }

  }
  
  printf("Test succeeded\n");
  return 0;
  
}
