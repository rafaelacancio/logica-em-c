/*
8. Criar um programa em C que vai receber o preço de um produto, e calcular e
mostrar o novo preço, sabendo que este sofreu um desconto de 10%.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    float preco, novoPreco, desconto = 0.1;

    printf("Qual o preço do produto antes do desconto: ");
    scanf("%f", &preco);

    novoPreco = preco - preco * desconto;

    printf("O preço do produto com desconto é %.2f €\n", novoPreco);
    return 0;
}


