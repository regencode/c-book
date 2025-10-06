#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t x = 1;
    if (*(uint8_t *)&x == 1)
        printf("Little endian\n");
    else
        printf("Big endian\n");
}
