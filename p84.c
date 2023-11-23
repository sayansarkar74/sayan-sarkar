#include <stdio.h>

// Function prototype
int square(int);

int main() {
    // Function call
    int num = 5;
    printf("Square: %d\n", square(num));
    return 0;
}

// Function definition
int square(int n) {
    return n * n;
}
