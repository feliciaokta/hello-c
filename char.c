// getchar reads the next input character
// putchar prints a character when called
// the following programs are used to copy input into output

// #include <stdio.h>

// main() {
//   int c;

//   c = getchar();        // read a character
  
//   // while it's not the end of the file, output the character that was just read
//   // EOF = end of file, built-in from stdio.h
//   while (c != EOF) {
//     putchar(c);
//     c = getchar();
//   }
// }



// another way to write it
#include <stdio.h>

int main() {
  int c;

  // notice this while doesn't have curly brackets
  while ((c = getchar()) != EOF)
    putchar(c);
}

// precedence of != is higher than =
// so if you write c = getchar() != EOF, the executed will be c = (getchar() != EOF)
// so pay attention to the brackets


// exercise 1.6 -- verify that the expression getchar() != EOF is 0 or 1
// exercise 1.7 -- write a program to print the value of EOF
#include <stdio.h>

int main() {
  int c;

  // notice this while doesn't have curly brackets
  while ((c = getchar()) != EOF)
    printf("%d\n", getchar() != EOF);
}