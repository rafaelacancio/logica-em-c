/*
9. Um funcion�rio recebe um sal�rio fixo com mais 5% de comiss�o sobre as vendas.
Criar um programa em C que v� receber um sal�rio fixo dum funcion�rio e o valor
das vendas, calcular e mostrar a comiss�o e o sal�rio final do funcion�rio.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    float salarioFixo, comissao = 0.05, comissaoFinal, valorVenda, salarioFinal;

    printf("Qual o sal�rio fixo do funcion�rio: ");
    scanf("%f", &salarioFixo);
    
     printf("Qual o valor das vendas: ");
	 scanf("%f", &valorVenda);
    
    comissaoFinal = valorVenda * comissao;

    salarioFinal = salarioFixo + comissaoFinal;

    printf("A comissao do funcion�rio sobre as vendas ser�: %.2f \n", comissaoFinal);
    printf("O sal�rio final com as comiss�es ser� de: %.2f \n", salarioFinal);
    return 0;
}
