#include <stdio.h>

int main() {

    long c, d;
    int nl, tabs, blanks;
    c = 0;

    printf("%ld\n", c);

    /* WHILE METHOD*/
    while (getchar() != EOF)
    {
        ++c;
    }

    // printf("%ld\n", c);

    /* FOR METHOD*/
    for(d = 0; getchar() != EOF; ++d)
        ;
}