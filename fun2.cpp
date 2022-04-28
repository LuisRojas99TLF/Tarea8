# include "fun.h"

long fun2(long *arr, long sI, long sJ)
{
  for (long i=0; i < sI; ++i){
    for (long j=0; j < sJ; ++j){
      arr[(j * (sI)) + i ] = i;
    }
  }
  return *arr;
}