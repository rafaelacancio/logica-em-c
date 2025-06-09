/*
17. Fa�a um programa em C que recebe o peso de uma pessoa, calcula e mostra o
novo peso ap�s a pessoa engordar 15% sobre o peso colocado e o novo peso ap�s
a pessoa emagrecer 20% sobre o �ltimo peso.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

  	float pesoAtual, pesoEngordar, pesoEmagrecer;

    printf("Digite o peso atual da pessoa (em kg): ");
    scanf("%f", &pesoAtual);

    pesoEngordar = pesoAtual + (pesoAtual * 0.15);
    pesoEmagrecer = pesoEngordar - (pesoEngordar * 0.20);

    printf("Novo peso apos engordar 15%%: %.2f kg\n", pesoEngordar);
    printf("Novo peso apos emagrecer 20%%: %.2f kg\n", pesoEmagrecer);
    return 0;
}
