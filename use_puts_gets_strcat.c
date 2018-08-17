#include <stdio.h>
#include <string.h>

int main(void)
{
    char city[15];
    char state[3]; // 2 chars for state abbrev. and 1 for null zero
    char fullLocation[18] = "";

    puts("Enter your city: ");
    gets(city);

    puts("Enter the state (2-letter abbreviation): ");
    gets(state);

    strcat(fullLocation, city);
    strcat(fullLocation, ", ");
    strcat(fullLocation, state);
    
    puts("\nYou live in ");
    puts(fullLocation);

    return(0);
}
