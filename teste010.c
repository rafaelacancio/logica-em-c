/*
10. O sistema de avaliação de determinada disciplina é composto por três provas. A
primeira prova tem peso 30%, a segunda tem peso 30% e a terceira tem peso 40%.
Criar um programa em C para ler as três notas e calcular e mostrar a média final
dum aluno desta disciplina.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    int nota1, nota2, nota3;
	float peso1 = 0.3, peso2 = 0.3, peso3 = 0.4, mediaNotas;

    printf("Qual a primeira nota: ");
	scanf("%d", &nota1);
	printf("Qual a segunda nota: ");
	scanf("%d", &nota2);
	printf("Qual a terceira nota: ");
	scanf("%d", &nota3);
    
    mediaNotas = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;

    printf("A média final do aluno nessa disciplina é de: %.2f \n", mediaNotas);
    return 0;
}
