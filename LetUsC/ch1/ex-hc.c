
#include <stdio.h>
/*
(c)
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.
*/

int main(void)
{
  int m1, m2, m3, m4, m5;
  float agg, p;
  printf("Input the student's 5 scores separated by space:\n");
  scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
  agg = (m1 + m2 + m3 + m4 + m5) / (100.0 * 5.0);
  p = agg * 100.0;
  printf("Aggregated Score: %.2f\nPercentage %%%.0f", agg, p);
  return 0;
}
