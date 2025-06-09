/*
24. Escreve um programa em linguagem C que lê dois números inteiros e efetua a
adição, caso o resultado seja maior que 10.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
   int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 10) {
        printf("A soma dos números é: %d\n", soma);
    }

    return 0;
}
