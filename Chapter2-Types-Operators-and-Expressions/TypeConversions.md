## Type Conversions

When you mix different data types in operations, the data with the smaller range (like ***integers***) is **automatically converted to the data type with the larger range** (like ***floating-point numbers***) to **prevent loss of information**. 

For example, an ***integer*** `i` would be converted to a ***floating point*** in the expression `f + i`. 

However, you can't use ***nonsensical operations (like a float as an array index)***. 

Also, operations that could **lose data** (like converting a ***long integer*** to a ***short*** one, or a ***float*** to an ***integer***) might give you a **warning** but aren't forbidden.

---

```c
/* atoi: convert s to integer */
int atoi(char s[])
{
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}
```

The function `atoi` (**ASCII to Integer**) converts a string of digits into its numeric equivalent. Here's the step-by-step process and the principles behind how the implementation in the code works:

1. Initialize an ***integer*** `n` to `0`, which will hold the final numeric value of the string.

2. Iterate through **each character of the string** `s` using a for loop, with the loop variable `i`.

3. In each **iteration**, check if **the current character** `s[i]` is between `'0'` and `'9'` (inclusive), which are the **ASCII values for the digit characters**.

4. If **the character is a digit**, subtract the ASCII value of `'0'` from it **to get the actual numeric value of that character**. For example, `'3' - '0'` will give you the ***integer*** `3`.

5. Multiply the current value of `n` by `10` (**to shift its digits one place to the left**) and then add the **numeric value of the character**. This is because each digit in a number is **10 times more significant than the one to its right**.

6. Repeat steps **3 through 5** for each character in the string until **a ***non-digit character*** is encountered** or **the string ends**.

7. Return the ***integer*** `n`, which now represents the numeric value of the string.

**This function assumes that the string only contains digit characters and does not handle possible leading whitespace**, a sign (`+` or `-`), or ***non-digit characters***, which are part of a more **robust** `atoi` implementation.

Here's an example to illustrate:

* Given the string `"123"`, the function will process it as follows:
  * `n = 0`
  * `n = 10 * 0 + (1) -> n = 1`
  * `n = 10 * 1 + (2) -> n = 12`
  * `n = 10 * 12 + (3) -> n = 123`
* The final value returned is `123`.

Remember, the expression `(s[i] - '0')` is **critical** because **it converts the ASCII value of the character to the corresponding integer (`0` to `9`)**.