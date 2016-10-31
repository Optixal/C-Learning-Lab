#include <stdio.h>

typedef enum {
    true, false
} BOOLEAN;

void main() {
    BOOLEAN b_var;
    b_var = true;
    if (b_var == true) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
}
