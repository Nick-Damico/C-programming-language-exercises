#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
  /* Prints input one word at a time one a new line. */
  /* Example:
   * User input: One Two Three
   *
   * Output to console:
   * One
   * Two
   * Three */ 
  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    // This checks if at the end of a "word".
    if ((c == ' '|| c == '\t') && state == IN)  
    {
      state = OUT;
      putchar('\n');
    }
    else if (state == OUT) // Starting a new "word" update state.
      state = IN;

    // Print chars to console while in a "word".
    if (state == IN)
      putchar(c);
  }
  return 0;
}
