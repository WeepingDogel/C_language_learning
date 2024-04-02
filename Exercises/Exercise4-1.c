/*
Exercise 4-1.

Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.

*/

#include <stdio.h>
#include <string.h>

// Declare the function
int strindex(char s[], char t[]);
int main()
{
    char line[] = "Hello there, this is a simple test";
    char pattern[] = "is";
    int position;
    position = strindex(line, pattern);
    if (position >= 0)
    {
        printf("Rightmost occurrence of '%s' in '%s' is at position %d.\n", pattern, line, position);
    }
    else
    {
        printf("The pattern '%s' was not found in '%s'.\n", pattern, line);
    }
}

// Define the function
int strindex(char s[], char t[])
{
    int i, j, k, pos = -1;
    int t_length = 0;
    // Calculating length of t once for efficiency
    while (t[t_length] != '\0')
    {
        t_length++;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && k == t_length)
        {
            // update the position here, outside of the inner loop
            pos = i;
        }
    }
    return pos;
}