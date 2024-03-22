/*
Exercise 1-20.

Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop.
Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>

#define TAB_STOP 4 // define tab stop as 4 spaces

void detab(int n)
{
    int c, pos;

    pos = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            for (; pos % n != 0; ++pos) // fill remaining spaces to reach next tab stop
                putchar(' ');
        }
        else if (c == '\n')
        { // newline character, reset the position
            putchar(c);
            pos = 0;
        }
        else
        { // regular character, just print it out
            putchar(c);
            ++pos; // increase current position by 1
        }
    }
}

int main()
{
    detab(TAB_STOP);

    return 0;
}
