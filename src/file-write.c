#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    int value;

    fp = fopen("../resources/input.txt", "wb");
    if (fp) {
        fprintf(fp, "Hello World!\nTesting!\n");
        fclose(fp);
    }
}
