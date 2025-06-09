/*
9. Um funcionário recebe um salário fixo com mais 5% de comissão sobre as vendas.
Criar um programa em C que vá receber um salário fixo dum funcionário e o valor
das vendas, calcular e mostrar a comissão e o salário final do funcionário.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    float salarioFixo, comissao = 0.05, comissaoFinal, valorVenda, salarioFinal;

    printf("Qual o salário fixo do funcionário: ");
    scanf("%f", &salarioFixo);
    
     printf("Qual o valor das vendas: ");
	 scanf("%f", &valorVenda);
    
    comissaoFinal = valorVenda * comissao;

    salarioFinal = salarioFixo + comissaoFinal;

    printf("A comissao do funcionário sobre as vendas será: %.2f \n", comissaoFinal);
    printf("O salário final com as comissões será de: %.2f \n", salarioFinal);
    return 0;
}
