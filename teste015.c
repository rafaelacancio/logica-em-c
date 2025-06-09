/*
15. Escreve um programa em C que calcula o volume de uma esfera em função do raio
R que deverá ser introduzido pelo utilizador. O volume da esfera é calculado pela
expressão: V = (4/3) * PI * R³
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    float raio, volumeEsfera, pi = 3.14159;

    printf("Qual o valor do raio da esfera: ");
	scanf("%f", &raio);
	
	volumeEsfera = (4.0 / 3.0) * pi * pow(raio, 3);
    
    printf("O volume da esfera é de: %.2f\n", volumeEsfera);
       
    return 0;
}
