#include <stdio.h>

int main() {

    int a, b, c;

    b = EOF;
    printf("The value of EOF is %d\n", b);

    a = (getchar() != EOF);

    if(a == 1){
        printf("GET CHAR IS %d\n", a);
    }
    else
    {
        printf("You have not typed anything...");
    }
    

    // while ((c = getchar()) != EOF)
    // {
    //     putchar(c);
    //     c = getchar();
    // }

    // printf("%d\n", c);
}