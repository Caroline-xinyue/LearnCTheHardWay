#include <stdio.h>
int main()
{
  int x = 5;
  int *p;
  p = &x;
  *p = 6;
  int **q;
  q = &p;
  int*** r;
  r = &q;
  printf("%d\n", *p);
  printf("%d\n",*q);
  printf("%d\n",*(*q)); // or **q also works but *(*q) better
  printf("%d\n",*(*r));
  printf("%d\n",*(*(*r)));
  printf("x=%d\n",x);
  ***r = 11;
  printf("x=%d\n",x);
  **q = *p + 2;
  printf("x=%d\n",x);
}