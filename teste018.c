/*
18. Uma empresa paga 60,00€ por hora, e 75,00€ por hora extra. Cria um programa
em C para ler a quantidade de horas normais e horas extras trabalhadas por um
determinado funcionário e em seguida calcula e imprime o seu ordenado bruto e o
seu ordenado líquido. Considera que o ordenado líquido é igual ao ordenado bruto
descontando 10% de impostos.
*/
#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "portuguese");
    int horasNormais, horasExtras;
    const float VALOR_HORA_NORMAL = 60.00;
    const float VALOR_HORA_EXTRA = 75.00;
    float ordenadoBruto, ordenadoLiquido;

    printf("Informe a quantidade de horas normais trabalhadas: ");
    scanf("%d", &horasNormais);
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    ordenadoBruto = (horasNormais * VALOR_HORA_NORMAL) + (horasExtras * VALOR_HORA_EXTRA);
    ordenadoLiquido = ordenadoBruto * 0.90;

    printf("Ordenado Bruto: %.2f\n", ordenadoBruto);
    printf("Ordenado Líquido (após 10%% de impostos): %.2f\n", ordenadoLiquido);
       
    return 0;
}
