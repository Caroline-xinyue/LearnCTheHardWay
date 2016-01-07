/*
 * File:    main.c
 * Author: zentut.com
 * C enumeration types demo 2
 */
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
 
    enum color { red, green, blue };
 
    enum  color favorite_color;
 
    /* ask user to choose color */
    printf("Please choose your favorite color: (1. red, 2. green, 3. blue):");
    scanf("%d", &favorite_color);
 
    /* print out the result */
    switch (favorite_color)
    {
    case red:
        printf("your favorite color is Red");
        break;
    case green:
        printf("your favorite color is Green");
        break;
    case blue:
        printf("your favorite color is Blue");
        break;
    default:
        printf("you did not choose any color");
    }
 
    return 0;
}