// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.4 Looping Structures

/* Count numbers!
1. Prompt user for start and end boundaries for counting/printing numbers.
2. Prompt user for increment number and skip number.
3. Print each number in range, incrementing, and skip the skip number.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, iStart, iEnd, iIncrement, iSkip;
    
    system("clear");   
    printf("\n********** Counting Numbers! **********\n");
    printf("Enter start number: ");
    scanf(" %d", &iStart);
    printf("Enter end number: ");
    scanf(" %d", &iEnd);
    printf("Enter increment number: ");
    scanf(" %d", &iIncrement);
    printf("Enter number to skip: ");
    scanf(" %d", &iSkip);

    for (i=iStart; i<=iEnd; i+=iIncrement)
    {
        if (i == iSkip)
        {
            printf("=== SKIPPED ===\n");
            continue;
        }
        printf("\t%d\n", i);
    }
    printf("\n");

    return 0;
}

