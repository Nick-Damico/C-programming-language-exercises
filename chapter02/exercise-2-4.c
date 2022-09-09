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
    printf("s1 is %s\n", s1);
    printf("s2 is %s\n", s2);

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

/*
*   This would be better than 0(n^2) if I used a
*   charmap.
*/
void ssqueeze(char s1[], char s2[])
{
    int i, j;
    int pos = 0;    // Track current position to write non-found character.
    short found;    // Flag if character is found in string2; These should not be written.

    while (s1[i] != '\0')
    {
        found = 0;
        j = 0;

        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j++])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            s1[pos++] = s1[i];
        }
        i++;
    }
    s1[pos] = '\0';
}