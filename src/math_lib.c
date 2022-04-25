#include "math_lib.h"
#include <math.h>

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

// Odmocnina
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
    
    
    
    
    
    
    
    
    
    
    
    
    // if(x == 0 || x == 0.0)
    // {
    //     res.ans = 0;
    //     res.fail = 0;
    //     return res;
    // }
    // double base = x;
    // for (int i = 0; i < 100; i++) {
    //     result_d temp = power(base, n - 1);
    //     x = 1.0 / n * ((n - 1) * base + x / temp.ans);
    // }
    // res.ans = x;
    // res.fail = 0;
    // return res;



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
