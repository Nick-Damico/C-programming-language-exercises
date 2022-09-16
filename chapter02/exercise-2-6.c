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
    *   x is our target number for setbits and returned value.
    *           4 3 2 1 0 ( positions ) 
    *   x = 28; 1 1 1 0 0
    *             - - -   -> bit to modify are ( 110 )  
    * 
    *   p is our position indicator.
    *   p = 3; 
    *   
    *   n is number of bits we will be targeting, so p + n will be our bit range.
    *   n = 2;
    *   
    *   Example of getbits:
    *   x shifted right (p+1-n)
    *           4 3 2 1 0 ( positions ) 
    *   x = 24; 1 1 0 0 0 ( starting position)
    *   x = 07; 0 0 1 1 0 ( after shift )
    *   ~(~0 << n)1 0 1 1 ( Generate bit mask )
    *            ---------
    *             0 0 1 1 ( Result is 3 )     
    *   
    * 
    *   Example of setbits:
    *   p = 3, n = 2
    *           7 6 5 4 3 2 1 0 ( positions ) 
    *   y = 7  (0 0 0 0 0 1 1 1) 
    *                       - -  ( right most bits of y)
    *                   0 0 0 1  ( ~0 ) 
    *                   0 1 0 0  ( << left shift ) 
    *                   1 0 1 1  ( then flip result of shift ) 
    *               &   0 0 1 1  ( bitwise & y == 3 )
    * 
    *           7 6 5 4 3 2 1 0  ( positions ) 
    *   x = 24 (1 1 1 1 1 1 1 1)
    *                   -        ( right most bits of y)
    *                   0 1 0 0  ( right shift ~0 ) 
    *                   1 0 1 1  ( then flip ~0 ) 
    */
    int x = 24;
    int p = 3;
    int n = 2;
    int y = 0;
    printf("Result: %d\n", setbits(x,p,n,y));
    printf("Result: %d\n", getbits(x,p,n));
    return 0;
}

int setbits(int x, int p, int n, int y)
{
    return y & ~(~0 << n);
}

/*
*   Borrowed from C programming book as a test example.
*/
unsigned getbits(unsigned x, int p, int n)
{
    return ((x >> (p+1-n)) & ~(~0 << n));
}