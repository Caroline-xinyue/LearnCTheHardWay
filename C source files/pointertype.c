#include<stdio.h>
int main()
{
  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes\n",sizeof(int));
  printf("Address = %d, value = %d\n",p,*p);
  // when dereferencing an int pointer, look at 4 bytes
  printf("Address = %d, value = %d\n",p+1,*(p+1));
  char *p0;
  p0 = (char*)p; //typecasting
  printf("size of char is %d bytes\n",sizeof(char));
  printf("Address = %d, value = %d\n",p0,*p0);
  // 1025 = 00000000[203] 00000000[202] 00000100[201] 00000001[200] // [200] is the address
  // when dereferencing an int pointer, look at 1 byte only

  // Void pointer - Generic Pointer
  void *p0;
  p0 = p;
  printf("Address = %d", p0); // cannot dereference or do pointer arithmetic
}