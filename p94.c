#include <stdio.h>

// Function declaration
double power(double base, int exponent);

int main() {
    // Function call
    double base = 2.0;
    int exp = 3;
    printf("%.2f^%d = %.2f\n", base, exp, power(base, exp));
    return 0;
}

// Function definition
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
