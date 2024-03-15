[power.c](./power.c)

```c
#include <stdio.h>

int power(int base, int n);

int main()
{

    int a = 2;
    printf("%d", power(a, 3));
    return 0;
}


int power(int base, int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * base;
    }

    return p;
}
```

# Functions

A function provides a convenient way to encapsulate some computation, which can then be used **without worrying about its implementation**.

Function definitions can appear in any order, and in one source file or several, although no function can be split between files.

A function definition has this form:

```
return-type function-name(parameter declarations, if any)
{
    declarations
    statements
}
```

When we talk about **_functions_**, the **_variable names listed in the parentheses in the function definition are called parameters_**. These parameters act as **_placeholders_** for the **_values_** that will be **_passed to the function_** when it is **_called_**.

The terms **_"formal argument"_** and **_"actual argument"_** are often used to distinguish between **_the parameters defined in the function signature (formal arguments)_** and **_the actual values passed to the function when it is called (actual arguments)_**.

So, **_formal arguments refer to the parameters in the function definition_**, while **_actual arguments refer to the values passed to the function during the function call_**. It's a common practice to use these terms to differentiate between the two in programming discussions.


>In C, you need to declare the ***function signature (also known as a function prototype)*** **before calling the function in the main part of the program**. This is because ***C is a statically-typed language, which requires functions to be explicitly declared before they are used in the program***. 
>
>On the other hand, in Python, which is a dynamically-typed language, you don't need to declare the function before using it because Python is able to infer the function's signature at runtime. This leads to less boilerplate code and allows for a more flexible coding style compared to statically-typed languages like C. 
>
>So, in C, you need to declare the function ***twice (once as a prototype and once as the actual function implementation)*** to inform the compiler about ***the function's signature and then define the function's behavior***. This is a design choice made to ensure strict typing and avoid potential errors related to undeclared functions.