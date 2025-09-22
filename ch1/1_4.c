#include <stdio.h>
#define FAHR_WIDTH 8
#define CELC_WIDTH 8

int main() {
    float fahr, celcius;
    int lower, upper, step;
    int i;
    lower = -100;
    upper = 200;
    step = 3;

    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    printf("|%*s|%*s|\n", CELC_WIDTH, "Celcius", FAHR_WIDTH, "Fahr");
    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    for(celcius = lower; celcius <= upper; celcius += step ) {
        fahr = (9.0/5.0)*celcius + 32;
        printf("|%*.0f|%*.1f|\n", CELC_WIDTH, celcius, FAHR_WIDTH, fahr);
    }
    for(i = 0; i < FAHR_WIDTH + CELC_WIDTH + 3; i += 1) {
        printf("-");
    }
    printf("\n");
    return 0;
}
