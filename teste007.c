/*
7. Criar um programa em C que vai converter um valor de d�lar para euros. O
programa tem de pedir o valor da cota��o do d�lar e tamb�m a quantidade de
d�lares a ser convertida.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float quantidadeDolar = 0, valorCotacao, conversaoEuro;

    printf("Qual o valor da cota��o do d�lar em rela��o ao euro: ");
    scanf("%f", &valorCotacao);
    
    printf("Qual a quantidade de d�lares a ser convertida: ");
    scanf("%f", &quantidadeDolar);
    
    conversaoEuro = quantidadeDolar * valorCotacao;
    
    printf("O valor convertido de d�lares para euros �: %.2f euros\n", conversaoEuro);

    return 0;
}

