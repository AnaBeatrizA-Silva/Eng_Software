#include <stdio.h>
#include <stdlib.h>

void converta(char *a);

int main(void) {
	
	char nome[50];
	
	printf("Digite um nome: ");
	gets(nome);
	
	converta(nome);
	
	printf("O nome e %s", nome);
	
	return 0;
}

void converta(char *a) {
	for(int i = 0; a[i] != '\0'; i++) {
		if(a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
	}
}
