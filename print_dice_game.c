// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.3 Conditions

/* Dice Game!
1. Create a dice game that uses 2 6-sided dice. Each time the program runs, 
   use random numbers to assign values to each die variable.
2. Output a "player wins" message to the user if the sum of the 2 dice is
   7 or 11.
3. Otherwise output the sum of the two dice and thank the user for playing.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int rollDice();

int main(void)
{
    // (1) 2 dice rolls, randomnly assigned 1-6
    int iDice1, iDice2, iSum;
    iDice1 = rollDice();
    iDice2 = rollDice();
    iSum = iDice1 + iDice2;

    printf("\n********** Dice Game **********\n");
    // (2) output player message if sum is 7 or 11
    if ((iSum == 7) || (iSum == 11))
    {
        printf("\n=== PLAYER WINS! ===\n");
        printf("Congratulations, you rolled a perfect %d!\n\n", iSum);
    }
    // (3) otherwise print sum and thank user for playing
    else
    {
        printf("\nYou rolled a %d... thanks for playing!\n\n", iSum);
    }
}


/***************************************************************************/

int rollDice()
{
    int randomNum;
    srand(time(NULL));
    randomNum = (rand() % 6) + 1;
    return randomNum;
}

