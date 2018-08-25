// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.7 Pointers

/* Cryptogram Fun!
Create program that displays menu with options to:
   1. Encrypt, 
   2. Decrypt, and
   3. Generate new key.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*** Function Prototypes ***/
void encryptMe(char[], int);
void decryptMe(char[], int);
int generateNewKey();
void pauseSeconds(int);
void sayGoodbye();

/*** Global Variables ***/
char message[] = "\"Remember—boredom is the enemy, not some abstract \'failure.\' -Tim Ferriss";


/*** The main() ***/
int main(void)
{
    int iSelection, iKey;
    char cString[25];

    system("clear");

    while (iSelection != 4)
    {
        printf("\n\n********** Cryptogram Fun! **********\n\n");
        printf("========== MENU ==========\n");
        printf("\t1. Encrypt string\n");
        printf("\t2. Decrypt string\n");
        printf("\t3. Generate new key\n");
        printf("\t4. Exit\n");
        printf("Enter selection (1-4): ");
        scanf(" %d", &iSelection);
        
        switch (iSelection)
        {
            case (1):
                printf("\nEnter string to decrypt: ");
                scanf(" %s", cString);
                printf("Generating new key ...\n");
                iKey = generateNewKey(); 
                pauseSeconds(2);
                encryptMe(cString, iKey);
                printf("Here is your encrypted string: %s\n\n", cString); 
                break;
            case (2):
                printf("\nEnter string to decrypt: ");
                scanf(" %s", cString);
                pauseSeconds(2);
                decryptMe(cString, iKey);
                printf("Here is your decrypted string: %s\n\n", cString);
                break;
            case (3):
                printf("\nGenerating new key...\n");
                iKey = generateNewKey();
                pauseSeconds(2);
                printf("Done.\n");
                break;
        }
        pauseSeconds(2);
    }

    sayGoodbye();
    
    return 0; // control back to main()
}


/*** Function Definitions ***/
void encryptMe(char arr[], int key)
{
    int i;
    for (i=0; i<strlen(arr); i++)
    {
        arr[i] = arr[i] + key;
    }
    return; // control back to main()
}


void decryptMe(char arr[], int key)
{
    int i;
    for (i=0; i<strlen(arr); i++)
    {
        arr[i] = arr[i] - key;
    }
    return; // control back to main()
}


int generateNewKey()
{   
    int iNewKey;
    srand(time(NULL));
    iNewKey = (rand() % 4) + 1;
    return iNewKey;
}


void pauseSeconds(int seconds)
{
    int iStartTime = time(NULL);
    int iElapsedTime;
    do 
    {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iStartTime) < seconds);
    return; // back to main()
}


void sayGoodbye()
{
    printf("\n\n--------------------\n");
    printf("Goodbye my friend... I leave you one quote as you go...\n");
    printf("%s\n\n", message);
    exit(1);
}


/***************************************************************************/
