#include <cstdio>
#include <cstdlib>

#include "fun.h"

/*
  Tests cache misses.
*/

int main(int argc, char **argv)
{
  if (argc < 3){
    printf("Usage: cacheTest sizeI sizeJ\nIn first input.\n");
    return 1;
  }
  long sI = atoi(argv[1]);
  long sJ = atoi(argv[2]);

  printf("Operating on matrix of size %ld by %ld\n", sI, sJ);

  long *arr = new long[sI*sJ]; // double array.

  // option 1
  fun1(arr, sI, sJ);
  // option 2
  fun2(arr, sI, sJ);
  // option 3
  fun3(arr, sI, sJ);
  
  printf("%ld\n", arr[0]);
  
  return 0;
}
