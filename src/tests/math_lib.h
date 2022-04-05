typedef struct {
    int fail;
    long double ans;
} result_d;

typedef struct {
    int fail;
    int ans;
} result_i;

result_d add(long double, long double);
result_d sub(long double, long double);
result_d mul(long double, long double);
result_d dv(long double, long double);
result_i fact(int);
result_d power(long double, int);
result_d root(long double, int);
result_d absolute(long double);