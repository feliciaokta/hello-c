#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main () {
  int fahr, celsius;  // variable declaration, int will truncate (no decimal points)
  int lower, upper, step;

  lower = 0;    // lower limit of temp table
  upper = 300;  // upper limit
  step = 20;    // increment size

  fahr = upper;

  printf("Heading above table\n\n");

  while (fahr >= lower) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);   // the "/t" is for tab, some space in between the fahr and celsius numbers on the list
    // the first %d in the quotation mark is the first argument (fahr), respectively the second %d
    // d stands for digits, will print a specified amount of digits if you say %3d or %6d
    // if you change d to f, the data type becomes float and it prints the decimal place. %3.0f means the front has 3 digits and the back has no decimal points. %6.1f means the front has 6 digits and the back has 1 decimal point.
    // the opposite of printf is scanf
    fahr -= step;
  }

}

// run this in terminal "clang temp.c -o temp"
// this command will compile temp.c into a program called temp
// then to run the program, type ./temp

// data types in C:
// char (single byte character)
// short (short int)
// long (long int)
// double (int with 2 decimal points)



// same formula with a for loop

// int main () {
//   int fahr;

//   for(fahr = 0; fahr <= 300; fahr = fahr + 20)
//     printf("%3d%6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
// }



// same formula but using #define ("symbolic constants")
// the format goes --- #define NAME replacementText
// any occurence of NAME will be replaced by replacementText
// DO NOT put semicolon after a #define

/*
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main () {
  int fahr;

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d%6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}

*/