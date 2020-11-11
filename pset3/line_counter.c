#include <stdio.h>

int main()
{
  /* Count lines via newline chars; Version 1 */

  int c, nl;
  nl = 0;
  while((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;

  printf("%d\n", nl);
}
