#include<stdio.h>
#include<math.h>

int giaithua(int n) {
	int res = 1, i;
	for(i = 2; i <= n; i++) res *= i;
	return res;
}

int main() {
	float s1, s2, x;
	int n, i;
	printf("Nhap N: "); scanf("%d", &n);
	printf("Nhap X: "); scanf("%f", &x);
	
	for(i = 1; i <= n; i++) {
		s1 += pow(x, i) / i * 1.0;
		s2 += pow(x, i) / (giaithua(i) * 1.0);
		
	}
	
	printf("S1 = %g\n", s1);
	printf("S2 = %g", s2);
}