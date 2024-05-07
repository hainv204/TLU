#include <stdio.h>
int main() {
	int N, i;
	printf("N = "); scanf("%i",&N);
	if (N > 0) {
		int A[N];
		for(i = 0; i < N; i++) {
			printf("A[%i] = ", i); scanf("%i", &A[i]);
		}
		int dem = 0;
		int j;
		int max = 0;
		for (i = 0; i < N; i++) {
			for (j = 1; ; j++) {
					if (j*j == A[i]) {
						if (A[i] > max) {
							max = A[i];
						}
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		printf("\nDao nguoc:");
		for(i = N - 1; i >= 0; i--) {
			printf(" %i", A[i]);
		}
		if(max != 0){
		printf("\nChinh phuong max: %i", max);	
		}
}else{
	printf("N = %d khong duong!",N);
}
	return 0;
}
