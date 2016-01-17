#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int compare(int a, int b);
void heap_sort(int a[], const int size);
void buildHeap(int a[], const int size);
void siftDown(int a[], const int size);
void display(int a[], const int size);
void swap(int *i, int *j);

int main()
{
  int a[SIZE] = {8,5,2,3,1,6,9,4,0,7};

  printf("Array before sorting:\n");
  display(a,SIZE);

  heap_sort(a, SIZE);

  printf("Array after sorting:\n");
  display(a, SIZE);
  return 0;
}

int compare(int a, int b)
{
  if(a > b){
    return 1;
  }
  else if(a < b) {
    return -1;
  }
  else {
    return 0;
  }
}

void heap_sort(int a[], const int size) {
    buildHeap(a, size);
    printf("After building heap:\n");
    display(a, size);
    siftDown(a, size);
}

void buildHeap(int a[], const int size) {
    int parent = 0;
    int child = 0;
    for(int i = 1; i < size; i++) {
        child = i;
        parent = (child-1)/2;
        while(parent >= 0 && a[child] > a[parent]) {
            swap(&a[child], &a[parent]);
            child = parent;
            parent = (child-1)/2;
        }
    }
}

void siftDown(int a[], const int size) {
    for(int i = size-1; i > 1; i--) {
        swap(&a[0], &a[i]);
        printf("After swapping:\n");
        display(a, size);
        int parent = 0;
        int leftChild = 1;
        int rightChild = leftChild + 1;
        int maxChild = rightChild;
        for (;;) {
            if(maxChild >= i) {
                break;
            }
            if (a[leftChild] > a[maxChild]) {
                maxChild = leftChild;
            }
            if (a[parent] < a[maxChild]) {
                swap(&a[parent], &a[maxChild]);
                parent = maxChild;
                maxChild = 2 * parent + 2;
                leftChild = maxChild - 1;
            } else {
                break;
            }
        }
    }
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void display(int a[], const int size)
{
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}