#include<stdio.h>


int main() {
	float s = 1, i, n = 2, e;
	printf("Nhap e: "); scanf("%f", &e);
	
	
	for(i = 2; ; i++) {
		float t = 1.0 / i;
		printf("%g\n", t);
		s += t;
		if(t < e) break;
	}
	
	printf("S = %g", s);
}