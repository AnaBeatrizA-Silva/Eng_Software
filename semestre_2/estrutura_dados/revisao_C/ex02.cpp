//2. Classificador de Números: Um cientista está analisando 10 resultados de sensores e precisa entender o comportamento dos valores medidos. 
	// Leia 10 números inteiros em um vetor e informe: 
//
//- Quantos são positivos 
//
//- Quantos são negativos 
//
//- Quantos são múltiplos de 3 



#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int n[10], sum, dec, mult;
	
	sum = 0;
	dec = 0;
	mult = 0;

	printf("Digite 10 numeros inteiros: ");
	for(int i = 0; i < 10; i++) {
		scanf("%i", &n[i]);
	}
	
	for(int i = 0; i < 10; i++) {
		if(n[i] >= 0) {
			sum += 1;
		}
		
		if(n[i] < 0) {
			dec += 1;
		}
		
		if(n[i] % 3 == 0) {
			mult += 1;
		}
	}

	printf("Tem %i numeros positivos, %i numeros negativos e %i sao multiplos de 3", sum, dec, mult);

	return 0;
}
