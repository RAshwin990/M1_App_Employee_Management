#include "unity.h"
#include "feature.h"

#define PROJECT_NAME  "Employee_Management"

void test_add(void)
{
TEST_ASSERT_EQUAL(pass,add(1));
}
void test_list(void)
{
TEST_ASSERT_EQUAL(pass,list(1));
}
void test_modify(void)
{
TEST_ASSERT_EQUAL(pass,modify());
}
void test_delete(void)
{
TEST_ASSERT_EQUAL(pass,delete(1));
}
int main()
{
UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_list);
    RUN_TEST(test_modify);
    RUN_TEST(test_delete);

return UNITY_END();
}
