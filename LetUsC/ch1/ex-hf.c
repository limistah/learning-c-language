
#include <stdio.h>
/*
(f)
Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.
*/

int main(void)
{
  int C, D, temp;
  printf("Enter the value for C and D separated by space: ");
  scanf("%d %d", &C, &D);
  temp = C;
  C = D;
  D = temp;
  printf("Interchanged!!! C: %d, D %d", C, D);
  return 0;
}
