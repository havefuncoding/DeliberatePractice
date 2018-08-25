// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.4 Looping Structures

/* Concentration Game!
1. Prompt user if user wants to play game Y/N.
2. Print menu with difficulty levels and option to quit the game.
3. After game is over, re-print menu and allow user to play or quit.
4.  

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 99

int play_menu();
int get_random_number();
int play_easy_game();
int play_intermediate_game();
int play_difficult_game();
void quit_game(int, int, int);

int main(void)
{
    char cYesNo;
    int iGame, iCount, iWins, iLosses;
    iCount = iWins = iLosses = 0;
 
    printf("\nPlay a game of Concentration? (y or n): ");
    scanf(" %c", &cYesNo);
    if (cYesNo == 'n' || cYesNo == 'N')
    {
        printf("Okay then... exiting...\n");
        exit(1);
    } 
 
    srand(time(NULL));
    system("clear");

    while (iGame != 4)
    {
        printf("\n********** Concentration Game for Numbers! **********\n");
        iGame = play_menu();
        int didWin;

        switch (iGame)
        {
            case (1):
                didWin = play_easy_game();
                break;
            case (2):
                didWin = play_intermediate_game();
                break;
            case (3):
                didWin = play_difficult_game();
                break;
            case (4):
                quit_game(iCount, iWins, iLosses);
                break;
            default:
                printf("ERROR: Quitting game...");
                quit_game(iCount, iWins, iLosses);
        }
        if (didWin)
        {
            iWins++;
        }
        else
        {
            iLosses++;
        }   
        iCount++;
    }    

    return 0;
}

/***************************************************************************/

// Prints Menu 
int play_menu()
{
    int iPlay;

    printf("\n========== MENU ==========\n");
    printf("\t1. Easy (remember 3 numbers displayed for 5 seconds)\n");
    printf("\t2. Intermediate (remember 5 numbers displayed for 5 seconds)\n");
    printf("\t3. Difficult (remember 5 numbers displayed for 2 seconds)\n");
    printf("\t4. Quit\n");
    printf("Enter selection: ");
    scanf(" %d", &iPlay);

    if (iPlay < 1 || iPlay > 4)
    {
        printf("Your selection is invalid, quitting game...\n");
        return 4;
    }
    else
    {
        return iPlay;
    }
}


/***************************************************************************/

// Returns random number
int get_random_number()
{
    int randomNumber;
    randomNumber = (rand() % MAX) + 1;
    return randomNumber;
}


/***************************************************************************/

// Play easy game
int play_easy_game()
{
    int iNum1, iNum2, iNum3;
    int iInput1, iInput2, iInput3;
    int iStartTime, iElapsedTime;
    int iAllottedTime = 3;

    iNum1 = get_random_number();
    iNum2 = get_random_number();
    iNum3 = get_random_number();

    printf("Concentrate hard to remember these numbers, you have %d seconds:\n",
           iAllottedTime);
    printf("\t%d\t%d\t%d\n", iNum1, iNum2, iNum3);
    iStartTime = time(NULL);
    do
    {
        iElapsedTime = time(NULL);        
    } while ((iElapsedTime - iStartTime) < 3);
    system("clear");
    printf("What do you remember?\n");
    printf("1) ");
    scanf(" %d", &iInput1);
    printf("2) ");
    scanf(" %d", &iInput2);
    printf("3) ");
    scanf(" %d", &iInput3);

    if ((iNum1==iInput1) && (iNum2==iInput2) && (iNum3==iInput3))
    {
        printf("\n***** YOU WIN! *****\n");
        return 1;
    }
    else 
    {
        printf("\n----- YOU LOSE -----\n");
        printf("The correct numbers are: %d, %d, %d\n", iNum1, iNum2, iNum3);
        return 0;
    }
}


/***************************************************************************/

// Play intermediate game
int play_intermediate_game()
{
    printf("Playing intermediate game...\n");
    int iNum1, iNum2, iNum3, iNum4, iNum5;
    int iInput1, iInput2, iInput3, iInput4, iInput5;
    int iStartTime, iElapsedTime;
    int iAllottedTime = 5;

    iNum1 = get_random_number();
    iNum2 = get_random_number();
    iNum3 = get_random_number();
    iNum4 = get_random_number();
    iNum5 = get_random_number();

    printf("Concentrate hard to remember these numbers, you have %d seconds:\n",
           iAllottedTime);
    printf("\t%d\t%d\t%d\t%d\t%d\n", iNum1, iNum2, iNum3, iNum4, iNum5);
    iStartTime = time(NULL);
    do
    {
        iElapsedTime = time(NULL);        
    } while ((iElapsedTime - iStartTime) < 3);
    system("clear");
    printf("What do you remember?\n");
    printf("1) ");
    scanf(" %d", &iInput1);
    printf("2) ");
    scanf(" %d", &iInput2);
    printf("3) ");
    scanf(" %d", &iInput3);
    printf("4) ");
    scanf(" %d", &iInput4);
    printf("5) ");
    scanf(" %d", &iInput5);

    if ((iNum1==iInput1) && (iNum2==iInput2) && (iNum3==iInput3) &&
        (iNum4==iInput4) && (iNum5==iInput5))
    {
        printf("\n***** YOU WIN! *****\n");
        return 1;
    }
    else 
    {
        printf("\n----- YOU LOSE -----\n");
        printf("The correct numbers are: %d, %d, %d, %d, %d\n", iNum1, iNum2, 
               iNum3, iNum4, iNum5);
        return 0;
    }
}

/***************************************************************************/

// Play difficult game
int play_difficult_game()
{
    int iNum1, iNum2, iNum3, iNum4, iNum5;
    int iInput1, iInput2, iInput3, iInput4, iInput5;
    int iStartTime, iElapsedTime;
    int iAllottedTime = 2;

    iNum1 = get_random_number();
    iNum2 = get_random_number();
    iNum3 = get_random_number();
    iNum4 = get_random_number();
    iNum5 = get_random_number();

    printf("Concentrate hard to remember these numbers, you have %d seconds:\n",
           iAllottedTime);
    printf("\t%d\t%d\t%d\t%d\t%d\n", iNum1, iNum2, iNum3, iNum4, iNum5);
    iStartTime = time(NULL);
    do
    {
        iElapsedTime = time(NULL);        
    } while ((iElapsedTime - iStartTime) < 3);
    system("clear");
    printf("What do you remember?\n");
    printf("1) ");
    scanf(" %d", &iInput1);
    printf("2) ");
    scanf(" %d", &iInput2);
    printf("3) ");
    scanf(" %d", &iInput3);
    printf("4) ");
    scanf(" %d", &iInput4);
    printf("5) ");
    scanf(" %d", &iInput5);

    if ((iNum1==iInput1) && (iNum2==iInput2) && (iNum3==iInput3) &&
        (iNum4==iInput4) && (iNum5==iInput5))
    {
        printf("\n***** YOU WIN! *****\n");
        return 1;
    }
    else 
    {
        printf("\n----- YOU LOSE -----\n");
        printf("The correct numbers are: %d, %d, %d, %d, %d\n", iNum1, iNum2, 
               iNum3, iNum4, iNum5);
        return 0;
    }
}

/***************************************************************************/

void quit_game(int count, int wins, int losses)
{
    printf("\n---------- Thanks for playing ----------\n");
    printf("\tGames played: %d\n", count);
    printf("\tGames won: %d\n", wins);
    printf("\tGames lost: %d\n", losses);
}
