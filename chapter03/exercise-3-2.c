/*
 *  Author:    Nick D'Amico
 *  Date:      11/03/22
 *  Exercise:  3-2
 *
 *  Objective:  Write a function escape(s,t) that coverts characters like newline
 *              and tab into visible escape sequences like \n and \t as it copies
 *              the string t to s. Use a switch. Write a function for the other direction as
 *              well, coverting escape sequences into the real characters.
 *
 * 
 *              
 */

#include <stdio.h>

#define MAX_LEN 100
// Coverts string t to s replacing newline and tabs with escape characters.
void escape(char s[], char t[]);
int readline(char s[]);

int main(void)
{
    int i;
    char s[MAX_LEN];
    char t[MAX_LEN];

    while ((i = readline(s)) > 0)
    {
        printf("length: %i\n", i);
        // call escape(s, t);
        // printf("%s\n", t);
    }
    
    return 0; 
}

void escape(char s[], char t[])
{
    
}

int readline(char s[])
{
    int c;
    int i;
    for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    
    return i-1; // Do not count the newline character;
}