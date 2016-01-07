#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 9
 
void sort(int* a, const int size);
 
int main()
{
    int a[SIZE] = {1,3,2,6,4,5,8,7,9};
    sort(a,SIZE);
    return 0;
}
 
void sort(int* a, const int size)
{
    int i,j, k;
#if DEBUG
    printf("Before sorting:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
#endif // DEBUG
    for (i = 1; i < size; ++i)
    {
        k = a[i];
        j = i - 1;
        while ((j >= 0) && (k < a[j]))
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = k;
    }
#if DEBUG
    printf("\nAfter sorting:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
#endif // DEBUG
}