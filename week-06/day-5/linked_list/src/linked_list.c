#include <stdlib.h>
#include "linked_list.h"

linked_list_t *create_linked_list()
{
    linked_list_t *new_head = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_head->data = 0;
    new_head->next = NULL;

    return new_head;
}
