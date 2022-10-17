/*
 *  Author:    Nick D'Amico
 *  Date:      10/06/22
 *  Exercise:  2-9
 *
 *  Objective:  The binary serach, from earlier in the chapter, makes two tests inside the loop.
 *              , when one would suffice (at the price of more tests outside). Write a version with
 *              only one test inside the loop and measure the difference in run-time.
 *
 * 
 *              
 */

#include <stdio.h>

int binarysearch(int x, int v[], int n);
int main(void)
{
    int x = 6;
    int n = 6;
    int v[] = { 0, 3, 5, 6, 7, 8 };
    printf("Position is: %d\n", binarysearch(x, v, n));

    return 0; 
}

int binarysearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    mid = 0;
    high = n - 1;
    while (low <= high && x != v[mid])
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (v[mid] == x) ? mid : -1;
}