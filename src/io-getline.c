#include <stdio.h>

void main() {
    size_t size = 256;
    char data[size];
    char *data_ptr = data;
    printf("Enter data: ");
    ssize_t chars = getline(&data_ptr, &size, stdin);
    if (data_ptr[chars - 1] == '\n') {
        data_ptr[chars - 1] = '\0';
    }
    printf("Received input: %s\n", data);
}
