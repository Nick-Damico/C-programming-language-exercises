#include <stdio.h>

#define IN 1  /* Inside a word */
#define OUT 0 /* Outside a word */

/* Count lines, words & characters in input */

int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("nl: %d, nw:%d, nc:%d\n", nl, nw, nc);
}
