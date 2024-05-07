#include<stdio.h>
#include<math.h>

int giaithua(int n) {
	int res = 1, i;
	for(i = 2; i <= n; i++) res *= i;
	return res;
}

int main() {
	float s1 = 0;
	int n, i;
	printf("Nhap N: "); scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		s1 += 1.0 / giaithua(i);
	}
	
	printf("S1 = %g\n", s1);
}