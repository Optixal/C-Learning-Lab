#include <stdio.h>
#include <string.h>

void main() {
    char str1[10] = "first";
    char str2[10];

    strcpy(str2, str1);
    printf("%s\n", str2);
}
