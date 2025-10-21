#include "unity.h"
#include "unity_test_runner.h"

TEST_CASE("Template test", "[template]")
{
    TEST_ASSERT_EQUAL(1, 1);
}

void app_main(void)
{
    unity_run_menu();
}
