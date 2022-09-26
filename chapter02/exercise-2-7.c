/*
 *  Author:    Nick D'Amico
 *  Date:      9/18/22
 *  Exercise:  2-7
 *
 *  Objective:  Write a function invert(x,p,n)
 *              that returns x with the n bits that begin at position p
 *              inverted (i.e., 1 changed into 0 and vice versa), leaving
 *              the others unchanged.
 *
 */

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned invert(unsigned x, int p, int n);

int main(void)
{
    /*
    *
    *   x = 30
    *   p = 4
    *   n = 3
    *         7 6 5 4 3 2 1 0 
    *   x   ( 0 0 0 1 1 1 1 0 )
    *   p           -                   
    *   n           - - -
    *       --------------------- ( inverted )
    *   x   ( 0 0 0 0 0 0 1 0 )
    *   result = 2
    * 
    *   Solution 1: Make a mask of 1's (n bits long), ^ XOR against x?
    *       Step 1: Make a mask n bits long of 1's.
    *
    *   1. Make a  
    */
    unsigned x = 30;
    int p = 4, n = 3;
    
    printf("%d\n", invert(x, p, n));

    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    return ~(~0 << n);
}
// unsigned setbits(unsigned x, int p, int n, unsigned y)
// {
//     return x & ~(~(~0 << n) << (p + 1 - n)) | (y & (~(~0 << n))) << (p + 1 - n);
// }

/*
 *   Borrowed from C programming book as a test example.
 */
unsigned getbits(unsigned x, int p, int n)
{
    return ((x >> (p + 1 - n)) & ~(~0 << n));
}