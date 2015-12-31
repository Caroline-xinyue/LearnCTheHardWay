/* Arrays as function arguments */
#include <stdio.h>
int SumOfElements(int A[], int size) 
{
  int i ,sum = 0;
  for(i = 0; i < size; i++) {
    A[i] = 2*A[i];
    sum += A[i];
  }
  return sum;
}

int main()
{
  int A[] = {1,2,3,4,5};
  int size = sizeof(A)/sizeof(A[0]);
  int sum = SumOfElements(A, size);
  for(int i = 0; i < size; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\nSum of elements = %d\n", sum);
}

// int SumOfElements(int A[])  // (int A[]) is (int* A)
// /* Compiler didn't allocate a new array and copy values of A, instead call by 
// reference in passing array as function argument. So must pass array size as an 
// argument */
// /* Key: 1) Local Variable 2) Pass array by reference as function argument*/
// {
//   int i ,sum = 0;
//   int size = sizeof(A)/sizeof(A[3]); 
//   // Here A is a local variable that stores the address of the array A, not the array A itself
//   printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
//   printf("SOE - Address of A = %d\n", A);
//   printf("SOE - Address of A& = %d\n", &A);
//   for(i = 0; i < size; i++) {
//     sum += A[i]; // A[i] is *(A+i)
//   }
//   return sum;
// }

// int main()
// {
//   int A[] = {1,2,3,4,5};
//   int sum = SumOfElements(A);
//   printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
//   printf("Main - Address of A = %d\n", A);
//   printf("SOE - Address of A& = %d\n", &A);
//   printf("Sum of elements = %d\n", sum);
// }