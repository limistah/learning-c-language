#include <stdio.h>

#define IN 1         /* inside of a word */
#define OUT 0        /* inside of a word */
#define NEWLINE '\n' /* new line character */
#define TAB '\t'     /* tab character */
#define SPACE ' '    /* tab character */

/* Count lines, words and characters in input  */
int main(void)
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == SPACE || c == NEWLINE || c == TAB)
      state = OUT;
    else if (state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("Lines:%d, Words: %d, Characters: %d\n", nl, nw, nc);
  return 1;
}