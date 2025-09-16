#include <stdio.h>
#include <stdlib.h>

void fat(int *n);

int main(void) {

	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	fat(&num);

	return 0;
}

void fat(int *n) {
	int r = 1;
	
	for(int i = *n; i > 0; i--) {
		r *= i;
	}
	printf("O valor e %i \n", r);
}