// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.3 Conditions

/* Fortune Cookie Teller!
1. Build a fortune cookie program that uses either the Chinese Zodiac
   to generate a fortune or a horoscope based on the user's input.
2. Prompt user for birth year 
3. Generate a custom message or fortune using user inputs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

char * getZodiacSign(int);
void printCustomFortune(char *); 

#define BASE_YEAR 1900
#define MAX_YEAR 2018

int main(void)
{
    int iBirthYear;
    printf("\n*** Fortune Cookie Teller ! ***\n\n");
    printf("Enter your birth year to see your custom fortune...\n");
    printf("Birth year: ");
    scanf(" %i", &iBirthYear);

    printCustomFortune(getZodiacSign(iBirthYear));

    return 0;
}

/***************************************************************************/

// Prompts user for birth year, month, and day
// Returns corresponding zodiac sign
char * getZodiacSign(int year)
{
    // Take a base, maybe 1900
    // subtract 1900 from user birth year, year of the rat
    // handle edge scenarios, not 1900 and not beyond current year
    // use while loop to keep subtracting 12 while difference >= 12
    char * pZodiacSign = "Dragon";
    int iDiff;
    if (year < BASE_YEAR || year > MAX_YEAR)
    {
        printf("Please retry with a valid birth year between %d and %d\n",
                BASE_YEAR, MAX_YEAR);
        printf("Exiting...\n");
        exit(1);
    }
    else
    {
        iDiff = year - BASE_YEAR;
        while (iDiff > 12)
        {
            iDiff -= 12;
            //printf("iDiff is now %d\n", iDiff);
        }
        switch(iDiff) 
        {
            case (0): 
                pZodiacSign = "Rat";
                break;
            case (1): 
                pZodiacSign = "Ox";
                break;
            case (2): 
                pZodiacSign = "Tiger";
                break;
            case (3): 
                pZodiacSign = "Rabbit";
                break;
            case (4): 
                pZodiacSign = "Dragon";
                break;
            case (5): 
                pZodiacSign = "Snake";
                break;
            case (6): 
                pZodiacSign = "Horse";
                break;
            case (7): 
                pZodiacSign = "Sheep";
                break;
            case (8): 
                pZodiacSign = "Monkey";
                break;
            case (9): 
                pZodiacSign = "Rooster";
                break;
            case (10): 
                pZodiacSign = "Dog";
                break;
            case (11): 
                pZodiacSign = "Pig";
                break;
            default:
                printf("ERROR: View script for additional details.\n");
                exit(1);      
        }
    }
    return pZodiacSign;
}


/***************************************************************************/

// Prints a custom fortune with user zodiac sign
// Inputs
// char *: zodiac sign of user
void printCustomFortune(char * sign)
{
    printf("\nThis is the best year for you, dear %s!\n", sign);

    return;
}
