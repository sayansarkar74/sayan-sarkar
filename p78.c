#include <stdio.h>
#include <string.h>

void stringConcatenate(char dest[], char str1[], char str2[]) {
    int i, j;

    // Copy str1 to dest
    for (i = 0; str1[i] != '\0'; i++) {
        dest[i] = str1[i];
    }

    // Concatenate str2 to dest
    for (j = 0; str2[j] != '\0'; j++) {
        dest[i + j] = str2[j];
    }

    dest[i + j] = '\0';
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char result[50];

    stringConcatenate(result, str1, str2);

    printf("Concatenated string: %s\n", result);

    return 0;
}
