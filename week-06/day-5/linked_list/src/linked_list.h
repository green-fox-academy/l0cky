#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct linked_list {
    int data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *create_linked_list();

#endif // _LINKED_LIST_H
