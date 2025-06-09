/*7. Elabore um programa que imprima no ecrã os valores entre 1000 e 2000, mas
com intervalo de 2 em 2.*/

#include <stdio.h>

int main() {
	int n, i;
	
	for(i = 1000; i <= 2000; i+=2){
	printf("%d", i);
	}
	return 0;
}