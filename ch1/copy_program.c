#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
    }
    printf("EOF reached! c = %d\n", c);
    return 0;
}
