/*
 *  Author:    Nick D'Amico
 *  Date:      9/12/22
 *  Exercise:  2-6
 *
 *  Objective:  Write a function setbits(x,p,n,y)
 *              that returns x with the n bits that begin at position p
 *              set to the rightmost n bits of y, leaving the other bits unchanged.
 *              This post outlines the problem much better:
 *                  https://stackoverflow.com/questions/1415854/kr-c-exercise-help
 *
 *  Steps:      Return (x) after setting bits.
 *              Locate bits starting at position (p)
 *                if p(5) and x(250), so the 5 position in a 16 bit int is 16.
 *              
 *              
 *
 *  Note2:      You are interpreting "the n bits starting at position p" to signify bits p, p+1, ..., p+n-1.
 *              
 */

#include <stdio.h>

int setbits(int x, int p, int n, int y);
unsigned getbits(unsigned x, int p, int n);

int main(void)
{
    /*
    *   Helpful visualization:
    * 
    *   p = 3, n = 2
    *   Get y n bits
    *   -----------------------------------------
    *           7 6 5 4 3 2 1 0 ( positions ) 
    *   y = 7  (0 0 0 0 0 1 1 1) 
    *                       - -  ( right most n bits of y)
    *           0 0 0 0 0 0 0 1  ( ~0 ) 
    *           0 0 0 0 0 1 0 0  ( << left shift n bits (y << n)) 
    *                   0 0 1 1  ( then flip result of shift ~0) 
    *                   0 0 1 1  ( then flip result of shift ~0) 
    *               &   0 0 1 1  ( bitwise & y == 3 )
    * 
    *   Get x n bits
    *   -----------------------------------------
    *           7 6 5 4 3 2 1 0  ( positions ) 
    *   x = 28 (0 0 0 1 1 1 0 0)
    *                   - -      ( find our range )
    *                   0 0 0 1  ( ~0 ) 
    *                     1 0 0  ( << left shift n ) 
    *                     0 1 1  ( flip mask ~0 ) 
    *                 0 1 1 0 0  ( << left shift to pos ) 
    *               & 0 1 1 0 0  = 12
    * 
    *   Use y mask to getbits of x at pos( p )
    *   -----------------------------------------
    *           7 6 5 4 3 2 1 0  ( positions ) 
    *   x = 28 (0 0 0 1 1 1 0 0)
    *   y(mask)(0 0 0 0 0 0 1 1)
    *                   - -      ( find our range )
    *                   1 1 0 0  ( shift y mask )
    * 
    *   Use clear? x bits
    *   -----------------------------------------
    *           7 6 5 4 3 2 1 0  ( positions ) 
    *   x = 28 (0 0 0 1 1 1 0 0)
    *                   - -      ( find our range )
    *                   0 0 0 1  ( ~0 flip(1) bits )
    *           0 0 0 0 0 1 0 0  ( << shift bits )
    *           0 0 0 0 0 0 1 1  ( flip(2) )
    *           0 0 0 0 1 1 0 0  ( shift )
    *           1 1 1 1 0 0 1 1  ( ~0 fip(3) bits again )
    *         & 0 0 0 1 1 1 0 0  
    *           0 0 0 1 0 0 0 0  ( result == 16 )
    * 
    * 
    *   Replace x bits at pos p with y bits
    *   -----------------------------------------
    *           7 6 5 4 3 2 1 0  ( positions ) 
    *   x = 28 (0 0 0 1 0 0 0 0)
    *                   - -      ( find our range )
    *   y(mask)(0 0 0 0 1 1 0 0)
    *   |       0 0 0 1 1 1 0 0  (result is 28)
    *   
    */
    int x = 28;
    int p = 3;
    int n = 2;
    int y = 7;
    printf("Result: %d\n", setbits(x,p,n,y));
    // printf("Result: %d\n", getbits(x,p,n));
    return 0;
}

int setbits(int x, int p, int n, int y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & (~(~0 << n))) << (p + 1 - n);
}

/*
*   Borrowed from C programming book as a test example.
*/
unsigned getbits(unsigned x, int p, int n)
{
    return ((x >> (p+1-n)) & ~(~0 << n));
}