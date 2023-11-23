#include <stdio.h>
#include <math.h>

// Function declaration
int isArmstrong(int num);

int main() {
    // Function call
    int number = 153;
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

// Function definition
int isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    int sum = 0;
    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    return sum == num;
}
