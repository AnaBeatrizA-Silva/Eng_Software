/*

	Construa um algoritmo que contenha uma lista estática heterogênea para 
	guardar dados cadastrais de dez softwares, solicite ao usuário digitar, nome, 
	fabricante, tipo de licença e versão.

*/

typedef struct software {
	char nome[50];
	char fabricante[50];
	char tipoLincecao[50];
	float versao;
} Software;

#include <stdio.h>
#include <stdlib.h>

Software entrada(void);

void saida(Software a);

int main(void) {
	
	Software sof[3];

	for(int i = 0; i < 3; i++) {
		sof[i] = entrada();
	}
	
	for(int i = 0; i < 3; i++) {
		saida(sof[i]);
	}

	return 0;
}

Software entrada(void) {
	Software a;
	
	printf("Digite o nome do software: ");
	gets(a.nome);
	fflush(stdin);
	
	printf("Digite o fabricante: ");
	gets(a.fabricante);
	fflush(stdin);
	
	printf("Digite o tipo de licenca: ");
	gets(a.tipoLincecao);
	fflush(stdin);
	
	printf("Digite o numero da versao: ");
	scanf("%f", &a.versao);
	
	return a;
}

void saida(Software a) {
	printf("\n Dados: \n nome: %s \n fabricante: %s \n tipo de licenca: %s \n versao: %f \n -----", a.nome, a.fabricante, a.tipoLincecao, a.versao);
}