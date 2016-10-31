#include <stdio.h>
#include <stdlib.h>
#define LIST_SZ 10

typedef struct account {
    char user_name[50];
    int account_no;
} ACCT;

void main() {
    ACCT * accList[LIST_SZ]; /* Array of pointers */
    
    int i;
    for (i = 0; i < LIST_SZ; i++) {
        accList[i] = (ACCT *)malloc(sizeof(ACCT));
        accList[i]->account_no = i;
    }
    for (i = 0; i < LIST_SZ; i++) {
        printf("Account No: %2d\n", accList[i]->account_no);
    }
}
