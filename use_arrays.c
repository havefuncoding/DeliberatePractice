// C Programming Absolute Beginner's Guide 3rd Ed. 
// Authors Greg Perry and Dean Miller
// Chapter 21: Arrays
// This program creates an array of 10 game scores for a basketball.
// The scores from the first six games are in the program and the
// scores from the last four are inputted by the user.

#include <stdio.h>
#include <string.h>

int main(void)
{
    int gameScores[10] = {12, 5, 21, 15, 32, 10};
    int totalPoints = 0;
    int i;
    float avg;

    for (i=6; i<10; i++)
    {
        printf("What did the player score in game %d? ", i+1);
        scanf(" %d", &gameScores[i]);
    }

    for (i=0; i<10; i++)
    {
        totalPoints += gameScores[i];
    }  

    avg = ((float)totalPoints/10);
    
    printf("\n\nThe Player's scoring average is %.1f.\n", avg);

    return (0);
}
