#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
  /* Print a histogram of the length of words from input */
  /* Calculate the length of the word from input,
   * print a line for the histogram using the (#) char. */

  int c, i, state, wcount;
  c = wcount = 0;
  state = OUT;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\t' || c == '\n')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      ++wcount;
    }
    else
    {
      ++wcount;
    }
    /* Prints a histogram line using '#' characters */
    if (state == OUT && wcount > 0)
    {
      for (i = 0; i < wcount; ++i)
        printf("#");
      printf("\n");
      wcount = 0;
    }
  }
}
