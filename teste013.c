/*
13. Deseja-se fazer um levantamento a respeito da ausência de alunos na primeira
prova de Algoritmos. Crie um programa em C que receba a quantidade total de
alunos matriculados na disciplina e a quantidade de alunos presentes na primeira
prova, calcule e escreva a percentagem de ausência na primeira prova de
Algoritmos.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    int quantidadeTotal, quantidadePresente; 
	float percentagemAusencia;

    printf("Quantos alunos estavam matriculados na disciplina: ");
	scanf("%d", &quantidadeTotal);
	printf("Quantos alunos estavam presentes na prova: ");
	scanf("%d", &quantidadePresente);
	
	if (quantidadeTotal > 0) {
       percentagemAusencia = ((quantidadeTotal - quantidadePresente) * 100.0) / quantidadeTotal;
       printf("A percentagem de alunos ausente na prova é de: %.2f%%\n", percentagemAusencia);
        } else {
       printf("Quantidade total de alunos inválida.\n");
   }
       
    return 0;
}
