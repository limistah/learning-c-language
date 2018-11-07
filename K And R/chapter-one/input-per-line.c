#include <stdio.h>

#define IN 1  /*Inside of a text*/
#define OUT 0 /*outside of a text*/
#define SPACE ' '
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
  int nw = 0, c, state = OUT;

  while ((c = getchar()) != EOF)
  {
    if (c == SPACE || c == NEWLINE || c == TAB)
    {
      /* Pads the last character(a new line) with another new line */
      if (c == NEWLINE)
      {
        putchar('\n');
      }
      if (state == IN)
      {
        state = OUT;
        putchar('\n');
      }
    }
    else
    {
      if (state == OUT)
      {
        state = IN;
        ++nw;
      }
      putchar(c);
    }
  }
  printf("\n%d\n", nw);
  return 0;
}
