// Pointers and multi-dimensional arrays
#include <stdio.h>
//int Func(int* A) // Argument: passing 1-D array
int Func(int (*A)[3]) // Argument: equivalent to int A[][3]
{

}

int FuncTri(int (*A)[2][2])
{

}
int main()
{
  int C[3][2][2] = {{{2,5}, {7,9}}, {{3,4}, {6,1}}, {{0,8}, {11,13}}};
  printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
  printf("%d\n", *(C[0][0] + 1));
  int A[2] = {1,2};
  int B[2][3] = {{2,4,6}, {5,7,8}};
  Func(A);
  int X[5][3];
  Func(X); // X returns (*A)[3]
  FuncTri(C);
}