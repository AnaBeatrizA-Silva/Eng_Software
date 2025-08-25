#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char nome[100], carac;
	int sumT = 0, sumV = 0;
	
	printf("Digite seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	
	printf("%s", nome);
	
	for(int i = 0; nome[i] != '\0'; i++) {
		if((nome[i] >= 'A' && nome[i] <= 'Z') || (nome[i] >= 'a' && nome[i] <= 'z')) {
			sumT++;
		}
		
		if(nome[i] >= 'a' && nome[i] <= 'z') {
			nome[i] -= 32;
		}
		
		switch(nome[i]) {
			case 'A': case 'E': case 'I': case 'O': case 'U': 
				sumV++;
				break;
		}
		
		
	}

	printf("%i \n", sumT);
	printf("%i \n", sumV);
                    
	return 0;       
}
