/*
4. Criar um programa em C que recebe o peso de uma pessoa em quilos e calcular e
mostrar esse peso em gramas.
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    float pesoQuilos, pesoGramas;

    printf("Digite o peso da pessoa em quilos: ");
    scanf("%f", &pesoQuilos);

    pesoGramas = pesoQuilos * 1000;

    printf("O peso da pessoa em gramas é: %.2f g\n", pesoGramas);

    return 0;
}

