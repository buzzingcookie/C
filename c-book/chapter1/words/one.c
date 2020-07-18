#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{

    long c;
    int e, state;

    state = OUT;

    while ((c = getchar()) != EOF)
    {   
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            putchar(c);
            printf("\n");
        }
    }    
}