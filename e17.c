/*
    DESAFIO

    Crie um programa que:
    - peça ao usuário um número inteiro entre 1 e 10
    - salve esse número em uma variável
    - imprima sua tabuada de multiplicação até 10 usando um for
    - não digite nenhum número fixo no printf() da tabuada

    Dica: a ideia é usar o for para repetir um único printf(), 
    alterando seus valores a cada iteração através do uso de
    variáveis de controle como argumento
*/


#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf("%d", &numero);

    // Verifica se o número está no intervalo correto
    if (numero < 1 || numero > 10) {
        printf("Número inválido! Digite um número entre 1 e 10.\n");
    } else {
        printf("\nTabuada do %d:\n", numero);

        // Loop para gerar a tabuada
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}



