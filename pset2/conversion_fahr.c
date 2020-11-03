# include <stdio.h>

int main()
{
  float cels, fahr;
  int lower, upper, step;

  /* initialize values */
  lower = 0;
  step = 20;
  upper = 300;
  cels = lower;
  
  /* Add Table Heading */
  printf("%s\t%s\n", "Celsius", "Fahrenheit");
  printf("==================\n");
  while(cels < upper)
  {
    /* convert celsius to farh */
    fahr = (cels * (9.0/5.0)) + 32;
    /* print table */
    printf("%7.0f\t%10.1f\n", cels, fahr);
    cels += step;
  }
}
