#include <stdio.h>

/* Compile with -D parameter:
 * gcc -D DEBUG -o ../../build/debugging-ifdef-macro debugging-ifdef-macro.c */

void main() {
    printf("This is a normal print\n");
    
    #ifdef DEBUG
    printf("This is a debug print\n");
    #endif
}
