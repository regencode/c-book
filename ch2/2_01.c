#include <stdio.h>
#include <limits.h>

int main(){
    printf("size of 1 byte in this machine: %d bits\n", CHAR_BIT);
    printf("size of char: %ld bytes, %ld bits\n", sizeof(char), sizeof(char)*CHAR_BIT);

    printf("size of short: %ld bytes, %ld bits\n", sizeof(short), sizeof(short)*CHAR_BIT);
    printf("range of signed short (default): %d - %d\n", (short) 0x8000, (short) 0x7FFF);
    printf("range of unsigned short: %u - %u\n", (unsigned short)0x0000, (unsigned short)0xFFFF);

    printf("size of int: %ld bytes, %ld bits\n", sizeof(int), sizeof(int)*CHAR_BIT);
    printf("range of signed int (default): %d - %d\n", (int)0x80000000, (int)0x7FFFFFFF);
    printf("range of unsigned int: %u - %u\n", (unsigned int)0x00000000, (unsigned int)0xFFFFFFFF);

    printf("size of long: %ld bytes, %ld bits\n", sizeof(long), sizeof(long)*CHAR_BIT);
    printf("range of signed long (default): %ld - %ld\n", (long)0x8000000000000000, (long)0x7FFFFFFFFFFFFFFF);
    printf("range of unsigned long: %lu - %lu\n", (unsigned long)0x0000000000000000, (unsigned long)0xFFFFFFFFFFFFFFFF);

    return 0;
}
