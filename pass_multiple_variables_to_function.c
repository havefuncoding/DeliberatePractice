// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.31 Passing variables to your functions
// This program passes multiple variables to a function

#include <stdio.h>

// Forward declarations
void changeSome(int, float *, int[5]);


int main(void)
{
    int i = 10;
    int ctr;
    float x = 20.5;

    int iAry[] = {10, 20, 30, 40, 50};

    // 1. Print main() values before passing through function
    puts("Here are main()'s variables before the function:");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for (ctr=0; ctr<5; ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }

    // 2. Call changeSome function, and pass in the value of i
    //    and the address of x (hence, the &), and the iAry
    changeSome(i, &x, iAry);

    // 3. Print results after changeSome function
    puts("\n\nHere are main()'s variables after the function:");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for (ctr=0; ctr<5; ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }

    return (0);
}

/**********************************************************************/

void changeSome (int i, float *newX, int iAry[5])
{
    int j;
    
    i = 47;
    *newX = 97.6; // Assign to same location as x in main

    for (j=0; j<5; j++)
    {
        iAry[j] = 100 + 100*j;
    }
    return; // Returns to main;
}



