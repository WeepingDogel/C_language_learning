## Constants

### For integer constants:

1. **Standard Integer (int)**: A number like `1234` without any suffix is considered an `int`.
2. **Long Integer**: Add an `l` or `L` to make it a `long`, like `123456789L`. If it's too large for an int, it's automatically a `long`.

3. **Unsigned Integer**: Add a `u` or `U` to make it `unsigned`, like `1234U`.
4. **Unsigned Long Integer**: Combine them for an `unsigned long`, using `ul` or `UL`, like `123456789UL`.

### For floating-point constants:

1. **Double**: Numbers with a decimal point or exponent, like `123.4` or `1e-2`, are `double`.
2. **Float**: Add `f` or `F` to make it a `float`, like `123.4f`.
3. **Long Double**: Add `l` or `L` for a `long double`, like `123.4L`.

### For octal and hexadecimal constants:

1. **Octal**: Start with `0` (zero), like `037` to represent octal `31`.
2. **Hexadecimal**: Start with `0x` or `0X`, like `0x1F` to represent hex 31.
3. **Long and Unsigned**: Append `L` to make them `long`, and `U` for `unsigned`. Like `0XFUL` is an unsigned long with decimal value 15.

### In summary:

1. Integers default to `int`.
2. Long (`L`), unsigned (`U`), and combinations thereof (`UL`), modify integer size and sign.
3. Floating-point numbers default to double, with optional float (`F`) or long double (`L`) suffixes.
4. Octal (start with `0`) and hexadecimal (start with `0x` or `0X`) are alternate bases, also with optional `L` or `U` suffixes.