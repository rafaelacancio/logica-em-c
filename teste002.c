/*
2. Criar um programa em C que pe�a a quantidade de p�es e leite e informar o valor a
pagar. Sabendo que cada litro de leite custa 2,50� e cada p�o custa 0,25�.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int quantidadePaes;
    float quantidadeLeite, totalPaes, totalLeite, totalAPagar;

    printf("Digite a quantidade de p�es: ");
    scanf("%d", &quantidadePaes);
    
    printf("Digite a quantidade de leite (em litros): ");
    scanf("%f", &quantidadeLeite);

    totalPaes = quantidadePaes * 0.25;
    totalLeite = quantidadeLeite * 2.50;

    totalAPagar = totalPaes + totalLeite;

    printf("O valor total a pagar �: %.2f \n", totalAPagar);

    return 0;
}
