#include<stdio.h>


int main() {
	float s = 1, i; int n;
	printf("Nhap n: "); scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		float t = 1.0 / (i * (i + 1));
		s += t;
	}
	
	printf("S = %g", s);
}