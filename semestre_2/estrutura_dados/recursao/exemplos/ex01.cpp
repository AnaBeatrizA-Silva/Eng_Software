#include <stdio.h>
#include <stdlib.h>

int fat(int n);

int main(void) {

	int num;
	
	printf("Digite um numeor: ");
	scanf("%i", &num);
	
	printf("Fatorial do numero e %i \n", fat(num));

	return 0;
}

int fat(int n) {
	if(n == 1) return 1; else return n * fat(n - 1);
}