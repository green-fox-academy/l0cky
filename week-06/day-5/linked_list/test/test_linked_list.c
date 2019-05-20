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
    TEST_ASSERT_EQUAL_INT(0, head_ptr->data);

}

void test_create_linked_list_next(void)
{
    linked_list_t *data = NULL;
    TEST_ASSERT_EQUAL_INT(data, head_ptr->next);
}

void test_linked_list_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement linked_list");
}
