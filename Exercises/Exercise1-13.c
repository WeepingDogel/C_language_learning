/*
Exercise 1-13.
Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal;
a vertical orientation is more challenging.
*/

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LENGTH 10

int main()
{

    int c, state, length;
    int word_lengths[MAX_LENGTH] = {0}; // Initialize the Array.
    state = OUT;
    length = 0;
    printf("Type characters or words, CTRL+D to end.\n");
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                if (length < MAX_LENGTH)
                {
                    ++word_lengths[length];
                }
                state = OUT;
                length = 0;
            }
        }
        else
        {
            state = IN;
            ++length;
        }
    }

    printf("\n--------\nHistogram of the lengths of words:\n");

    for (int i = 1; i < MAX_LENGTH; i++)
    {
        printf("%2d:", i);
        for (int j = 0; j < word_lengths[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
