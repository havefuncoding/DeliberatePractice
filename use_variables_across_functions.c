// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.31 Passing variables to your functions
// This program demonstrates passing a variable to a function by 
// value.

#include <stdio.h>

void half(int);

int main(void)
{
    int i;

    // 1. Ask for integer
    printf("Please enter an integer... ");
    scanf(" %d", &i);

    // 2. Pass integer into function
    half(i);
    printf("In main(), i is still %d.\n", i);
    
    return 0;
}

void half(int i) 
{
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return; // return to main
}

