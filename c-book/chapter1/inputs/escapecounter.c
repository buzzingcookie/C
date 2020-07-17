#include <stdio.h>

int main() {

    long c;
    int nl, tabs, blanks;

    c = 0;

    /* COUNTING NEW LINES */
    while((c = getchar()) != EOF){
        if(c == '\n'){
            ++nl;
        }
        if(c == '\t'){
            ++tabs;
        }
        if(c == ' '){
            ++blanks;
        }
    }

    printf("NEW LINES: %d\n", nl);
    printf("SPACES: %d\n", tabs);
    printf("TABS: %d\n", blanks);
}