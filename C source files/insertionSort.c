#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
void swap(int *a, int *b);
void display(int *a, const int size);
void insertion_sort(int *a, const int size);

int main()
{
  int a[SIZE] = {3,4,6,1,5,8,7,9,0,2};

  insertion_sort(a, SIZE);

  display(a, SIZE);
  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertion_sort(int*a, const int size)
{
  int m, key;
  for(int i = 1; i < size; i++) {
    key = a[i];
    m = i;
    while((m > 0) && (key < a[m-1])) {
      a[m] = a[m-1];
      m--;
    }
    a[m] = key;
  }
}

void display(int *a, const int size)
{
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}