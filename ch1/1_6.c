#include <stdio.h>

int main() {
    int c;
    while(printf("\n"), c = getchar() != EOF) {
        printf("%d", c);
    }
    printf("c = %d\n", c);
    return 0;
}

// getchar() != EOF is 1 if not EOF, 0 if EOF
