#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função que calcula a distância entre dois pontos (x1, y1) e (x2, y2)
float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float d = distancia(x1, y1, x2, y2);
    printf("Distância entre os pontos: %.2f\n", d);

    return 0;
}