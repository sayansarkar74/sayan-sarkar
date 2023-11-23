#include <stdio.h>
#include <string.h>

// Function declaration with default parameter
void greetPersonWithName(char name[20]) {
    printf("Hello, %s!\n", name);
}

void greetPersonWithGreeting(char name[20], char greeting[20]) {
    printf("%s, %s!\n", greeting, name);
}

int main() {
    // Function calls
    greetPersonWithName("Alice");
    greetPersonWithGreeting("Bob", "Hi");

    return 0;
}
