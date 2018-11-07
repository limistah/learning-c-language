#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrConverter(float fahr)
{
  return (5.0 / 9.0) * (fahr - 32);
}

int main(void)
{
  float fahr, celsius;

  fahr = LOWER;
  printf("F\t   Cel\n");
  printf("==============\n");
  while (fahr <= UPPER)
  {
    printf("%3.0f\t%6.1f\n", fahr, fahrConverter(fahr));
    fahr = fahr + STEP;
  }
}