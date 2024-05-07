#include<stdio.h>
#include<math.h>


int main() {
	float s1 = 0;
	int n, i;
	printf("Nhap N: "); scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		s1 += 1.0 / i;
	}
	
	printf("S1 = %g", s1);
}