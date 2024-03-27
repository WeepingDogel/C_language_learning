/*
Exercise 2-5.

Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.

(The standard library function strpbrk does the same job but returns a pointer to the
location.)

*/

#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
    char s1[] = "WeepingDogel is smart!";
    char s2[] = "n";
    int position;
    position = any(s1, s2);
    if (position != -1)
    {
        printf("The first location in string s1 where any character from string s2 occurs: %d \n", position);
    }
    else
    {
        printf("There's no character from s2 occurs s1.\n");
    }
    return 0;
}

int any(char s1[], char s2[])
{
    // Iterate through each character of s1.
    for (int i = 0; s1[i] != '\0'; i++)
    {
        // Iterate through each character of s2.
        for (int j = 0; s2[j] != '\0'; j++)
        {
            // If character from s2 is found in s1, return the position.
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    // If no character from s2 is found in s1, return -1.
    return -1;
}