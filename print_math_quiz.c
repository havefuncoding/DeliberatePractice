// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.4 Looping Structures

/* Math Quiz Game!
1. Create a math quiz program that prompts user for num questions to ask.
2. Program should congratulate the player if he gets the correct answer.
3. Else alert the user of correct answer if user answers incorrectly.
4. Keep track of how many questions the player has answered correctly and
   incorrectly and display these running totals at the end of the quiz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEVEL 12

int main(void)
{
    int i;                          // counter 
    int iQuestions;                 // prompt user for number of questions
    int iNum1, iNum2;               // randomnly generated numbers
    int iExpected, iActual;         // expected result versus actual user input 
    int iCorrect, iIncorrect;        // number correct and incorrectly answered
    iCorrect = iIncorrect = 0;    

    system("clear");
    printf("\n********** Math Quiz Game! **********\n");
    printf("How many questions do you want to play?: ");
    scanf(" %d", &iQuestions);
    
    srand(time(NULL)); 
    for (i=iQuestions; i>0; i--)
    {
        // get numbers
        iNum1 = (rand() % LEVEL) + 1;
        iNum2 = (rand() % LEVEL) + 1;
        iExpected = iNum1 * iNum2;

        // get user answer
        printf("%d) What is %d x %d?: ", (iQuestions - (i-1)), iNum1, iNum2);
        scanf(" %d", &iActual);

        // print praise or answer
        if (iExpected == iActual)
        {
            printf("\tGood job! You got it right!\n");
            iCorrect += 1;
        }
        else
        {
            printf("\tYikes. Actually %d x %d is %d...\n", iNum1, iNum2, iExpected);
            iIncorrect += 1;
        }
    } 

    // print total correct and incorrect
    printf("\n\nThanks for playing! Here are your stats:\n");
    printf("\tCorrect: %d\n", iCorrect);
    printf("\tIncorrect: %d\n", iIncorrect);
    printf("\n");    

    return 0;
}

/***************************************************************************/
