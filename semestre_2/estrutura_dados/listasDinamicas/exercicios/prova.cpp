#include <stdio.h>
#include <stdlib.h>

int gr(int mt) {
	if(mt == 0) return 0;
	return (mt % 10) + gr(mt / 10);
}

int ex(int *v, int t, int x) {
	for(int i = 0; i < t; i++) {
		if(v[i] == x) return 1;
	}
	return 0;
}

int gn(int mt, int *nm) {
	for(int i = 0; i < 8; i++) {
		int sm = gr(mt);
		int bs = sm + i;
		
		int vl = (bs % 99) + 1;
		if(vl % 3 == 0) {
			vl = (vl * 3) % 99;
			if(vl == 0) vl = 1;
		}
		
		while(ex(nm, i, vl)) {
			vl = (vl + 7) % 99;
			if(vl == 0) vl = 1;
		}
		
		nm[i] = vl;
		mt = (mt / 10) + vl;
	}
}

int main(void) {

	int matricula = 330333, numeros[8];
	
	gn(matricula, numeros);
	
	printf("Numeros: ");
	for(int i = 0; i < 8; i++) {
		printf("%i", numeros[i]);
		if(i < 7) printf(", ");
	}
	
	printf("\n");

	return 0;
}
