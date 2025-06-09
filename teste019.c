/*
19. Cria um programa em C que receba a quantidade de euros que uma pessoa que vai
viajar possui. Essa pessoa vai passar por vários países e precisa converter seu
dinheiro em dólares, ienes e libras.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
   float euros, dolares,ienes, libras;

    printf("Digite a quantidade de euros: ");
    scanf("%f", &euros);

    dolares = euros * 1.1;
   ienes = euros * 140;
    libras = euros * 0.85;

    printf("Com %.2f euros, voce pode converter para:\n", euros);
    printf("Dólares: %.2f USD\n", dolares);
    printf("Ienes: %.2f JPY\n",ienes);
    printf("Libras: %.2f GBP\n", libras);

    return 0;
}
