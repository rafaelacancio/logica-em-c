/*
6. Criar um programa em C que vai receber a dist�ncia entre duas cidades em milhas,
e converter a dist�ncia equivalente em quil�metros (1,61 km = 1 mi).
*/
#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    float milhas, km = 1.61 , conversao;

    printf("Qual a dist�ncia em milhas: ");
    scanf("%f", &milhas);
    
    conversao = milhas * km;
        printf("A dist�ncia equivalente em quil�metros �: %.2f km\n", conversao);

    return 0;
}

