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

#define USHRT_LEN 16

unsigned rightrot(unsigned short x, int n);

int main(void)
{
    /*
    *   5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
    *   1 1 1 0 1 1 1 1 0 1 1 0 0 1 0 1 
    *   - - -                           << 16 - n this would give use the n right most bits.
    *   1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 result.
    *   - - - 
    *   0 0 0 1 1 1 0 1 1 1 1 0 1 1 0 0 >> left shift n bits.
    * 
    *   ------------------------------- Then we bitwise | the results of both the left and right shift above.
    *   1 0 1 1 1 1 0 1 1 1 1 0 1 1 0 0
    * 
    *   5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
    *   0 0 0 0 0 0 0 0 0 0 0 1 0 1 0 1 == 21
    *   - - -                           << 16 - n this would give use the n right most bits.
    *   1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 result.
    *   - - - 
    *   0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 >> left shift n bits.
    * 
    *   ------------------------------- Then we bitwise | the results of both the left and right shift above.
    *   1 0 1 0 0 0 0 0 0 0 0 0 0 0 1 0 == 40962
    *
    */
    unsigned short x = 21;
    int n = 3;
    printf("%d\n", rightrot(x, n));

    return 0;
}

unsigned rightrot(unsigned short x, int n)
{
    unsigned short r_digits = 0;
    unsigned short l_digits = 0;

    r_digits = x << (USHRT_LEN - n);
    l_digits = x >> n;

    return r_digits | l_digits;
}