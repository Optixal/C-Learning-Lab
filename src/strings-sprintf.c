#include <stdio.h>

void main() {
    int val = 12;
    char string[50];

    sprintf(string, "The value of val is %d\n", val);
    printf("%s", string);
}
