/* Longest Line Program
    - [x] Print the longest line.
    Longest line > Limit
        - [x] Print Line upto Limit.
        - [x] Output full length of line with message. */

#include <stdio.h>
#include "exercise_1-16.h"

int main(void)
{
    int cur_len, max_len;
    cur_len, max_len = 0;
    while ((cur_len = get_line(line)) && cur_len > 0)
    {
        if(cur_len >= max_len)
        {
            max_len = cur_len;
            copy_line(line, longest_line);
        }
    }
    printf("Longest Line length was %d:\n%s\n", max_len, longest_line);
    if (max_len > MAX_LEN)
        printf("Max Length of %d Exceeded.\n", MAX_LEN);
    return 0;
}

int get_line(char line[])
{
    int i, len, c;
    for (i = 0; (c = getchar()) != EOF && c != NEWLINE; i++)
    {
        if (i < MAX_LEN)
            line[i] = c;
    }
    
    if (i >= MAX_LEN)
        line[MAX_LEN] = '\0';
    else
        line[i] = '\0';
    return i;
}

void copy_line(char from[], char to[])
{
    for (int i = 0; (to[i] = from[i]) != '\0'; i++)
        ;
}