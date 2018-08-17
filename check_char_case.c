#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    // Initialize all three test variables to 0 i.e.false
    hasUpper = hasLower = hasDigit = 0;

    printf("What is your username? ");
    scanf(" %s", user);

    printf("What is your password? ");
    scanf(" %s", password);

    // Loop through each character of the password and
    // test whether it is a digit, uppercase, lowercase letter
    for (i=0; i<strlen(password); i++)
    {
        if (isdigit(password[i]))
        {
            hasDigit = 1;
            continue;    
        }
        if (isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if (islower(password[i]))
        {
            hasLower = 1;
            continue;
        }
    }

    // The if portion will only execute if all three variables below are 1
    if ((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nExcellent work, %s,\n", user);
        printf("Your password has upper and lowercase letters and a number.\n");
    }
    else
    {
        printf("\n\nYou should consider a new password, %s\n", user);
        printf("One that uses upper and lowercase letters and a number.\n");    

    }

    return (0);
}
