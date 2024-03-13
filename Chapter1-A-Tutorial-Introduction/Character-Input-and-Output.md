# Character Input and Output

The standard library provides several functions for reading or writing one character at a time,
of which ***getchar*** and ***putchar*** are the simplest.

That is, after
```c
c = getchar();
```
the variable `c` contains the next character of input.

The function putchar prints a character each time it is called:
```c
putchar(c);
```
prints the contents of the integer variable `c` as a character, usually on the screen.


# EOF

**EOF** is an integer defined in `<stdio.h>`, but the specific numeric value doesn't matter as long as
it is not the same as any char value.