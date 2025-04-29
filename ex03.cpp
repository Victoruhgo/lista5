#include <stdio.h>
#include <stdlib.h>

// Converte Celsius para Fahrenheit
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

int main() {
    float celsius;
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius_para_fahrenheit(celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}