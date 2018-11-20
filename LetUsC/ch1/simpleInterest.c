/* Calculates simple interest */
#include <stdio.h>

main()
{
  int p, n;
  float r, si;

  p = 1000;
  n = 3;
  r = 8.5;

  /* Formula for simple interest */
  si = p * n * r / 1000;

  printf("%.2f", si);
}
