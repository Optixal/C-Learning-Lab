#include <stdio.h>

void main() {
    char input[256] = "I am 18 years old";
    char name[256];
    int age;

    /* sscanf(scan_this, for_this, put_here)
     * scan_this and put_here must be POINTERS! */
    sscanf(input, "I am %d years old", &age);
    printf("Well you look young for %d...\n", age);
}
