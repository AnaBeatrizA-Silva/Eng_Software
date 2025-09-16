#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculo_area(float r, float *a);

int main(void) {

	float raio, area;
	
	printf("Digite raio: ");
	scanf("%f", &raio);
	
	calculo_area(raio, &area);
	
	printf("A area e %.2f \n", area);

	return 0;
}

void calculo_area(float r, float *a) {
	*a = M_PI * pow(r,2);
}