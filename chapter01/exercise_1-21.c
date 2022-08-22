// EXERCISE 1-21 from chapter 01 of The C Programming Book v2

#include <stdio.h>

#define MAXLINE 80
#define NEWLINE '\n'
#define TAB '\t'
#define TAB_CT 8
#define TAB_REPLACEMENT '#'

int get_line(char line[]);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line)) > 0)
        printf("%s", line);

    return 0;
}

int get_line(char s[])
{
    int c;
    int i = 0;

    while ((c = getchar()) != EOF && c != NEWLINE)
    {
        if (c == TAB)
        {
            int j = TAB_CT - (i % TAB_CT);

            while (j > 0)
            {
                s[i] = TAB_REPLACEMENT;
                i++;
                j--;
            }
        }
        else
        {
            s[i] = c;
            i++;
        }
    }
    if (c == NEWLINE)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}