/*
	Analisador de Dados: Uma pesquisa foi feita com 10 voluntários, e os dados estão armazenados em um vetor. 
		Crie funções que determinem: 
	- O maior valor 
	- O menor valor 
	- A média dos valores inseridos 
*/

#include <stdio.h>
#include <stdlib.h>

float maior(float n[10]);
float menor(float n[10]);
float media(float n[10]);

int main(void) {
	
	float v[10];
	int i;
	
	for(i = 0; i < 10; i++) {
		printf("Digite o valor %i: ", i + 1);
		scanf("%f", &v[i]);
	}
	
	printf("Maior = %f: \n ", maior(v));
	printf("Menor = %f: \n ", menor(v));
	printf("Media = %f: \n ", media(v));
	
	return 0;
}

float maior(float n[10]) {
	float m;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0) m = n[i];
		
		if(m < n[i]) m = n[i];
	}
	
	return m;
	
}

float menor(float n[10]) {
	float m;
	
	for(int i = 0; i < 10; i++) {
		if(i == 0) m = n[i];
		
		if(m > n[i]) m = n[i];
	}
	
	return m;
	
}

float media(float n[10]) {
	float m = 0;
	
	for(int i = 0; i < 10; i++) {
		m += n[i];
	}
	
	return m / 10;
}