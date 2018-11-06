#include <stdio.h>

/*
Print Fahrenheit to celsius table for fahr = 20, 40, 60 , 80 ... 300
*/

#define LOWER 0   /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* Step size */

main()
{
  float fahr, celsius;

  fahr = LOWER;
  printf("F\t   Cel\n");
  printf("==============\n");
  // Exercise 1.5 : Reversed temperature range
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
  {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }
  return 0;
}