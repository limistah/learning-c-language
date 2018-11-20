
#include <stdio.h>
/*
(e)
The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.
*/

int main(void)
{
  float l, b, a, p;
  printf("Enter the Length and Breadth of the rectangle: ");
  scanf("%f %f", &l, &b);
  a = l * b;
  p = 2 * a;
  printf("\nArea: %.2f, Perimeter: %.2f\n", a, p);
  return 0;
}
