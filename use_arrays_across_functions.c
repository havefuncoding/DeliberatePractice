// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.31 Passing variables to your functions
// This program demonstrates passing an array to a function

#include <stdio.h>
#include <string.h>

// Forward declarations
void change(char *);

int main(void)
{
    char name[15] = "Grace Nellore";
    change(name);
    
    printf("Back to main(), the name is now %s.\n", name);

    return (0);
}

/**********************************************************************/

void change(char name[15])
{
    // Change the string stored at the address pointed to by name
    strcpy(name, "XXXXXXXXXXXXXXX");
    return; // Return to main
}
