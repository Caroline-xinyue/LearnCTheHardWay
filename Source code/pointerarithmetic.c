#include<stdio.h>
int main()
{
  int a = 10;
  int* p = &a;
  // Pointer arithmetic
  printf("Address p is %d\n",p); // suppose p is 2002
  printf("Value p is %d\n",*p);
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address p+1 is %d\n",p+1); // p+1 is 2003??? NO!!! It should be 2002+4 = 2006 because the size of integer is 4 bytes
  printf("Value p+1 is %d\n",*(p+1)); // danger of C, the int at address p+1 is not initialized
}