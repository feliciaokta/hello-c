#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main () {
  int fahr, celsius;  // variable declaration, int will truncate (no decimal points)
  int lower, upper, step;

  lower = 0;    // lower limit of temp table
  upper = 300;  // upper limit
  step = 20;    // increment size

  fahr = lower;

  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);   // the "/t" is for tab, some space in between the fahr and celsius numbers on the list
    // the first %d in the quotation mark is the first argument (fahr), respectively the second %d
    // d stands for digits, will print a specified amount of digits if you say %3d or %6d
    // the opposite of printf is scanf
    fahr += step;
  }

}

// run this in terminal "clang temp.c -o temp"
// this command will compile temp.c into a program called temp

// data types in C:
// char (single byte character)
// short (short int)
// long (long int)
// double (int with 2 decimal points)