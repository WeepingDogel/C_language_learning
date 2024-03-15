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