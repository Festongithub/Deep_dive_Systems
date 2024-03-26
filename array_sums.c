#include <stdio.h>

#define SIZE 10
int sum(int *ar, int n)
{
  int i;
  int total = 0;

  for (i = 0; i < n; i++)
    {
      total += ar[i];
    }
  printf("The size of ar is %zd bytes.\n", sizeof(ar));
  return (total);
}

char print_name(char *name)
{
  char *new_name = name;
  printf("New name is %s\n", new_name);
}

int first_element(int *arr)
{
  int *position = &arr[0];
  printf("Position is %d\n", *position);
}


int check_least_number(int *arr, int  length)
{
  int i ;
  length = sizeof(arr) / sizeof(arr[0]);

  for (i = 0; i < length; i++)
    {
      printf("Number of elements : %d\n", length);
      printf("Elements in hexadecimal %d\n", arr[i]);
    }
}

int sump(int *start, int *end)
{
  int total = 0;

  while (start < end)
    {
      total += *start;
      start++;
    }
  return (total);
}

int main()
{
  int arr[SIZE] = {23, 45, 67, 89, 90, 43, 213, 789, 543, 678};
  long answer;

  answer = sum(arr, SIZE);
  printf("The total number of marbles is %ld\n", answer);
  printf("The size of arr is %zd bytes.\n", sizeof(arr));

  first_element(arr);
  check_least_number(arr, SIZE);
  char *n_node = "Joy";
  print_name(n_node);
  int c = sump(arr, arr+SIZE);
  printf("Total numbers is %d\n", c);

  return (0);
}
