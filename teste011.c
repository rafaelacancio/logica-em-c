/*
11. Criar um programa em C que vai receber três números inteiros e positivos (A, B, C)
e calcular a seguinte expressão: D=(R+S) / 2 onde R=A+B e S=B-C.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    int A,B, C, conta1, conta2, contaFinal;

    printf("Qual o primeiro número: ");
	scanf("%d", &A);
	printf("Qual osegundo número: ");
	scanf("%d", &B);
	printf("Qual o terceiro número: ");
	scanf("%d", &C);
    
    if (A >= 0 && B >= 0 && C >= 0){
    conta1 = A + B;
	conta2 = B - C;
	contaFinal = conta1 + conta2;	
	}
    printf("O valor da expressão D=(R+S)): %.2d \n", contaFinal);
    return 0;
}
