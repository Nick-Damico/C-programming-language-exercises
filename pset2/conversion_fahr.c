# include <stdio.h>

int main()
{
  float cels, fahr;
  int lower, upper, step;

  printf("%s\n","Celsius to Farhenheit conversion");
  /* initialize values */
  lower = 0;
  step = 20;
  upper = 300;
  cels = lower;

  while(cels < upper)
  {
    /* convert celsius to farh */
    fahr = (cels * (9.0/5.0)) + 32;
    /* print table */
    printf("%3.1f\t%6.1f\n", cels, fahr);
    cels += step;
  }
}


