#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include "TPG.h"

using namespace std;

bool makeTestData(int argc, char** argv, uint14_t data_input[NXtl], uint24_t lincoeff[NXtl], short event) {
  short k, j;
  char pattern[64];
  if(argc >= 2) {
    strncpy(pattern, argv[1], 64);
  }
  else {
    strcpy(pattern, "--default");
  }
  if(strncmp(pattern, "--fileinput", strlen(pattern)) == 0) {
    fstream f;
    f.open("inputfileComp1.txt");
    short i = 0;
    uint14_t a;
    uint24_t b;
    while(!f.eof()){
      if (i >= NXtl*event && i < NXtl*(event+1)){
	for(j = 0; j < NXtl; j++) {
	    f >> std::hex >> data_input[j] >> lincoeff[j];
	    i++;
	}
      }
      else{
	f >> std::hex >> a >> b;
	i++;
      }
    }
  }
  else {
    for(j = 0; j < NXtl; j++) {
      data_input[j] = data[event*NXtl + j];
      lincoeff[j] = coef[event*NXtl + j];
    }
  }
  return true;
}

int main(int argc, char **argv) {

  uint14_t data_input[NXtl];
  uint24_t lincoeff[NXtl];
  short i;
  //uint18_t filter_output[NXtl];
  //bool peak_finder_output[NXtl];
  inPut in[NXtl];
  outPut out[NXtl];
  int event;

#ifdef Vivado
  printf("Running in Vivado environment\n");
#else
  printf("Using: #define uint10_t uint16_t\n");
#endif

  for(event = 0; event < NEvents; event++) {
    
    if(!makeTestData(argc, argv, data_input, lincoeff, event)) return 999;

    for(i = 0; i < NXtl; i++) {
    	in[i].data_input = data_input[i];
    	in[i].lincoeff = lincoeff[i];
    }

    TPG(in, out);

    for(i = 0; i < NXtl; i++) {
      //printf("%d, Input: %d, Filter Output: %d, Peak Finder: %d \n", i, data_input[i], out[i].filOut, out[i].peakOut);
      printf("%d \n", out[i].filOut);
    }
  }
  
}
