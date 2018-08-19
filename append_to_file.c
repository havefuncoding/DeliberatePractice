// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.28 Saving sequential files to your computer
// This program opens the existing book info file from the 
// existing file and prints it onto the screen.

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main(void)
{
    fptr = fopen("./write_to_file.txt","a");
    if (fptr == 0)
    {
        printf("Error opening the file! Sorry!\n");
        exit(1);
    }

    fprintf(fptr, "\nMore books to come!\n");
    fclose(fptr); // Always clean your files!

    return (0);
}
