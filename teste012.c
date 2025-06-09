/*
12. O restaurante a quilo Bem-Bom cobra 12,00€ por cada quilo de refeição. Cria um
programa em C que vai receber o peso do prato montado pelo cliente (em quilos) e
imprimir o valor a pagar. Assuma que a balança já desconta o peso do prato.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");

    float kg, valorKg = 12.00, valorPagar;

    printf("Qual o peso do prato montado pelo cliente: ");
	scanf("%f", &kg);
	
	valorPagar = kg * valorKg;

    printf("O valor que o cliente deve pagar é: %.2f \n", valorPagar);
    return 0;
}
