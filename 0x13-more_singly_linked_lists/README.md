SINGLY LINKED LISTS

In C programming, a singly linked list is a data structure that consists of a sequence of nodes, where each node contains a value and a pointer to the next node in the sequence. The first node is called the head of the list, and the last node points to NULL to indicate the end of the list.
Here is an example implementation of a singly linked list in C:
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void insert_front(struct node **head, int value) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

void insert_back(struct node **head, int value) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->value = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct node *current_node = *head;
    while (current_node->next != NULL) {
        current_node = current_node->next;
    }
    current_node->next = new_node;
}
void print_list(struct node *head) {
    struct node *current_node = head;
    while (current_node != NULL) {
        printf("%d ", current_node->value);
        current_node = current_node->next;
    }
    printf("\n");
}
int main() {
    struct node *head = NULL;
    insert_back(&head, 1);
    insert_back(&head, 2);
    insert_front(&head, 3);
    print_list(head);
    return 0;
}
