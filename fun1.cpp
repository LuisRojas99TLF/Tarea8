# include "fun.h"

long fun1(long *arr, long sI, long sJ)
{
  for (long i=0; i < sI; ++i){
    for (long j=0; j < sJ; ++j){
      arr[(i * (sJ)) + j ] = i;
    }
  }
  return *arr;
}