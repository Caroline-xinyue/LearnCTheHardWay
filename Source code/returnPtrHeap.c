#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld() {
  printf("Hello World\n");
}
// Pointers as function returns
int* Add(int* a, int* b) // Called function
{
  // a and b are pointer to integers local to Add
  int* c = (int*) malloc(sizeof(int));
  *c = (*a)+(*b); // dereference an address
  return c;
}
int main()
{
  int a = 2, b = 4;
  printf("Address of a, b in main = %d, %d\n", &a, &b);
  // Call by value
  //int c = Add(a,b); // Value in a of main is copied to a of Add. Value in b of main is copied to b of Add
  // Call by reference
  int* ptr = Add(&a,&b); // a and b are integers local to Main
  PrintHelloWorld(); // memory was deallocated for the functio nAdd, the line 26 would return a garbage value
  printf("Sum = %d\n",*ptr);
  // Not okay to return the address variable from top to bottom in the call stack
  // Pointer as function returns is useable in heap, not in stack!
}