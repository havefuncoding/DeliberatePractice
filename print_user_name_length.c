// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.8 Strings

/* Printing User Name Length!
   Create a program that performs the following functions:
   1. Uses character arrays to read a use's name from standard input.
   2. Tells the user how many characters are in her name.
   3. Displays the user's namein uppercase.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function Prototypes
void convertU(char *);

// Global Variables
char message[] = "LOVE THE PAIN.";

// The Main
int main(void)
{
    int i;
    char name[] = {'\0'};

    system("clear");
    printf("\n\n********** Name Length! **********\n\n");
    printf("Enter name: ");
    scanf(" %s", name);

    printf("You entered: %s\n\n", name);
    printf("Name length: %lu\n", strlen(name));
    
    // the function route
    convertU(name);
    
    // the inside-main route
    for (i=0; i<strlen(name); i++)
        name[i] = tolower(name[i]);

    printf("Your name in lowercase is %s\n", name);   
 
    printf("\n--------------------\n");
    printf("%s\n", message);
    printf("\nGoodbye...\n\n");
    
    return 0;
}

// Function Definitions

void convertU(char *str)
{
    int i;
    for (i=0; i<strlen(str); i++)
        str[i] = toupper(str[i]);
    printf("Your name in uppercase is %s\n", str);
    return;
}


