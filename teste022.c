/*
22. Cria um programa em C que lê um número inteiro de três dígitos e mostra esse
valor separadamente da seguinte forma: CENTENA=x, DEZENA=x, UNIDADE=x.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int numero, centena, dezena, unidade;

    printf("Informe um número de três dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;


    printf("CENTENA = %d\n", centena);
    printf("DEZENA = %d\n", dezena);
    printf("UNIDADE = %d\n", unidade);
    
    return 0;
}
