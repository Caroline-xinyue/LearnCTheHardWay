#include <stdio.h>
// void Increment(int a) // local variable
// {
//   a = a+1;
//   printf("Address of variable a in increment = %d\n",&a);
//   printf("Value of variable a in increment = %d\n",a);
// }
// int main()
// {
//   int a; // local variable
//   a = 10;
//   Increment(a); // call ny value
//   printf("Address of variable a in main = %d\n",&a);
//   printf("a = %d\n",a);
// }

void Increment(int* p) // local variable
{
  *p = (*p)+1;
}
int main()
{
  int a; // local variable
  a = 10;
  Increment(&a); // call ny reference
  printf("Address of variable a in main = %d\n",&a);
  printf("a = %d\n",a);
}