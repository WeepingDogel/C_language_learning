## Bitwise

In C programming, bit manipulation operators are used to **perform operations on data at the bit level**. 

Let's start with the bit manipulation operators in C:

### 1. Bitwise AND (`&`): 

This operator is used to ***clear specific bits in a number***. It compares each bit of two values, and the result is `1` ***only if both compared bits are `1`***.

Example:

```c
int n = 15;     // In binary: 1111
int mask = 6;   // In binary: 0110
int result = n & mask;  // Result is 2, binary: 0010
```

Here, only the second bit is set in both `n` and `mask`, so result will have its second bit set.

### 2. Bitwise OR (`|`): 

This operator is used to ***set specific bits in a number***. If ***at least one of the compared bits is 1***, the resulting bit is set to `1`.

Example:

```c
int x = 1;      // In binary: 0001
int set_on = 4; // In binary: 0100
int result = x | set_on; // Result is 5, binary: 0101
```
Here, result will have both the first and third bits set.

### 3. Bitwise XOR (`^`): 

This operator is used to ***toggle bits***. The resulting bit is `1` if the ***compared bits are different***, and `0` if ***they are the same***.

Example:
```c
int a = 5;      // In binary: 0101
int b = 3;      // In binary: 0011
int result = a ^ b; // Result is 6, binary: 0110
```
Here, the second and third bits are different, so they are set in the result.

### 4. Left Shift (`<<`): 

This shifts all bits in a number to the left by a certain number of positions, filling in the new rightmost bits with zeros. It's like multiplying the number by `2` for each shift position.

Example:
```c
int x = 3;      // In binary: 0011
int result = x << 2; // Result is 12, binary: 1100
```

Here, `x` is multiplied by `4` (or `2^2`) when we shift it `2` positions to the left.

### 5. Right Shift (`>>`):

This shifts all bits in a number to the right. If it's an ***unsigned*** number, ***it fills the new leftmost bits with zeros***. If it's ***signed*** and the system uses ***arithmetic shifting***, it fills with the s***ign bit (extending the most significant bit)***; 

Otherwise, if it's ***logical shifting*** or the quantity is ***unsigned***, it fills with zeros. This operation is like dividing the number by `2` for each shift position, with some caveats on the sign for signed numbers.

Example (for unsigned integer):

```c
unsigned int x = 12; // In binary: 1100
unsigned int result = x >> 2; // Result is 3, binary: 0011
```

Here, `x` is effectively divided by `4` (or `2^2`) when we shift it `2` positions to the right.

### 6. Bitwise NOT (~): 

This unary operator ***inverts all the bits in a number***. A bit set to `0` will become `1`, and a bit set to `1` will become `0`.

Example:
```c
int x = 5;      // In binary: 0101
int result = ~x; // In binary: ...1010 (depends on the size of int, preceding bits are all 1s)
```
Here, each bit in `x` is inverted.

