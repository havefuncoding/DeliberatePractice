// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.28 Saving sequential files to your computer
// This program open the file created with letters A-Z and 
// changes one of the letters to an *. It then prints the new
// list with the altered list of letters.

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
    char letter;
    int i;

    // 1. Open the file
    fptr = fopen("./write_to_file_alphabets.txt", "r+");
    if (fptr == 0)
    {
        printf("There was an error opening the file.\n");
        exit(1);
    }

    // 2. Ask user which letter to change
    printf("Which # letter would you like to change (1-26)? ");
    scanf(" %d", &i);

    // 3. Seek that position from the beginning of the file
    fseek(fptr, (i-1), SEEK_SET); // subtract 1 from the position
                                  // because array starts at 0

    // 4. Write an * over the letter in the position
    fputc('*', fptr);
    
    // 5. Jump back to the beginning 
    fseek(fptr, 0, SEEK_SET);

    // 6. Print it all out
    printf("Here is the file now:\n");
    for (i=0; i<26; i++)
    {
        letter = fgetc(fptr);
        printf("The next letter is %c.\n", letter);
    }

    // 7. Always close your files!
    fclose(fptr);

    return (0);
}
