
/*
 *  Author:     Nick D'Amico
 *  Date:       8/31/22
 *  Exercise:   2-3
 *  Objective:  Write the function htoi(s), which converts
 *              a string of hexadecimal digits (including an optional Ox or OX)
 *              into its equivalent integer value. 
 *              Allowable digits are 0 through 9, a through f, A through F.
 * 
 *  Solution: 
 *      
 *  Notes:  
 *          
 */

#include <stdio.h>

#define MAXLENGTH 100

int htoi(char s[]);
int isHexadecimal(char s[]);
int readline(char s[]);

// TODO: Update to use ARGS once this concept is introduced in the C programming book.
int main(void) {
    char line[MAXLENGTH];

    while(readline(line) > 0) {
        printf("check hexadecimal: %d\n", isHexadecimal(line));
        if (isHexadecimal(line))
        {
        }
        
        printf("%s - Not a hexadecimal string.\n", line);
    }
    return 0;
}

/*
*   Coversion Math Hexadecimal to Integer
*   2           8
*   (16 * 2)    (8 * 1)
*   0x28 == 40(int)
*   f = (2 x 16^1) + (8 x 16^0)
*   (2 * power(16,2)) + (8 * power(16, 0))
*
*   What is the length of the string?
*   28 is a length of 2;
*   Start counter at the len = 2;
*   Calculate the first hexadecimal number power(2 * power(16,2))
*
*   We might need to account for the suffix Ox or OX, so
*   length might be len -2.
*/
int isHexadecimal(char s[]) {
    // A valid hexadecimal string can start with Ox or OX.
    return s[0] == 'o' || s[0] == 'O' && s[1] == 'x' || s[1] == 'X';
}

int htoi(char s[]) {
}

int readline(char s[]) {
    int i, c;

    for (i = 0; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n') 
        s[i++] = c;

    s[i] = '\0';

    return i;
}