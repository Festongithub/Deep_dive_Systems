#include <stdio.h>
#include <string.h>

int main()
{
  char str1[5] = "Hello";
  char message[5] = "World";
  char str2[5];
  int len;

  strcpy(str2, message);
  printf("%s\n", str2);

  strcat(str1, message);
  printf("New message is %s\n",str1);

  len = strlen(message);
  printf("%d\n", len);
  return (0);
}
