/*
 *  Author:     Nick D'Amico
 *  Date:       9/6/22
 *  Exercise:   2-4
 *  Objective:  Write an alternate version of squeeze(s1, s2) that deletes
 *              each character in s1 that matches any character in the string s2.
 * 
 *  Example:    s1 = 'Hello', s2 = 'Howdy'
 *              output -> 'ello'
 * 
 *  Solution: 
 *      
 *  Notes:  
 *          
 */

#include <stdio.h>
#define MAXLEN 100

void readline(char s[]);
void ssqueeze(char s1[], char s2[]);
int main(void)
{
    char s1[MAXLEN];
    char s2[MAXLEN];
    readline(s1);
    readline(s2);

    ssqueeze(s1, s2);
    printf("%s\n", s1);
    
    return 0;
}

void readline(char s[])
{
    int c;
    int i = 0;
    while (i < MAXLEN-1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
        
    s[i] = '\0';
}

void ssqueeze(char s1[], char s2[])
{
}