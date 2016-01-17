/* 
 * File:    main.c
 * Author:  http://www.zentut.com
 * Purpose: Demonstrates C bitwise operators
 */
#include <stdio.h>
 
void main() {
    int d1 = 4, /* binary 100 */
        d2 = 6, /* binary 110 */
        d3;
 
    printf("\nd1=%d", d1);
    printf("\nd2=%d", d2);
 
    d3 = d1 & d2;
    printf("\n Bitwise AND  d1 & d2 = %d", d3);
 
    d3 = d1 | d2;
    printf("\n Bitwise OR d1 | d2 = %d", d3);
 
    d3 = d1 ^ d2;
    printf("\n Bitwise XOR d1 ^ d2 = %d", d3);
 
    d3 = ~d1; 
    printf("\n Ones complement of d1 = %d", d3);
 
    d3 = d1 << 2;
    printf("\n Left shift by 2 bits d1 << 2 = %d", d3);
 
    d3 = d1 >> 2;
    printf("\n Right shift by 2 bits d1 >> 2 = %d", d3);
}