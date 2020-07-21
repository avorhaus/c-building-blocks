// accumulate.c
// Accumulate algotithm on integer arrays.

#include "accumulate.h"
#include <stdio.h>
#include <stdlib.h>


int accumulate(
    int array[],
    size_t first,
    size_t last,
    int start,
    binary_op_f op)
{
  if(first>=last){
    return 0;
  }
  //printf("passed the valid indices test\n");
  int accum = start;
  for(int i = first; i < last; i++){
    accum = op(accum,array[i]);
    //printf("%d\n", accum);
  }
  return accum;
}
