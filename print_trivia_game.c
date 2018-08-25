// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.5 Structured Programming

/* Trivia Game!
1. Print menu of trivia question options.
2. Ask corresponding type question.
3. Track number of times user gets answer correct and incorrect.
4. At the end of the game, print number correct and incorrect stats.
5. Consider using global variables to track correct and incorrect counts.
6. Add some sort of pause function to wait a bit before printing result.
7. Give user immediate feedback if answer is correct or incorrect.

Trivia taken from:
https://didyouknow.org/fastfacts/religion/
https://funfactz.com/politics-facts/
https://www.proprofs.com/quiz-school/story.php?title=pp-philosophy-trivia
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int giNumTotal = 0;
int giNumCorrect = 0;
int giNumIncorrect = 0;

void onReligion();
void onPolitics();
void onPhilosophy();
void onHistory();
void pauseSeconds(int);
void printStats(int, int, int);

int main(void)
{
    int iChoice, iContinue;
    iContinue = 1;
    
    system("clear");
    srand(time(NULL));
    printf("\n********** Let's play the TRIVIA GAME! **********\n");
    
    do
    {
        printf("\n========== MENU ==========\n");
        printf("\t1. On religion\n");
        printf("\t2. On politics\n");
        printf("\t3. On philosophy\n");
        printf("\t4. On History\n");
        printf("\t5. Quit\n");
        printf("Menu Selection (1-5): ");
        scanf(" %d", &iChoice);    
    
        switch (iChoice) 
        {
            case (1):
                onReligion();
                break;            
            case (2):
                onPolitics();
                break;            
            case (3):
                onPhilosophy();
                break;            
            case (4):
                onHistory();
                break;            
            case (5):
                printStats(giNumCorrect, giNumIncorrect, giNumTotal);
                break;
            default:
                printf("Selection not supported: %d\n", iChoice);
                printStats(giNumCorrect, giNumIncorrect, giNumTotal);
        }
        
        pauseSeconds(2);
    } while (iContinue==1);

    return 0;
}

/***************************************************************************/

void onReligion()
{
    int iExpected = 1;
    int iActual;
    
    printf("\nThe bible is the world's most shoplifted book.\n");
    printf("\t1. True\n");
    printf("\t2. False\n");
    printf("Answer (1-2): ");
    scanf(" %d", &iActual);
    
    if (iExpected == iActual)
    {
        printf("That is correct!\n");
        giNumCorrect++;
    }
    else
    {
        printf("Wrong...it is actually %d\n", iExpected);
        giNumIncorrect++;
    }
    giNumTotal++;
    return;
}

/***************************************************************************/

void onPolitics()
{
    int iExpected = 1;
    int iActual;
    
    printf("\nJohn F. Kennedy rejected his presidential salary of $100,000 a\n");
    printf(" year and donated it to charity instead.\n");
    printf("\t1. True\n");
    printf("\t2. False\n");
    printf("Answer (1-2): ");
    scanf(" %d", &iActual);
    
    if (iExpected == iActual)
    {
        printf("That is correct!\n");
        giNumCorrect++;
    }
    else
    {
        printf("Wrong...it is actually %d\n", iExpected);
        giNumIncorrect++; 
    }
    giNumTotal++;
    return;
}

/***************************************************************************/

void onPhilosophy()
{
    int iExpected = 3;
    int iActual;
    
    printf("\nWhat philosophical \"-ism\" is closely associated with Ayn Rand? \n");
    printf("\t1. Positivism\n");
    printf("\t2. Utilitarianism\n");
    printf("\t3. Objectivism\n");
    printf("\t4. Collectivism\n");
    printf("Answer (1-4): ");
    scanf(" %d", &iActual);
    
    if (iExpected == iActual)
    {
        printf("That is correct!\n");
        giNumCorrect++;
    }
    else
    {
        printf("Wrong...it is actually %d\n", iExpected);
        giNumIncorrect++; 
    }
    giNumTotal++;
    return;
}

/***************************************************************************/

void onHistory()
{
    int iExpected = 1;
    int iActual;
    
    printf("\nThe Internet was originally called ARPANet (Advanced Research \n");
    printf("Projects Agency Network) designed by the US Department of Defense.\n");
    printf("\t1. True\n");
    printf("\t2. False\n");
    printf("Answer (1-2): ");
    scanf(" %d", &iActual);
    
    if (iExpected == iActual)
    {
        printf("That is correct!\n");
        giNumCorrect++;
    }
    else
    {
        printf("Wrong...it is actually %d\n", iExpected);
        giNumIncorrect++; 
    }
    giNumTotal++;
    return;
}

/***************************************************************************/

void pauseSeconds(int seconds)
{
    int iStart, iElapsed;
    iStart = time(NULL);
 
    do
    {
        iElapsed = time(NULL);
    } while ((iElapsed - iStart) < seconds);

    return;
}

/***************************************************************************/

void printStats(int total, int correct, int incorrect)
{
    printf("\n------------------------------\n");
    printf("Thanks for playing!\n");
    printf("Correct: %d\n", giNumCorrect);
    printf("Incorrect: %d\n", giNumIncorrect);
    printf("Total: %d\n", giNumTotal);
    printf("\nGoodbye...\n\n");
    exit(1);
}

