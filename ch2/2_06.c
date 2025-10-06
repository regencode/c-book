#include <stdio.h>

unsigned setbits(unsigned, int, int, unsigned);
unsigned getbits(unsigned, int, int);
void print_bits(unsigned);

int main() {
    unsigned int x, y;
    int p, n;
    x = 20;

    p = 3;
    n = 2;
    
    print_bits(x); 
    printf("%d", getbits(x, p, n));
    return 0;
}
void print_bits(unsigned x) {
    if(x%2 == 0) putchar('1');
    else putchar('0');
    while((x = (x >> 1)) > 0) {
        if(x%2 == 0) putchar('1');
        else putchar('0');
    }
    putchar('\n');
}

unsigned setbits(unsigned x, int p, int n, unsigned y);

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}
