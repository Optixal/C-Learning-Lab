#include <stdio.h>

typedef struct {
    int inval1;
    int inval2;
    int outval;
} MY_DATA;

void add(MY_DATA *d) {
    d->outval = d->inval1 + d->inval2;
}

void main() {
    MY_DATA data;

    data.inval1 = 5;
    data.inval2 = 7;
    add(&data);

    printf("The sum of %d and %d is %d\n", data.inval1, data.inval2, data.outval);
}
