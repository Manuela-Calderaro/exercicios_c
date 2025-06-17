#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    // Calcule a área do triângulo
    area = (base * altura) / 2;

    // Exiba o resultado formatado com uma casa decimal
    printf("Área do triângulo: %.1f\n", area);

    // IF/ELSE para verificar se a área é maior que 30
    if (area > 30) {
        printf("Triângulo grande\n");
    } else {
        printf("Triângulo pequeno\n");
    }

    return 0;
}
