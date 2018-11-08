#include <stdio.h>

#define MAXLINE 1000 /* Maximum input per line */

/* getline: read a line into s return length */
int getLineLength(char s[], int limit)
{
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; /* null character, set this at the end of each line */
  return i;
}

void copy(char from[], char to[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

/* Print longest input line */
int main(void)
{
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input length */
  char longest[MAXLINE]; /* longest line saved here */
  max = 0;

  while ((len = getLineLength(line, MAXLINE)) > 0)
    if (len > max)
    {
      max = len;
      copy(line, longest);
    }

  if (max > 0) /* There was a line */
    printf("Longest line (%d chars): %s", max - 1, longest);

  return 0;
}
