/*
27. Faz um programa em linguagem C que l� dois n�meros e responde se a divis�o do
primeiro pelo segundo � exata (o resto da divis�o deve ser igual a 0). Se for, o
programa deve imprimir a mensagem �A divis�o de (1� n�mero) pelo (2� n�mero)
� exata�.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int num1, num2, divisao;

    printf("Digite dois n�meros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
   
    if (num1 % num2 == 0) {
    	divisao = num1 / num2;
    	
        printf("A divis�o de (1� n�mero) pelo (2� n�mero) � exata %d \n");
    } else {
        printf("O resto da divis�o � diferente de 0 \n");
    }

    return 0;  
}
