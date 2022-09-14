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

int main(void)
{
    /*
    *   Helpful visualization:
    *   x is our target number for setbits and returned value.
    *   x = 28; 1 1 1 0 0
    *           4 3 2 1 0 ( positions ) 
    *             - - -   -> bit to modify are ( 110 )  
    *   p is our position indicator.
    *   p = 3; 
    *   
    *   n is number of bits we will be targeting, so p + n will be our bit range.
    *   n = 2;
    *
    *   y is the source of the updated bit for setting x.
    *   y = 42;  1 0 1 0 1 0
    *            5 4 3 2 1 0 ( positions )
    *            - - -       -> bit to modify x by ( 101 )
    *           
    *   setbits(28, 3, 2, 42) == 26(11010)
    */
    int x = 28;
    int p = 3;
    int n = 2;
    int y = 42;
    printf("Result: %d\n", setbits(x,p,n,y));
    return 0;
}

int setbits(int x, int p, int n, int y)
{
    return 0;
}