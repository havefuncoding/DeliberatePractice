// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.7 Pointers

/* Print Pointers and Addresses!
   Build a program that performs the following operations:
   1. Declares 3 pointer variables called iPtr of type int, cPtr of type char,
      and fFloat of type float.
   2. Declares 3 new variables called iNumber of int type, cCharacter of char 
      type, and fNumber of float type.
   3. Assigns the address of each nonpointer variable to the matching pointer
      variable.
   4. Prints the value of each nonpointer variable.
   5. Prints the value of each pointer variable.
   6. Prints the address of each nonpointer variable.
   7. Prints the address of each pointer variable.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes
void print_nonpointer_vars_values(int, float, char);
void print_pointer_vars_values(int *, float *, char *);
void print_nonpointer_vars_addresses(int, float, char);
void print_pointer_vars_addresses(int *, float *, char *);
void pause_seconds(int);

// Global Variables
char message[] = "\"Many a false step was made by standing still.\" -Cookie";

// Main Body
int main(void)
{
    int iMenuSelection;
    int iNumber, *iPtr;
    float fNumber, *fPtr;
    char cCharacter, *cPtr;
    
    // prompt user for values to regular vars
    system("clear");
    printf("\n\n***** Let's Print Some Pointers and Addresses! *****\n\n");
    printf("Enter integer number: ");
    scanf(" %d", &iNumber);
    printf("Enter float number: ");
    scanf(" %f", &fNumber);
    printf("Enter character: ");
    scanf(" %c", &cCharacter);
    printf("Let's begin...");
    pause_seconds(2);
    
    // now assign addresses to new values
    iPtr = &iNumber;
    fPtr = &fNumber;
    cPtr = &cCharacter;

    // print MENU with feature options
    system("clear");
    while(iMenuSelection != 5)
    {
        printf("\n\n========== MENU ==========\n");
        printf("\t1. Print the values of each nonpointer variable.\n");
        printf("\t2. Print the values of each pointer variable.\n");
        printf("\t3. Print the addresses of each nonpointer variable.\n");
        printf("\t4. Print the addresses of each pointer variable.\n");
        printf("\t5. Quit.\n");
        printf("Enter (1-5): ");
        scanf(" %d", &iMenuSelection);
    
        switch(iMenuSelection)
        {
            case (1): 
                print_nonpointer_vars_values(iNumber, fNumber, cCharacter);
                break;
            case (2): 
                print_pointer_vars_values(iPtr, fPtr, cPtr);
                break;
            case (3): 
                print_nonpointer_vars_addresses(iNumber, fNumber, cCharacter);
                break;
            case (4): 
                print_pointer_vars_addresses(iPtr, fPtr, cPtr);
                break;
            case (5):
                printf("\n--------------------\n");
                printf("Thanks for playing! Goodbye...\n\n");
                exit(1);
            default:
                printf("\nERROR: Unexpected input (%d) received. Exiting...\n\n", 
                       iMenuSelection);
                exit(1);
        }
        pause_seconds(2);
    }

    return 0;
}


/***************************************************************************/

void print_nonpointer_vars_values(int inum, float fnum, char cchar)
{
    printf("\nINFO: print_nonpointer_vars_values()\n");
    printf("\tiNumber value: %d\n", inum);
    printf("\tfNumber value: %f\n", fnum);
    printf("\tcCharacter value: %c\n", cchar);
    return;
}


void print_pointer_vars_values(int *iptr, float *fptr, char *cptr)
{
    printf("\nINFO: print_pointer_vars_values()\n");
    printf("\tiPtr value: %d\n", *iptr);
    printf("\tfPtr value: %f\n", *fptr);
    printf("\tcPtr value: %c\n", *cptr);
    return;
}


void print_nonpointer_vars_addresses(int inum, float fnum, char cchar)
{
    printf("\nINFO: print_nonpointer_vars_addresses()\n");
    printf("\tiNumber address:\t%p\n", &inum);
    printf("\tfNumber address:\t%p\n", &fnum);
    printf("\tcCharacter address:\t%p\n", &cchar);
    return;
}


void print_pointer_vars_addresses(int *iptr, float *fptr, char *cptr)
{
    printf("\nINFO: print_pointer_vars_addresses()\n");
    printf("\tiPtr address: %p\n", iptr);
    printf("\tfPtr address: %p\n", fptr);
    printf("\tcPtr address: %p\n", cptr);
    return;
}


void pause_seconds(int seconds)
{   
    int iStartTime = time(NULL);
    int iElapsedTime;
    do
    {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iStartTime) < seconds);
}

