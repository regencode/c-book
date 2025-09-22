#include <stdio.h>

int main() {
    int c, n_blanks, n_tabs, n_lines;
    n_blanks = n_tabs = n_lines = 0;
    while ((c = getchar()) != EOF) {
        if(c == ' ') ++n_blanks;
        else if(c == '\t') ++n_tabs;
        else if(c == '\n') ++n_lines;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", 
            n_blanks, n_tabs, n_lines);
    return 0;
}
