#include <stdio.h>

int main() {
    int c, n_blanks;
    n_blanks = 0;
    while((c = getchar()) != EOF) {
        if(n_blanks == 0) {
            if(c == ' ') ++n_blanks;
            putchar(c);
        }
        else {
            if(c != ' ') {
                putchar(c);
                n_blanks = 0;
            }
        }
    }
    return 0;
}
