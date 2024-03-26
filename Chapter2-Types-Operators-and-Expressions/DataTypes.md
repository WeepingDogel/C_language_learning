## Data Types

Let's break down the data types in C:

* `char`: Stores a single character, takes up 1 byte.
int: Stores an integer. Its size is usually the default integer size of the computer.
* `float`: Stores a single-precision floating-point number (a number with a fractional part).
* `double`: Stores a double-precision floating-point number (more precision and larger range than `float`).

Modifiers can change the size or properties of integer data types:

* `short`: An integer that is often 16 bits. It is smaller than or equal to the size of an `int`.
* `long`: An integer that is at least 32 bits. It is larger than or equal to the size of an `int`.

Keywords `unsigned` and `signed` can modify `char` and integer types:

* `unsigned`: The number is always non-negative, and its arithmetic is modulo 2^n.
* `signed`: The number can be negative or positive.

For floating-point numbers, there's also `long double` for extended precision.

The exact size of these data types can vary by machine and compiler, but there are minimum sizes:

* `short` and `int` are at least 16 bits.
* `long` is at least 32 bits.

The headers `<limits.h>` and `<float.h>` contain constants with the sizes and other properties specific to the machine and compiler. 