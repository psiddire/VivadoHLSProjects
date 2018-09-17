#include <stdint.h>
#include <stdio.h>
#include "Linearizer.h"

void Linearizer(uint16_t data_input[NXtls * NStrips * NTowers], uint32_t lincoeff[NXtls * NStrips * NTowers][3], uint32_t trigger_data_output[NXtls * NStrips * NTowers]) {
#pragma HLS INTERFACE ap_none port=trigger_data_output
#pragma HLS ARRAY_PARTITION variable=data_input complete dim=0
#pragma HLS ARRAY_PARTITION variable=lincoeff complete dim=0
#pragma HLS ARRAY_PARTITION variable=trigger_data_output complete dim=0
  uint16_t correctedADC = 0;
  uint16_t uncorrectedADC = 0;
  uint16_t base = 0;
  uint8_t gainID = 0;
  uint32_t coeff = 0;
  uint8_t shift = 0;
  uint8_t mult = 0;

  int iXtl;

  for(iXtl = 0; iXtl < NXtls * NStrips * NTowers; iXtl++) {
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
