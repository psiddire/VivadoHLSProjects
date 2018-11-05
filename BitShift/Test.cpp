#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "BitShift.h"

int main(int argc, char **argv) {

  int i;

  uint18_t a[2] = {132, 368};
  int19_t b[2];

  BitShift(a, b);
  
  for(i = 0; i < 2; i++) {
    printf("a: %d, b: %d\n", a[i], b[i]);
  }
  
}
