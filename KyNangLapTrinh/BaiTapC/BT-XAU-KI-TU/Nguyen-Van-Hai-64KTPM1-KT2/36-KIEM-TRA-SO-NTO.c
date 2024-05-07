#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap n = "); scanf("%i",&N);
	if (N > 0 && N < 100) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
		}
		int dem =0, j;
		for (i = 0; i < N; i++) {
			for (j = 2; j < A[i]; j++) {
				if (A[i] % j == 0) {
				break;
			
				}
			}
			if (j == A[i]) {
				dem++;
			}		
		}
		printf("Day co %d so nguyen to.", dem);
	}else{
		printf("n = %d khong hop le!",N);
	}
		
	return 0;
}
