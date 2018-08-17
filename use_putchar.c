#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char quote[] = "Action cures fear.\n";

    for (i=0; i<strlen(quote); i++)
    {
        putchar(quote[i]);
    }
    
    return 0;
}
