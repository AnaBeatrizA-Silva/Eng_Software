/*

Análise de Produção – Linha de Montagem: Uma fábrica registra a produção em uma matriz 4x4. Cada linha representa um dia da semana e cada coluna uma máquina. 
	Leia os dados da matriz e calcule a soma da diagonal principal (elementos [0][0], [1][1], etc.), que representa a linha de produção automatizada. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float m[4][4];
//	int i, j;
	
	for(int i = 0; i < 4; i++) {
		printf("Digite os dados do dia %i: \n\n", i + 1);
		
		for(int j = 0; j < 4; j++) {
			printf("Digite o valor: ");
			scanf("%f", &m[i][j]);
		}
	}
	
	for(int i = 0; i < 4; i++) {
		printf("\n");
		for(int j = 0; j < 4; j++) {
			printf("%f", m[i][j]);
		}
	}

	return 0;
}
