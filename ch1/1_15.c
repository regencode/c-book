#include <stdio.h>
#define FAHR_WIDTH 8
#define CELC_WIDTH 8

float fahrtocelc(int fahr); 

int main() {
    int fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    for(fahr = lower; fahr <= upper; fahr += step) {
        printf("%3d %2.1f\n", fahr, fahrtocelc(fahr));
    }
    return 0;
}

float fahrtocelc(int fahr) {
    return (5.0/9.0) * (fahr-32.0);
}

