# Get Started

In C, the program to print `hello, world` is:

```c
#include <stdio.h>
main()
{
    printf("hello, world\n");
}
```

As a specific example, on
the UNIX operating system **you must create the program in a file** whose name ends in **_`.c`_**,
such as hello.c, then compile it with the command

```commandline
gcc hello.c
```

If **you haven't botched anything**, such as omitting a character or misspelling something, the compilation will **proceed silently, and make an executable file called `a.out`**.

By typing the command:

```
./a.out
```

It will print:

```
hello, world
```

A C program, whatever its size, consists
of ***functions*** and ***variables***. A function contains ***statements*** that specify the computing operations to be done, and **variables store values used** during the computation.

Normally you are at liberty to give functions whatever names you like, but ***`main`*** is special - your program begins executing at the beginning of ***`main`***. This means that every program must have a ***`main`*** somewhere.

***`main`*** will usually call other ***functions*** to help perform its job, some that you wrote, and others from libraries that are provided for you.

The first line of the program: `#include <stdio.h>` tells the ***compiler*** to include ***information about the standard input/output library***.

One method of communicating data between functions is for the calling function to provide a list of values, called ***arguments***, to the function it calls.

The parentheses after the function **name surround the argument list**. In this example, ***`main`*** is defined to be a function that expects no arguments, which is indicated by the empty ***`list ( )`***.
