/*
 * File:   main.c
 * Author: zentut.com
 * C Function Pointer Demo 4
 */
#include <stdio.h>
#include <stdlib.h>
 
/* define function pointer type */
typedef int(*pfOperator)(int, int);
 
int plus(int,int);
int minus(int,int);
 
pfOperator getOperator(const char oper);
 
int main()
{
    int x = 10,
        y = 20,
        z = 0;
    // declare function pointer array
    pfOperator funcs[2];
 
    funcs[0] = getOperator('+');
    z = (funcs[0])(x,y);
    printf("%d\n",z);
 
    funcs[1] = getOperator('-');
    z = (*funcs[1])(x,y);
    printf("%d\n",z);
 
    return 0;
}
 
pfOperator getOperator(const char oper)
{
    switch(oper)
    {
    case '+':
        return &plus;
        break;
    case '-':
        return &minus;
        break;
    default:
        return NULL;
    }
}
 
int plus(int x,int y)
{
    return x + y;
}
int minus(int x,int y)
{
    return x - y;
}