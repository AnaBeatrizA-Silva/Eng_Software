#include <stdio.h>
#include <stdlib.h>
typedef struct lista {
 int num;
 struct lista *prox;
} LISTA;
int main(void) {
 LISTA *inicio = NULL, *novo, *aux;
 int qtd, i, ordenada = 1;
 printf("Quantos numeros deseja inserir? ");
 scanf("%d", &qtd);
 for (i = 0; i < qtd; i++) {
 novo = (LISTA*) malloc(sizeof(LISTA));
 printf("Digite o %dº numero: ", i + 1);
 scanf("%d", &novo->num);
 novo->prox = inicio;
 inicio = novo;
 }
 aux = inicio;
 while (aux != NULL && aux->prox != NULL) {
 if (aux->num > aux->prox->num) {
 ordenada = 0;
 break;
 }
 aux = aux->prox;
 }
 printf("\nA lista ");
 if (ordenada)
 printf("esta ordenada.\n");
 else
 printf("NAO esta ordenada.\n");
 printf("\nLista: ");
 aux = inicio;
 while (aux != NULL) {
 printf("%d ", aux->num);
 aux = aux->prox;
 }
 printf("\n");
 return 0;
}