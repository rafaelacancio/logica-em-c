/*
16. Uma padaria vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa 0,12€ e a broa custa 1,50€. Ao final do dia, o
dono quer saber quanto recebeu com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta de poupança (10% do total recebido). Tu fostes
contratado para fazer os cálculos para o dono. Com base nestes dados, faça um
programa em C para ler as quantidades de pães e de broas, e depois calcular o
valor que o dono da padaria vai depositar.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
    int quantidadePaes, quantidadeBroas;
    float totalVendas, depositoPoupanca;
    const float PRECO_PAO = 0.12;
    const float PRECO_BROA = 1.50;

    printf("Quantos pães foram vendidos hoje? ");
    scanf("%d", &quantidadePaes);
    printf("Quantas broas foram vendidas hoje? ");
    scanf("%d", &quantidadeBroas);

    totalVendas = (quantidadePaes * PRECO_PAO) + (quantidadeBroas * PRECO_BROA);

    depositoPoupanca = totalVendas * 0.10;

    printf("\nTotal arrecadado com as vendas: %.2f\n", totalVendas);
    printf("Valor a ser depositado na poupança (10%%): %.2f\n", depositoPoupanca);
       
    return 0;
}
