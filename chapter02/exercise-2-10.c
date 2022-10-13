/*
 *  Author:    Nick D'Amico
 *  Date:      10/09/22
 *  Exercise:  2-10
 *
 *  Objective:  Rewrite the function lower, which converts upper case letters
 *              to lower cae, with a conditional expression instead of if-else.
 * 
 *   Example 1:
 *               x = 'B' // 66
 *               1. Find offset between Lowercase and Uppercase 'A'..'a'
 *               2. Add that difference to the uppercase Letter to find result.
 *                  2.b if already, lower return character.
 * 
 *               (97 - 65) + 66 = 98
 *               ('A' - 'a') + x == lower of x.
 *   
 */

#include <stdio.h>

int lower(int c);
int main(void)
{
    int c;
    while((c = getchar()) != EOF)
        putchar(lower(c));
    return 0;
}

int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? ('a' - 'A') + c : c;
}