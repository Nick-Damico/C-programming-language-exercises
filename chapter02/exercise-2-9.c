/*
 *  Author:    Nick D'Amico
 *  Date:      10/06/22
 *  Exercise:  2-9
 *
 *  Objective:  A two's complement number system, x &= (x-1) deletes
 *              the rightmost 1-bit in x.
 *              Explain why. 
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
 */

#include <stdio.h>

int main(void)
{
    return 0;
}