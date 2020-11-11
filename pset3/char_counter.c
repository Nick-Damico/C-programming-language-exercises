#include <stdio.h>

int main() 
{
  /* count characters in input; 1st version */

  /* long nc = 0;

    while(getchar() != EOF)
    {
      ++nc;  
      printf("%ld\n", nc);
    }
  */

  /* Version 2; For Loop */
  double nc;
  for(nc = 0; getchar() != EOF; i++)
    ; /* C requires a for loop to have a body
         the semi-colon meets the req. called null statement */
  printf("%0.f\n", nc);
}
