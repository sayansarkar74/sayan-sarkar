#include <stdio.h>
#include <string.h>

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];
    stringCopy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}
