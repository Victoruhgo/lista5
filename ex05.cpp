#include <stdio.h>
#include <stdlib.h>

// Calcula o IMC e retorna a classificação
int calcula_imc(float peso, float altura) {
    float imc = peso / (altura * altura);
    if (imc < 18.5f) return 0;
    else if (imc < 25.0f) return 1;
    else if (imc < 30.0f) return 2;
    else return 3;
}

// Imprime a classificação do IMC
void imprima_imc(float peso, float altura) {
    int classe = calcula_imc(peso, altura);
    const char* categorias[] = {"Magreza", "Saudável", "Sobrepeso", "Obesidade"};
    printf("IMC: %.2f\nClassificação: %s\n", peso / (altura * altura), categorias[classe]);
}

int main() {
    float peso, altura;
    printf("Peso (kg): "); scanf("%f", &peso);
    printf("Altura (m): "); scanf("%f", &altura);
    imprima_imc(peso, altura);
    return 0;
}