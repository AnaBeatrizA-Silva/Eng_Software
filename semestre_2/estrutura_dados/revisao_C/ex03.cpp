//3. Relatório de Vendas por Região:  Uma empresa coleta dados de vendas de 
//	3 setores em 3 regiões diferentes. 
//Leia uma matriz 3x3 com os valores de vendas e calcule a soma total de vendas 
//	por linha (por setor). 
//Exiba o resultado.  

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float m[3][3], s[3];
	
	for(int i = 0; i < 3; i++) {
		printf("Dados da regiao %i \n\n", i + 1);
		for(int j = 0; j < 3; j++) {
			printf("Digite o valor: ");
			scanf("%f", &m[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++) {
		s[i] = 0;
		
		for(int j = 0; j < 3; j++) {
			s[i] += m[i][j];
		}
	}

	for(int i; i < 3; i++) {
		printf("O valor do setor %i e %.2f \n", i + 1, s[i]);
	}

	return 0;
}
