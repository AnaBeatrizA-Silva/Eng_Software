#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int num;
	struct lista *prox;
} LISTA;

int main(void) {

	LISTA *l = NULL, *novo, *aux;
	
	for(int i = 1; i <= 5; i++) {
		novo = (LISTA*) malloc(sizeof(LISTA));
		
		printf("Digite o numero %i: ", i);
		scanf("%i", &novo->num);
		
		novo->prox = NULL;
		
		if(l == NULL) {
			l = novo;
		} else {
			aux = l;
			while(aux->prox != NULL) {
				aux = aux->prox;
			}
			aux->prox = novo;
		}
	}
	
	aux = l;
	while(aux != NULL) {
		printf("%i ", aux->num);
		aux = aux->prox;
	}

	return 0;
}
