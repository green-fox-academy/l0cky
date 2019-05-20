#include <stdlib.h>
#include "linked_list.h"

linked_list_t *create_linked_list()
{
    linked_list_t *new_head = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_head->data = 0;
    new_head->next = NULL;

    return new_head;
}

linked_list_t *return_last_node(linked_list_t *head)
{
    linked_list_t *it = head;
    while (it->next != NULL) {
        it = it->next;
    }
    return it;
}

void insert_end(linked_list_t *head, int value)
{
    linked_list_t *new_node = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_node->data = value;
    new_node->next = NULL;
    return_last_node(head)->next = new_node;
}