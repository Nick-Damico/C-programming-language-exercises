#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 10


int main(void)
{
    /* Print Fahrenheit to Celsius */
    /* Formula: (5.0/9.0)*(fahr-32) */

    for(int fahr = LOWER; fahr <= UPPER; fahr+=STEP)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    

    return 0;
}