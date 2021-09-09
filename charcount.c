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

// we can also write that using a for loop
int main ()
{
  double nc;

  for (nc = 0; getchar() != EOF; nc++)
    ;                     // the body of the loop is empty
  printf("%.0f\n", nc);   // percent dot zero f, means it prints zero decimal points
}