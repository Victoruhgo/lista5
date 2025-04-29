#include <stdio.h>
#include <stdlib.h>

// Variáveis globais
float a, b, c;

// Função quadrática: f(x) = ax² + bx + c
float funcao_quadratica(float x) {
    return a * x * x + b * x + c;
}

int main() {
    float x;

    // Define os coeficientes
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Define o valor de x
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    // Chama a função quadrática e imprime o resultado
    float resultado = funcao_quadratica(x);
    printf("Resultado da funcao f(x) = %.2f\n", resultado);

    return 0;
}
