#include <stdio.h>

#define LOWER 0 /* lower temp of the range. */
#define UPPER 300 /* upper range of temp. */
#define STEP  20 /* unit of steps between lower to upper temps. */

int main()
{
  /* Fahrenheit-Celsius table for fahr = 20, ..., 300
   * Going from a range of 0..300 in steps of 20, 
   * Print out the Celsius temps */

  float fahr, cels;
  float another_int = 0.0;
  fahr = LOWER;  

  /* Add Table Heading */
  printf("%s\t%s\n", "Fahrenheit", "Celsius");
  printf("=======================\n"); /* heading1 + heading2 + tab(8) = 15 */
  /* Display conversion chart */
  while(fahr <= UPPER)
  {
    cels = ( 5.0 / 9.0 ) * (fahr - 32.0);
    printf("%10.0f\t%7.1f\n", fahr, cels);
    fahr += STEP;
  }
}
