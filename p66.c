#include <stdio.h>

int main() {
    int num = 12345, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}
