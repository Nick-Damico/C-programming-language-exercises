/*
 *  Author:    Nick D'Amico
 *  Date:      11/06/22
 *  Exercise:  3-3
 *
 *  Objective:  Write a function expand(s1,s2) that expands shorthand notations like
 *              a-z in the string s1 into the equivalnet complete list abc...xyz in
 *              s2. Allow for letters of either case and digits, and be prepared
 *              to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that leading
 *              or trailing - is taken literally.
 *
 * 
 *              
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int readline(char l[]);
void expand(char l[], char s[], int len);

int main(void)
{
    int len;
    char l[MAX_LEN];
    char s[MAX_LEN];
    while ((len = readline(l)) > 0)
    {
        expand(l, s, len);
        printf("%s\n", s);
    }
    
    return 0; 
}

void expand(char l[], char s[], int len)
{
    int i, j;
    char start_pos, end_pos;
    start_pos = end_pos = 0;
    for (i = 0; i < len-1; i++)
    {
        if (isalpha(l[i]) && start_pos == 0)
            start_pos = l[i];
        else if ( isalpha(l[i]) && end_pos == 0)
            end_pos = l[i];
    }

    for (i = 0, j = start_pos; j <= end_pos; i++, j++)
        s[i] = j; 

    s[i] = '\0'; 
}

int readline(char s[])
{
    int c;
    int i;
    for (i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    s[i] = '\0';
    
    return i;
}