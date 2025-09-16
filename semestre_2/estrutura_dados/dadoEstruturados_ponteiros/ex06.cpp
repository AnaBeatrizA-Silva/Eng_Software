#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b);
int subi(int *a, int *b);
int mult(int *a, int *b);

int main(void) {
	
	int n1, n2;
	
	printf("Digite 1 numero: ");
	scanf("%i", &n1);
	
	printf("Digite 2 numero: ");
	scanf("%i", &n2);
	
	printf("Soma = %i \n", soma(&n1, &n2));
	printf("Subtracao = %i \n", subi(&n1, &n2));
	printf("Multiplicacao = %i \n", mult(&n1, &n2));

	return 0;
}

int soma(int *a, int *b) {
	int r;
	r = *a + *b;
	return r;
}

int subi(int *a, int *b) {
	int r;
	r = *a - *b;
	return r;
}

int mult(int *a, int *b) {
	int r;
	r = *a * *b;
	return r;
}