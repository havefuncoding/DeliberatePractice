// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.28 Saving sequential files to your computer

// This program takes the book info file from the first example
// and reads each line from the file and outputs it to the screen.

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
    char fileLine[100]; // to hold each line of input
    fptr = fopen("./write_to_file.txt", "r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }

    fclose(fptr); // Always close the files!

    return (0);
}
