#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
	int n;
	struct lista *p;
} LISTA;

int main(void) {
	
	LISTA *l = NULL;
	
	int num;
	
	do { 
		printf("Digite um numero (-1 para sair): ");
		scanf("%i", &num);
		
		LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
		
		if(num != -1) {
			novo->n =  num;
			novo->p = l;
			l = novo;
		}
	} while(num != -1);
	
	while(l != NULL) {
		printf("l = %p \n", l);
		printf("-> n = %i \n", l-> n);
		printf("-> p\n", l->n);
		
		l = l -> p;
	}

	return 0;
}
