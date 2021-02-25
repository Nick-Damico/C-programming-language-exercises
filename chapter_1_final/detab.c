#include <stdio.h>
#define TABCT 8

int main(void)
{
  int i,c,pos;
  pos = 0;
  while((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      for(i = 0; i < (TABCT - pos); ++i)
        putchar('_');
      pos = 0; /* reset pos */
    } else {

       if(c == '\n')
      {
        putchar(c);
        pos = 0;
      } else {
        putchar(c);
        ++pos;  
      }
    }
  }
  return 0;
}

