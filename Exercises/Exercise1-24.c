/*
Exercise 1-24.

Write a program to check a C program for rudimentary syntax errors like
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and
double, escape sequences, and comments. (This program is hard if you do it in full
generality.)
*/

#include <stdio.h>

#define MAX_STACK_SIZE 100

int top = -1;
char stack[MAX_STACK_SIZE];

void push(char c)
{
    if (top < MAX_STACK_SIZE - 1)
    {
        stack[++top] = c;
    }
}

char pop()
{
    if (top >= 0)
    {
        return stack[top--];
    }
    return '\0';
}

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c == '(' || c == '{' || c == '[' || c == '\'' || c == '"')
        {
            push(c);
        }
        else if (c == ')' || c == '}' || c == ']' || c == '\'' || c == '"')
        {
            char popped = pop();
            if ((c == ')' && popped != '(') || (c == '}' && popped != '{') || (c == ']' && popped != '[') || (c == '\'' && popped != '\'') || (c == '"' && popped != '"'))
            {
                printf("Syntax Error: Mismatched delimiters\n");
                return 1;
            }
        }
    }

    if (top != -1)
    {
        printf("Syntax Error: Unmatched delimiters\n");
        return 1;
    }

    printf("No syntax errors found\n");
    return 0;
}