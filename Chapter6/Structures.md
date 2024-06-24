## Structures

A structure is a collection of one or more variables, possibly of different types, grouped
together under a single name for convenient handling. 

```c
#include <stdio.h>
#include <string.h>

struct dog
{
    int age;
    char name[255];
    char job[255];
};

int main()
{
    struct dog weepingdogel;
    weepingdogel.age = 20;
    strcpy("WeepingDogel", weepingdogel.name);
    strcpy("FullStack Developer", weepingdogel.job);
    return 0;
}
```


