/* Calculates simple interest */
#include <stdio.h>

int main()
{
  int p, n;
  float r, si;

  printf("Enter the value for: Principal, Number of years, Rate \n");
  scanf("%d %d %f", &p, &n, &r);
  /* Formula for simple interest */
  si = p * n * r / 1000;

  printf("%.2f", si);

  return 0;
}
