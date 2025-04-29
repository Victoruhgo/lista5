#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159


void calcular_circulo(float raio, float *area, float *perimetro) { // Função que calcula área e perímetro de um círculo usando ponteiros
    *area = PI * raio * raio;
    *perimetro = 2 * PI * raio;
}

int main() {
    float raio, area, perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    calcular_circulo(raio, &area, &perimetro); // Momento que é calculado a área e o perímetro

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);

    return 0;
}