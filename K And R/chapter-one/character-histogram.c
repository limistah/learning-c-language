/* Ex 1.14 */
#include <stdio.h>

#define CHARCODELEN 255 /* Length of the character codes */

int main(void)
{
  int chars[CHARCODELEN], c, i, j;

  for (i = 0; i < CHARCODELEN; i++)
  {
    chars[i] = 0;
  }

  while ((c = getchar()) != EOF)
  {
    ++chars[c];
  }

  for (i = 0; i < CHARCODELEN; i++)
  {
    if (chars[i] > 0)
    {
      if (i == ' ')
        printf("Space");
      else if (i == '\n')
        printf("Enter");
      else
        putchar(i);
      printf(": ");
      for (j = 0; j < chars[i]; j++)
        putchar('*');
      putchar('\n');
    }
  }

  return 0;
}
