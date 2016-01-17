#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);
  int *A = (int*) malloc(n*sizeof(int)); //dynamically allocated array
  int *B = (int*) realloc(NULL, n*sizeof(int)); // equal to calling malloc
  for(int i = 0; i < n; i++) {
    A[i] = i+1;
  }
  // free(&A);
  //int *B /*can use *A too*/= (int*) realloc(A, 0); // equal to calling free(A)
  // A = NULL; // After free, adjust pointer to NULL
  int *B = (int*) realloc(A, (n/2)*sizeof(int));
  printf("Prev block address = %d, new address = %d\n", A, B);
  for(int i = 0; i < n; i++) {
    printf("%d ", A[i]); // would cause a trash because of line 14
  }
  printf("\n");
  for(int i = 0; i < n/2; i++) {
    printf("Value in array B = %d\n", B[i]); // would cause a trash because of line 14
  }
}