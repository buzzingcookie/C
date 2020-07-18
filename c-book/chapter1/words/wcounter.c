#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {

    long c;
    int lines, characters, words, state;

    state = OUT;
    lines = characters = words = 0;

    while ((c = getchar()) != EOF)
    {
        ++characters;

        if(c == '\n') {
            ++lines;
        }

        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            ++words;
        }
    
        putchar(c);
    }
    
    printf("NEW LINES: %d\n", lines);
    printf("CHARACTERS: %d\n", characters);
    printf("WORDS: %d\n", words);
}