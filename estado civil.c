/* Uma empresa decidiu classificar os seus colaboradores em quatro grupos: 
Grupo 1 - Solteiros com menos de 25 anos 
Grupo 2 - Solteiros com 25 anos ou mais 
Grupo 3 - Casados com menos de 34 anos 
Grupo 4 - Casados com 34 anos ou mais 
Crie um algoritmo que determine a que grupo corresponde um dado colaborador
lendo o estado civil (valor inteiro: 0 para solteiro e 1 para casado) e a sua idade. */

#include <stdio.h>


int main() {
	int estadoCivil, idade;

	
	do {
		printf("\nSe voce for solteiro digite(0), se for casado(1): ");
		scanf("%d", &estadoCivil);
	}
	while(estadoCivil != 0 && estadoCivil != 1);
	
	printf("Quantos anos tem: ");
	scanf("%d", &idade);
	
	switch (estadoCivil){
	
		case 0:
			if (idade >= 0 && idade < 25){
				printf("Grupo 1");
				break;
			}
			else{
				printf("Grupo 2");
				break;
			}
		case 1:
			if (idade >= 0 && idade < 34){
				printf("Grupo 3");
				break;
			}
			else{
				printf("Grupo 4");
				break;
			}
	}
	
	
	return 0;
}