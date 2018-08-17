/* Function getch in C example */
#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h> 
#include <curses.h>

int main(void)
{
   printf("Waiting for a character to be pressed from the keyboard to exit.\n");
 
   getch();
   return 0;
}
