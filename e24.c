#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int N = 0, K = 3;
    int Comb;

    do {
        printf("Digite um número inteiro positivo N: ");
        scanf("%d", &N);

        if (N <= K) {
            printf("N deve ser maior que %d.\n", K);
        }
    } while (N <= K);

    // Calcula a combinação (Comb)
    Comb = fatorial(N) / (fatorial(K) * fatorial(N - K));

    // Exibe o resultado
    printf("C(%d, %d) = %d\n", N, K, Comb);

    return 0;
}
