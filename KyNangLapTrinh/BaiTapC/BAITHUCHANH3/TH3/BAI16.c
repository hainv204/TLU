#include<stdio.h>


int main() {
	float s = 1, i, n = 2, e;
	printf("Nhap e: "); scanf("%f", &e);
	
	
	for(i = 1; ; i++) {
		float t = 1.0 / (i * (i + 1));
		printf("%.30f\n", t);
		s += t;
		if(t < e) break;
	}
	
	printf("S = %.30f", s);
}