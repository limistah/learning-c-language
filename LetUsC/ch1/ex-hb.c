
#include <stdio.h>
/*
(b)
The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.

Converts distance in km to m, ft, in, cm.
*/

int main(void)
{
  float kilometer, meter, feet, inch, centimeter;

  printf("Enter the distance between two cities in kilometers(km)\n");
  scanf("%f", &kilometer);

  meter = kilometer * 1000.0;
  centimeter = meter * 10.0;
  inch = meter * 39.37008;
  feet = meter * 3.28084;
  printf("\nDistance: %.2f(km)\n\nMeters: %.2f\nInches: %.2f\nFeet: %.2f\n", kilometer, meter, inch, feet);
  return 0;
}
