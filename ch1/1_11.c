#include <stdio.h>
#define IN 1
#define OUT 0


int main() {
    int c, n_lines, n_words, n_chars, state;

    state = OUT;
    n_lines = n_words = n_chars = 0;
    while((c = getchar()) != EOF) {
        ++n_chars;
        if(c == '\n') ++n_lines;
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if(state == OUT) {
            state = IN;
            ++n_words;
        }
    }
    printf("Lines: %d\nWords: %d\nChars: %d\n", 
            n_lines, n_words, n_chars);

    return 0;
}
