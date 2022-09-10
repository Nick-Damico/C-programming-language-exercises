/*
 *  Author:    Nick D'Amico
 *  Date:      9/10/22
 *  Exercise:  2-5
 *
 *  Objective:  Write the function any(s1,s2), which returns the first location in the string s1
 *              where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
 *              (The standard library function strpbrk does the same job but return a pointer to the location.)
 *
 *  Solution:
 *
 *  Notes:
 *
 */

#include <stdio.h>

#define MAXLEN 100

short any(char s1[], char s2[]);
void readline(char s[]);

int main(void)
{
    char s1[MAXLEN];
    char s2[MAXLEN];

    readline(s1);
    readline(s2);
    short result = any(s1, s2);
    printf("%d\n", result);

    return 0;
}

short any(char s1[], char s2[])
{
    short pos = -1; // Start value in an unfound state.

    for (int i = 0; i < MAXLEN - 1 && s1[i] != '\0' && pos < 0; i++)
        for (int j = 0; j < MAXLEN - 1 && s2[j] != '\0' && pos < 0; i++)
        {
            if (s1[i] == s2[j])
                pos = i;
        }

    return pos;
}

void readline(char s[])
{
    int c;
    int i = 0;
    while (i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    s[i] = '\0';
}