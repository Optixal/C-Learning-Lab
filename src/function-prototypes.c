#include <stdio.h>

/* Function prototyping is recommended
 * even when the functions are declared
 * before main().
 *
 * The parameter names are optional,
 * what's impt is the return type and
 * parameter types. */

void add(int, int);

void main() {
    add(5, 11);
}

void add(int x, int y) {
    printf("Wow %d + %d = %d", x, y, x + y);
}
