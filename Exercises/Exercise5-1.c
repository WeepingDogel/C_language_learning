/*
Exercise 5-1.

As written, `getint` treats a `+` or `-` not followed by a digit as a valid
representation of zero. Fix it to push such a character back on the input.
*/

#include <ctype.h>
int getch(void);
void ungetch(int);
/* getint: get next integer from input into *pn */
int getint(int *pn)
{
    int c, sign;
    while (isspace(c = getch())) // skip white space
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c); // it is not a number
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
    {
        c = getch();
        if (!isdigit(c))
        { // if next char is not a digit, push both chars back
            ungetch(sign == 1 ? '+' : '-');
            return 0; // return zero indicating no number was found
        }
    }
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}