#include <stdint.h>
#include <stdio.h>
#include "BitShift.h"

void BitShift(uint18_t a[2], int19_t b[2]){
  int7_t w[2] = {-36, -35};
  int25_t x = 0;
  int25_t y = 0;
  x = a[0]*w[0];
  b[0] = x >> 1;
  b[0] = x >> 6;
  b[1] = a[1]*w[1] >> 6;
}
