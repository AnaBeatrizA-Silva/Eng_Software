/*

	Construa um algoritmo que contenha uma lista estática homogênea para 
	guardar seis números reais, solicite ao usuário os números e apresente para 
	ele a média dos números.

*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int n[6];
	float sum = 0;
	
	for(int i = 0; i < 6; i++) {
		printf("Digite o %i numero: ", i);
		scanf("%i", &n[i]);
	}
	
	for(int i = 0; i < 6; i++) {
		sum += n[i];
	}
	
	printf("A media dos numeros e: %.1f", sum / 6);

	return 0;
}
