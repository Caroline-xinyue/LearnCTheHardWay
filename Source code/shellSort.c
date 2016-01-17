#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void display(int a[], const int size);
void shellsort(int a[], const int size);

int main()
{
  //int a[SIZE] = {6,5,3,1,8,7,4,2};
  int a[SIZE];
  for(int i = 0; i < SIZE; i++) {
    a[i] = i;//rand();
  }

  printf("--- C Shell Sort Demonstration --- \n");

  printf("Array before sorting:\n");
  display(a, SIZE);

  shellsort(a, SIZE);

  printf("Array after sorting:\n");
  display(a,SIZE);

  return 0;
}

void shellsort(int a[], const int size)
{
  int gap, tmp;
  gap = 3;
  while(gap > 0)
  {
    for(int i = 0; i < size; i++){
      int j = i;
      tmp = a[i];
      while((j >= gap) && (a[j-gap] > tmp)) {
        a[j] = a[j - gap];
        j = j - gap;
      }
      a[j] = tmp;
      display(a,SIZE);
    }
    gap = gap/2;
  }
}

void display(int a[], const int size)
{
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}