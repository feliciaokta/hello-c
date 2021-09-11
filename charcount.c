#include <stdio.h>

// // this program counts the amount of characters
// // the count is saved in long integer "nc"
// int main ()
// {
//   long nc;

//   nc = 0;

//   while (getchar() != EOF)
//     ++nc;       // you can also write nc++;
//   printf("%ld\n", nc);
// }



// // we can also write that using a for loop
// int main ()
// {
//   double nc;  // store decimal numbers with 2 decimal points, vs float which only stores one decimal number

//   for (nc = 0; getchar() != EOF; nc++)
//     ;                     // the body of the loop is empty
//   printf("%.0f\n", nc);   // percent dot zero f, means it prints zero decimal points
// }



// write a program to count blanks, tabs, and newlines
int main ()
{
  int nc;
  int blanks = 0;
  // int tabs = 0;
  // int newlines = 0;

  while ((nc = getchar()) != EOF) {

    if (nc == ' ') {
      blanks++;
    }

    // if (nc == '\t') {
    //   tabs++;
    // }

    // if (nc == '\n') {
    //   newlines++;
    // }

  }

  printf("blanks: %d", blanks); // percent d is to tell the compiler to print an integer

  // input a series of text,
  // when you're done typing all the text,
  // press ctrl + d

}
