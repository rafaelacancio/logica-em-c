/*
2. Criar um programa em C que peça a quantidade de pães e leite e informar o valor a
pagar. Sabendo que cada litro de leite custa 2,50€ e cada pão custa 0,25€.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int quantidadePaes;
    float quantidadeLeite, totalPaes, totalLeite, totalAPagar;

    printf("Digite a quantidade de pães: ");
    scanf("%d", &quantidadePaes);
    
    printf("Digite a quantidade de leite (em litros): ");
    scanf("%f", &quantidadeLeite);

    totalPaes = quantidadePaes * 0.25;
    totalLeite = quantidadeLeite * 2.50;

    totalAPagar = totalPaes + totalLeite;

    printf("O valor total a pagar é: %.2f \n", totalAPagar);

    return 0;
}
