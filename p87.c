#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    // Function call
    printf("Factorial: %d\n", factorial(5));
    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
