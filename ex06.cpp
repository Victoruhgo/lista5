#include <stdio.h>
#include <stdlib.h>

// Função que verifica se um número é palíndromo
int eh_palindromo(int num) {
    int original = num, reverso = 0;

    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    return (original == reverso) ? 1 : 0;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (eh_palindromo(numero))
        printf("%d é um palíndromo.\n", numero);
    else
        printf("%d não é um palíndromo.\n", numero);

    return 0;
}