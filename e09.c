/*
    Crie um IF/ELSE para checar se a variável digitada pelo usuário é positiva ou negativa.
    Caso seja positiva, exiba uma mensagem informando que o número é positivo.
    Caso seja negativa, exiba uma mensagem informando que o número é negativo.
    Para exibir as mensagens, utilize a função printf().
    Execute o código para testar.
*/
#include <stdio.h>

int main(){
    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    //IF/ELSE:
if (numero >= 0) {
    printf ("O número %d é positivo.\n", numero) ;

} else {
 printf ("O número %d é negativo.\n", numero); }

    return 0;
}