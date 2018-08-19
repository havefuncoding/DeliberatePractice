// C Programming Absolute Beginner's Guide 3rd Ed. 
// Authors Greg Perry and Dean Miller
// Chapter 23: Alphabetizing and arranging your data
// This program generates then sorts 10 random numbers
// Bubble Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    // 1. Fill the array with random numbers (from 1 to 100)
    srand(time(&t)); // without this all numbers same
    for (ctr=0; ctr<10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }

    // 2. List the array before sorting
    for (ctr=0; ctr<10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // 3. Bubble sort array
    for (outer=0; outer<9; outer++)
    {
        //printf("Outer: %d\n", outer); /**/
        didSwap = 0; // becomes 1 (true) if list is not yet ordered
        for (inner=outer; inner<10; inner++)
        {
            //printf("Inner: %d\n", inner); /**/
            //printf("Is %d less than %d?\n", nums[inner], nums[outer]); /**/
            if (nums[inner] < nums[outer])
            {   
                temp = nums[inner];
                //printf("Temp: %d\n", temp); /**/
                //printf("Setting nums[inner] %d to nums[outer] %d", nums[inner], nums[outer]); /**/
                nums[inner] = nums[outer];
                //printf("Setting nums[outer] %d to temp %d", nums[outer], temp); /**/
                nums[outer] = temp;
                //printf("Setting didSwap to 1"); /**/
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    } 

    // 4. List the array after sorting
    puts("\nHere is the list after the sort:");
    for (ctr=0; ctr<10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return (0);
}
