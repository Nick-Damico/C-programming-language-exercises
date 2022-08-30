/*
 *    Author:    Nick D'Amico
 *    Date:      8/31/22
 *    Exercise:  2-2
 *    Objective: Write a loop equivalent to the for loop
 *               `i<lim-1 && (c = getchar()) != '\n' && c != EOF`
 *               without using && or ||.
 * 
 *    Solution: See lines start on 39.
 *
 *   && and || operators evaulate left to right, as soon as
 *   truth or falsehood of the result is know the evaluation stops.
 *
 *   By definition, the numeric value of a relational or logical expression is 1
 *   if the relation is true, and 0 if the relation is false.
 */

#include <stdio.h>

#define MAXLINE 100

int readline(char line[]);

int main(void)
{
    char line[MAXLINE];
    while (readline(line) > 0)
        printf("%s", line);

    return 0;
}

int readline(char s[])
{
    char c;
    int i = 0;

    /*
    *   Replace the line below with a loop that does not use && or || operators.
    *
    *   for(i = 0; i < MAXLINE-1 && (c = getchar()) != '\n' && c != EOF; ++i)
    * 
    *   An alternative using evaluation of truthy 1 and falsehood of 0.
    *   Here each part of the expression would evaulate to 1;
    *   If all are truthy the expected result would be 3;
    *   
    *   for(int i = 0; ((i < MAXLINE-1) + ((c = getchar()) != EOF) + (c != '\n')) == 3; ++i) {
    */
    while ((c = getchar()) != EOF)
    {
        if (i >= MAXLINE - 1)
            break;
        if (c == '\n')
            break;

        s[i++] = c;
    }

    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}