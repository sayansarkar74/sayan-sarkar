#include <stdio.h>

// Function declaration
void swap(int *a, int *b);

int main() {
    int num1 = 5, num2 = 10;

    // Function call
    swap(&num1, &num2);

    printf("Swapped Numbers: %d, %d\n", num1, num2);
    return 0;
}

// Function definition
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
