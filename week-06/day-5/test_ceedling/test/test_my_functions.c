//
// Created by l0cky on 2019-05-20.
//
#include "../vendor/ceedling/vendor/unity/src/unity.h"
#include "../src/my_functions.h"

void test_add(void)
{
    int a = 1;
    int b = 1;
    int result = add(a, b);

    TEST_ASSERT_EQUAL_INT(2, result);
}