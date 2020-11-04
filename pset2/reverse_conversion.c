#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main()
{
  for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
  {
    /* Using rule that wherever a variable is acceptable, a more
     * more complicated expression of that data type will work. */
    printf("%3d \t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }
}
