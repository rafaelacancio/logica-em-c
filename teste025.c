/*
25. Faz um programa em linguagem C que l� um n�mero e que diz se ele � positivo ou
negativo.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
   int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O n�mero %d � positivo.\n", numero);
    } else if (numero < 0) {
        printf("O n�mero %d � negativo.\n", numero);
    } else {
        printf("O n�mero � zero.\n");
    }

    return 0;
}
