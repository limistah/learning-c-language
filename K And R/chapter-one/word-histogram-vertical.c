/* Vertical Histogram of words in a Sentence */

#include <stdio.h>
#define MAXWORDLENGTH 20 /* Maximum length of a word */
#define MAXWORDS 25      /* Maximum No of words in a sentence */

int main(void)
{
  /* Creates a words array of maximum number of sentence the program can allow */
  int words[MAXWORDS];
  int i, c, j, nc, nw, wl, cwl;

  for (i = 0; i < MAXWORDS; ++i)
    words[i] = 0; /* Initializes words to 0 */

  /* New Char, New Word, Word Length, and Current Word Length */
  nc = nw = wl = cwl = 0;

  while ((c = getchar()) != EOF)
  {
    ++nc; // pre-increment until space is encountered
    if ((c == ' ' || c == '\n' || c == '\t') && nw < MAXWORDS)
    {
      /*
      Update the value at nw to the value at the current space - 1 (the space)
      */
      cwl = words[nw] = nc - 1; /* -1 for excluding the space in the word length */
      ++nw;                     /* Updates the word position */
      nc = 0;                   /* resetting the word-length for the next word */
      /* Current word length is more than the store word length AND */
      /* Current word length is <= MAXWORDLENGTH */
      /* update wl to cwl else restrict to max word length */
      if (cwl >= wl && cwl <= MAXWORDLENGTH)
        wl = cwl;
      else if (cwl > MAXWORDLENGTH)
        wl = MAXWORDLENGTH;
      cwl = 0;
    }
  }
  putchar('\n');
  /* 
    Starts from the maximum word length down to till 1
  */
  for (i = wl; i >= 1; --i) /* Prints horizontal spaces in reverse order */
  {
    /*
      Starts from the number of words encountered in the input
    */
    for (j = 0; j <= nw; ++j) /* Prints vertical spaces */
    {
      /* If the number of chars at words[j] is not greater to the i value */
      if (i <= words[j])
        putchar('*');
      else
        putchar(' ');
    }
    putchar('\n');
  }

  return 0;
}