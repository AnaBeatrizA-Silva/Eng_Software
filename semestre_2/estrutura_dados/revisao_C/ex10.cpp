/*

Análise de Produção – Linha de Montagem: Uma fábrica registra a produção em uma matriz 4x4. Cada linha representa um dia da semana e cada coluna uma máquina. 
	Leia os dados da matriz e calcule a soma da diagonal principal (elementos [0][0], [1][1], etc.), que representa a linha de produção automatizada. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float m[4][4];
	int sum = 0;
//	int i, j;
	
	for(int i = 0; i < 4; i++) {
		printf("Digite os dados do dia %i: \n\n", i + 1);
		
		for(int j = 0; j < 4; j++) {
			printf("Digite o valor: ");
			scanf("%f", &m[i][j]);
		}
	}
	
	// mostra a matriz na tela
	for(int i = 0; i < 4; i++) {
		printf("\n");
		for(int j = 0; j < 4; j++) {
			printf("%.1f  \n", m[i][j]);
		}
	}
	
	// calcula a diagonal principal
	
	/*
		00 01 02 03
		10 11 12 13
		20 21 22 23
		30 31 32 33
	*/
	
	for(int i = 0; i < 4; i++) {
		sum += m[i][i];
	}

	printf("Total da diagonal principal e: %i", sum);

	return 0;
}
