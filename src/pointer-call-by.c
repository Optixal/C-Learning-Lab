#include <stdio.h>

/* Pass/Call by Value */
void value(int num) {
    num += 2;
    printf("a in value() is now %d\n", num);
}

/* Pass/Call by Reference */
void reference(int *num) {
    /* "*" is the dereferencing symbol for symbolizing a pointer
     * "*num" means: value of what pointer num is pointing at */
    *num += 2;
    printf("a in reference() is now %d\n", *num);
}

void main() {
    int a = 5;
    printf("a in main is %d\n", a);

    value(a);
    printf("a in main is %d\n", a);
    
    /* "&" is the referencing symbol
     * "&a" means: memory address of a */
    reference(&a);
    printf("a in main is %d\n", a);
}
