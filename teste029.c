/*
29. O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A
primeira prova tem peso de 20%, a segunda tem peso 30% e a terceira tem peso
50%. Considerando que a m�dia para aprova��o � de 10.0, faz um programa em
linguagem C para calcular a m�dia final de um aluno desta disciplina e dizer se o
aluno foi aprovado ou n�o.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
 
    int nota1, nota2, nota3;
	float peso1 = 0.2, peso2 = 0.3, peso3 = 0.5, media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);
     printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);
     printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);
	media = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
	
    if (media >= 10.0){
    	printf ("O aluno foi aprovado com m�dia: %.2f \n", media);
    	
    } else {
        printf("O aluno foi reprovado com m�dia: %.2f \n", media);
    }
    return 0;  
}
