/*

Segurança Digital – Verificação de Número Primo: Um sistema de segurança só aceita senhas 
baseadas em números primos. 
Crie uma função int ehPrimo(int n) que verifique se um número é primo. 
No main, peça uma senha e indique se é válida.  

*/


#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n);

int main(void) {
	
	int senha;
	
	printf("Digite a senha: ");
	scanf("%i", &senha);
	
	if(ehPrimo(senha)) {
		printf("Senha valida \n");
	} else {
		printf("Senha invalida \n");
	}
	
	return 0;
}

int ehPrimo(int n) {
	
	if(n <= 1) return 0;
	
	for(int i = 2; i < n; i++){
		if(n % i == 0) {
			return 0;
		}
	}
	
	return 1;
}