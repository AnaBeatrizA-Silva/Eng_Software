/* 

Cálculo de Permutações:  Um jogo calcula diferentes combinações de peças com base em permutações. 
Escreva uma função iterativa int fatorial(int n) que retorne o fatorial do número informado.

*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(void) {

	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	printf("O fatorial e %i \n", fatorial(num));

	return 0;
}

int fatorial(int n) {
	int r = 1;
	
	for(int i = n; i >= 1; i--) {
		r *= i;
	}
	
	return r;
}