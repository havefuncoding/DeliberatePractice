// C Programming for the Absolute Beginner 3rd Ed.
// Keith Davenport and Michael Vine
// Ch.1 Getting Started with C Programming

/* Objectives:
1. Print Name
2. Print Diamond shape
3. Print Calendar month
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_name();
void print_diamond();
void print_calendar();

int main(void)
{

    print_name();
    print_diamond();
    print_calendar();

    return 0;
}

/**********************************************************************/

// Prints the name of user
void print_name()
{
    char name[52];    

    // Ask user name and print out
    printf("Enter your name: ");
    scanf(" %s", name);
    printf("\n*** Hello %s! You are a diamond =) ***\n", name); 
    return;
}

/**********************************************************************/

// Prints a diamond shape
void print_diamond()
{
    int i;
    char *top = "  *  ";
    char *middle = " * * ";
    char *base = "*   *"; 
    
    printf("\n\n\t%s\n\t%s\n\t%s\n\t%s\n\t%s\n\n",
           top, middle, base, middle, top);
    return;
}

/**********************************************************************/

// Prints calendar
void print_calendar()
{
    char command[4];
    int system(const char*command);
    system("cal");
    return;
}


/* OUTPUT
Graces-MacBook-Pro:DeliberatePractice grace$ gcc print_calendar.c 
Graces-MacBook-Pro:DeliberatePractice grace$ ./a.out 
Enter your name: Grace

*** Hello Grace! You are a diamond =) ***


      *  
     * * 
    *   *
     * * 
      *  

    August 2018
Su Mo Tu We Th Fr Sa
          1  2  3  4
 5  6  7  8  9 10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30 31

Graces-MacBook-Pro:DeliberatePractice grace$
*/





