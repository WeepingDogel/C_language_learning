/*
Exercise 1-18. 

Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/

#include <stdio.h>

#define true 1
#define false 0

int is_whitespace(int c)
{
    return (c == ' ' || c == '\t');
}

void remove_trailing_whitespace()
{
    int c;
    int in_space = false;

    while ((c = getchar()) != EOF)
    {
        if (is_whitespace(c))
        {
            in_space = true;
        }
        else if (c == '\n')
        {
            if (!in_space)
            {
                putchar(c);
            }
            in_space = false;
        }
        else
        {
            if (in_space)
            {
                in_space = false;
            }
            putchar(c);
        }
    }
}

int main()
{
    remove_trailing_whitespace();
    return 0;
}