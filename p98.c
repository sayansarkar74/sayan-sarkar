#include <stdio.h>

// Function declaration
int findLCM(int a, int b);

int main() {
    // Function call
    int num1 = 12, num2 = 18;
    printf("LCM of %d and %d: %d\n", num1, num2, findLCM(num1, num2));
    return 0;
}

// Function definition
int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}
