## Pointer

Imagine a series of houses on a street. Each house has an ***address*** and **inside each house**, there is a ***value*** (like the number of people living there).

* A ***variable*** in C, like `int x`, is like one of those houses. It has an ***address*** and it stores a ***value***.
* A ***pointer***, like `int *ip`, is like having a sheet of paper where you can write down the ***address of one of the houses***, but **not the value inside**.
* When you write `ip = &x;`, it's like writing the ***address of `x`'s house*** on your paper. The `&` symbol is like saying ***"the address of"***.
* If you then write `y = *ip;`, it's like ***going to the house whose address is on your paper*** (`x`'s house), ***checking the number of people inside***, and then ***updating `y`'s house with that same number***. The `*` symbol is used to say ***"the value at this address"***.
* When you change the value with `*ip = 0;`, you're saying ***"change the value inside the house at the address on my paper to `0`."***
* Finally, `ip = &z[0];` is like changing the piece of paper to point to ***the address of the first house in a row of houses*** (**the first element** in array `z`).

Pointers can seem tricky at first, but once you get the hang of it, they're a powerful tool in C that allows you to manipulate data efficiently. 

Remember, the pointer itself just holds an address, and using the `*` allows you to ***access the value stored at that address***.

### The differenece between `ip = &x` and `*ip = 0`

* `ip = &x;`
  * This line is ***assigning the address of the variable `x` to the pointer `ip`***. 
  * The `&` operator takes ***the address of `x`***, and `ip` is set to hold that address. After this assignment, `ip` doesn't contain an actual number but rather ***the location in memory where `x` is stored***.

* `*ip = 0;`
  * This line is dereferencing the pointer `ip` to ***access the value it points to, which is the value of `x`***, and then assigns the value `0` to that location. 
  * The `*` operator here is used to ***access the value at the address stored in ip***. So if `ip` was pointing to `x`, this line effectively changes the value of `x` to `0`.

In short, `ip = &x;` is about ***setting the pointer to point to the variable's address***, while `*ip = 0;` is about ***changing the value of the variable that the pointer is pointing to***.