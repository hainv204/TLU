#include<stdio.h>

int giaithua(int n) {
	int res = 1, i;
	for(i = 2; i <= n; i++) res *= i;
	return res;
}

int main() {
	float s = 0, i, n = 2, e;
	printf("Nhap e: "); scanf("%f", &e);
	
	//printf("%d", giaithua(e));
	
	for(i = 1; ; i++) {
		float t = 1.0 / giaithua(i);
		printf("%.30f\n", t);
		s += t;
		if(t < e) break;
	}
	
	printf("S = %.30f", s);
}