/*
Exercise 1-22.

Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input.
Make sure your program does something intelligent with very long lines,
and if there are no blanks or tabs before the specified column.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH 10

void foldLines()
{
    int c;
    int pos = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            pos = 0;
            putchar(c);
        }
        else
        {
            pos++;
            if (pos > MAX_LINE_LENGTH)
            {
                if (c == ' ' || c == '\t')
                {
                    putchar('\n');
                    pos = 0;
                }
                else
                {
                    putchar(c);
                }
            }
            else
            {
                putchar(c);
            }
        }
    }
}

int main()
{
    foldLines();
    return 0;
}