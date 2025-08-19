/*

Calculadora de Operações Básicas: Você está desenvolvendo uma calculadora simples para uma tela de terminal. Implemente um menu com as seguintes opções: 

1. Soma 

2. Subtração 

3. Multiplicação 

4. Divisão 

5. Sair 

Cada operação deve ser implementada em uma função separada. Use switch. 

*/

#include <stdio.h>
#include <stdlib.h>

void soma();
void subt();
void mult();
void divi();
void sair();

int main(void) {
	
	int loop = 1, esco;
	
	while(loop) {
		printf(
		
			"\n 1. Soma \n"
	
			"2. Subtração \n"
			
			"3. Multiplicação \n"
			
			"4. Divisão \n"
			
			"5. Sair \n" 
		
		);
		scanf("%i", &esco);
		
		
	
		switch(esco) {
			case 1:
				soma();
				break;
			case 2:
				subt();
				break;
			case 3:
				mult();
				break;
			case 4:
				divi();
				break;
			default:
				printf("Voce saiu da calculadora.");
				loop = 0;
		}
	}

	return 0;
}

void soma() {
	
	float n1, n2, conta;
	
	printf("\n Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
		
	conta = n1 + n2;
	
	printf("\n A soma dos numeros %.1f e %.1f e %.1f: \n", n1, n2, conta);
}


void subt() {
	float n1, n2, conta;
	
	printf("\n Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
		
	conta = n1 - n2;
	
	printf("\n A subtracao dos numeros %.1f e %.1f e %.1f: \n", n1, n2, conta);
}


void mult() {
	float n1, n2, conta;
	
	printf("\n Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
		
	conta = n1 * n2;
	
	printf("\n A multiplicao dos numeros %.1f e %.1f e %.1f: \n", n1, n2, conta);
}


void divi() {
	float n1, n2, conta;
	
	printf("\n Digite dois numeros: ");
	scanf("%f %f", &n1, &n2);
		
	conta = n1 / n2;
	
	printf("\n A divisao dos numeros %.1f e %.1f e %.1f: \n", n1, n2, conta);
}
