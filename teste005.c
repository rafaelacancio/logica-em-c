/*
5. Criar um programa em C que vai receber dois números. Esses números
representam as horas e minutos, e calcula o número de minutos passados desde a
hora 0.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

  	float horas, minutos = 60, minutos_passados;
  	
  	printf("Diga as horas: ");
    scanf("%f", &horas);
    printf("Diga os minutos: ");
    scanf("%f", &minutos);
    
    if (horas >= 0 && horas <= 24);
  	minutos_passados = horas * minutos ;
	
    printf("O tempo passado em minutos: %.2f \n", minutos_passados);

    return 0;
}
