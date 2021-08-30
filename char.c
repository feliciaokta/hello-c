// getchar reads the next input character
// putchar prints a character when called

#include <stdio.h>

main() {
  int c;

  c = getchar();
  
  while (c != EOF) {    // EOF = end of file
    putchar(c);
    c = getchar();
  }
}