/*
1. Criar um programa em C que receba o valor do ordenado m�nimo e o valor do
ordenado dum funcion�rio e calcular e mostrar a quantidade de sal�rios m�nimos
que ganha esse funcion�rio.
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
