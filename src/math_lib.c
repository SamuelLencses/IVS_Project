/***************************************************************************************************************************************
 * Name of the project: IVS Project II
 * File: math_lib.c
 * Date: 2022-03-26
 * Last change: 2022-04-27
 * Author: Ondřej Novenilka (xnovel00)
 * 
 * Description: Library containing basic math functions 
 * 
 * *************************************************************************************************************************************
/**
 * @file math_lib.c
 * 
 * @brief Library containing basic math functions
 * @author Ondřej Novelinka (xnovel00)
 *
 */

#include "math_lib.h"
#include <math.h>

/**
 * @brief Sum of two numbers
 * 
 * @param a First number to be added
 * @param b Second number to be added
 * @return Sum of a and b
 */
result_d add(long double a, long double b) {
    result_d res;
    res.ans = a + b;
    res.fail = 0;
    return res;
}

/**
 * @brief Subtraction of two numbers
 * 
 * @param a First number that is being substracted from
 * @param b Second number to subtract from the first
 * @return Subtraction of a and b
 */
result_d sub(long double a, long double b) {
    result_d res;
    res.ans = a - b;
    res.fail = 0;
    return res;
}

/**
 * @brief Multiplication of two numbers
 * 
 * @param a First number to be multiplied
 * @param b Second number to be multiplied
 * @return Multiplication of a and b
 */
result_d mul(long double a, long double b) {
    result_d res;
    res.ans = a * b;
    res.fail = 0;
    return res;
}

/**
 * @brief Division of two numbers
 * 
 * @param a First number - dividend
 * @param b Second number - divisor
 * @return Division of a and b
 * @exception If b is equal to 0, dv(a, b).fail == 1
 */
result_d dv(long double a, long double b) {
    result_d res;
    if (b == 0)
    {
        res.fail = 1;
    }
    else
    {
        res.ans = a / b;
        res.fail = 0;
    }
    return res;
}

/**
 * @brief Factorial of a number
 * 
 * @param a Number which factorial is calculated
 * @return Factorial of number a
 * @exception If a is less than 0, fact(a).fail == 1
 */
result_i fact(int a) {
    result_i res;

    if (a < 0)
    {
        res.fail = 1;
    }
    else
    {
        if (a != 0)
            res.ans = a * fact(a - 1).ans; // general case
        else
            res.ans = 1; // base case
    }

    return res;
}

/**
 * @brief Power of a number
 * 
 * @param x First number, base
 * @param n Second number, exponent
 * @return x to the power of n
 * @exception If n is less than 0, power(x, n).fail == 1
 */
result_d power(long double x, int n) {
    result_d res;
    
    if(n < 0)
    {
        res.fail = 1;
        return res;
    }
    else if(n == 0)
    {
        res.fail = 1;
        return res;
    }
    else if(n == 1)
    {
        res.ans = x;
    }
    else
    {
        long double base = x;
        res.ans = x;
        for(int i = 1; i < n; i++)
        {
            res.ans = res.ans * base;
        }
    }
    res.fail = 0;
    return res;
}

/**
 * @brief Root of a number
 * 
 * @param x First number, base
 * @param n Second number, exponent
 * @return Nth root of number x
 * @exception If n is less than 1, power(x, n).fail == 1
 */
result_d root(long double x, int n) {
    result_d res;

    if (n < 1)
    {
        res.fail = 1;
        return res;
    }

    if (n % 2 == 1 && x < 0)
    {
        res.fail = 0;
        res.ans = -pow(absolute(x).ans, 1.0/n);
    }
    else
    {   
        res.fail = 0;
        res.ans = (pow(x ,1.0 / n));    
    }

    return res;

}

/**
 * @brief Absolute value
 * 
 * @param a Number which absolute value will be calculated
 * @return Absolute value of a
 */
result_d absolute(long double a) {
    result_d res;
    if (a < 0)
    {
        res.ans = -a;
    }
    else
    {
        res.ans = a;
    }
    res.fail = 0;
    return res;
}
