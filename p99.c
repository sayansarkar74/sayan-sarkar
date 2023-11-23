#include <stdio.h>

// Function declaration
float calculateSimpleInterest(float principal, float rate, float time);

int main() {
    // Function call
    float principal = 1000.0, rate = 5.0, time = 2.5;
    printf("Simple Interest: %.2f\n", calculateSimpleInterest(principal, rate, time));
    return 0;
}

// Function definition
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
