// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.28 Saving sequential files to your computer

#include "use_struct_books.h"
#include <stdlib.h>
#include <stdio.h>

FILE * fptr;

int main(void)
{
    int ctr;
    int numBooks = 2;
    struct bookInfo books[numBooks];

    // First get the information on books
    for (ctr=0; ctr<numBooks; ctr++)
    {
        printf("What is the name of the book #%d?\n", (ctr+1));
        gets(books[ctr].title);
        puts("Who is the author? ");
        gets(books[ctr].author);
        puts("How much did the book cost? ");
        scanf("$%f", &books[ctr].price);
        puts("How many pages are in the book? ");
        scanf(" %d", &books[ctr].pages);
        getchar(); // clears last newline for next loop
    }

    // Next open and test the file
    fptr = fopen("./write_to_file.txt", "w");
    if (fptr == 0)
    {
        printf("ERROR: File could not be opened.\n");
        exit(1);
    }

    // Then write some data into this file
    fprintf(fptr, "\n\nHere is the collection of books: \n");
    for (ctr=0; ctr<numBooks; ctr++)
    {
        fprintf(fptr, "#%d: %s by %s\n", (ctr+1), books[ctr].title,
                books[ctr].author);
        fprintf(fptr, "Is has %d pages and costs $%.2f\n", 
                books[ctr].pages, books[ctr].price);
        fprintf(fptr, "\n\n");
    }

    // Always close your files
    fclose(fptr);

    return (0);
}
