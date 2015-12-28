// Using Arithmetic Operator
#include<stdio.h>
int main()
{
    int a, b, sum, diff, product, quotient, remainder;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    sum = a+b;
    printf("a+b = %d\n", sum);
    
    diff = a-b;
    printf("a-b = %d\n", diff);;
    
    product = a*b;
    printf("a*b = %d\n", product);
    
    quotient = a/b;
    printf("a/b = %d\n", quotient);
    
    remainder = a%b;
    printf("a%%b=%d\n", remainder);
}