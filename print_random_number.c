// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.3 Conditions

/* Number Guessing Game
1. Build a number guessing game that uses input validation using isdigit()
   to verify that the user has entered a digit and not a nondigit character.
2. Store a random number between 1 and 10 into a variable at each execution.
3. Prompt the user to guess a number between 1 and 10.
4. Alert the user if user is correct or not correct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // (2) store random number between 1 and 10
    srand(time(NULL));
    int iRandomNumber = (rand() % 10) + 1;
    int iUserGuess;

    // (3) prompt user to guess number between 1 and 10
    printf("\n*** Guess My Number =D ***\n\n");
    printf("I have a number between 1 and 10... can you guess this number?\n");
    printf("Enter number: ");
    
    // (1) validate the user input to be integer data type
    scanf(" %d", &iUserGuess);
    if ( iUserGuess < 1 || iUserGuess > 10) 
    {
        printf("Please try again with integer input between 1 and 10\n");
        printf("Exiting...\n");
        exit(1);
    }     

    // (4) alert user whether guess was correct
    if (iUserGuess == iRandomNumber)
    {
        printf("You got it! Congratulations, you win a pony! =D\n\n");
    }
    else 
    {
        printf("You entered %d but it was actually %d... here, take a cookie =)\n\n",
               iUserGuess, iRandomNumber);
    }

    return 0;
}
