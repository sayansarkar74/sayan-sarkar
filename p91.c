#include <stdio.h>

// Function declaration
int findGCD(int a, int b);

int main() {
    // Function call
    int num1 = 24, num2 = 36;
    printf("GCD: %d\n", findGCD(num1, num2));
    return 0;
}

// Function definition
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
