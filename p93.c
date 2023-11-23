#include <stdio.h>

// Function declaration
double celsiusToFahrenheit(double celsius);

int main() {
    // Function call
    double tempCelsius = 25.0;
    printf("%.2f Celsius is %.2f Fahrenheit\n", tempCelsius, celsiusToFahrenheit(tempCelsius));
    return 0;
}

// Function definition
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}
