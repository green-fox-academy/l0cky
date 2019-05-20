#include "../vendor/ceedling/vendor/unity/src/unity.h"
#include "../src/linked_list.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_create_linked_list_data(void)
{
    int data = 0;
    linked_list_t *head_ptr = create_linked_list();

    TEST_ASSERT_EQUAL_INT(0, head_ptr->data);
}

void test_create_linked_list_next(void)
{
    int *data = NULL;
    linked_list_t *head_ptr = create_linked_list();

    TEST_ASSERT_EQUAL_INT(data, head_ptr->next);
}

void test_linked_list_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement linked_list");
}
