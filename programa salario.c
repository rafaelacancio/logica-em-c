/*2. A Microsoft Portugal resolveu dar um aumento de salário aos seus
colaboradores e lhe contrataram para desenvolver um programa que calculará
os reajustes. Faça um programa que recebe o salário e o reajuste segundo o
seguinte critério:
o salários até 700€, aumento de 20%
o salários entre 700€ e 900€: aumento de 15%
o salários entre 900€ e 1200€: aumento de 10%
o salários acima 1200€: aumento de 5%.
Após o aumento ser realizado, informe no ecrã:
▪ o salário antes do reajuste;
▪ o percentual de aumento aplicado;
▪ o valor do aumento;
▪ o novo salário, após o aumento.*/

#include <stdio.h>

int main() {
	float salario = 0, aumento = 0, reajuste = 0, percentual;
	
	printf("Digite o valor do salario do colaborador: ");
	scanf("%f", &salario);
	
	if(salario >= 0 && salario <= 700){
		aumento = salario * 0.20 + salario;
		percentual = 0.20;
		reajuste = salario - salario * 0.20 ;
	}
	else if(salario > 700 && salario <= 900){
		aumento = salario * 0.15 + salario;
		percentual = 0.15;
		reajuste = salario - salario * 0.15 ;
	}
	else if(salario > 900 && salario <= 1200){
		aumento = salario * 0.10 + salario;
		percentual = 0.10;
		reajuste = salario - salario * 0.10;
	}
	else{
		aumento = salario * 0.05 + salario;
		percentual = 0.05;
		reajuste = salario - salario * 0.05;
	}
	
	
	printf("\nO salario antes do reajuste e %.2f: ", salario);
	printf("\nO percentual de aumento foi %.2f: ", percentual);
	printf("\nO aumento foi de %.2f: ", aumento);
	printf("\nO reajuste foi de %.2f: ", reajuste);
	return 0;
}