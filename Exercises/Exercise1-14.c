/*
Exercise 1-14.

Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>

int main()
{
    int c;
    int char_freq[128] = {0};

    while ((c = getchar()) != EOF)
    {
        ++char_freq[c];
    }

    printf("\nCharacter Frequency Histogram:\n");

    for (int i = 0; i < 128; i++)
    {
        printf("%c:", i);
        if (char_freq[i] > 0)
        {
            for (int j = 0; j < char_freq[i]; j++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}