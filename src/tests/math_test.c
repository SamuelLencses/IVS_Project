#include "acutest.h"
#include "math_lib.h"

void test_add(void) {

    // Add two zeros
    TEST_CHECK_(add(0, 0)==(0), "add(%d,%d) == %d", 0, 0, 0);

    // Add positive numbers
    TEST_CHECK_(add(2, 2)==(4), "add(%d,%d)==%d", 2, 2, 4);
    TEST_CHECK_(add(0, 2)==(2), "add(%d,%d)==%d", 0, 2, 2);
    TEST_CHECK_(add(2, 0)==(2), "add(%d,%d)==%d", 2, 0, 2);

    // Add negative numbers
    TEST_CHECK_(add(-2, -2)==(-4), "add(%d,%d)==%d", -2, -2, -4);
    TEST_CHECK_(add(0, -2)==(-2), "add(%d,%d)==%d", 0, -2, -2);
    TEST_CHECK_(add(-2, 0)==(-2), "add(%d,%d)==%d", -2, 0, -2);

    // Add positive and negative numbers
    TEST_CHECK_(add(-2, 2)==(0), "add(%d,%d)==%d", -2, 2, 0);
    TEST_CHECK_(add(-2, 3)==(1), "add(%d,%d)==%d", -2, 3, 1);
    TEST_CHECK_(add(2, -3)==(-1), "add(%d,%d)==%d", 2, -3, -1);

    // Add real numbers
    TEST_CHECK_(add(0, 3.14)==(3.14), "add(%d,%.2lf)==%.2lf", 0, 3.14, 3.14);
    TEST_CHECK_(add(3.14, 0)==(3.14), "add(%.2lf,%d)==%.2lf", 3.14, 0, 3.14);
    TEST_CHECK_(add(3.14, 4.2)==(7.34), "add(%.2lf,%.1lf)==%.2lf", 3.14, 4.2, 7.34);
    TEST_CHECK_(add(3.14, -4.2)==(-1.06), "add(%.2lf,%.1lf)==%.2lf", 3.14, -4.2, -1.06);
}

void test_sub(void) {

    // Sub two zeros
    TEST_CHECK_(sub(0, 0)==(0), "sub(%d,%d) == %d", 0, 0, 0);

    // Sub positive numbers
    TEST_CHECK_(sub(2, 2)==(0), "sub(%d,%d)==%d", 2, 2, 0);
    TEST_CHECK_(sub(0, 2)==(-2), "sub(%d,%d)==%d", 0, 2, -2);
    TEST_CHECK_(sub(2, 0)==(2), "sub(%d,%d)==%d", 2, 0, 2);

    // Sub negative numbers
    TEST_CHECK_(sub(-2, -2)==(0), "sub(%d,%d)==%d", -2, -2, 0);
    TEST_CHECK_(sub(0, -2)==(2), "sub(%d,%d)==%d", 0, -2, 2);
    TEST_CHECK_(sub(-2, 0)==(-2), "sub(%d,%d)==%d", -2, 0, -2);

    // Sub positive and negative numbers
    TEST_CHECK_(sub(-2, 2)==(-4), "sub(%d,%d)==%d", -2, 2, -4);
    TEST_CHECK_(sub(3, -2)==(5), "sub(%d,%d)==%d", 3, -2, 5);

    // Sub real numbers
    TEST_CHECK_(sub(0, 3.14)==(-3.14), "sub(%d,%.2lf)==%.2lf", 0, 3.14, -3.14);
    TEST_CHECK_(sub(3.14, 0)==(3.14), "sub(%.2lf,%d)==%.2lf", 3.14, 0, 3.14);
    TEST_CHECK_(sub(3.14, 4.2)==(-1.06), "sub(%.2lf,%.1lf)==%.2lf", 3.14, 4.2, -1.06);
    TEST_CHECK_(sub(3.14, -4.2)==(7.34), "sub(%.2lf,%.1lf)==%.2lf", 3.14, -4.2, 7.34);
}

TEST_LIST = {
        {"add(double, double);", test_add },
        {"sub(double, double);", test_sub },
        {0} // Need to terminate with {0}
};