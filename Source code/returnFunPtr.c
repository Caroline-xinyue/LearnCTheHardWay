/*
 * File:   main.c
 * Author: zentut.com
 * C function Pointer Demo 3
 */
#include <stdio.h>
#include <stdlib.h>
 
/* define function poiter type */
typedef int(*pfOperator)(int, int);
 
int plus(int,int);
int minus(int,int);
 
pfOperator getOperator(const char oper);
 
int main()
{
    int x = 10,
        y = 20,
        z = 0;
 
    pfOperator func = NULL;
 
    func = getOperator('+');
    z = func(x,y);
    printf("%d\n",z);
 
    func = getOperator('-');
    z = func(x,y);
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