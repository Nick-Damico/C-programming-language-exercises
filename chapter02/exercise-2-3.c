
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
#include <math.h>
#include <ctype.h>

#define MAXLENGTH 100

int htoi(char s[], int len);
int isHex(char s[]);
int readline(char s[]);

// TODO: Update to use ARGS once this concept is introduced in the C programming book.
int main(void) {
    int len;
    char line[MAXLENGTH];

    while((len = readline(line)) > 0) {
        if (isHex(line))
            printf("%d\n", htoi(line, len));
        else
            printf("%s - Not a hexadecimal string.\n", line);
    }

    return 0;
}

int isHex(char s[]) {
    // A valid hexadecimal string can start with Ox or OX.
    return s[0] == '0' && s[1] == 'x' || s[1] == 'X';
}

/*
*   Coversion Math Hexadecimal to Integer
*   2           8
*   f = (2 x 16^1) + (8 x 16^0)
*   f = n += (currentValue * pow(16, currentPosition))
*
*   What is the length of the string?
*   28 is a length of 2;
*   Start counter (i) at the len = 2;
*   What is the current number position of the integer 2?
*   2 == 1
*   8 == 0
*   power = stringLength - (i) - 1
*   Calculate the first hexadecimal number power(currentValue * power(16,power))
*
*/
int htoi(char s[], int len) {
    int n;
    int power = 0;
    int value = 0;

    for(int i = 2; s[i] != '\0'; ++i)
    {         
        // Convert hex char number to correct integer value.
        if (isdigit(s[i]))
            n = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f' )
            n = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F' )
            n = s[i] - 'A' + 10;

        power = (len - i) - 1;  // Calculate current number position for raising x to correct power.
        value = value + (n * pow(16, power));
    }
    return value;
}

int readline(char s[]) {
    int i, c;

    for (i = 0; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    s[i] = '\0';

    return i;
}