# include "fun.h"

long fun3(long *arr, long sI, long sJ)
{
    for (int i=0; i < sI*sJ; ++i) {arr[i] = i;}
    return *arr;
}