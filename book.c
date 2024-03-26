#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTIL 31

struct book {
  char title[MAXTITL];
  char author[MAXAUTIL];
  float value;
};

char *s_gets(char *st, int n)
{
  char *ret_val;
  char *find;


  ret_val = fgets(st, n, stdin);
  if(ret_val)
    {
      find = strchr(st, '\n');
      if (find)
	*find = '\0';
      else
	while(getchar() != '\n')
	  continue;
	    }
  return ret_val;
}

int main()
{
  struct book library;

  printf("Please enter the book title.\n");
  s_gets(library.title, MAXTITL);
  printf("Now enter the author\n");
  s_gets(library.author, MAXAUTIL);
  printf("Now enter the value.\n");
  scanf("%f", &library.value);
  printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
  printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
  printf("Done.\n");
  return (0);
}
