/*
Exercise 2-6.

Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
*/

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}
int main()
{
    unsigned x = 255;
    int p = 4;
    int n = 3;
    unsigned y = 7;
    printf("%u\n", setbits(x, p, n, y));
    return 0;
}
