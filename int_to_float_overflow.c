#include <stdio.h>

int main()
{
  int i = 0;
  int j = (int)(float)i;
  /*
  Fill in the blank below
  Find the smallest positive integer i such that i != j where j = (int)(float)i;

  Hint: Use a while loop.
  The sample solution only has four lines.
  */

  while (i == j)
  {
    i++;
    j = (int)(float)i;
  }
  printf("i=%d\nj=%d\n", i, j);
  return 0;
}