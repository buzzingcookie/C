#include <stdio.h>

int power(int base, int power);

int main() {
    int a;

    printf("%d", power(2,3));
}

int power(int base, int power) {

    int p, z;
    p = 1;

    for ( z = 1; z <= power; z++)
    {
        p = base * p;
    }

    return p;
}