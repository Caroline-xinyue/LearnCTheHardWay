#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a; // goes on stack
  int *p;
  p = (int*) malloc(sizeof(int)); // malloc returns a void pointer
  *p = 10; //dereference this location
  /* use memory on heap through reference. */
  free(p); // if we are done using this memory, we should free it
  // responsibility of the programmer to free the memory
  p = (int*) malloc(sizeof(int)); // p points to a new heap location
  // the last memory address in heap is still there with value 10
  *p = 20;
  p = (int*) malloc(20 *sizeof(int));
  // store an array
}