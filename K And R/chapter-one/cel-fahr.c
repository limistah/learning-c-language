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

  celsius = lower;
  printf("Cel\t   Fahr\n");
  printf("==============\n");
  while (celsius <= upper)
  {
    fahr = ((5.0 / 9.0) * celsius) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}