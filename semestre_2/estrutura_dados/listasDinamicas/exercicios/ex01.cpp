/*

Elabore um algoritmo que leia uma sequência de números, armazenando-os 
numa lista simplesmente encadeada e que, em seguida, verifique se a lista 
linear encadeada está ordenada. Suponha que a lista não contenha números 
repetidos.
R.:

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
	int num;
	struct Lista *prox;
} LISTA;

int main(void) {
	
	LISTA *inicio = NULL, *novo, *aux;
	int qnt, ordenada = 1;
	
	printf("Quantos numeros deseja inserir: ");
	scanf("%i", &qnt);
	
	for(int i = 0; i < qnt; i++) {
		novo = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &novo->num);
		novo->prox = inicio;
		inicio = novo;
	}
	
	aux = inicio;
	while(aux != NULL && aux->prox != NULL) {
		if(aux->num > aux->prox->num) {
			ordenada = 0;
			break;
		}
		aux = aux->prox;
	}
	
	if(ordenada) {
		printf("A lista esta ordenada");
	} else {
		printf("A lista nao esta ordenada \n");
	}
	
	aux = inicio;
	while(aux != NULL) {
		printf("%d ", aux->num);
		aux = aux->prox;
	}
	
	return 0;
}
