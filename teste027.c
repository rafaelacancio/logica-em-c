/*
27. Faz um programa em linguagem C que lê dois números e responde se a divisão do
primeiro pelo segundo é exata (o resto da divisão deve ser igual a 0). Se for, o
programa deve imprimir a mensagem “A divisão de (1º número) pelo (2º número)
é exata”.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int num1, num2, divisao;

    printf("Digite dois números: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
   
    if (num1 % num2 == 0) {
    	divisao = num1 / num2;
    	
        printf("A divisão de (1º número) pelo (2º número) é exata %d \n");
    } else {
        printf("O resto da divisão é diferente de 0 \n");
    }

    return 0;  
}
