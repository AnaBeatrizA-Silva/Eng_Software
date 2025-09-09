#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float a, float b, float c, float *x1, float *x2);

int main(void) {
	
	float a, b, c, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);

	equacao(a, b, c, &x1, &x2);
	
	printf("X1 = %.1f \n", x1);
	printf("X2 = %.1f \n", x2);

	return 0;
}

void equacao(float a, float b, float c, float *x1, float *x2) {
	float delta = pow(b, 2) - 4 * a * c;
	
	*x1 = (-b + sqrt(delta))/ (2 * a);
	*x2 = (-b - sqrt(delta))/ (2 * a);
}