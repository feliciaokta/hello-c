#include <stdio.h>

// this program counts the amount of characters
// the count is saved in long integer "nc"
int main ()
{
  long nc;

  nc = 0;

  while (getchar() != EOF)
    ++nc;       // you can also write nc++;
  printf("%ld\n", nc);
}