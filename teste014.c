/*
14. Um café vende apenas um tipo de sandes, cujo recheio inclui duas fatias de queijo,
uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de
queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100
gramas, cria um programa em C que leia a quantidade de sandes que vai fazer para
um dia de vendas e informar as quantidades (em quilos) de queijo, presunto e
carne que precisa de compra.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    int queijo = 50, presunto = 50, hamburguer = 100, quantidadeSandes;
    float kgQueijo, kgPresunto, kgHamburguer;

    printf("Qual a quantidade de sandes que pretende fazer nesse dia: ");
	scanf("%d", &quantidadeSandes);
	
	kgQueijo = (quantidadeSandes * (queijo * 2))/ 1000;
	kgPresunto = quantidadeSandes * presunto / 1000;
	kgHamburguer = quantidadeSandes * hamburguer / 1000;
       printf("A quantidade em kg de queijo que precisa comprar é de: %.2f%kg\n", kgQueijo);
	   printf("A quantidade em kg de presunto que precisa comprar é de: %.2f%kg\n", kgPresunto);
	   printf("A quantidade em kg de hamburguer que precisa comprar é de: %.2f%kg\n", kgHamburguer);
       
    return 0;
}
