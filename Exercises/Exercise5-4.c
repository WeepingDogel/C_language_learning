/*
Exercise 5-4.

Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.
*/

#include <stdio.h>

// Declare the function.
int strend(char *s, char *t);
int main()
{
    char s[] = "hello world";
    char t[] = "world";
    printf("%d\n", strend(s, t));
    return 0;
}
// Define the function
int strend(char *s, char *t)
{
    char *s_end = s;
    char *t_end = t;
    // Move to the end of both strings.
    while (*s_end) // find the end of s
        s_end++;
    while (*t_end) // find the end of t
        t_end++;
    // Move backwards in both strings and compare
    while (t_end > t)
    {
        // also check if s_end has reached the start of s
        if (s_end == s || *--s_end != *--t_end)
        {
            return 0;
        }
    }
    // If the above loop completed, that means all of t matched the end of s
    return 1;
}
