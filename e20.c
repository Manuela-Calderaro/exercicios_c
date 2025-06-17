#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, palpite, tentativas = 0;

    srand(time(NULL));               // Inicializa a semente do rand
    secreto = rand() % 50 + 1;       // Gera número aleatório entre 1 e 50

    do {
        printf("Palpite um número (de 1-50): ");
        scanf("%d", &palpite);       // Lê o palpite do usuário
        tentativas++;

        if (palpite < secreto)
            printf("Muito baixo!\n");
        else if (palpite > secreto)
            printf("Muito alto!\n");
        else
            printf("Parabéns! Você acertou em %d tentativas.\n", tentativas);

    } while (palpite != secreto);

    return 0;
}
