#include <stdint.h>
#include <stdio.h>
#include "TPG.h"

void TPG(inPut in[NXtl], outPut out[NXtl]) {
#pragma HLS PIPELINE
  short i;
  static uint18_t sh_reg[NXtl][4];
  static uint18_t pk_reg[NXtl][2];

#pragma HLS ARRAY_PARTITION variable=in complete dim=0
#pragma HLS ARRAY_PARTITION variable=out complete dim=0
#pragma HLS ARRAY_PARTITION variable=sh_reg complete dim=0
#pragma HLS ARRAY_PARTITION variable=pk_reg complete dim=0

  for (i = 0; i < NXtl; i++){
#pragma HLS UNROLL
	out[i] = LinFil(in[i].data_input, in[i].lincoeff, sh_reg[i], pk_reg[i], i);
  }
}

outPut LinFil(uint14_t data_int, uint24_t lincoef, uint18_t shift_reg[4], uint18_t peak_reg[2], short i){
#pragma HLS ARRAY_PARTITION variable=shift_reg complete dim=0
#pragma HLS ARRAY_PARTITION variable=peak_reg complete dim=0

  int8_t j, k;
  int13_t correctedADC = 0;
  uint12_t uncorrectedADC = 0;
  uint18_t linearizerOutput = 0;
  uint12_t base = 0;
  uint24_t coeff = 0;
  uint4_t shiftlin = 0;
  uint8_t mult = 0;
  int19_t filterOutput = 0;
  uint4_t shiftfilter = 6;
  uint18_t m = 0;
  int19_t mul = 0;
  int25_t pro = 0;
  int19_t acc = 0;
  int7_t weight[5] = {24, 31, 16, -35, -36};
  outPut o;
  o.peakOut = false;

  if (data_int > 0X3FFF) fprintf(stderr, "ERROR IN INPUT SAMPLE");
  uncorrectedADC = data_int & 0XFFF;
  if (((lincoef & 0XFF0000) >> 16) == 0) coeff = 0;
  else coeff = lincoef;
  base = coeff & 0XFFF;
  shiftlin = (coeff & 0XF000) >> 12;
  mult = (coeff & 0XFF0000) >> 16;
  correctedADC = (uncorrectedADC - base);
  if (correctedADC < 0) linearizerOutput = shiftlin << 12;
  linearizerOutput = (correctedADC * mult) >> (shiftlin + 2);

  for (j = 4; j >= 0; j--){
#pragma HLS UNROLL
    if (j == 0){
      m = linearizerOutput;
      shift_reg[0] = linearizerOutput;
    }
    else{
      m = shift_reg[j-1];
      if (j!=4){
  	    shift_reg[j] = shift_reg[j-1];
      }
    }
    pro = m*weight[j];
    mul = pro >> shiftfilter;
    acc = acc + mul;
  }
  filterOutput = acc;
  if (filterOutput < 0) filterOutput = 0;
  if (filterOutput > 0X3FFFF) filterOutput = 0X3FFFF;
  o.filOut = filterOutput;

  for (k = 2; k >= 0; k--){
#pragma HLS UNROLL
    if (k == 0){
  	  peak_reg[0] = filterOutput;
    }
    else{
  	  if (k!=2){
  	    peak_reg[k] = peak_reg[k-1];
  	  }
    }
    if (peak_reg[0] > filterOutput && peak_reg[0] > peak_reg[1]){
  	  o.peakOut = true;
    }
  }
  return o;
}
