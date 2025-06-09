/*
30. Cria um programa em linguagem C que lê a idade de duas pessoas e imprime os
dados da pessoa mais velha.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int idade1, idade2;

    printf("Digite a idade da primeira pessoa: \n");
    scanf("%d", &idade1);
    printf("Digite a idade da segunda pessoa: \n");
    scanf("%d", &idade2);
	
    if (idade1 > idade2){
    	printf ("A primeira pessoa se chama João e tem %d anos \n", idade1);
    	
    } else {
        printf("A segunda pessoa se chama Maria e tem %d anos \n", idade2);
    }
    return 0;  
}
