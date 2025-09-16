#include <stdio.h>
#include <stdlib.h>

int pit(int n);

int main(void) {

	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	printf("O valor e %i \n", pit(numero));

	return 0;
}

int pit(int n) {
	if(n == 1) return 1;
	
	return  n + pit(n - 1);
}



