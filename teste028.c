/*
28. Cria um programa em linguagem C que classifica um número de entrada fornecido
pelo utilizador como par ou ímpar.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int num1;

    printf("Digite um número: \n");
    scanf("%d", &num1);
   
    if (num1 % 2 == 0) {
    	printf ("O número é par \n");
    	
    } else {
        printf("O número é ímpar \n");
    }
    return 0;  
}
