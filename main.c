#include <stdio.h>

int data1 = 100;
int main()
{
  int a = 100;
  int *ptr = &a;
  printf("Address of a: %p\n", ptr);
  printf("value of a: %d\n", *ptr);
  *ptr++;

  int arr[] = {120, 130, 145, 567, 900};
  int *x = &arr[0];
  int *y = &arr[1];

  printf("Answer is: %d\n", *x-*y);
  printf("Answer is: %d\n", *x+*y);
  return (0);
}
