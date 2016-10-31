#include <stdio.h>

unsigned int factorial(unsigned int n) {
    if (n == 1) {
        return n;
    } else if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 0;
    }
}

void main() {
    unsigned int i = 8;
    printf("Factorial %u is %u\n", i, factorial(i));
}
