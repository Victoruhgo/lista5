#include <stdio.h>
#include <stdlib.h>

// Verifica se um número é primo
int eh_primo(int n) {
    if (n <= 1) return 0; // 0 e 1 não são primos

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Encontrou um divisor, não é primo
    }

    return 1; // Nenhum divisor encontrado, é primo
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (eh_primo(numero))
        printf("%d e primo.\n", numero);
    else
        printf("%d nao e primo.\n", numero);

    return 0;
}
   