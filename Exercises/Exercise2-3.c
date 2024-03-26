/*
Exercise 2-3.

Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>
#include <ctype.h>

int hoti(const char *s);

int main()
{
    const char *hex_string = "0xFFFFFF";
    printf("The integer value is %d\n", hoti(hex_string));
    return 0;
}

int hoti(const char *s)
{
    int hex_value = 0;
    if (s[0] == '0' && tolower(s[1]) == 'x')
    {
        s += 2;
    }
    while (*s)
    {
        char c = tolower(*s++);
        if (c >= '0' && c <= '9')
        {
            hex_value = (hex_value * 16) + (c - '0');
        }
        else if (c >= 'a' && c <= 'f')
        {
            hex_value = (hex_value * 16) + (c - 'a' + 10);
        }
    }

    return hex_value;
}
