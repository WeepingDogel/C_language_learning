/*
Exercise 1-19.

Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAXLENGTH 1000

void reverse(char s[], int length)
{
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    char input[MAXLENGTH];
    int length = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            input[length] = '\0';
            reverse(input, length);
            printf("%s\n", input);
            length = 0;
        }
        else
        {
            input[length] = c;
            length++;
        }
    }
    return 0;
}