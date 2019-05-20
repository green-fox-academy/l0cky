#include <stdlib.h>
#include "../vendor/ceedling/vendor/unity/src/unity.h"
#include "../src/linked_list.h"

linked_list_t *head_ptr = NULL;

void setUp(void)
{
    head_ptr = create_linked_list();
}

void tearDown(void)
{
    free(head_ptr);
    head_ptr = NULL;
}

void test_create_linked_list_data(void)
{
    int data = 0;
    TEST_ASSERT_EQUAL_INT(data, head_ptr->data);

}

void test_create_linked_list_next(void)
{
    linked_list_t *next = NULL;
    TEST_ASSERT_EQUAL(next, head_ptr->next);
}

void test_return_last_node_after_create_linked_list(void)
{
    int data = return_last_node(head_ptr)->data;
    TEST_ASSERT_EQUAL_INT(data, head_ptr->data);
}

void test_return_last_node_after_insert_end(void)
{
    int add_value = 1;
    insert_end(head_ptr, add_value);
    int data = head_ptr->next->data;
    TEST_ASSERT_EQUAL_INT(add_value, data);
}

void test_inseret_end(void)
{
    int data = 1;
    insert_end(head_ptr, data);
    TEST_ASSERT_EQUAL_INT(data, (return_last_node(head_ptr)->data));
}

void test_linked_list_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement linked_list");
}
