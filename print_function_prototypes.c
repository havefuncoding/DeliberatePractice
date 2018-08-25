// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.5 Structured Programming

/* Function Prototypes!
1. Write a function prototype for the following components:
   a) A function that divides 2 numbers and returns the remainder.
   b) A function that finds the larger of 2 numbers and returns the result.
   c) A function that prints the ATM menu-it receives no parameters and 
      returns no value.
2. Build the function definitions for each preceding function prototype.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divideAndReturnRemainder(int, int);
int getLargerOfTwoNums(int, int);
void printATMMenu();

int main(void)
{
    int iNum1, iNum2, iResult;
    int iChoice;
    int iStart = 1;

    system("clear");

    while (iStart == 1)
    {
        printf("\n********** Function Prototypes in Action! **********\n");
        printf("\n===== MENU =====\n");
        printf("\t1. Divide 2 numbers and return the remainder.\n");
        printf("\t2. Get larger of 2 numbers.\n");
        printf("\t3. Print ATM Menu.\n");
        printf("\t4. Exit.\n");
        printf("Selection (1-4):" );
        scanf(" %d", &iChoice);

        switch (iChoice)
        {
            case (1):
                printf("\nEnter 2 numbers to divide and get remainder from.\n");
                printf("Number #1: ");
                scanf(" %d", &iNum1);
                printf("Number #2: ");
                scanf(" %d", &iNum2);
                iResult = divideAndReturnRemainder(iNum1, iNum2);
                printf("The remainder of %d %% %d is %d.\n", iNum1, iNum2, iResult);
                break;
            case (2):
                printf("\nEnter 2 numbers to see which one is the larger.\n");
                printf("Number #1: ");
                scanf(" %d", &iNum1);
                printf("Number #2: ");
                scanf(" %d", &iNum2);
                iResult = getLargerOfTwoNums(iNum1, iNum2);
                printf("The larger of %d and %d is %d.\n", iNum1, iNum2, iResult);
                break;
            case (3):
                printATMMenu();
                break;
            case (4):
                printf("\nExiting...\n\n");
                exit(1);
            default:
                printf("\nSelection invalid: %d\nExiting...\n\n", iChoice);
                exit(1);
        }
    }

    return 0;
}

/***************************************************************************/

int divideAndReturnRemainder(int num1, int num2)
{
    //printf("\nINFO: divideAndReturnRemainder()\n");
    int iRemainder = num1 % num2;
    return iRemainder;
}

/***************************************************************************/

int getLargerOfTwoNums(int num1, int num2)
{
    //printf("\nINFO: getLargerOfTwoNums()\n");
    int iLarger = (num1 > num2)? num1 : num2;
    return iLarger;
}

/***************************************************************************/

void printATMMenu()
{
    //printf("\nINFO: printATMMenu()\n");
    printf("\n===== ATM Menu =====\n");
    printf("\t1. Check balance\n");
    printf("\t2. Deposit funds\n");
    printf("\t3. Withdraw funds\n");
    printf("\t4. Initiate Transfer\n");
    printf("\t5. Exit");
    return;
}
