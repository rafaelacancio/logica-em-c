/*
24. Escreve um programa em linguagem C que l� dois n�meros inteiros e efetua a
adi��o, caso o resultado seja maior que 10.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
   int num1, num2, soma;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    if (soma > 10) {
        printf("A soma dos n�meros �: %d\n", soma);
    }

    return 0;
}
