#include <stdio.h>

/* Original way of defining a struct */
struct MY_DATA {
    int inval1;
    int inval2;
    int outval;
};

void add(struct MY_DATA *d) {
    d->outval = d->inval1 + d->inval2;
}

/* typedef - Neat way of defining a struct
 * No need to write "struct" in the datatype*/
typedef struct {
    int inval1;
    int inval2;
    int outval;
} MY_DATA_2;

void add2(MY_DATA_2 *d) {
    d->outval = d->inval1 + d->inval2;
}

void main() {
    struct MY_DATA data;
    data.inval1 = 3;
    data.inval2 = 2;
    add(&data);
    printf("The sum of %d and %d is %d\n", data.inval1, data.inval2, data.outval);

    MY_DATA_2 data2;
    data2.inval1 = 5;
    data2.inval2 = 7;
    add2(&data2);
    printf("The sum of %d and %d is %d\n", data2.inval1, data2.inval2, data2.outval);
}
