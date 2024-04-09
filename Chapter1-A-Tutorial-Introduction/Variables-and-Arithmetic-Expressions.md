# 1.2 Variables and Arithmetic Expressions

## Comments

The two lines
```c
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
```
are a comment, which in this case explains briefly what the program does. 

Any character between `/*` and `*/` are ignored by the compiler; they may be used freely to make a program easier to understand. 

## Variables

In C, ***all variables must be declared before they are used***, usually at the beginning of the ***function*** before any executable ***statements***.

```c
int fahr, celsius;
int lower, upper, step;
```
C provides several data types besides int and float, including:

| type   | description                 | range                    |
|:------|:----------------------------|:-------------------------|
| char   | character - a single byte   | -128 to 127              |
| int    | integer                     | -2147483648 to 2147483647|
| short  | short integer               | -32768 to 32767           |
| float  | single-precision floating point | 1.2E-38 to 3.4E38   |
| long   | long integer                | -9223372036854775808 to 9223372036854775807 |
| double | double-precision floating point | 2.3E-308 to 1.7E308 |

The size of these objects is also machine-dependent. There are also ***arrays***, ***structures*** and ***unions*** of these basic types, ***pointers*** to them, and ***functions*** that return them, all of which we will meet in due course.

## Arithmetic Expressions

- **Meaning**: In C, arithmetic expressions follow standard mathematical rules, with each operator having a specific purpose and precedence.
- **Operators**:
  1. Addition (+): Adds two operands.
  2. Subtraction (-): Subtracts the second operand from the first.
  3. Multiplication (*): Multiplies two operands.
  4. Division (/): Divides the first operand by the second.
  5. Modulo (%): Computes the remainder of the division of the first operand by the second.
  6. Increment (++) and Decrement (--): Increase or decrease the value of a variable by 1.
- **Order of Operations (Precedence)**:
  1. Parentheses (): Operations within parentheses are evaluated first.
  2. Unary Operators (++ and --): Increment and decrement have higher precedence.
  3. Multiplication, Division, Modulo (*, /, %): These operators have the same precedence.
  4. Addition and Subtraction (+, -): Similarly, addition and subtraction have the same precedence.
- **Example**:
  ```c
  int result = (5 + 2) * 3 / 4; // Evaluates to 5
  ```
- **Type Conversion**: In C, operations involving different data types may lead to type conversions, where implicit or explicit conversions occur to match data types for the operation.

## Loops:
- **Loops**: Loops in C help in executing a block of code repeatedly based on a condition.

### 1. While Loop:
- **Definition**: Executes a block of code as long as the specified condition is true.
- **Syntax**:
  ```c
  while (condition) {
      // Code to be executed
  }
  ```
- **Key Points**:
  - The condition is evaluated before each iteration.
  - It's essential to ensure the condition eventually becomes false to avoid an infinite loop.
  - Ideal when the number of iterations is not known beforehand.

### 2. For Loop:
- **Definition**: Executes a block of code a specified number of times.
- **Syntax**:
  ```c
  for (initialization; condition; update) {
      // Code to be executed
  }
  ```
- **Key Points**:
  - Initialization sets the loop control variable.
  - Condition is evaluated before each iteration; loop exits if false.
  - Update modifies the loop control variable after each iteration.
  - Preferred when the number of iterations is known.

### 3. Do-While Loop:
- **Definition**: Similar to the while loop but guarantees at least one execution of the code block.
- **Syntax**:
  ```c
  do {
      // Code to be executed
  } while (condition);
  ```
- **Key Points**:
  - Condition is checked after each iteration.
  - Ensures that the code block executes at least once.

### 4. Loop Control Statements:
- ***`break`***: Exits the loop it's in.
- ***`continue`***: Skips the current iteration and goes to the next iteration.

### 5. Infinite Loop:
- **Definition**: A loop that never terminates if the loop condition is always true.
- **Example**:
  ```c
  while (1) {
      // Infinite loop
  }
  ```

