#include <stdio.h>

int main(void)
{
    int prev_c, c;

    prev_c  = 0;
    while ((c = getchar()) != EOF)
    {
      if (c == ' ')
      {
        if (prev_c != ' ')
        {
          putchar(c);
          prev_c = c;
        }
      }

      if (c != ' ')
      {
        putchar(c);
        prev_c = 0; // Reset SPACE counter;
      }
    }
  return 0;
}
