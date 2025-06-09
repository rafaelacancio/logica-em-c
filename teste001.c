/*
1. Criar um programa em C que receba o valor do ordenado mínimo e o valor do
ordenado dum funcionário e calcular e mostrar a quantidade de salários mínimos
que ganha esse funcionário.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

     float ordenadoMinimo, ordenadoFuncionario, quantidadeSalarios;

    printf("Digite o valor do ordenado minimo: ");
    scanf("%f", &ordenadoMinimo);

    printf("Digite o valor do ordenado do funcionario: ");
    scanf("%f", &ordenadoFuncionario);

    quantidadeSalarios = ordenadoFuncionario / ordenadoMinimo;

    printf("O funcionario ganha %.2f salarios minimos.\n", quantidadeSalarios);

    return 0;
}
