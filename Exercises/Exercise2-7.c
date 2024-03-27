/*
Exercise 2-7.

Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
*/

#include <stdio.h>
unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ((1 << n) - 1) << (p - n + 1);
    return x ^ mask;
}
int main()
{
    unsigned x = 0b10101010;
    int p = 5;
    int n = 3;
    unsigned result = invert(x, p, n);
    printf("Result of invert(0b10101010, 5, 3): 0b");
    for (int i = (8 - 1); i >= 0; i--)
    {
        putchar((result & (1u << i)) ? '1' : '0');
    }
    return 0;
}