// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.27 Setting up your data with structures
// This program gets the bookInfo structure by including bookInfo.h
// and asks the user to fill in three structures and then prints them

#include <stdio.h>
#include "use_struct_books.h"

int main(void)
{
    int ctr;
    int numBooks = 2;
    struct bookInfo books[numBooks]; // array of 3 structure variables
    
    // 1. Get the information about each book from the user
    for (ctr=0; ctr<numBooks; ctr++)
    {
        printf("What is the name of the book #%d?\n", (ctr+1));
        gets(books[ctr].title);
        puts("Who is the author? ");
        gets(books[ctr].author);
        puts("How much did the book cost? ");
        scanf(" $%f", &books[ctr].price);
        puts("How many pages in the book? ");
        scanf(" %d", &books[ctr].pages);
        puts("Great!");
        getchar(); // clears last newline for next loop
    };

    // 2. Print a header line and then loop through and print info
    printf("\n\nHere is the collection of books: \n");
    for (ctr=0; ctr<numBooks; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr].title,
               books[ctr].author);
        printf("\nIt is %d pages and cost %.2f", books[ctr].pages,
               books[ctr].price);
        printf("\n\n");
    }    

    return (0);
}
