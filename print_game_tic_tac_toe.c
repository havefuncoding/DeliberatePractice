// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.6 Arrays

/*
    
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void print_board();
void assign_square(int, int);
void user_error();
void unexpected_error(char *);
void check_win();
void game_over(char);

// Global variables
char c2DBoard[3][3];
char cWhoWon = ' ';
int iCurrentPlayer = 0;
int iSquare;

int main(void)
{
    int o, i;
    
    system("clear");
    printf("\n********** TIC TAC TOE! **********\n\n");    
    for (o=0; o<3; o++)
        for (i=0; i<3; i++)
            c2DBoard[o][i] = ' ';
    print_board();

    // Play game until player wins
    while ( cWhoWon==' ' )
    {
        if ( iCurrentPlayer==1 ) // X, first player
        {
            printf("\nPLAYER X\n");
            printf("Select a square (1-9): ");
            scanf(" %d", &iSquare);
            assign_square(iSquare, iCurrentPlayer);
            print_board();
            check_win();
        }
        else if ( iCurrentPlayer==2 ) // O, second, player
        {
            printf("\nPLAYER O\n");
            printf("Select a square (1-9): ");
            scanf(" %d", &iSquare);
            assign_square(iSquare, iCurrentPlayer);
            print_board();
            check_win();
        }
        else // X, default
        {
            printf("\nPLAYER X\n");
            printf("Select a square (1-9): ");
            scanf(" %d", &iSquare);
            assign_square(iSquare, iCurrentPlayer);
            print_board();
            check_win();
        }
    }

    game_over(cWhoWon);

    return 0;
}


void print_board()
{
    printf("\t|\t|\t\n");
    printf("\t|\t|\t\n");
    printf("%c\t|%c\t|%c\t\n", c2DBoard[0][0], c2DBoard[0][1], c2DBoard[0][2]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\t\n");
    printf("\t|\t|\t\n");
    printf("%c\t|%c\t|%c\t\n", c2DBoard[1][0], c2DBoard[1][1], c2DBoard[1][2]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\t\n");
    printf("%c\t|%c\t|%c\t\n", c2DBoard[2][0], c2DBoard[2][1], c2DBoard[2][2]);
    printf("\t|\t|\t\n");

}


void assign_square(int square, int player)
{
    int o,i;
    
    switch (square)
    {
        case (1): o = 0; i = 0; break;
        case (2): o = 0; i = 1; break;
        case (3): o = 0; i = 2; break;
        case (4): o = 1; i = 0; break;
        case (5): o = 1; i = 1; break;
        case (6): o = 1; i = 2; break;
        case (7): o = 2; i = 0; break;
        case (8): o = 2; i = 1; break;
        case (9): o = 2; i = 2; break;
        default: user_error();
    }

    if ( c2DBoard[o][i] == ' ' )
    {
        if ( player==0 || player==1 )
        {
            c2DBoard[o][i] = 'X';
            iCurrentPlayer = 2;
        }
        else if ( player==2 )
        {
            c2DBoard[o][i] = 'O';
            iCurrentPlayer = 1;
        }
        else
        {
            printf("\nERROR: %d is not a valid user\n", player);
        }
    }
    else
    {
        printf("\nERROR: Square already taken by \"%c\"\n", c2DBoard[o][i]);
        user_error();
    }

    return; // back to main()
}

// Exits on user error
void user_error()
{
    printf("\n%d is not a valid square.\n", iSquare);
    printf("You must learn to play by the rules, my dear.\n");
    printf("Goodbye...\n\n");
    exit(1);
}

// Prints error but continues when unexpected error arises from code
void unexpected_error(char * message)
{
    printf("\n%s\n", message);
}

void check_win()
{
    if (c2DBoard[0][0]==c2DBoard[0][1] && c2DBoard[0][1]==c2DBoard[0][2] && c2DBoard[0][0]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[1][0]==c2DBoard[1][1] && c2DBoard[1][1]==c2DBoard[1][2] && c2DBoard[1][0]!=' ') 
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[2][0]==c2DBoard[2][1] && c2DBoard[2][1]==c2DBoard[2][2] && c2DBoard[2][0]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][0]==c2DBoard[1][0] && c2DBoard[1][0]==c2DBoard[2][0] && c2DBoard[0][0]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][1]==c2DBoard[1][1] && c2DBoard[1][1]==c2DBoard[2][1] && c2DBoard[0][1]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][2]==c2DBoard[1][2] && c2DBoard[1][2]==c2DBoard[2][2] && c2DBoard[0][2]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][0]==c2DBoard[1][1] && c2DBoard[1][1]==c2DBoard[2][2] && c2DBoard[0][0]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][2]==c2DBoard[1][1] && c2DBoard[1][1]==c2DBoard[2][0] && c2DBoard[0][2]!=' ')
        cWhoWon = c2DBoard[0][0];
    else if (c2DBoard[0][0]!=' ' && c2DBoard[0][1]!=' ' && c2DBoard[0][2]!=' '
          && c2DBoard[1][0]!=' ' && c2DBoard[1][1]!=' ' && c2DBoard[1][2]!=' '
          && c2DBoard[2][0]!=' ' && c2DBoard[2][1]!=' ' && c2DBoard[2][2]!=' ')
        cWhoWon = 'C';

    return; // back to main()
}

void game_over(char winner)
{
    switch(winner)
    {
        case ('X'):
            printf("\n---------- PLAYER X WINS!!! ----------\n\n");
            break;
        case ('O'):
            printf("\n---------- PLAYER O WINS!!! ----------\n\n");
            break;
        case ('C'):
            printf("\n---------- IT'S A DRAW, FOLKS... ----------\n\n");
            break;
    }
    exit(1);
}

