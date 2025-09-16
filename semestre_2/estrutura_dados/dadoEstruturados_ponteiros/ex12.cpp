#include <stdio.h>
#include <stdlib.h>

float media(float *a, int q);

int main(void) {

	int qnt;
	
	printf("Digite a quantidade de dados para a media: ");
	scanf("%i", &qnt);
	
	float numeros[qnt];
	
	for(int i = 0; i < qnt; i++) {
		printf("Digite %i numero: ", i);
		scanf("%f", &numeros[i]);
	}
	
	printf("A media e %.2f \n", media(numeros, qnt));
	
	return 0;
}

float media(float *a, int q) {
	float soma = 0;
	
	for(int i = 0; i < q; i++) {
		soma += a[i];
	}
	
	return soma / q;
}
