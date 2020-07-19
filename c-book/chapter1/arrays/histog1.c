#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_LEN 20

int main() {

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
        }
        else
        {
            putchar('*');
        }
        
    }
}