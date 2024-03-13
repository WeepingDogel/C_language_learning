/*
Exercise 1-8. 
Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
    int c, nb = 0, nt = 0, nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nb;
        }
        if (c == '\t')
        {
            ++nt;
        }
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("blanks: %d\n", nb);
    printf("tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);

    return 0;
}
