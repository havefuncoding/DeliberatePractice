// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.27 Setting up your data with data structures
// This program again looks to fill three book structures with info
// but it uses a pointer array this time. 

#include "use_struct_books.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ctr;
    int numBooks = 2;
    struct bookInfo * books[numBooks];

    // 1. Get the information about each book from the user
    for (ctr=0; ctr<numBooks; ctr++)
    {
        books[ctr] = (struct bookInfo*)malloc(sizeof
                                              (struct bookInfo));
        printf("What is the name of the book #%d?\n", (ctr+1));
        gets(books[ctr]->title);
        puts("Who is the author? ");
        gets(books[ctr]->author);
        puts("How much did the book cost? ");
        scanf(" $%f", &books[ctr]->price);
        puts("How many pages in the book? ");
        scanf(" %d", &books[ctr]->pages);
        getchar();
    } 
    
    // 2. Print the header line then loop through and print info
    printf("\n\nHere is the collection of books: \n");
    for (ctr=0; ctr<numBooks; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr]->title,
               books[ctr]->author);
        printf("\nIt has %d pages and costs %.2f",
               books[ctr]->pages, books[ctr]->price);
        printf("\n\n");
    }

    return (0);
}
