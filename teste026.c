/*
26. Faz um programa em linguagem C que lê dois números e mostra em ordem
decrescente.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Ordem decrescente: %d, %d\n", num1, num2);
    } else {
        printf("Ordem decrescente: %d, %d\n", num2, num1);
    }

    return 0;  
}
