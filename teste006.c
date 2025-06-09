/*
6. Criar um programa em C que vai receber a distância entre duas cidades em milhas,
e converter a distância equivalente em quilómetros (1,61 km = 1 mi).
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    float milhas, km = 1.61 , conversao;

    printf("Qual a distância em milhas: ");
    scanf("%f", &milhas);
    
    conversao = milhas * km;
        printf("A distância equivalente em quilómetros é: %.2f km\n", conversao);

    return 0;
}

