#include <stdio.h>
#include <string.h>

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            return 0; // strings are equal
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

int main() {
   
