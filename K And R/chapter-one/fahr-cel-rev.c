#include <stdio.h>

/*
Print Fahrenheit to celsius table for fahr = 20, 40, 60 , 80 ... 300
*/

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* Step size */

  fahr = lower;
  printf("F\t   Cel\n");
  printf("==============\n");
  // Exercise 1.5 : Reversed temperature range
  for (fahr = upper; fahr > 0; fahr = fahr - step)
  {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }
  return 0;
}