#include "acutest.h"
#include "math_lib.h"

double eps = 0.000001f;

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

void test_mul(void) {

    // Multiply two zeros
    TEST_CHECK_(mul(0, 0)==(0), "mul(%d,%d) == %d", 0, 0, 0);

    // Multiply positive numbers
    TEST_CHECK_(mul(2, 2)==(4), "mul(%d,%d)==%d", 2, 2, 4);
    TEST_CHECK_(mul(0, 2)==(0), "mul(%d,%d)==%d", 0, 2, 0);
    TEST_CHECK_(mul(2, 0)==(0), "mul(%d,%d)==%d", 2, 0, 0);

    // Multiply negative numbers
    TEST_CHECK_(mul(-2, -2)==(4), "mul(%d,%d)==%d", -2, -2, 4);
    TEST_CHECK_(mul(0, -2)==(0), "mul(%d,%d)==%d", 0, -2, 0);
    TEST_CHECK_(mul(-2, 0)==(0), "mul(%d,%d)==%d", -2, 0, 0);

    // Multiply positive and negative numbers
    TEST_CHECK_(mul(-2, 2)==(-4), "mul(%d,%d)==%d", -2, 2, -4);
    TEST_CHECK_(mul(-2, 3)==(-6), "mul(%d,%d)==%d", -2, 3, -6);
    TEST_CHECK_(mul(2, -3)==(-6), "mul(%d,%d)==%d", 2, -3, -6);

    // Multiply real numbers
    TEST_CHECK_(mul(0, 3.14)==(0), "mul(%d,%.2lf)==%d", 0, 3.14, 0);
    TEST_CHECK_(mul(3.14, 0)==(0), "mul(%.2lf,%d)==%d", 3.14, 0, 0);
    TEST_CHECK_(mul(3.14, 4.2)==(13.188), "mul(%.2lf,%.1lf)==%.2lf", 3.14, 4.2, 13.188);
    TEST_CHECK_(mul(3.14, -4.2)==(-13.188), "mul(%.2lf,%.1lf)==%.2lf", 3.14, -4.2, 13.188);
}

void test_dv(void) {

    // Divide positive numbers
    TEST_CHECK_(dv(2, 2)==(1), "dv(%d,%d)==%d", 2, 2, 1);
    TEST_CHECK_(dv(0, 2)==(0), "dv(%d,%d)==%d", 0, 2, 0);
    TEST_CHECK_(dv(2, 1)==(2), "dv(%d,%d)==%d", 2, 1, 2);

    // Divide negative numbers
    TEST_CHECK_(dv(-2, -2)==(1), "dv(%d,%d)==%d", -2, -2, 1);
    TEST_CHECK_(dv(0, -2)==(0), "dv(%d,%d)==%d", 0, -2, 0);
    TEST_CHECK_(dv(-2, 1)==(-2), "dv(%d,%d)==%d", -2, 1, -2);

    // Divide positive and negative numbers
    TEST_CHECK_(dv(-2, 2)==(-1), "dv(%d,%d)==%d", -2, 2, -1);
    TEST_CHECK_(dv(4, -2)==(-2), "dv(%d,%d)==%d", 4, -2, -2);
    TEST_CHECK_(dv(2, -1)==(-2), "dv(%d,%d)==%d", 2, -1, -2);

    // Add real numbers
    TEST_CHECK_(dv(0, 3.14)==(0), "dv(%d,%.2lf)==%d", 0, 3.14, 0);
    TEST_CHECK_(dv(-3.14, 1)==(-3.14), "dv(%.2lf,%d)==%.2lf", -3.14, 1, -3.14);
    TEST_CHECK_(absolute(dv(3.14, 4.2)-(0.747619))<eps, "dv(%.2lf,%.1lf)==%.2lf", 3.14, 4.2, 0.74);
    TEST_CHECK_(absolute(dv(3.14, -4.2)-(-0.747619))<eps, "dv(%.2lf,%.1lf)==%.2lf", 3.14, -4.2, -0.74);
}

void test_fact(void) {

    TEST_CHECK_(fact(0)==1, "fact(%d)==%d", 0, 1);
    TEST_CHECK_(fact(5)==120, "fact(%d)==%d", 5, 120);
    TEST_CHECK_(fact(10)==3628800, "fact(%d)==%d", 10, 3628800);

}

void test_power(void) {

    // Zero power
    TEST_CHECK_(power(4, 0)==(1), "power(%d,%d)==%d", 4, 0, 1);

    // Zero to power of anything
    TEST_CHECK_(power(0, 2)==(0), "power(%d,%d)==%d", 0, 2, 0);

    // Power of positive numbers
    TEST_CHECK_(power(2, 5)==(32), "power(%d,%d)==%d", 2, 5, 32);
    TEST_CHECK_(power(2, 1)==(2), "power(%d,%d)==%d", 2, 1, 2);

    // Power of negative numbers
    TEST_CHECK_(power(-2, 2)==(4), "power(%d,%d)==%d", -2, -2, 4);
    TEST_CHECK_(power(-2, 3)==(-8), "power(%d,%d)==%d", -2, 3, -8);
    TEST_CHECK_(power(-2, 1)==(-2), "power(%d,%d)==%d", -2, 1, -2);

    // Power of real numbers
    TEST_CHECK_(absolute(power(3.14, 4)-97.211712)<eps, "power(%.2lf,%d)==%.2lf", 3.14, 4, 97.211712);
    TEST_CHECK_(absolute(power(0.14, 3)-0.002744)<eps, "power(%.2lf,%d)==%.2lf", 0.14, 3, 0.002744);
}

TEST_LIST = {
        {"add(double, double);", test_add },
        {"sub(double, double);", test_sub },
        {"mul(double, double);", test_mul },
        {"dv(double, double)};", test_dv  },
        {"fact(int);", test_fact          },
        {"power(double, int);", test_power},
        {0} // Need to terminate with {0}
};