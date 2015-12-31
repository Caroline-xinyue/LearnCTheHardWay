// Function Pointers and callbacks
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
  int A = *((int*)a);
  int B = *((int*)b);
  return A - B;
}

int main() {
  int i, A[] = {8,2,6,1,3};
  int size = sizeof(A)/sizeof(int);
  qsort(A,size,sizeof(int),compare);
  for(i = 0; i < size; i++) {printf("%d ", A[i]);}
}