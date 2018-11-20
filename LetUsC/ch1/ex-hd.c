
#include <stdio.h>
/*
(d)
Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.
*/

int main(void)
{
  int fahrenheit;
  float celsius;
  printf("Input temperature in Fahrenheit: ");
  scanf("%d", &fahrenheit);
  celsius = (5.0 / 9.0) * (fahrenheit - 32);
  printf("\n%d Fahrenheit is in %.2f Celsius\n", fahrenheit, celsius);
  return 0;
}
