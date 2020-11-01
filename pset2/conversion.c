#include <stdio.h>

int main()
{
  /* Fahrenheit-Celsius table for fahr = 20, ..., 300
   * Going from a range of 0..300 in steps of 20, 
   * Print out the Celsius temps */

  float fahr, cels;
  int lower, upper, step;
  float another_int = 0.0;

  lower = 0;    /* lower temp of the range. */
  upper = 300;  /* upper range of temp.  */
  step = 20;    /* unit of steps between lower to upper temps. */
  fahr = lower;  

  /* Add Table Heading */
  printf("%s\t%s\n", "Fahrenheit", "Celsius");
  printf("=======================\n"); /* heading1 + heading2 + tab(8) = 15 */
  /* Display conversion chart */
  while(fahr <= upper)
  {
    cels = ( 5.0 / 9.0 ) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, cels);
    fahr += step;
  }
}
