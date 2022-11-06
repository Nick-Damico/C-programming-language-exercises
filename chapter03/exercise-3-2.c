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
void unescape(char t[], char u[]);
int readline(char s[]);

int main(void)
{
    int i;
    char s[MAX_LEN];
    char t[MAX_LEN];
    char u[MAX_LEN];

    while ((i = readline(s)) > 0)
    {
        escape(s, t);
        printf("%s\n", t);
        unescape(t, u);
        printf("%s\n", u);
    }
    
    return 0; 
}

void escape(char s[], char t[])
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case '\t':
            t[j] = '\\';
            ++j;
            t[j] = 't';
            break;
        case '\n':
            t[j] = '\\';
            ++j;
            t[j] = 'n';
            break;
        default:
            t[j] = s[i];
            break;
        }

        ++i;
        ++j;
    }
    t[j] = '\0';
}

void unescape(char t[], char u[])
{
    int i = 0;
    int j = 0;
    while (t[i] != '\0')
    {
        switch (t[i])
        {
        case '\\': 
            if (t[i+1] == 'n')
                u[j] = '\n';
            else if (t[i+1] == 't')
                u[j] = '\t';

            ++i;
            break;
        default:
            u[j] = t[i];
            break;
        }
        ++i;
        ++j;
    }
    u[j] = '\0';
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
    
    return i;
}