#include <stdio.h>

// Function declaration
int countDigits(int num);

int main() {
    // Function call
    int number = 12345;
    printf("Number of digits in %d: %d\n", number, countDigits(number));
    return 0;
}

// Function definition
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}
