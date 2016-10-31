#include <stdio.h>
#include <stdlib.h> /* malloc(), free() */

/* malloc() returns a void pointer of this newly
 * allocated memory location, which needs to be casted
 * before assigning it to ptr. ptr is now pointing
 * at the newly reserved memory location, big enough
 * to hold an int */

void main() {
    int * ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 2013;
    printf("At address %u, the value of integer is %d\n", ptr, *ptr);
}
