#include <stdio.h>
#include <math.h>
#include "math_lib.h"

double avg(int input[], int size);
double squareSum(int input[], int size);

int main() {

    // Max size of 1000 integers
    int input[1000];
    int size = 0;

    // Load the numbers into array
    while (scanf("%d", &input[size]) != EOF) {
        size++;
    }

    // The actual result
    double result = root(mul(dv(1, size-1).ans, sub(squareSum(input, size), mul(size, mul(avg(input, size), avg(input, size)).ans).ans).ans).ans, 2).ans;

    printf("%f\n", result);

    return 0;
}

// Count the average
double avg(int numbers[], int size) {

    double res = 0;
    for (int i = 0; i < size; i++) {
        res = add(res, numbers[i]).ans;
    }

    if (size != 0) {
        res = dv(res, size).ans;
    }

    return res;
}

// Count the "square sum"
double squareSum(int numbers[], int size) {

    double res = 0;
    for (int i = 0; i < size; i++) {
        numbers[i] = mul(numbers[i], numbers[i]).ans;
        res = add(res, numbers[i]).ans;
    }

    return res;
}