#include<stdio.h>
#include<math.h>

int prime(int n) {
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n, s = 0, i, cntPrime = 0;
	printf("Nhap N: "); scanf("%d", &n);
	
	for(i = 2; i <= n; i++) {
		if(prime(i)) { 
			printf("%d ", i);
			s += i;
			cntPrime++;
		}				
	}
	printf("\nTong cac so nguyen to la: %d\n", s);
	printf("Trung binh cong cac so nguyen to la: %g", s / (cntPrime * 1.0));
	
}