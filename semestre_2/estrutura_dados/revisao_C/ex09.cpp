/*

Gerador de Tabuada: Uma professora quer usar um sistema para exibir rapidamente tabuadas de números solicitados pelos alunos. 
	Crie uma função void tabuada(int n) que exiba a tabuada do número. 
		No main, permita que o usuário digite diferentes números até digitar 0. 

*/

#include <stdio.h>
#include <stdlib.h>

void tabuada(int n);

int main(void) {
	
	int num;
	
	do {
		printf("Digite um numero inteiro para a tabuada: ");
		scanf("%i", &num);	
		
		if(num != 0) tabuada(num);
	} while(num != 0);
	

	return 0;
}

void tabuada(int n){
	
	for(int i = 0; i <= 10; i++) {
		printf("%i x %i = %i \n", n, i, n * i);
	}
	
}