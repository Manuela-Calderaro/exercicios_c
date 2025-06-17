#include <stdio.h>

int main() {
    int numeros[] = {3, 7, 12, 25, 30};
    int tamanho = 5;
    int alvo;
    int encontrado = 0;

    printf("Digite um número para buscar no array: ");
    scanf("%d", &alvo);

    // Lógica:
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == alvo) {
            encontrado = 1;
            break;  // Interrompe o loop quando encontrar
        }
    }

    // Mensagem de resultado:
    if (encontrado)
        printf("Número presente!\n");
    else
        printf("Número ausente!\n");

    return 0;
}


