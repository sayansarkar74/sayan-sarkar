#include <stdio.h>
#include <stdbool.h>

// Function declaration
bool isPrime(int num);

int main() {
    // Function call
    int number = 13;
    if (isPrime(number))
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);

    return 0;
}

// Function definition
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}
