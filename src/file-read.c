#include <stdio.h>

void main() {
    FILE *fp;
    int value;

    fp = fopen("../resources/input.txt", "rb");
    if (fp) {
        while(1) {
            value = fgetc(fp);
            if (value == EOF) break;
            else printf("%c", value);
        }
        fclose(fp);
    }
}
