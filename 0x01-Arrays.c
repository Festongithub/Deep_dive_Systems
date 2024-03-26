#include <stdio.h>
int change = 5;
#define MONTHS 12
#define SIZE 500
int main()
{
  int numbers[] = {456, 789, 432, 234, 211, 567, 890, 432, 900};
  int len = sizeof(numbers)/ sizeof(numbers[2]);

  for (int i = 0; i < len; i++)
    {
      printf("Elements[%d]:[%d] in hexadecimal: %x\n",numbers[i] * change, numbers[i], numbers[i]);
    }

  int days[MONTHS] = {31, 29,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int index;

  for (index  = 0; index < MONTHS; index++)
    {
      printf("Months %d has %2d days.\n", index+1, days[index]);
    }

  int counter, students[SIZE];

  for (counter = 0; counter < SIZE; counter++)
    {
      students[counter] = 3 * counter;
      printf("[%d] : [%x]\n", students[counter], students[counter]);
    }
  return (0);
}
