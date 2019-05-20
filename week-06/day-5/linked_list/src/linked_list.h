#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct linked_list {
    int data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *create_linked_list();

linked_list_t *return_last_node(linked_list_t *head);

void insert_end(linked_list_t *head, int value);

#endif // _LINKED_LIST_H
