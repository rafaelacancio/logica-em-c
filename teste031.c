/*
31. Um comerciante comprou um produto e quer vend�-lo com um lucro de 45% se o
valor da compra for menor que 20,00�; caso contr�rio, o lucro ser� de 30%.
Escreve um programa em linguagem C que l� o valor do produto e imprime o valor
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
        printf("O valor de venda do produto � de: %.2f �\n", valorVenda);
    } else {
        valorVenda = valorProduto + (valorProduto * lucroMaior);
        printf("O valor de venda do produto � de: %.2f �\n", valorVenda);
    }
    return 0;  
}
