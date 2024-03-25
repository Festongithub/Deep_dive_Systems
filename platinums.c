#include <stdio.h>
#include <inttypes.h>

int main()
{
  char ch;

  int32_t me32;
  me32 = 45933945;

  printf("me32 = %d\n", me32);
  printf("me32 = %" PRId32 "\n", me32);
  printf("Please enter a character\n");
  scanf("%c", &ch);
  printf("The code for %c is %d\n", ch, ch);
  return (0);
}

