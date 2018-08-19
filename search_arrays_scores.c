// C Programming Absolute Beginner's Guide 3rd Ed. 
// Authors Greg Perry and Dean Miller
// Chapter 22: Search Arrays
// This program fills 3 arrays with a player's total points,
// rebound, and assists. It loops through the scoring array
// and finds game with the most points. Once it knows that
// information, it prints the totals from all three categories 
// from that game.

#include <stdio.h>

int main(void)
{
    int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
    int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
    int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
    int bestGame = 0; // comparison variable
    int gmMark = 0; // mark which game is the best scoring game
    int i;

    for (i=0; i<10; i++)
    {
        if (gameScores[i] > bestGame)
        {
            bestGame = gameScores[i];
            gmMark = i;
        }
    }
    
    printf("\n\nThe Player's best scoring game totals:\n");
    printf("The best game was game #%d\n", gmMark+1);
    printf("Scored %d points\n", gameScores[gmMark]);
    printf("Scored %d points\n", gameRebounds[gmMark]);
    printf("Scored %d points\n", gameAssists[gmMark]);
}
