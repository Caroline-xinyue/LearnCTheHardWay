#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int binary_search_itr(int sorted_list[], int low, int high, int element);
int binary_search_recur(int sorted_list[], int low, int high, int element);

int main()
{
  int a[SIZE] = {5,7,8,9,20,21,54,67,89,93};
  int key, result;
  printf("Array: ");
  for(int i = 0; i < SIZE; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("\nPlease enter the searched key:");
  scanf("%d",&key);

  result = binary_search_itr(a,0,SIZE-1,key);

  if(result >= 0) {
    printf("The key %d was found at index %d (starting from 0)\n", key, result);
  }
  else {
    printf("The key %d was not found\n", key);
  }
  return 0;
}

int binary_search_itr(int sorted_list[], int low, int high, int element)
{
  int mid;
  printf("low\tmid\thigh\n");
  while(low <= high)
  {
    mid = low + (high - low)/2;
    printf("%d\t%d\t%d\n", low,mid,high);
    if(element == sorted_list[mid]) {
      return mid;
    }
    else if(element < sorted_list[mid]) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return -1;
}

int binary_search_recur(int sorted_list[], int low, int high, int element)
{
  int mid = low + (high - low)/2;
  if(low > high) {
    return -1;
  }
  if(element == sorted_list[mid]){
    return mid;
  }
  else if(element < sorted_list[mid]) {
    return binary_search_recur(sorted_list, low, mid - 1, element);
  }
  else {
    return binary_search_recur(sorted_list, mid + 1, high, element);
  }
}