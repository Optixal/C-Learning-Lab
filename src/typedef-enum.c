#include <stdio.h>

typedef enum {
    true, false
} BOOLEAN;

void main() {
    BOOLEAN b_var;
    b_var = false;

    if (b_var == true) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }
}
