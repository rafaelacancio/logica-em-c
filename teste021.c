/*
21. Escreve um programa em C que lê a idade de uma pessoa em dias e mostra em
anos, meses e dias.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int idadeDias, anos, meses, dias;

    printf("Informe a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    meses = (idadeDias % 365) / 30;
    dias = (idadeDias % 365) % 30;

    printf("Idade em anos: %d anos\n", anos);
    printf("Idade em meses: %d meses\n", meses);
    printf("Idade em dias: %d dias\n", dias);
    return 0;
}
