#include "math_lib.h"

// Soucet
result_d add(long double a, long double b) {
    result_d res;
    res.ans = a + b;
    res.fail = 0;
    return res;
}

// Rozdil
result_d sub(long double a, long double b) {
    result_d res;
    res.ans = a - b;
    res.fail = 0;
    return res;
}

// Nasobeni
result_d mul(long double a, long double b) {
    result_d res;
    res.ans = a * b;
    res.fail = 0;
    return res;
}

// Deleni
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

// Faktorial
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

// Mocnina
result_d power(long double x, int n) {
    result_d res;
    // Code here
    return res;
}

// Odmocnina
result_d root(long double x, int n) {
    result_d res;
    // Code here
    return res;
}

// Absolutni hodnota
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