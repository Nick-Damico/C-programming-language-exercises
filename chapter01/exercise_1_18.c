/* Count tabs, newlines and blanks */

#include <stdio.h>

#define BLANK ' '
#define NEWLINE '\n'
#define TAB '\t'

int main(void)
{
    int c;  // current character
    int b_ct = 0;
    int n_ct = 0;
    int t_ct = 0;

    while ((c = getchar()) && c != EOF)
    {
        if (c == BLANK)
        {
            ++b_ct;
        }
        else if(c == NEWLINE)
        {
            ++n_ct;
        }
        else if(c == TAB)
        {
            ++t_ct;
        }
        
    }

    printf("Blanks: %9d\n", b_ct);
    printf("Newlines: %9d\n", n_ct);
    printf("Tabs: %9d\n", t_ct);
    return 0;
}