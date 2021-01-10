#include <stdio.h>

#define LOWER 0 /* lower temp of the range. */
#define UPPER 300 /* upper range of temp. */
#define STEP  20 /* unit of steps between lower to upper temps. */

float convert_to_celsius(float fahr);
void print_temp(float fahr, float cels);
void prnt_table_header(void);

int main()
{
  /* Fahrenheit-Celsius table for fahr = 20, ..., 300
   * Going from a range of 0..300 in steps of 20, 
   * Print out the Celsius temps */

  float fahr, cels;
  float another_int = 0.0;
  fahr = LOWER;  

  prnt_table_header();
  /* Display conversion chart */
  while(fahr <= UPPER)
  {
    cels = convert_to_celsius(fahr);
    print_temp(fahr, cels);
    fahr += STEP;
  }
}

float convert_to_celsius(float fahr)
{
  return ( 5.0 / 9.0 ) * (fahr - 32.0);
}

void print_temp(float fahr, float cels)
{
  printf("%10.0f\t%7.1f\n", fahr, cels);
}

void prnt_table_header(void)
{
  printf("%s\t%s\n", "Fahrenheit", "Celsius");
  printf("=======================\n"); /* heading1 + heading2 + tab(8) = 15 */
}
