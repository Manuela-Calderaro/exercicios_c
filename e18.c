#include <stdio.h>

int main() {
    int v[10];  // agora o vetor tem 10 posições
    int soma, i;

    printf("Por favor, digite 10 inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);  // Guarda cada número no vetor
    }

    // Imprime os números armazenados no vetor
    printf("\nSeus números são:\n");
    for (i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    // Calcula soma dos números do vetor
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += v[i];
    }
    printf("A soma dos números é: %d\n", soma);

    return 0;
}