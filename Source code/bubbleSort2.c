#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(int *x, int *y);
void bubble_sort(int a[], const int n);
void display(int a[], int size);

void main()
{
  int a[SIZE] = {8,5,3,2,6,1,9,4,7,0};

  printf("The array before sorting is:\n");
  display(a, SIZE);

  bubble_sort(a, SIZE);

  printf("The array after sorting using bubble sorting algorithm:\n");
  display(a, SIZE);
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubble_sort(int a[], const int size)
{
  for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-1-i; j++) {
      if(a[j] > a[j+1]) {
        swap(&a[j], &a[j+1]);
      }
    }
    display(a,SIZE);
  }
}

void display(int a[], const int size)
{
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}