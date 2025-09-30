#include "../munit/munit.h"
#include "exercise.h"
#include <string.h>

static MunitResult test_snek_score_1() {
    float result = snek_score(3, 4, 5, 0.1);
    munit_assert_double_equal(result, 1.9, 6);
    return MUNIT_OK;
}

static MunitResult test_snek_score_2() {
    float result = snek_score(10, 10, 10, 0.1);
    munit_assert_double_equal(result, 11.0, 6);
    return MUNIT_OK;
}

static MunitResult test_snek_score_3() {
    float result = snek_score(105, 205, 207, 0.1);
    munit_assert_double_equal(result, 2194, 6);
    return MUNIT_OK;
}

MunitTest tests[] = {
    {"/score_1", test_snek_score_1, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/score_2", test_snek_score_2, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {"/score_3", test_snek_score_3, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL} // null terminated
};

static const MunitSuite suite = {
    .prefix = "snek_score",
    .tests = tests,
    .suites = NULL,
    .iterations = 1,
    .options = MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)]) {
    return munit_suite_main(&suite, NULL, argc, argv);
}