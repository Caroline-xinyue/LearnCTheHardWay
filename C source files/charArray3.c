// pass by reference 
#include <stdio.h>
//void print(char* C)
void print(const char* C) // (read-only variable) to avoid modify the string
{
  C[0] = 'A'; //modify the string
  /* Now with this line 6, compile error would occur */
  //while(C[i] != '\0') {
  while(*C != '\0') {
    printf("%c",*C);
    C++;
  }
  printf("\n");
}
int main()
{
  char C[20] = "Hello"; // String gets stored in the space for array
  //char *C = "Hello"; // Strings get stored as compile time constant
  //C[0] = 'A'; // Compile error, the program will crash (bus error)
  //printf("Hellow World");
  print(C);
}