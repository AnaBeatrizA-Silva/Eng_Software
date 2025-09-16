#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
	char raca[50], cor[30], sexo;
	float peso;
} Animal;

int main(void) {
	
	Animal bd[TAM];
	
	for(int i = 0; i < TAM; i++) {
		printf("Digite a raca: ");
		gets(bd[i].raca);
		fflush(stdin);
		
		printf("Digite a cor: ");
		gets(bd[i].cor);
		fflush(stdin);
		
		printf("Digite o peso: ");
		scanf("%f", &bd[i].peso);
		fflush(stdin);
		
		printf("Digite o sexo(m/f): ");
		scanf("%c", &bd[i].sexo);
		fflush(stdin);
	}
	
	for(int i = 0; i < TAM; i++) {
		printf("%s\t %s\t %.2f\t %c\t \n", bd[i].raca, bd[i].cor, bd[i].peso, bd[i].sexo);
	}
	
	return 0;
}
