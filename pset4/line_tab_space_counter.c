#include <stdio.h>

int main(void)
{
  /* 1. Count spaces.
   * 2. Count tabs.
   * 3. Count newline. */
  int sc,tc,nc, c;
  sc = 0;
  tc = 0;
  nc = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++sc; 
    if (c == '\t')
      ++tc;
    if (c == '\n')
      ++nc;
  }
  printf("Total spaces: %d\n", sc);
  printf("Total tabs: %d\n", tc);
  printf("Total newline: %d\n", nc);
}
