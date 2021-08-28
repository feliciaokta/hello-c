#include <stdio.h>

// print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300

int main () {
  int fahr, celsius;  // variable declaration
  int lower, upper, step;

  lower = 0;    // lower limit of temp table
  upper = 300;  // upper limit
  step = 20;    // increment size

  fahr = lower;

  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
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