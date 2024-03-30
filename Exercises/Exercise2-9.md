## Exercise 2-9

In a two's complement number system, each number is represented in a way that makes arithmetic operations straightforward. When we perform the operation `x &= (x-1)`, we're essentially turning off the rightmost 1-bit in `x`. 

Here's why:

- The expression `(x-1)` converts the rightmost 1-bit of `x` to 0, and all the bits to the right of it to 1.
- When we apply the bitwise AND operation `&` between `x` and `(x-1)`, all the bits to the right of the turned-off 1-bit become 0 because 1 AND 0 equals 0.
- The bits to the left of the rightmost 1-bit remain unchanged because they are ANDed with themselves.

Here's a faster version of `bitcount` that uses this observation:
```c
int bitcount(unsigned int x) {
    int count = 0;
    while (x != 0) {
        x &= (x - 1); // Turn off the rightmost 1-bit
        count++;
    }
    return count;
}
```
This version of `bitcount` is faster because it goes through as many iterations as there are 1-bits in `x`, rather than the total number of bits in `x`. 