/*
 *  Author:    Nick D'Amico
 *  Date:      10/02/22
 *  Exercise:  2-8
 *
 *  Objective:  Write a function rightrot(x, n)
 *              that returns the value of the integer x rotated to the 
 *              the right by n bit positions.
 *
 */

#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(void)
{
    /*
    *   5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
    *   1 0 1 0 1 1 1 1 0 1 1 0 0 1 0 1 
    *   - - -                           << 16 - n this would give use the n right most bits.
    *   1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 result.
    *   - - - 
    *   0 0 0 1 0 1 0 1 1 1 1 0 1 1 0 0 >> left shift n bits.
    * 
    *   Example 1:
    *   x = 30
    *   n = 3
    *         7 6 5 4 3 2 1 0 
    *   x   ( 0 0 0 1 1 1 1 0 )
    *   n           - - -
    *       --------------------- ( inverted )
    *   x   ( 0 0 0 1 0 1 1 1 )
    *   result = 23
    * 
    *   Solution 1: Make a mask of 1's (n bits long), ^ XOR against x?
    * 
    */
    // unsigned x = 20;
    // int p = 4, n = 3;
    
    printf("%d\n", rightrot(x, n));

    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    return x;
    // return x ^ (~(~0 << n)) << (p + 1 - n);
}