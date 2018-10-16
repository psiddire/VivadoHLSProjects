#include <stdint.h>
#include <stdio.h>
#include "TPG.h"

void TPG(uint16_t data_input[NXtl * NSamples], uint32_t lincoeff[NXtl * NSamples][3], uint32_t trigger_data_output[NXtl * NSamples], int32_t filter_output[NXtl * NSamples], int params[5], bool peak_finder_output[NXtl * NSamples], int16_t strip_format_output[NXtl * NSamples]) {
#pragma HLS INTERFACE ap_none port=trigger_data_output
#pragma HLS INTERFACE ap_none port=filter_output
#pragma HLS INTERFACE ap_none port=peak_finder_output
#pragma HLS ARRAY_PARTITION variable=data_input complete dim=0
#pragma HLS ARRAY_PARTITION variable=lincoeff block factor=1000
#pragma HLS ARRAY_PARTITION variable=trigger_data_output complete dim=0
#pragma HLS ARRAY_PARTITION variable=filter_output complete dim=0
#pragma HLS ARRAY_PARTITION variable=params complete dim=0
#pragma HLS ARRAY_PARTITION variable=peak_finder_output complete dim=0
#pragma HLS ARRAY_PARTITION variable=strip_format_output complete dim=0

  Linearizer(data_input, lincoeff, trigger_data_output);
  
  AmpFilter(trigger_data_output, filter_output, params);
  
  PeakFinder(filter_output, peak_finder_output);

  StripFormat(filter_output, peak_finder_output, strip_format_output);

}


void Linearizer(uint16_t data_input[NXtl * NSamples], uint32_t lincoeff[NXtl * NSamples][3], uint32_t trigger_data_output[NXtl * NSamples]) {
  uint16_t correctedADC = 0;
  uint16_t uncorrectedADC = 0;
  uint16_t base = 0;
  uint8_t gainID = 0;
  uint32_t coeff = 0;
  uint8_t shift = 0;
  uint8_t mult = 0;
  int iXtl;

  for(iXtl = 0; iXtl < NXtl * NSamples; iXtl++) {
#pragma HLS UNROLL
    if (data_input[iXtl] > 0X3FFF) {
      fprintf(stderr, "ERROR IN INPUT SAMPLE OF FENIX LINEARIZER");
    }
    uncorrectedADC = data_input[iXtl] & 0XFFF;
    gainID = (data_input[iXtl] & 0X3000) >> 12;
    if (gainID == 1){
      coeff = lincoeff[iXtl][0];
    }
    else if (gainID == 2){
      coeff = lincoeff[iXtl][1];
    }
    else if (gainID == 3){
      coeff = lincoeff[iXtl][2];
    }
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

}


void AmpFilter(uint32_t trigger_data_output[NXtl * NSamples], int32_t filter_output[NXtl * NSamples], int params[5]) {

  int inputsAlreadyIn = 0;
  int32_t processedOutput = 0;
  int shift = 6;
  int buffer[5];
  int weights[5];
  int i, j;

  for (i = 0; i < 5; i++){
#pragma HLS UNROLL
    buffer[i] = 0;
    weights[i] = (params[i] & 0x40) ? (int)(params[i] | 0xffffffc0) : (int)(params[i]);
  }
  for (i = 0; i < NXtl * NSamples; i++){
#pragma HLS UNROLL
	filter_output[i] = 0;
    if (trigger_data_output[i] > 0X3FFFF){
      fprintf(stderr, "ERROR IN INPUT OF AMPLITUDE FILTER");
    }
    if (inputsAlreadyIn < 4){
      buffer[inputsAlreadyIn] = trigger_data_output[i];
      inputsAlreadyIn++;
      continue;
    }
    else if (inputsAlreadyIn == 4){
      buffer[inputsAlreadyIn] = trigger_data_output[i];
      inputsAlreadyIn++;
    }
    else{
      for(j = 0; j < 4; j++){
#pragma HLS UNROLL
        buffer[j] = buffer[j+1];
      }
      buffer[4] = trigger_data_output[i];
    }
    processedOutput = 0;
    for(j = 0; j < 5; j++){
#pragma HLS UNROLL
      processedOutput += (weights[j] * buffer[j]) >> shift;
    }
    if (processedOutput < 0) processedOutput = 0;
    if (processedOutput > 0X3FFFF) processedOutput = 0X3FFFF;
    filter_output[i] = processedOutput;
  }
  for (i = 0; i < NXtl * NSamples; i++){
#pragma HLS UNROLL
    if (i!=NXtl*NSamples-1){
      filter_output[i] = filter_output[i+1];
    }
    else{
      filter_output[i] = 0;
    }
  }

}


void PeakFinder(int32_t filter_output[NXtl * NSamples], bool peak_finder_output[NXtl * NSamples]) {
#pragma HLS ARRAY_PARTITION variable=filter_output complete dim=0
#pragma HLS ARRAY_PARTITION variable=peak_finder_output complete dim=0
  int inputsAlreadyIn = 0;
  int buffer[3];
  int i, j;
  
  for (i = 0; i < 3; i++){
#pragma HLS UNROLL
    buffer[i] = 0;
  }
  for (i = 0; i < NXtl * NSamples; i++){
#pragma HLS UNROLL
	peak_finder_output[i] = 0;
    if (inputsAlreadyIn < 2){
      buffer[inputsAlreadyIn] = filter_output[i];
      inputsAlreadyIn++;
      continue;
    }
    else if (inputsAlreadyIn == 2){
      buffer[inputsAlreadyIn] = filter_output[i];
      inputsAlreadyIn++;
    }
    else{
      for (j = 0; j < 2; j++){
#pragma HLS UNROLL
    	  buffer[j] = buffer[j+1];
      }
      buffer[2] = filter_output[i];
    }
    if (buffer[1] > buffer[0] && buffer[1] > buffer[2]) peak_finder_output[i-1] = 1;
    else peak_finder_output[i-1] = 0;
  }

}


void StripFormat(int32_t filter_output[NXtl * NSamples], bool peak_finder_output[NXtl * NSamples], int16_t strip_format_output[NXtl * NSamples]) {

  int i;
  int16_t processedOutput = 0;
  int shift = 0;

  for (i = 0; i < NXtl * NSamples; i++){
#pragma HLS UNROLL
	  if (peak_finder_output[i]==1){
      processedOutput = filter_output[i] >> shift;
      if (processedOutput > 0XFFF) processedOutput = 0XFFF;
      strip_format_output[i] = processedOutput;
    }
    else{
      strip_format_output[i] = 0;
    }
  }

}
