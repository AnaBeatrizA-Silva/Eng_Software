#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
	char nome[50];
	char telefone[25];
}Pessoa;

Pessoa entrada(void);

void saida(Pessoa a);

int main(void) {

	Pessoa agenda[3];
	
	// Vai criar tres Pessoas
	for(int i = 0; i < 3; i++) {
		agenda[i] = entrada();
	}

	// Vai mostrar na tela as Pessoas
	for(int i = 0; i < 3; i++) {
		saida(agenda[i]);
	}

	return 0;
}

Pessoa entrada(void) {
	Pessoa a;
	
	printf("Digite seu nome: ");
	gets(a.nome);
	fflush(stdin);
	
	printf("Digite o seu telefone: ");
	gets(a.telefone);
	fflush(stdin);
	
	return a;
}

void saida(Pessoa a) {
	printf("nome = %s \ttelefone = %s \n", a.nome, a.telefone);
}