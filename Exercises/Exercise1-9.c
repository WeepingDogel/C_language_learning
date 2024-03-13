/*
Exercise 1-9. 
Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main()
{
    char preChar = '\0';
    char currentChar;

    while ((currentChar = getchar()) != EOF)
    {
        // Check if both the previous and current characters are blanks
        if (preChar == ' ' && currentChar == ' ')
        {
            // skip this iteration to replace multiple blanks with a single blank.
            continue; 
        }
        putchar(currentChar); // Output the character.
        preChar = currentChar;
    }

    return 0;
}