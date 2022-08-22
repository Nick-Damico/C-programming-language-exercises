#include <stdio.h>

#define MAX_LINE_LENGTH 50
#define BLANK ' '

int main(void)
{
    int c,i;
    int marker; // mark index of first encountered blank
    char line[MAX_LINE_LENGTH];

    c,i = 0;
    marker = 0;
    while ((c = getchar()) && c != EOF)
    {
        if(c != BLANK)
        {
            if(marker > 0)
            {
                line[marker++] = ' ';
                i = marker;
                marker = 0;
            }

            line[i] = c;
        }
        else
        {
            if(marker == 0)
                marker = i;

        }
        ++i;
    }
    
    printf("%s", line);
    return 0;
}
