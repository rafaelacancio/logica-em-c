/*
31. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o
valor da compra for menor que 20,00€; caso contrário, o lucro será de 30%.
Escreve um programa em linguagem C que lê o valor do produto e imprime o valor
de venda do produto.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    float valorProduto, valorVenda, lucroMenor = 0.45, lucroMaior = 0.30;

    printf("Digite o valor do produto: \n");
    scanf("%d", &valorProduto);
	
     if (valorProduto < 20.0) {
        valorVenda = valorProduto + (valorProduto * lucroMenor);
        printf("O valor de venda do produto é de: %.2f €\n", valorVenda);
    } else {
        valorVenda = valorProduto + (valorProduto * lucroMaior);
        printf("O valor de venda do produto é de: %.2f €\n", valorVenda);
    }
    return 0;  
}
