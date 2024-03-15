/*
Exercise 1.15.

Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/

#include <stdio.h>

float fahr_to_celsius(float fahr);
void print_temp_list(float lower, float upper, float step);

void main()
{
    print_temp_list(0, 300, 20);
}

void print_temp_list(float lower, float upper, float step)
{
    float fahr, celsius;
    fahr = lower;

    while (fahr <= upper)
    {
        celsius = fahr_to_celsius(fahr);
        printf("----------------\n");
        printf("|%3.2f\t|%6.2f|\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fahr_to_celsius(float fahr)
{
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}