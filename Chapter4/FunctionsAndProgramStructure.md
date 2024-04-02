## Functions And Program Structure

### Functions

***Functions*** are blocks of code that perform a specific task. They help break down complex problems into smaller, manageable parts. Functions can take inputs (known as ***parameters***) and can return a ***value***.

```c
returnType functionName(parameter1Type parameter1, parameter2Type parameter2) {
    // Function body
    // ...
    return value; // if returnType is not void
}
```

#### Function Declaration and Definition

A function declaration tells the compiler about a ***function's name***, ***return type***, and ***parameters***. A function definition provides the ***actual body of the function***.

#### Calling Functions

To use a function, you call it by passing the required arguments.
```c
functionName(arg1, arg2);
```

### Program Structure

#### Scope

Variables can be either local to a function or global. ***Local variables*** are accessible **only within the function they are declared**, while ***global variables*** are accessible **throughout the program**.

#### Recursion

A function can call itself, which is known as recursion. It's crucial to have a base case to prevent infinite recursion.

#### Header Files

 These files typically contain declarations for functions and macros. They allow for better code organization and reusability.

#### The Preprocessor

It processes directives before the actual compilation starts. Common directives include `#include` to include header files and `#define` to define constants or macros.

#### Storage Classes
They define the scope, visibility, and lifecycle of variables or functions. The storage classes in C are `auto`, `register`, `static`, and `extern`.
