## Exercise 2-7

```c
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
```

This function inverts (flips) `n` bits of an unsigned integer `x`, starting from the `p`th position. Here's a step-by-step breakdown:

1. `unsigned mask = ((1 << n) - 1) << (p - n + 1);`
   - First, `(1 << n) - 1` generates a mask with `n` bits set to 1.
   - Then, we shift the mask to the left `(p - n + 1)` times. This positions the mask where we want to start inverting bits in `x`.
2. `return x ^ mask;`
   - The ^ (xor) operator is used to flip the bits in `x` where there's a 1 in the mask.
   - If a bit in `x` and the corresponding bit in the mask is 1, the result is 0 (because 1 ^ 1 = 0).
   - If a bit in `x` is 0 and the corresponding bit in the mask is 1, the result is 1 (because 0 ^ 1 = 1).

So, in essence, the `invert` function flips the `n` bits starting from the `p`th position in `x` by creating a mask of `n` bits and applying it to `x` using the xor operation.


Let’s use the `invert` function with the following example parameters:
- `x = 0b10101010` (170 in decimal)
- `p = 5`
- `n = 3`

Now, let's walk through the function step by step to see how it works with these inputs:

```c
unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1 << n) - 1) << (p - n + 1);
    return x ^ mask;
}
```

1. Calculate the mask:
   - `1 << n` is `1 << 3`, which is `0b1000` (8 in decimal).
   - Subtracting 1 from that gives us `0b0111` (7 in decimal).
   - `p - n + 1` is `5 - 3 + 1`, which equals `3`.
   - Shifting `0b0111` left by 3 positions gives us `0b0111000`.
2. Apply the mask to `x` using XOR:
   - `x` is `0b10101010`.
   - `mask` is `0b0111000`.
   - Align the mask with `x` from the `p`th position: `0b101*011*10`
   - The `invert` function performs XOR on `x` with the mask: `0b10101010 ^ 0b00111000`.

The XOR operation will flip the bits in `x` wherever there is a 1 in the mask:
```
  10101010
^ 00111000
  --------
  10010010
```

So, the output after running `invert(0b10101010, 5, 3)` will be `0b10010010` (146 in decimal).

Here is the same example in actual C code:

```c
int main() {
    unsigned x = 0b10101010;
    int p = 5;
    int n = 3;
    unsigned result = invert(x, p, n);
    printf("Result of invert(0b10101010, 5, 3): 0b");
    for (int i = (8 - 1); i >= 0; i--) {
        putchar((result & (1u << i)) ? '1' : '0');
    }
    return 0;
}
```

This will output the result as a binary string, showing the inverted bits. 
