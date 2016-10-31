#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    while (i < argc) {
        printf("Parameter %d is %s\n", i, argv[i]);
        i++;
    }
    return 0;
}
