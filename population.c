// #include <cs50.h> // to retrieve get_int function
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n_start = get_int("How many llamas to start? ");

    // TODO: Prompt for end size
    int n_end = get_int("How many llamas in the end? ");

    // TODO: Calculate number of years until we reach threshold
    
    // every year, n/3 llamas are born and n/4 llamas pass away
    // total llamas = n + (n/3) - (n/4)
    // do loops, record how many loops until total llamas = end size

    // TODO: Print number of years
    printf("The number of years is %i\n", years);
}