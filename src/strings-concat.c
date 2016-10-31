#include <stdio.h>
#include <string.h>

void main() {
    char str1[10] = "first";
    char str2[10] = "second";

    strcat(str1, str2);
    printf("%s\n", str1);
}
