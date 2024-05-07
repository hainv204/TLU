#include<stdio.h>
#include<math.h>

int main() {
	int n, i, s = 0, cnt = 0;
	float tbc;
	printf("N = "); scanf("%d", &n);
	
	printf("Cac uoc so cua %d la:", n);
	for(i = 1; i < n; i++) {
		if(n % i == 0) {
			printf(" %d", i);
			s += i;
			cnt++;
		}
	}
	printf("\nTrung binh cong cac uoc so la: %g", s / (cnt * 1.0));
	
	
}