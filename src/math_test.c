// Tests for the math library
// 2nd IVS Project
// Author: Kryštof Paulík, xpauli08
// Date: 2022-04-05

#include "acutest.h"
#include "math_lib.h"

// Epsilon
long double eps = 0.000001f;

void test_add(void) {

    // Add two zeros
    TEST_CHECK_(add(0, 0).ans==(0), "add(%d,%d).ans==%d", 0, 0, 0);

    // Add positive numbers
    TEST_CHECK_(add(2, 2).ans==(4), "add(%d,%d).ans==%d", 2, 2, 4);
    TEST_CHECK_(add(0, 2).ans==(2), "add(%d,%d).ans==%d", 0, 2, 2);
    TEST_CHECK_(add(2, 0).ans==(2), "add(%d,%d).ans==%d", 2, 0, 2);

    // Add negative numbers
    TEST_CHECK_(add(-2, -2).ans==(-4), "add(%d,%d).ans==%d", -2, -2, -4);
    TEST_CHECK_(add(0, -2).ans==(-2), "add(%d,%d).ans==%d", 0, -2, -2);
    TEST_CHECK_(add(-2, 0).ans==(-2), "add(%d,%d).ans==%d", -2, 0, -2);

    // Add positive and negative numbers
    TEST_CHECK_(add(-2, 2).ans==(0), "add(%d,%d).ans==%d", -2, 2, 0);
    TEST_CHECK_(add(-2, 3).ans==(1), "add(%d,%d).ans==%d", -2, 3, 1);
    TEST_CHECK_(add(2, -3).ans==(-1), "add(%d,%d).ans==%d", 2, -3, -1);

    // Add real numbers
    TEST_CHECK_(add(0, 3.14).ans==(3.14), "add(%d,%.2lf).ans==%.2lf", 0, 3.14, 3.14);
    TEST_CHECK_(add(3.14, 0).ans==(3.14), "add(%.2lf,%d).ans==%.2lf", 3.14, 0, 3.14);
    TEST_CHECK_(add(3.14, 4.2).ans==(7.34), "add(%.2lf,%.1lf).ans==%.2lf", 3.14, 4.2, 7.34);
    TEST_CHECK_(add(3.14, -4.2).ans==(-1.06), "add(%.2lf,%.1lf).ans==%.2lf", 3.14, -4.2, -1.06);
}

void test_sub(void) {

    // Sub two zeros
    TEST_CHECK_(sub(0, 0).ans==(0), "sub(%d,%d) .ans== %d", 0, 0, 0);

    // Sub positive numbers
    TEST_CHECK_(sub(2, 2).ans==(0), "sub(%d,%d).ans==%d", 2, 2, 0);
    TEST_CHECK_(sub(0, 2).ans==(-2), "sub(%d,%d).ans==%d", 0, 2, -2);
    TEST_CHECK_(sub(2, 0).ans==(2), "sub(%d,%d).ans==%d", 2, 0, 2);

    // Sub negative numbers
    TEST_CHECK_(sub(-2, -2).ans==(0), "sub(%d,%d).ans==%d", -2, -2, 0);
    TEST_CHECK_(sub(0, -2).ans==(2), "sub(%d,%d).ans==%d", 0, -2, 2);
    TEST_CHECK_(sub(-2, 0).ans==(-2), "sub(%d,%d).ans==%d", -2, 0, -2);

    // Sub positive and negative numbers
    TEST_CHECK_(sub(-2, 2).ans==(-4), "sub(%d,%d).ans==%d", -2, 2, -4);
    TEST_CHECK_(sub(3, -2).ans==(5), "sub(%d,%d).ans==%d", 3, -2, 5);

    // Sub real numbers
    TEST_CHECK_(sub(0, 3.14).ans==(-3.14), "sub(%d,%.2lf).ans==%.2lf", 0, 3.14, -3.14);
    TEST_CHECK_(sub(3.14, 0).ans==(3.14), "sub(%.2lf,%d).ans==%.2lf", 3.14, 0, 3.14);
    TEST_CHECK_(sub(3.14, 4.2).ans==(-1.06), "sub(%.2lf,%.1lf).ans==%.2lf", 3.14, 4.2, -1.06);
    TEST_CHECK_(sub(3.14, -4.2).ans==(7.34), "sub(%.2lf,%.1lf).ans==%.2lf", 3.14, -4.2, 7.34);
}

void test_mul(void) {

    // Multiply two zeros
    TEST_CHECK_(mul(0, 0).ans==(0), "mul(%d,%d) .ans== %d", 0, 0, 0);

    // Multiply positive numbers
    TEST_CHECK_(mul(2, 2).ans==(4), "mul(%d,%d).ans==%d", 2, 2, 4);
    TEST_CHECK_(mul(0, 2).ans==(0), "mul(%d,%d).ans==%d", 0, 2, 0);
    TEST_CHECK_(mul(2, 0).ans==(0), "mul(%d,%d).ans==%d", 2, 0, 0);

    // Multiply negative numbers
    TEST_CHECK_(mul(-2, -2).ans==(4), "mul(%d,%d).ans==%d", -2, -2, 4);
    TEST_CHECK_(mul(0, -2).ans==(0), "mul(%d,%d).ans==%d", 0, -2, 0);
    TEST_CHECK_(mul(-2, 0).ans==(0), "mul(%d,%d).ans==%d", -2, 0, 0);

    // Multiply positive and negative numbers
    TEST_CHECK_(mul(-2, 2).ans==(-4), "mul(%d,%d).ans==%d", -2, 2, -4);
    TEST_CHECK_(mul(-2, 3).ans==(-6), "mul(%d,%d).ans==%d", -2, 3, -6);
    TEST_CHECK_(mul(2, -3).ans==(-6), "mul(%d,%d).ans==%d", 2, -3, -6);

    // Multiply real numbers
    TEST_CHECK_(mul(0, 3.14).ans==(0), "mul(%d,%.2lf).ans==%d", 0, 3.14, 0);
    TEST_CHECK_(mul(3.14, 0).ans==(0), "mul(%.2lf,%d).ans==%d", 3.14, 0, 0);
    TEST_CHECK_(mul(3.14, 4.2).ans==(13.188), "mul(%.2lf,%.1lf).ans==%.2lf", 3.14, 4.2, 13.188);
    TEST_CHECK_(mul(3.14, -4.2).ans==(-13.188), "mul(%.2lf,%.1lf).ans==%.2lf", 3.14, -4.2, 13.188);
}

void test_dv(void) {

    // TODO Division by zero
    TEST_CHECK_(dv(20, 0).fail==(1), "dv(%d,%d).fail==%d", 20, 0, 1);

    // Divide positive numbers
    TEST_CHECK_(dv(2, 2).ans==(1), "dv(%d,%d).ans==%d", 2, 2, 1);
    TEST_CHECK_(dv(0, 2).ans==(0), "dv(%d,%d).ans==%d", 0, 2, 0);
    TEST_CHECK_(dv(2, 1).ans==(2), "dv(%d,%d).ans==%d", 2, 1, 2);

    // Divide negative numbers
    TEST_CHECK_(dv(-2, -2).ans==(1), "dv(%d,%d).ans==%d", -2, -2, 1);
    TEST_CHECK_(dv(0, -2).ans==(0), "dv(%d,%d).ans==%d", 0, -2, 0);
    TEST_CHECK_(dv(-2, 1).ans==(-2), "dv(%d,%d).ans==%d", -2, 1, -2);

    // Divide positive and negative numbers
    TEST_CHECK_(dv(-2, 2).ans==(-1), "dv(%d,%d).ans==%d", -2, 2, -1);
    TEST_CHECK_(dv(4, -2).ans==(-2), "dv(%d,%d).ans==%d", 4, -2, -2);
    TEST_CHECK_(dv(2, -1).ans==(-2), "dv(%d,%d).ans==%d", 2, -1, -2);

    // Divide real numbers
    TEST_CHECK_(dv(0, 3.14).ans==(0), "dv(%d,%.2lf).ans==%d", 0, 3.14, 0);
    TEST_CHECK_(dv(-3.14, 1).ans==(-3.14), "dv(%.2lf,%d).ans==%.2lf", -3.14, 1, -3.14);
    TEST_CHECK_(absolute(dv(3.14, 4.2).ans-(0.747619)).ans<eps, "dv(%.2lf,%.1lf).ans==%.2lf", 3.14, 4.2, 0.74);
    TEST_CHECK_(absolute(dv(3.14, -4.2).ans-(-0.747619)).ans<eps, "dv(%.2lf,%.1lf).ans==%.2lf", 3.14, -4.2, -0.74);
}

void test_fact(void) {

    // Test of allowed numbers
    TEST_CHECK_(fact(0).ans==(1), "fact(%d).ans==%d", 0, 1);
    TEST_CHECK_(fact(5).ans==(120), "fact(%d).ans==%d", 5, 120);
    TEST_CHECK_(fact(10).ans==(3628800), "fact(%d).ans==%d", 10, 3628800);

    // TODO Test of disallowed numbers (ex. -2)
    TEST_CHECK_(fact(-2).fail==(1), "fact(%d).fail==%d", -2, 1);
    TEST_CHECK_(fact(-20).fail==(1), "fact(%d).fail==%d", -20, 1);

}

void test_power(void) {

    // Zero to power of anything
    TEST_CHECK_(power(0, 2).ans==(0), "power(%d,%d).ans==%d", 0, 2, 0);

    // Power of positive numbers
    TEST_CHECK_(power(2, 5).ans==(32), "power(%d,%d).ans==%d", 2, 5, 32);
    TEST_CHECK_(power(2, 1).ans==(2), "power(%d,%d).ans==%d", 2, 1, 2);

    // Power of negative numbers
    TEST_CHECK_(power(-2, 2).ans==(4), "power(%d,%d).ans==%d", -2, 2, 4);
    TEST_CHECK_(power(-2, 3).ans==(-8), "power(%d,%d).ans==%d", -2, 3, -8);
    TEST_CHECK_(power(-2, 1).ans==(-2), "power(%d,%d).ans==%d", -2, 1, -2);

    // Power of real numbers
    TEST_CHECK_(absolute(power(3.14, 4).ans-97.211712).ans<eps, "power(%.2lf,%d).ans==%.2lf", 3.14, 4, 97.211712);
    TEST_CHECK_(absolute(power(0.14, 3).ans-0.002744).ans<eps, "power(%.2lf,%d).ans==%.2lf", 0.14, 3, 0.002744);

    // TODO Check disallowed numbers (ex. n=-1, n=0)
    TEST_CHECK_(power(-2, -1).fail==(1), "power(%d,%d).fail==%d", -2, -1, 1);
    TEST_CHECK_(power(-2, 0).fail==(1), "power(%d,%d).fail==%d", -2, 0, 1);
}

void test_root(void) {

    // Root of zero
    TEST_CHECK_(root(0, 4).ans==(0), "root(%d,%d).ans==%d", 0, 4, 0);

    // Root of positive numbers
    TEST_CHECK_(root(8, 3).ans==(2), "root(%d,%d).ans==%d", 8, 3, 2);
    TEST_CHECK_(root(4, 1).ans==(4), "root(%d,%d).ans==%d", 4, 1, 4);

    // Root of negative numbers
    TEST_CHECK_(absolute(root(-8, 3).ans-(-2)).ans<eps, "root(%d,%d).ans==%d", -8, 3, -2);
    TEST_CHECK_(root(-2, 1).ans==(-2), "root(%d,%d).ans==%d", -2, 1, -2);

    // Root of real numbers
    TEST_CHECK_(absolute(root(97.211712, 4).ans-3.14).ans<eps, "root(%.2lf,%d).ans==%.2lf", 97.211712, 4, 3.14);
    TEST_CHECK_(absolute(root(0.002744, 3).ans-0.14).ans<eps, "root(%.2lf,%d).ans==%.2lf", 0.002744, 3, 0.14);

    // TODO Check disallowed numbers (n=-1, n=0)
    TEST_CHECK_(root(9, -1).fail==(1), "root(%d,%d).fail==%d", 9, -1, 1);
    TEST_CHECK_(root(16, 0).fail==(1), "root(%d,%d).fail==%d", 16, 0, 1);
}

void test_absolute(void) {

    // Absolute value of 0
    TEST_CHECK_(absolute(0).ans==(0), "absolute(%d).ans==%d", 0, 0);

    // Absolute value of positive numbers
    TEST_CHECK_(absolute(2).ans==(2), "absolute(%d).ans==%d", 2, 2);
    TEST_CHECK_(absolute(384).ans==(384), "absolute(%d).ans==%d", 384, 384);

    // Absolute value of negative numbers
    TEST_CHECK_(absolute(-2).ans==(2), "absolute(%d).ans==%d", -2, 2);
    TEST_CHECK_(absolute(-384).ans==(384), "absolute(%d).ans==%d", -384, 384);

    // Absolute of real numbers
    TEST_CHECK_(absolute(3.14).ans==(3.14), "absolute(%.2lf).ans==%.2lf", 3.14, 3.14);
    TEST_CHECK_(absolute(-3.14).ans==(3.14), "absolute(%.2lf).ans==%.2lf", 3.14, 3.14);
}

TEST_LIST = {
        {"add(long double, long double);", test_add  },
        {"sub(long double, long double);", test_sub  },
        {"mul(long double, long double);", test_mul  },
        {"dv(long double, long double)};", test_dv   },
        {"fact(int);", test_fact                     },
        {"power(long double, int);", test_power      },
        {"root(long double, int);", test_root        },
        {"absolute(long double);", test_absolute     },
        {0} // Need to terminate with {0}
};