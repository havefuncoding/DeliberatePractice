// C Programming Absolute Beginner's Guide 3rd Ed. 
// Authors Greg Perry and Dean Miller
// Chapter 23: Alphabetizing and arranging your data
// This program searches a sorted list of customer IDs
// in order to get credit totals.

#include <stdio.h>

int main(void)
{
    int ctr;       // loop counter
    int idSearch;  // customer to look for (the key)
    int found = 0; // 1 (true) if customer is found

    int custID[10] = {313, 453, 502, 101, 892,
                      475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08,
                         192.41, 389.00, 229.67, 18.31, 59.54};

    int tempID, inner, outer, didSwap, i; 
    float tempBal;

    // 1. Sort array by customer ID
    for (outer=0; outer<9; outer++)
    {
        didSwap = 0; // becomes 1 (true) if list is not uet ordered
        for (inner=outer; inner<10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner]; // must switch both arrays
                tempBal = custBal[inner]; // or they are no longer
                                          // linked
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; // true because swap took place 
            }
        }
        if (didSwap==0)
        {
            break;
        }
    }    

    // 2. Loop for ID in the array
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number? ");
    scanf(" %d", &idSearch);
    for (ctr=0; ctr<10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1; // set to true because customer found
            break;     // and stop looping because customer found
        }
        if (custID[ctr] > idSearch) // No need to keep searching
        {
            break;
        }
    }

    // 3. Handle if ID is found or not found
    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n** That customer's balance is $%.2f.\n",
                   custBal[ctr]);
            printf("No additional credit.\n");
        }
        else
        {
            printf("The customer's credit is good! (%.2f)\n",
                   custBal[ctr]);
        }
    }
    else
    {
        printf("** You have entered an incorrect customer ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }

    return (0);
}
