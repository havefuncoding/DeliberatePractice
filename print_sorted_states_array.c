// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.8 Strings

/* Print sorted states array!
   Build a program that uses an array of strings to store the following:
   1. "Florida"
   2. "Oregon"
   3. "California"
   4. "Georgia"
   OR other states as deemed useful in debugging.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*** Function Prototypes ***/
void setUpScreen();
void printList(char **);
void sortList(char **);
void goodbye();

/*** Global Variables ***/
char message[] = "LOVE THE PAIN.";


/*** The main() ***/
int main(void)
{
    int x,y;
    char *states[4];

    // allocate memory
    for (x=0; x<4; x++) states[x] = malloc(12);
    
    // assign element values
    strcpy(states[0], "Colorado");    
    strcpy(states[1], "California");
    strcpy(states[2], "Texas");
    strcpy(states[3], "Arizona");

    // print list before sort
    setUpScreen();
    printList(states);
    
    // print list after sort
    sortList(states);
    printList(states);

    // free memory    
    for (y=0; y<4; y++) free(states[y]);

    // say goodbye
    goodbye();    

    return 0;
}


void setUpScreen()
{
    system("clear");
    printf("\n\n");
    printf("********** SORT THEM STATES! **********\n\n");
    return; // control back to main
}


void printList(char **list)
{
    int i;
    printf("\n\n==== THE LIST ====\n\n");
    for (i=0; i<4; i++)
    {
        printf("State #%d: %s\n", (i+1), list[i]);
    }
    printf("\n");

    return; // control back to main
}

void sortList(char **list)
{
    int i, j, max, iterations=0;
    char tmp[25];    
    int noMoreSwaps = 0;
    int hadToSwap = 0;  

    do
    {
        //printf("\n\n---- Starting: (OUTER) Iteration #%d ----\n\n", iterations);
        for (i=1; i<4; i++)
        {
            //printf("Comparing list[%d] (%s) with list[%d] (%s)\n",
            //       (i-1), list[i-1], i, list[i]);

            max = (strlen(list[i-1]) < strlen(list[i])) ? strlen(list[i-1]) : strlen(list[i]);
            for (j=0; j<max; j++)
            {
                //printf("Is %c greater than %c?\n", list[i-1][j], list[i][j]);
                // first check if this can be skipped altogether
                if (list[i-1][j] < list[i][j])
                {
                    //printf("Breaking here because %c is before %c\n", list[i-1][j], list[i][j]);
                    break;
                }

                if (list[i-1][j] > list[i][j])
                {
                    strcpy(tmp, list[i-1]);
                    strcpy(list[i-1], list[i]);
                    strcpy(list[i], tmp);
                    //printf("Breaking after swapping %s with %s\n", list[i-1], list[i]);
                    //printf("Setting hadToSwap (%d) to 1 now...\n", hadToSwap);
                    hadToSwap = 1;
                    //printf("Now hadToSwap is %d\n", hadToSwap);
                    break;
                }
            }
            //printf("STATUS: hadToSwap is %d\n", hadToSwap);
        }        
        if (hadToSwap == 0) noMoreSwaps = 1; // no need to re-loop!
        else hadToSwap = 0; // otherwise reset to 0
        iterations++;
    } while (noMoreSwaps == 0);
   
    printf("\nSorting took %d iterations!\n", iterations);

    return; // control back to main
}

void goodbye()
{
    printf("\n\n--------------------\n");
    printf("Words to live by: %s\n", message);
    printf("Goodbye...\n\n");
    return; // control back to main
}


/***************************************************************************/
