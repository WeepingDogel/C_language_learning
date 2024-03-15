#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nc, nw, nl;
    int state = OUT;
    nc = nw = nl = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("lines: %d\ncharacters: %d\nwords: %d", nl, nc, nw);

    return 0;
}