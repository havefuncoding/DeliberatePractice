// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.26 Maximizing Your Computer's Memory

/* This program looks for a number of random integers, allocates an 
   array and fills it with numbers between 1 and 500 and then loops 
   through all the numbers and figures out the smallest, the biggest, 
   and the average. It then frees the memory. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, aSize;
    int * randomNums;
    time_t t;
    double total = 0;
    int biggest, smallest;
    float average;

    // 1. Ask user for number of random numbers to work with
    srand(time(&t)); // so that each number is random
    printf("How many random numbers do you want in you array? ");
    scanf(" %d", &aSize);
    
    // 2. Generate random numbers accordingly
    randomNums = (int *) malloc(aSize * sizeof(int));
    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }
    for (i=0; i<aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
        printf(" %d ", randomNums[i]);
    }
    printf("\n");

    // 3. Loop through and compare each to get the biggest, smallest
    biggest = 0;
    smallest = 500;
    for (i=0; i<aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total / (float)aSize);
    printf("The biggest number is %d.\n", biggest);
    printf("The smallest number is %d.\n", smallest);
    printf("The average of %d numbers which sum to %.0f is %.2f.\n",
           aSize, total, average);

    // 4. Remember to free memory anytime you use malloc  
    free(randomNums);

    return (0);
}
