/*
Exercise 2-9.

In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
in x. Explain why.

Use this observation to write a faster version of bitcount.

*/

#include <stdio.h>

int bitcount(unsigned int x);
int main()
{
    unsigned int x = 11;
    printf("Number %d bit count: %d\n", x, bitcount(x));
}

int bitcount(unsigned int x)
{
    int count = 0;
    while (x != 0)
    {
        x &= (x - 1);
        count++;
    }
    return count;
}