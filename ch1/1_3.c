#include <stdio.h>
#define FAHR_WIDTH 8
#define CELC_WIDTH 8

int main() {
    float fahr, celcius;
    int lower, upper, step;
    int i;
    lower = 0;
    upper = 300;
    step = 20;

    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    printf("|%*s|%*s|\n", FAHR_WIDTH, "Fahr", CELC_WIDTH, "Celcius");
    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    for(fahr = lower; fahr <= upper; fahr += step ) {
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("|%*.0f|%*.1f|\n", FAHR_WIDTH, fahr, CELC_WIDTH, celcius);
    }
    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    return 0;
}
