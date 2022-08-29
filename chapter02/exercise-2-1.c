/*
*    Author:    Nick D'Amico
*    Date:      8/29/22
*    Exercise:  2-1
*    Objective: Write a program to determine the ranges of
*               char, short, int, long variables
*               both signed and unsigned by printing appropriate
*               values from standard headers and by direct computation.
*/



#include <stdio.h>
#include <limits.h>
#include <math.h>

#define SHRT_SIZE 16

int power(int base, int exponent);

int main(void) {
    printf("Print Data type ranges.\n");
    printf("----------\n");
    printf("Char: %d bits\n", CHAR_BIT);
    printf("Unsigned char ranges from %d to %d\n", 0, power(2, CHAR_BIT) - 1);
    printf("Signed char ranges from %d to %d\n", -(power(2, 8) / 2), power(2, 8) / 2 - 1);

    printf("----------\n");
    printf("Short: %d bits\n", SHRT_SIZE);
    printf("Unsigned Short ranges from %d to %d\n", 0, USHRT_MAX);
    printf("Computed Unsigned Short ranges from %d to %d\n", 0, power(2, SHRT_SIZE) - 1);
    printf("Signed Short ranges from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Computed Signed Short ranges from %d to %d\n", -(power(2, SHRT_SIZE) / 2), power(2, SHRT_SIZE) / 2 -1);

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