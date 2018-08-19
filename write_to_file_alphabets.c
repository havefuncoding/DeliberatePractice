// C Programming Complete Beginner's Guide
// By Greg Perry and Dean Miller
// Ch.28 Saving sequential files to your computer
// This program opens a file and prints A through Z into file
// and then loops and prints each letter in reverse order.

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main(void)
{
    char letter;
    int i;

    // 1. Open the file
    fptr = fopen("./write_to_file_alphabets.txt", "w+");
    if (fptr == 0)
    {
        printf("There was an error while opening the file.\n");
        exit(1);
    }

    // 2. Write alphabet characters to file
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        fputc(letter, fptr);
    }
    puts("Just wrote the letters A through Z");

    // 3. Read the file backwards
    fseek(fptr, -1, SEEK_END); // minus 1 byte from the end
    for (i=26; i>0; i--)
    {
        letter = fgetc(fptr);
        fseek(fptr, -2, SEEK_CUR); // reads letter, then backs up 2
        printf("The next letter is %c.\n", letter);
    }
    
    // 4. Close the file!
    fclose(fptr);

    return (0);
}
