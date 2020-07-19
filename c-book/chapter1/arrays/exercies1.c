#include <stdio.h>

int main() {

    int c, i, whitespace, other;
    int ndigit[10];

    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
        // printf("%d", ndigit[i]);
    }

    while( (c = getchar()) != EOF )
    {
        if (c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++whitespace;
        }
        else{
            ++other;
        }
    }

     printf("\n");

    printf("Digits = ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ndigit[i]);
        if (i == 9)
        {
            printf("\n");
        }
        
    }
    printf("Whitespaces: %d", whitespace);
    printf(", other: %d", other);
}