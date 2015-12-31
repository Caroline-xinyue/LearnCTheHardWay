#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);
  int *A = (int*) calloc(n, sizeof(int)); //dynamically allocated array
  for(int i = 0; i < n; i++) {
    A[i] = i+1;
  }
  free(&A);
  // if commend out line 10-12, calloc automatically initialize the array to 0
  for(int i = 0; i < n; i++) {
    printf("%d ", A[i]);
  }
}