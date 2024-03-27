## Exercise 2-6
```c
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
```
Let's break down the `setbits` function step by step to understand how it works:
1. **Clear the relevant bits in `x`:**
   We want to clear the `n` bits starting at position `p` in `x`, so we create a mask where those `n` bits are 0 and the rest are 1. This is achieved by:
   - `(~0 << n)` creates a mask with `n` zeros on the right.
   - `(~(~0 << n))` inverts the mask, resulting in a mask with `n` ones on the right.
   - `(~(~0 << n) << (p+1-n))` shifts the mask to the position where the bits should be set to 0.
   - `x & ~(~(~0 << n) << (p+1-n))` applies the mask to `x`, clearing the `n` bits at position `p`.
2. **Prepare the bits from `y`:**
   We need to extract the rightmost `n` bits from `y` and prepare them to be inserted into `x`:
   - `y & ~(~0 << n)` extracts the rightmost `n` bits of `y`.
3. **Shift the bits from `y` to the correct position:**
   We then shift the bits we've extracted from `y` left by `(p+1-n)` positions so they line up with the bits we've cleared in `x`:
   - `(y & ~(~0 << n)) << (p+1-n)` shifts the bits from `y` into the correct position.
4. **Combine `x` with the modified bits from `y`:**
   Finally, we use the bitwise OR operator `|` to combine the cleared bits in `x` with the shifted bits from `y`. This results in `x` having the `n` bits at position `p` set to the rightmost `n` bits of `y` while leaving the other bits unchanged.
The function then returns the modified `x`.
Here's the function again for reference:
```c
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}
```
When you call this function with specific values for `x`, `p`, `n`, and `y`, it will perform these steps and return the result. 