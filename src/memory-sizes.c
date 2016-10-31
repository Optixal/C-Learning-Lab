#include <stdio.h>

void main() {
    printf("Size of int      : %-2d bytes\n", sizeof(int));
    printf("Size of char     : %-2d bytes\n", sizeof(char));
    printf("Size of char[20] : %-2d bytes\n", sizeof(char[20]));
    printf("Size of char *   : %-2d bytes (4 on 32-bit)\n", sizeof(char *));
}
