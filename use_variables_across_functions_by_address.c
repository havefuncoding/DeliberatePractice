// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.31 Passing variables to your functions

#include <stdio.h>

void half(int *);

int main(void)
{
    int i;
    
    // 1. Get an integer from user
    printf("Please enter an integer: ");
    scanf(" %d", &i);

    // 2. Pass the address of the integer into the half function
    half(&i);

    // 3. Shows that the function did alter i's value
    printf("In main(), i is now %d.\n", i);

    return (0); 
}

/**********************************************************************/

void half(int *i)
{
    *i = *i / 2;
    printf("Your value halved is %d.\n", *i);
    return; // Return to main
}
