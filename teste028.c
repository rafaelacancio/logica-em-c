/*
28. Cria um programa em linguagem C que classifica um n�mero de entrada fornecido
pelo utilizador como par ou �mpar.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int num1;

    printf("Digite um n�mero: \n");
    scanf("%d", &num1);
   
    if (num1 % 2 == 0) {
    	printf ("O n�mero � par \n");
    	
    } else {
        printf("O n�mero � �mpar \n");
    }
    return 0;  
}
