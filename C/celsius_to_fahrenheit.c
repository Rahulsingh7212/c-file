#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Please enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert the temperature
    fahrenheit = ((celsius * 9) / 5) + 32;

    printf("\n%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
