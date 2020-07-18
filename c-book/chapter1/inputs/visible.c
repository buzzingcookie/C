#include <stdio.h>


int main(void)
{
  int c, tabs, slash;
  
  slash = '/';

  while((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      c = printf("<--TAB-->");
    }
    if(c == ' ')
    {
      c = printf("_SPACE_");
    }
    
    putchar(c);
  }

  return 0;
}