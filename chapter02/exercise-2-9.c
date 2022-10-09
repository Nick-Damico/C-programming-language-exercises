/*
 *  Author:    Nick D'Amico
 *  Date:      10/06/22
 *  Exercise:  2-9
 *
 *  Objective:  A two's complement number system, x &= (x-1) deletes
 *              the rightmost 1-bit in x.
 *              Explain why. 
 *              x == 3  0 1 1
 *              x &= (x -1)
 *                    0 1 0 == 2
 *              x &= (2)
 *              0 1 1 & 0 1 0
 *              -------------
 *              0 1 0   Result would be 2
 * 
 *              One(1) is always the right most bit in any number.
 *              If we subtract 1 from x it will always have it's rightmost
 *              bit equal to zero, regardless of the size of x.
 * 
 *              Using the binary operator of & with the rightmost bit removed will
 *              result in the value of x - 1 always.
 *              
 *              
 *              Use this observation to write a faster version of
 *              of bitcount.
 * 
 *              Slow bitcount from pg.64
 *              int bitcount(unsigned x)
 *              {
 *                  int b;
 *                  for (b = 0; x != 0; x >>= 1)
 *                      if (x & 01)
 *                          ++b;
 *                  return b;
 *              }
 *              
 *              NOTE: x >>= 1
 *                    is eql to x = x >> 1
 * 
 *              1's complement, says take the positive unsigned number
 *              and flip it's bits to represent the negative number.
 *              Example:
 *                          5   (1 0 1)
 *                         -5   (0 1 0)
 *              1's complement still has the issue of (2) representations of
 *              zero.
 *              Example:
 *                          0 (0 0 0 0)
 *                         -0 (1 1 1 1)
 *              1's complement has a rule that if we have a carry bit of 1 that
 *              would end up in the sign bit position, to carry it to the rightmost
 *              bit instead.
 *              Example:
 *                          7 (0 1 1 1)
 *                         -3 (1 1 0 0)
 *                        + ------------
 *                            (0 0 1 1)
 *                               - This bit carries a 1, 1 + 1 == 2 we carry this to the rightmost position.
 *                            (0 1 0 0) == 4
 * 
 * 
 *              2's complement gives us finally a single representation for 0.
 *              If we have 4 bits that is 16 numbers. -7..7 but that is 14...?
 *              15 will give us our single 0, but what to do with the remain 1 number leftover??
 *              
 *              Example: Translate -4.
 *                      1.  4 (0 1 0 0)
 *                      2. -4 (1 0 1 1) :We translate the number using 1's complement rules; Flip the bits. 
 *                      3. -4 (1 0 1 1) :We then translate to 2's complement by adding (+1) to the 1's complement.
 *                         +1 ---------
 *                            (1 1 0 0) == This give us (-4)
 * 
 *              IMPORTANT: In 2's complement lefthand carries DO NOT carryover to the righthand most bit...
 *                         THEY ARE THROWN AWAY!
 * 
 *              Where did the last bit number go since there are no negative 0 representation?
 *              the number (1 0 0 0) is no longer negative zero, it is negative (-8).
 * 
 *              7..1
 *                      (0 1 1 1)   == 7
 *                      (0 1 1 0)   == 6
 *                      (0 1 0 1)   == 5
 *                      (0 1 0 0)   == 4
 *                      (0 0 1 1)   == 3
 *                      (0 0 1 0)   == 2
 *                      (0 0 0 1)   == 1
 *                      (0 0 0 0)   == 0
 *              
 *                      Why does (x &= (x - 1)) always remove the rightmost bit.
 *
 */

#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    int x = 6;    // Expected outcome to be 2.

    printf("%d\n", bitcount(x)); // Print result of bitcount.
    return 0;
}

int bitcount(unsigned x)
{
    int i = 0;
    while(x != 0)
    {
        x &= (x - 1);
        ++i;
    }
    return i;
}