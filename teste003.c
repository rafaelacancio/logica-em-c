/*
3. Criar um programa C que vai calcula e mostrar a tabuada de um número colocado
pelo utilizador.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

  	int numero, i;

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
