#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma dos %d primeiros números naturais é: %d\n", N, soma);

    return 0;
}

