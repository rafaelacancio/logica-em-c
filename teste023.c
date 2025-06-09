/*
23. Cria um programa em linguagem C que lê um número, e se ele for maior do que 20
mostra o número no ecrã.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int numero;

    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 20) {
        printf("O número informado é: %d\n", numero);
    }
    
    return 0;
}
