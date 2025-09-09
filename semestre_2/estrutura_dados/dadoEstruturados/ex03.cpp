#include <stdio.h>
#include <stdlib.h>

#define TAM 50

typedef struct {
	int codigo;
	char nome[50], cor[30];
	float peso, preco;
} Peca;

void entrada(Peca *a);
void lista(Peca *a, int c);

int main(void) {

	int op, cont = 0;
	Peca bd[TAM];
	
	do{
		
		system("cls");
		printf("1 - Adicionar \n");
		printf("2 - Listar \n");
		printf("3 - Sair \n");
		printf("Digite uma opcao: ");
		scanf("%i", &op);
		fflush(stdin);
		
		switch(op) {
			case 1:
				if(cont < TAM) {
					entrada(&bd[cont]);
					cont++;	
				} else {
					printf("Erro nao tem espaco \n");
					system("pause");
				}
				break;
			case 2:
				lista(bd, cont);
				system("pause");
				break;
			case 3:
				break;
			default:
				printf("Erro! nao tem essa opcap \n");
		}
			
	} while(op != 3);

	return 0;
}

void entrada(Peca *a) {
	printf("Digite o codigo: ");
	scanf("%i", &a->codigo);
	fflush(stdin);
	
	printf("Digite o nome: ");
	gets(a->nome);
	fflush(stdin);
	
	printf("Digite a cor: ");
	gets(a->cor);
	fflush(stdin);
	
	printf("Digite o peso: ");
	scanf("%f", &a->peso);
	fflush(stdin);
	
	printf("Digite o preco: ");
	scanf("%f", &a->preco);
	fflush(stdin);
	
}

void lista(Peca *a, int c) {
	for(int i = 0; i < c; i++) {
		printf("%i\t", a[i].codigo);
		printf("%s\t", a[i].nome);
		printf("%s\t", a[i].cor);
		printf("%f\t", a[i].peso);
		printf("%f \n", a[i].preco);
		
	}
}
