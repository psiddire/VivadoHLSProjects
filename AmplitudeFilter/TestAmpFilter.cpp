#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "AmpFilter.h"

using namespace std;

bool makeTestData(int argc, char** argv, uint32_t data_input[NXtl * NSamples], int event) {
  int i, j, iXtl;
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
    for(i = 0; i < NXtl; i++) {
      data_input[i] = rand() & 0x3FFFF;
    }
  }
  return true;
}

int main(int argc, char **argv) {
  
  uint32_t data_input[NXtl * NSamples];
  int params[5] = {92, 93, 16, 31, 24};
  int32_t output[NXtl * NSamples];
  int32_t hlsoutput[NXtl * NSamples];

  int inputsAlreadyIn = 0;
  int32_t processedOutput = 0;
  int shift = 6;
  int buffer[5];
  int weights[5];

  int i, j;
  int event = 0;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  for (i = 0; i < 5; i++){
    weights[i] = (params[i] & 0x40) ? (int)( params[i] | 0xffffffc0) : (int)(params[i]);
    printf("Weights: %d \n", weights[i]);
  }

  ofstream of;
  of.open("outputAmpFilter.txt");

  for(event = 0; event < NEvents; event++) {
    
    // Make test data
    if(!makeTestData(argc, argv, data_input, event)) return 999;
    
    int inputsAlreadyIn = 0;

    // Determine HT using software    
    for(i = 0; i < NXtl * NSamples; i++) {
      output[i] = 0;
      hlsoutput[i] = 0;

      if (data_input[i] > 0X3FFFF) {
    	fprintf(stderr, "ERROR IN INPUT SAMPLE OF AMPLITUDE FILTER");
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
      printf("Processed: %d \n", processedOutput);
      if (processedOutput < 0) processedOutput = 0;
      if (processedOutput > 0X3FFFF) processedOutput = 0X3FFFF;
      
      output[i] = processedOutput;
    }

    for (i = 0; i < NXtl * NSamples; i++){
      if (i != NXtl * NSamples - 1){
    	output[i] = output[i+1];
      }
      else{
    	output[i] = 0;
      }
    }

    AmpFilter(data_input, hlsoutput, params);
    
    if(output[5] != hlsoutput[5]) {
      fprintf(stderr, "C says: Output = %d; HLS says: Output = %d\n", output[5], hlsoutput[5]);
      fprintf(stderr, "Test failed\n");
      return 1;
    }

    for (i = 0; i < NXtl * NSamples; i++){
      printf("%d, Output: %d, HLS Output: %d, Input: %d \n", i, output[i], hlsoutput[i], data_input[i]);
      of << hlsoutput[i] << '\n';
    }

  }
  
  printf("Test succeeded\n");
  return 0;
  
}
