/*
    Semelhante ao exercício anterior, vamos mostrar 3 variáveis no terminal.
    Dessa vez, as variáveis já estão criadas, e você deve completar o código para exibi-las.
    Lembre-se que tipos de variáveis diferentes exigem especificadores (placeholders) diferentes na função printf().
    Execute o código para testar
*/

#include <stdio.h>

int main() {
    int a = 10;
    char b = 'X';
    float pi = 3.14159;

    // Complete conforme o enunciado

     // Exibindo a variável inteira
    printf("Valor de a: %d\n", a);

    // Exibindo a variável caractere
    printf("Valor de b: %c\n", b);

    // Exibindo a variável float com 2 casas decimais
    printf("Valor de pi: %f\n", pi);

    return 0;
}