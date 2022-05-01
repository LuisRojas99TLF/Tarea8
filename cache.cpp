#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <iostream>

#include "fun.h"

/*
  Tests cache misses.
*/
template <typename T>
void print_elapsed(T start, T end );

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
  auto start = std::chrono::steady_clock::now();
  fun1(arr, sI, sJ);
  auto end = std::chrono::steady_clock::now();
  print_elapsed(start, end);
  // option 2
  start = std::chrono::steady_clock::now();
  fun2(arr, sI, sJ);
  end = std::chrono::steady_clock::now();
  print_elapsed(start, end);
  // option 3
  start = std::chrono::steady_clock::now();
  fun3(arr, sI, sJ);
  end = std::chrono::steady_clock::now();
  print_elapsed(start, end);

  printf("%ld\n", arr[0]);
  
  return 0;
}

template <typename T>
void print_elapsed(T start, T end )
{
  std::cout << "Elapsed time in microseconds: "
        << std::chrono::duration_cast<std::chrono::microseconds>(end-start).count()
        << "\n";
}