#include <stdio.h>

int main()
{
  float weight;
  float value;

  printf("Enter your weight in pounds\n");
  scanf("%f", &weight);

  value = 1700 * weight * 14.5833;
  printf("Weight is worth %.2f\n", value);
  int i ;
  for (i = 0; i < 127; i++)
    {
      printf("%c\n", i);
    }
  return (0);
}
