## Exercise 2-8

```c
/*
Exercise 2-8.

Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions.
*/

#include <stdio.h>
// Function to compute the size of an unsigned integer in bits
unsigned int_size()
{
    unsigned int size = 0;
    for (unsigned v = (unsigned)~0; v > 0; v >>= 1, size++)
        ;
    return size;
}
// Function to right-rotate an integer x by n positions
unsigned rightrot(unsigned x, int n)
{
    unsigned int size = int_size();
    n = n % size; // Ensure n is less than the number of bits in x
    if (n == 0)
        return x;
    unsigned right_bits = x & ((1U << n) - 1); // Get the rightmost n bits
    right_bits <<= (size - n);                 // Move them to the left end
    x >>= n;                                   // Shift x n positions to the right
    return x | right_bits;                     // Combine x with the moved bits
}
int main()
{
    unsigned x = 0b10101010; // Example input
    int n = 3;               // Number of positions to rotate
    unsigned result = rightrot(x, n);
    printf("rightrot(0b10101010, 3) = 0b");
    for (int i = (int_size() - 1); i >= 0; i--)
    {
        putchar((result & (1U << i)) ? '1' : '0');
    }
    putchar('\n');
    return 0;
}
```

When you run this code with `x = 0b10101010` (170 in decimal) and `n = 3`, the function `rightrot` will rotate `x` to the right by 3 positions. The bits that are shifted out on the right are moved to the left side of `x`. 
The output will be the binary representation of the rotated integer. 