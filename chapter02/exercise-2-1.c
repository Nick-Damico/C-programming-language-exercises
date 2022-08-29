/*
*    Author: Nick D'Amico
*    Date:   8/29/22
*    Exercise:   2-1
*    Objective: Write a program to determine the ranges of
*               char, short, int, long variables
*               both signed and unsigned by printing appropriate
*               values from standard headers and by direct computation.
*/



#include <stdio.h>
#include <limits.h>
#include <math.h>

int power(int base, int exponent);

int main(void) {
    printf("Print Data type ranges.\n");
    printf("Char: %12d\n", CHAR_BIT);
    // printf("Unsigned Char: %3d\n", UCHAR_MAX);
    // printf("Char Min: %8d\n", SCHAR_MIN);
    // printf("Char Max: %8d\n", SCHAR_MAX);
    // printf("Unsigned Char: %3d\n", SCHAR_MAX);

    printf("Computed Unsigned Min: %d\", power(2, 8));
    return 0;
}


int power(int base, int exponent) {
    int result = 1;
    while(exponent > 0) {
        result = result * base;
        --exponent;
    }
    return result;
}