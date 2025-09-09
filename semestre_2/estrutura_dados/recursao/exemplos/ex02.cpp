#include <stdio.h>
#include <stdlib.h>

int fib(int n);

int main(void) {
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	printf("O valor e %i \n", fib(num));

	return 0;
}

int fib(int n) {
	if(n == 1 || n == 2) return 1; else return fib(n - 2) + fib(n - 1);
}