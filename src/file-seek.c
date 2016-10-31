#include <stdio.h>

void main() {
    FILE *fp;
    int value;

    fp = fopen("../resources/input.txt", "rb");
    if (fp) {
        /* Start reading 10 bytes after seek's current cursor location (start) */
        fseek(fp, 10, SEEK_CUR);
        while (1) {
            value = fgetc(fp);
            if (value == EOF) break;
            else printf("%c", value);
        }
        fclose(fp);
    }
}
