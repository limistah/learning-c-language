#include <stdio.h>

int main(void)
{
  int c;

  printf("Test for getchar() != EOF = %d\n", getchar() != EOF); // Exercise 1.7
  printf("The value of EOF = %d\n", EOF);                       // Exercise 1.6
  while ((c = getchar()) != EOF)
  {
    putchar(c);
    c = getchar();
  }

  return 1;
}