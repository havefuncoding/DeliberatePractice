// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.30 Organizing your programs with functions
// This program is a simple demonstration of the difference
// between global variables and local variables.

// Forward declarations
void prAgain();

#include <stdio.h>
int g1 = 10;

int main(void)
{
    float l1;
    l1 = 9.0;

    printf("%d %.2f\n", g1, l1); // print the 1st glocal and first
                                 // local variables
    prAgain(); // calls our first function

    return (0);
}

float g2 = 19.0;

void prAgain()
{
    int l2 = 5;
    printf("%d %.2f %d\n", l2, g2, g1);
    return;
}

/*
10 9.00
5 19.00 10
*/
