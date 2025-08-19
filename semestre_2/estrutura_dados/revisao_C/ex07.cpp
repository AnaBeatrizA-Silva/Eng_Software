#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char nome[100];
	int sumT = 0, sumV = 0;
	
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("%s", nome);
	
	for(int i = 0; nome[i] != '\0'; i++) {
		if(nome[i] == '\0') sumT--;
		
		if(nome[i] == ' ') sumT--;
		
		if(nome[i] == '\n') sumT--;
		
		sumT++;
	}

	printf("%i", sumT);

	return 0;
}
