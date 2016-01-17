#include<stdio.h>
int main()
{
  int a = 10;
  int* p = &a;
  //a = 10;
  //p = &a; // &a = address of a
  int b = 20;
  printf("Address p = %d\n",p);
  printf("Value *p = %d\n",*p);
  *p = b;
  printf("a = %d\n",a);
  printf("b = %d\n",b);
  printf("Address p = %d\n",p);
  printf("Value *p = %d\n",*p);
  // *p = 12; //dereferencing
  // printf("a = %d\n",a);
  // printf("%d\n",p);
  // printf("%d\n",&a);
  // printf("%d\n", *p); // *p value at address pointed by p
}