// Profiling program
// 2nd IVS Project
// Author: Kryštof Paulík, xpauli08
// Date: 2022-04-20

#include <stdio.h>
#include "math_lib.h"

int getInput(int *input); // Loads values into array input and returns its size

double avg(int input[], int size); // Count the average
double squareSum(int input[], int size); // Count the sum of square roots of elements in array input
double getAns(int input[], int size);

int main() {

    // Max size of 1000 integers
    int input[1000];
    int size = getInput(input);

    // Print out the result
    printf("%f\n", getAns(input, size));

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

int getInput(int *input)
{
    int size = 0;
    while (scanf("%d", &input[size]) != EOF)
    {
        size++;
    }
    return size;
}

double getAns(int input[], int size)
{
    double result = root(mul(dv(1, size-1).ans, sub(squareSum(input, size), mul(size, mul(avg(input, size), avg(input, size)).ans).ans).ans).ans, 2).ans;
    return result;
}