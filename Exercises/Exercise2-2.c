/*
Exercise 2-2.

Write a loop equivalent to the for loop above without using && or ||.
*/

#include <stdio.h>
#include <stdlib.h>

#define OPEN 0

int main()
{
    // If the value of OPEN is 1, then it means open the loop.
    // Otherwise, the loop will be closed.
    for (int i = 0; i < 10; i++)
    {
        if (OPEN == 0)
        {
            printf("Closed.");
            break;
        }
        else
        {
            printf("Loop [%d]\n", i);
        }
    }
    return 0;
}
