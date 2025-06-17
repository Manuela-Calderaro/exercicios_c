/*
    A expressão A != B inverte o valor binário de b e salva em a.
    Inicialize a variável B com um valor de modo que A resulte em 1.
    Execute o programa para testar.
*/

#include <stdio.h>

int main() {
    int a = 0;
    int b = 1; //b precisa ser diferente de 0, pois inverteram os valores e quer que A seja 1, então B precisa ser 1


    // Inicialize b com um valor:

a = (a != b);


    // Validação
    a != b;

    if ( a == 1 ) printf("O valor de a é 1, muito bem!!\n");
    else printf("O valor de a é %d, verifique seu código!\n", a);
    return 0;
}