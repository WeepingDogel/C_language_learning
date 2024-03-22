/*
Exercise 1-23.

Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest.
*/

#include <stdio.h>

int main()
{
    int c;
    char lastChar, nextChar;

    lastChar = ' '; // initialize with a non-space character

    while ((c = getchar()) != EOF)
    {
        if (lastChar == '/' && c == '/')
        {
            /* This is the start of a line comment. So skip all characters until end of line */
            while ((c = getchar()) != '\n' && c != EOF)
                ;
        }
        else if (lastChar == '/' && c == '*')
        {
            // Skip characters between /* and */ comments
            int in_comment = 1;
            while (in_comment)
            {
                lastChar = c;
                c = getchar();

                if (lastChar == '*' && c == '/')
                {
                    in_comment = 0;
                }
            }
        }
        else if (c == '\'' || c == '\"')
        {
            // Skip characters within quotes/double-quotes
            char quote = c;

            while ((c = getchar()) != quote && c != EOF)
                ;

            /* If we reach end of line, don't consider it as a string */
            if (c == '\n')
            {
                putchar('\n');
                c = getchar();
            }
        }
        else
        {
            // print all other characters
            putchar(c);
        }

        lastChar = c;
    }

    return 0;
}