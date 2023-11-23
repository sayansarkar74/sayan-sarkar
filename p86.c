#include <stdio.h>

// Function declarations
int add_int(int a, int b);
float add_float(float a, float b);

int main() {
    // Function calls
    printf("Sum (int): %d\n", add_int(3, 4));
    printf("Sum (float): %.2f\n", add_float(2.5, 3.7));
    return 0;
}

// 
