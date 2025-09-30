#include "../munit/munit.h"
#include "exercise.h"
#include <string.h>

static MunitResult test_get_average() {
    float result = get_average(3, 4, 5);
    munit_assert_double_equal(result, 4.0, 6);
    return MUNIT_OK;
}

static MunitResult test_non_integer() {
    float result = get_average(3, 3, 5);
    munit_assert_double_equal(result, 11.0 / 3.0, 6);
    return MUNIT_OK;
}

static MunitResult test_average_of_same() {
    float result = get_average(10, 10, 10);
    munit_assert_double_equal(result, 10.0, 6);
    return MUNIT_OK;
}

static MunitResult test_average_of_big_numbers() {
    float result = get_average(1050, 2050, 2075);
    munit_assert_double_equal(result, 1725.0, 6);
    return MUNIT_OK;
}

MunitTest tests[] = {
    {"/get_average", test_get_average, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/non_integer", test_non_integer, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/same_numbers", test_average_of_same, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/big_numbers", test_average_of_big_numbers, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL} // null terminated
};

static const MunitSuite suite = {
    .prefix = "get_average",
    .tests = tests,
    .suites = NULL,
    .iterations = 1,
    .options = MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)]) {
    return munit_suite_main(&suite, NULL, argc, argv);
}