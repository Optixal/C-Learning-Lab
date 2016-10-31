#include <stdio.h>
#include <string.h>

void main() {
    char str1[10] = "first";
    char str2[10] = "fire";
    if (strcmp(str1, str2) == 0) {
        printf("The two strings %s and %s are identical!\n", str1, str2);
    } else {
        /* Return a non-zero value when different */
        printf("The two strings %s and %s are different!\n", str1, str2);
    }
    
    char str3[10] = "wowzer";
    char str4[10] = "wOwZeR";
    if (strcasecmp(str3, str4) == 0) {
        printf("The two strings %s and %s are identical (ignoring case)!\n", str3, str4);
    } else {
        /* Return a non-zero value when different */
        printf("The two strings %s and %s are different (ignoring case)!\n", str3, str4);
    }
}
