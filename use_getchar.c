#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char focus_of_the_day[25];

    printf("Enter your focus of the day, then press ENTER to continue...\n");
    for (i=0; i<25; i++)
    {
        focus_of_the_day[i] = getchar();
        if (focus_of_the_day[i] == '\n')
        {
            i--;
            break;
        }
    }

    printf("This is your focus of the day in reverse:\n");
    for (; i>=0; i--)
    {
        putchar(focus_of_the_day[i]);
    }
    putchar('\n');




    return 0;
}
