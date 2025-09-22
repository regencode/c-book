#include <stdio.h>
#define IN 1
#define OUT 0
#define WORD_LENGTH_LIMIT 12

int main() {
    int c, state, word_length, i, j;
    int word_lengths[WORD_LENGTH_LIMIT+1];

    state = OUT;
    word_length = 0;
    for(i = 0; i <= WORD_LENGTH_LIMIT; i++) {
        word_lengths[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t'){
            if (state == IN) {
                if(word_length > WORD_LENGTH_LIMIT) 
                    word_length = WORD_LENGTH_LIMIT;
                ++word_lengths[word_length];
                word_length = 0;
                state = OUT;
            }
        }
        else state = IN;

        if(state == IN) ++word_length;
    }

    putchar('\n');
    for(i = 0; i <= WORD_LENGTH_LIMIT; i++){
            printf("%2d | ", i);
        for(j = 0; j < word_lengths[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
