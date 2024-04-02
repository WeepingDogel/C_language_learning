/*
Exercise 3-1.

Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop and
measure the difference in run-time.

*/

#include <stdio.h>

int binsearch(int x, int v[], int n);
int main()
{
    // Define the array.
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // Caculate the length of the array.
    int n = sizeof(array) / sizeof(array[0]);
    // Define the element which is required to be found.
    int x = 4;
    // Get the result.
    int result = binsearch(x, array, n);
    if (result != -1)
    {
        printf("Element is found at the index at %d\n", result);
    }
    else
    {
        printf("Element is not found in the array.\n");
    }
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high && x != v[mid])
    {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;
    else
        return -1; // x not found
}