/*
23. Cria um programa em linguagem C que l� um n�mero, e se ele for maior do que 20
mostra o n�mero no ecr�.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int numero;

    
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero > 20) {
        printf("O n�mero informado �: %d\n", numero);
    }
    
    return 0;
}
