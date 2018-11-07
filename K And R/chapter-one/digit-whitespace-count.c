#include <stdio.h>
/* Count digits white space and others */
int main()
{
  int c, i, nwhite, nother; /* Must me declared! DANG! */
  int ndigit[10];           /* Must be declared */
  nwhite = nother = 0;

  for (i = 0; i < 10; i++)
    ndigit[i] = 0; /* Initialized in a loop, EXPLICITLY */

  /* Gets input till the END OF LINE is encountered */
  while ((c = getchar()) != EOF)
  {
    // Here is the magic, it uses the int value of char
    // This is what c is for every value from the terminal
    // 0 is 48 and 9 is 57
    // So it is saying when 1(49) is entered:
    // If the int value of 1(49) is >= 0(48) and <= 9(57)
    // get me an index of 0(48) - 1(49) = 1
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }
  printf("digits: ");

  for (i = 0; i < 10; ++i)
    printf(" %d: %d;", i, ndigit[i]);
  printf("\nWhite space = %d\nOther Chars: %d\n", nwhite, nother);

  return 0;
}