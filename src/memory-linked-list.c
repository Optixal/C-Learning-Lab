#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char val;
    struct node *next;
} node_t;

void create_list(node_t *head, int length) {
    printf("Size of a node: %d bytes\n\n", sizeof(node_t));
    printf("Allocating memory for linked list size of %d...\n", length);

    int i;
    for (i = 0; i < length; i++) {
        /* Assign value */
        head->val = (char)(i + 65);

        /* Allocate memory for next node unless it is the last node */
        if (length - i == 1) {
            head->next = NULL;
            printf("Allocated memory (0x%X), value (%c) and next (NULL) for node %d!\n", head, head->val, i);
        } else {
            head->next = malloc(sizeof(node_t));
            if (head == NULL) {
                printf("Not enough memory available!\n");
                exit(1);
            }
            printf("Allocated memory (0x%X), value (%c) and next (0x%X) for node %d!\n", head, head->val, head->next, i);

            /* Move on to next node */
            head = head->next;
        }
    }
    printf("Linked list of size %d successfully created!\n\n", length);
}

void print_list(node_t *head) {
    node_t *current = head;
    
    printf("Printing all values in list...\n");
    int i;
    for (i = 0; current != NULL; i++) {
        printf("Value of node %d: %c\n", i, current->val);
        current = current->next;
    }
    printf("\n");
}

char access_val(node_t *head, int index) {
    int i;
    for (i = 0; i < index; i++) {
        head = head->next;
    }
    return head->val;
}

void append(node_t *head, char val) {
    while (head->next != NULL) {
        head = head->next;
    }
    printf("Pushing new item to end of list...\n");
    head->next = malloc(sizeof(node_t));
    head->next->val = val;
    head->next->next = NULL;
}

void push(node_t **head, char val) {
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void pop(node_t **head) {
    node_t *next_node = (*head)->next;
    free(*head);
    *head = next_node;
}

void remove_index(node_t **head, int index) {
    node_t *current = *head;
    int i;
    for (i = 0; i < index - 1; i++) {
        current = current->next;
    }
    node_t *tmp_next = current->next;
    current->next = current->next->next;
    free(tmp_next);
}

int main() {
    node_t *list;
    list = malloc(sizeof(node_t));
    if (list == NULL) {
        printf("Not enough memory available!\n");
        exit(1);
    }
    create_list(list, 10);
    print_list(list);

    int access1 = 5;
    printf("The value of node %d is %c\n", access1, access_val(list, access1));
    int access2 = 2;
    printf("The value of node %d is %c\n\n", access2, access_val(list, access2));
    
    printf("Appending '$' to list...\n");
    append(list, '$');
    print_list(list);

    printf("Pushing 'x' to list...\n");
    push(&list, 'x');
    print_list(list);

    printf("Popping list...\n");
    pop(&list);
    print_list(list);

    int index_to_rm = 5;
    printf("Removing index %d...\n", index_to_rm);
    remove_index(&list, index_to_rm);
    print_list(list);
}
