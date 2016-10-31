#include <stdio.h>
#include <stdlib.h> /* malloc(), free() */

void main() {
    char *string;
    string = (char *)malloc(256 * sizeof(char));
    if (string == NULL) {
        printf("No memory available!\n");
    } else {
        printf("Memory space allocated!\n");
        /* Operations */
    }
    
    if (string != NULL) {
        free(string);
        printf("Memory space freed!\n");
    }
}
