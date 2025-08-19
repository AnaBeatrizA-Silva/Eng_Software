//1. Controle Acadêmico: Uma escola precisa calcular a situação final de seus alunos com base nas notas de provas trimestrais. 
// Leia o nome do aluno e suas três notas. Calcule a média e informe: 

//- Aprovado (média ≥ 7) 

//- Recuperação (média ≥ 5 e < 7) 

//- Reprovado (média < 5) 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char nomeAluno;
	float n1, n2, n3, media;
	
	printf("Nome do Aluno: ");
	scanf("%c", &nomeAluno);
	fflush(stdin);
	
	printf("Notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	fflush(stdin);
	
	media = (n1 + n2 + n3) / 3;
	
	if(media >= 7) {
		printf("O aluno %c esta aprovado com media %.2f", nomeAluno, media);
	} else if(media >= 5 && media < 7) {
		printf("O aluno %c esta em recuperacao com media %.2f", nomeAluno, media);
	} else {
		printf("O aluno %c esta reprovado com media %.2f", nomeAluno, media);
	}
	
	// printf("%f, %f, %f", n1, n2, n3);
	
	return 0;
}
