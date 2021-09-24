#include <stdio.h>

// write a program to copy its input into an output,
// replacing each string of one or more blanks by a single blank

int main ()
{
  char input = getchar();

  // try to see if output works an exact copy first

  // while input != EOF
  // if character = blank && character length > 1
  // then output ' '

  int c; // this is the variable for each character

  while ((c = input) != EOF) {
    
    if (c == '  ') {
      // replace with only one space ' '
    }

    putchar(c);
  }

};