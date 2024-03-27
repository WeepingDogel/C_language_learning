/*
Exercise 2-4.

Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
*/

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[] = "WeepingDogel is not clever!";
    const char s2[] = "not";
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int found;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        found = 0;
        for (k = 0; s2[k] != '\0' && !found; k++)
        {
            if (s1[i] == s2[k])
            {
                found = 1;
            }
        }
        if (!found)
        {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}
