#include <stdio.h>

int main() {
    int c;
    int i, j;
    int counter['~'-' '+1];

    for(i = 0; i <= '~' - ' '; ++i) {
        counter[i] = 0;
    }
    while((c = getchar()) != EOF) {
        if(' ' <= c && c <= '~') ++counter[c - ' '];
    }
    for(i = 0; i <= '~' - ' '; ++i) {
        char cur = i + ' ';
        printf("%2c | ", cur);
        for(j = 0; j < counter[i]; ++j) printf("*");
        printf("\n");
    }
    return 0;
}
