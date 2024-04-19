/*
Exercise 5-3.

Write a pointer version of the function strcat that we showed in Chapter 2:
strcat(s,t) copies the string t to the end of s.
*/

// Declaration
void strcat(char *s, const char *t);

int main()
{
    char s[] = "Hello";
    char t[] = "World";
    strcat(s, t);
    printf("%s\n", s);

    return 0;
}

// Defeination
void strcat(char *s, const char *t)
{
    // Move s pointer to the end of the string
    while (*s) 
        s++;
    // Copy t to the end of s
    while ((*s++ = *t++)) 
        ;
}
