
#include <stdio.h>
/*
(h)
If a five-digit number is input through the keyboard, write a
program to reverse the number.
*/

int main(void)
{
  int digits, v1, v2, v3, v4, v5, total;
  printf("Enter a Five digit number: ");
  scanf("%d", &digits);
  v5 = digits % 10;
  v4 = (digits % 100) / 10;
  v3 = (digits % 1000) / 100;
  v2 = (digits % 10000) / 1000;
  v1 = (digits % 100000) / 10000;
  total = v1 + v2 + v3 + v4 + v5;
  printf("Values: %d, Reversed: %d%d%d%d%d", digits, v5, v4, v3, v2, v1);
  return 0;
}
