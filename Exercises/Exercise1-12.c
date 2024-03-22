/*
Exercise 1-12.

Write a program that prints its input one word per line.
*/
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}
