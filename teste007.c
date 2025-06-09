/*
7. Criar um programa em C que vai converter um valor de dólar para euros. O
programa tem de pedir o valor da cotação do dólar e também a quantidade de
dólares a ser convertida.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float quantidadeDolar = 0, valorCotacao, conversaoEuro;

    printf("Qual o valor da cotação do dólar em relação ao euro: ");
    scanf("%f", &valorCotacao);
    
    printf("Qual a quantidade de dólares a ser convertida: ");
    scanf("%f", &quantidadeDolar);
    
    conversaoEuro = quantidadeDolar * valorCotacao;
    
    printf("O valor convertido de dólares para euros é: %.2f euros\n", conversaoEuro);

    return 0;
}

