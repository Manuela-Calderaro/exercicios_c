#include <stdio.h>

int main() {
    int numero, resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = numero * (numero + 1);

    printf("O produto dessa multiplicação é %d !\n", resultado);

    return 0;
}
