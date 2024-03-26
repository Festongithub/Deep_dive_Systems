#include <stdio.h>
#define SIZE 4
#define MONTHS 12
int main(void)
{
  short dates [SIZE];
  short *pti;
  short index;
  double bills[SIZE];
  double *ptf;

  pti = dates;
  ptf = bills;

  printf("%23s  %15s\n", "short", "double");
  for (index = 0 ; index < SIZE; index++)
    {
      printf("pointers + %d: %10p %p\n", index, pti + index, ptf + index);
    }

  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
  int i;

  for (i = 0; i < MONTHS; i++)
    {
      printf("Month %2d  has %2d.\n", i+1, *(days+i));
      printf("Month %2d has %2d.\n", i+1, days[i]);
    }
  return (0);
}
