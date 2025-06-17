#include <stdio.h>

int main() {
    int v[5];  // declara um vetor de 5 posições
    int soma, i;

    printf("Por favor, digite 5 inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);  // Guarda cada número do vetor
    }

    // Imprime os números armazenados no vetor
    printf("\nSeus números são:\n");
    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Soma índices pares e subtrai os ímpares
    soma = 0;
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            soma += v[i];  // índice par
        } else {
            soma -= v[i];  // índice ímpar
        }
    }

    printf("O resultado final é: %d\n", soma);

    return 0;
}
