#include <stdio.h>

int main(void)
{
  /* Replace Tabs with '\t\ and Backpsaces w '\b' */

  int c;
  int s_char;
  char t;
  while ((c = getchar()) != EOF)
  {
    if (c == '\t' || c == '\b' || c == '\\')
    {
      if (c == '\t')
        printf("\\t");
        
      if (c == '\b')
        printf("\\b");

      if (c == '\\')
        printf("\\");

      printf("%d", s_char);
    }
    if (c != '\t' && c != '\b')
      putchar(c);
  }
  return 0;
}
