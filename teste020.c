/*
20. Três amigos decidiram dividir a conta de um bar. Faz um programa em C para ler o
valor total da conta e imprima quanto cada um vai pagar, mas faça com que
apenas um deles pague os cêntimos. Ex: uma conta de 101,53€ resulta em 33,00€
para o primeiro, 33,00€ para o segundo e 35,53€ para o terceiro.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    float valorConta, valorDivisao, valor1, valor2, valorUltimoAmigo;
    
    printf("Informe o valor total da conta: ");
    scanf("%f", &valorConta);

    valorDivisao = valorConta / 3;
    valor1 = (int)valorDivisao;
    valor2 = (int)valorDivisao;

    valorUltimoAmigo = valorConta - (valor1 + valor2);

  
    printf("O primeiro amigo paga: %.2f€\n", valor1);
    printf("O segundo amigo paga: %.2f€\n", valor2);
    printf("O terceiro amigo paga: %.2f€\n", valorUltimoAmigo);

    return 0;
}
