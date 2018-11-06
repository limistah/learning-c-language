#include <stdio.h>

int main(void)
{
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ; // null statement, the oif block is empty
  printf("%ld\n", nc);
  return 1;
}