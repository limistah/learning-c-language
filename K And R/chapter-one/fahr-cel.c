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
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}