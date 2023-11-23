#include <stdio.h>
#include <stdarg.h>

// Function declaration
double average(int count, ...);

int main() {
    // Function call
    printf("Average: %.2f\n", average(4, 10, 20, 30, 40));
    return 0;
}

// Function definition
double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum / count;
}
