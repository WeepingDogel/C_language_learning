/*
Exercise 2-1. 

Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values 
from standard headers and by direct computation. 

Harder if you compute them: determine the ranges of the various
floating-point types.
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Ranges of Data Types in C:\n");
    printf("Char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char: 0 to %u\n", UCHAR_MAX);
    printf("Short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned Short: 0 to %u\n", USHRT_MAX);
    printf("Int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned Int: 0 to %u\n", UINT_MAX);
    printf("Long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned Long: 0 to %lu\n", ULONG_MAX);
    printf("--------------------------------------------------------------\n");
    printf("Float: %E to %E\n", FLT_MIN, FLT_MAX);
    printf("Double: %E to %E\n", DBL_MIN, DBL_MAX);
    printf("Long Double: %LE to %LE\n", LDBL_MIN, LDBL_MAX);
    printf("Unsigned Float: 0 to %E\n", FLT_MAX);
    printf("Unsigned Double: 0 to %E\n", DBL_MAX);
    printf("Unsigned Long Double: 0 to %LE\n", LDBL_MAX);
    
    return 0;
}


