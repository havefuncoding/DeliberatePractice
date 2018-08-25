// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.7 Pointers

/* Let's roll some dice!
1. Create a dice rolling game. The game should allow a user to toss up to 
   six dice at a time. 
2. Each toss of a die will be stored in a 6-element integer array.
3. The array is created in the main function but passed to a new function 
   called TossDie().
4. The TossDie() fuction will take care of generating random numbers from
   1 to 6 and assigning them to the appropriate array element number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*** Function Prototypes ***/
void TossDie(int[]);
void pauseSeconds(int);
void printResults(int[]);

/*** Global Variables ***/
char message[] = "\n\"Poisonous people do not deserve your time. To think otherwise is masochistic.\" -Tim Ferris\n";

/*** The main() ***/
int main(void)
{
    int tosses[6] = {0}; // initialize all 6 as 0 to start
    int play;        

    srand(time(NULL)); // just so we don't get repeating "random" numbers
    system("clear");
    
    printf("\n\n********** Let's Roll Some Dice! **********\n\n");
    printf("========== MENU ==========\n");
    printf("\t1. Yes, I'm game!\n");
    printf("\t2. Nah.. I'm going to be a party pooper tonight.\n");
    printf("Enter (1-2): ");
    scanf(" %d", &play);

    switch (play)
    {
        case (1):
            printf("Yayyyyy let's roll...\n");
            printf("... dice rolling ...\n\n");
            pauseSeconds(2);
            TossDie(tosses);
            printResults(tosses);            
            break;
        case (2):
            printf("Boooooo okay, but you're missing out!\n");
            printf("Goodbye...\n\n");
            exit(1);
            break;
        default:
            printf("ERROR: Input (%d) not recognized, exiting...\n\n", play);
    }

    printf("\n--------------------\n");
    printf("Thanks for playing!\n");
    printf("%s\n\n", message);    

    return 0;
}

/*** Function Definitions ***/
void TossDie(int tosses[])
{
    int i;
    for (i=0; i<6; i++)
    {
        tosses[i] = (rand() % 6) + 1;
    }
    return; // back to main()
}


void pauseSeconds(int seconds)
{
    int iStartTime = time(NULL);
    int iElapsedTime;
    do
    {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iStartTime) < seconds);
}

void printResults(int tosses[])
{
    int i;
    printf("You rolled... (drum roll please...!)\n");
    for (i=0; i<6; i++)
    {
        printf("\t%d", tosses[i]);
    }
    return;
}


/***************************************************************************/
