#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void merge(int a[], int tmp[], int left, int mid, int right);
void msort(int a[], int tmp[], int left, int right);
void merge_sort(int a[], int tmp[], const int size);
void display(int a[], const int size);

int main()
{
  int a[SIZE] = {6,5,3,1,8,7,4,2};
  int tmp[SIZE];
  printf("--- C Merge Sort Demonstration --- \n");

  printf("Array before sorting:\n");
  display(a, SIZE);

  merge_sort(a, tmp, SIZE);

  printf("Array after sorting:\n");
  display(a, SIZE);

  return 0;
}

void merge_sort(int a[], int tmp[], const int size)
{
  msort(a, tmp, 0, size-1);
}

void msort(int a[], int tmp[], int left, int right)
{
  int mid;
  if(left < right)
  {
    mid = (left + right)/2;
    msort(a, tmp, left, mid);
    msort(a, tmp, mid+1, right);
    merge(a, tmp, left, mid+1, right);
    display(a, SIZE);
  }
}

void merge(int a[], int tmp[], int left, int mid, int right)
{
  int left_end, count, tmp_pos, leftindex;
  left_end = mid - 1;
  tmp_pos = left;
  leftindex = left;
  count = right - left + 1;
  while((left <= left_end) && (mid <= right))
  {
    if(a[left] <= a[mid]) {
      tmp[tmp_pos] = a[left];
      tmp_pos = tmp_pos + 1;
      left = left + 1;
    }
    else
    {
      tmp[tmp_pos] = a[mid];
      tmp_pos = tmp_pos + 1;
      mid = mid + 1;
    }
  }

  while(left <= left_end)
  {
    tmp[tmp_pos] = a[left];
    tmp_pos = tmp_pos + 1;
    left = left + 1;
  }
  while(mid <= right)
  {
    tmp[tmp_pos] = a[mid];
    tmp_pos = tmp_pos + 1;
    mid = mid + 1;
  }
  
  for(int i = 0; i < count; i++)
  {
    a[leftindex] = tmp[leftindex];
    leftindex = leftindex + 1;
  }
}

void display(int a[], const int size)
{
  for(int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}