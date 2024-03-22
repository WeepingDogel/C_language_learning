/*
Exercise 1-21.

Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing.
Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop,
which should be given preference?
*/

#include <stdio.h>

#define TAB_WIDTH 4

void entab()
{
    int c;
    int nb = 0;  // number of consecutive blanks
    int pos = 1; // current position in the line (1-indexed)

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            nb++;
        }
        else
        {
            if (nb > 0)
            {
                int nt = nb / TAB_WIDTH;        // number of tabs needed
                int remainder = nb % TAB_WIDTH; // number of spaces leftover

                for (int i = 0; i < nt; i++)
                {
                    putchar('\t');
                    pos += TAB_WIDTH - pos % TAB_WIDTH; // move to the next tab stop
                }

                for (int i = 0; i < remainder; i++)
                {
                    putchar(' ');
                    pos++;
                }

                nb = 0; // reset the number of blanks
            }

            if (c == '\n')
            {
                pos = 1; // reset position at new line
            }
            else
            {
                putchar(c);
                pos++;
            }
        }
    }
}

int main()
{
    entab(); // call the entab function to perform the entabbing process
    return 0;
}