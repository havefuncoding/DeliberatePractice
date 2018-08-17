// C Programming Absolute Beginner's Guide 3rd Ed. 
// Authors Greg Perry and Dean Miller
// Chapter 20

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int dice1, dice2;
    int total1, total2;
    time_t t;
    char ans;

    // Needed to make sure each random number generated is different
    srand(time(&t));

    // Returns number between 0 and 5, so +1 to make it between 1 and 6
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;
    printf("First roll of the dice was %d and %d, ", dice1, dice2);
    printf("for a total of %d.\n\n\n", total1);

    do {
        puts("Do you think the next roll will be ");
        puts("(H)igher, (L)ower, or (S)ame?\n");
        puts("Enter H, L, or S to reflect your guess.");

        scanf(" %c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // Roll the dice a second time to get your second total
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;
    
    // DIsplay the second total for the user
    printf("\nThe second roll was %d and %d, ", dice1, dice2);
    printf("for the total of %d.\n\n", total2);

    // Now compare the two dice totals against the user's guess
    // and tell them if they were right or not.
    if (ans == 'L')
    {
        if (total2 < total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is lower than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not lower than %d\n\n", total2, 
                   total1);
        }
    }

    if (ans > 'H')
    {
        if (total2 > total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is higher than %d\n", dice2, dice1);
        }
        else
        {
            printf("Sorry! %d is not higher than %d\n\n", total2, 
                   total1);
        }
    }    

    if (ans == 'S')
    {
        if (total2 == total1)
        {
            printf("Good job! You were right!\n");
            printf("%d is higher than %d\n", total2, total1);
        }
        else
        {
            printf("Sorry! %d is not same as %d\n\n", total2, 
                   total1);
        }
    }
   


 

    return (0);
}
