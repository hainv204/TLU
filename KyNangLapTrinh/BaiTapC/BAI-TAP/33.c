#include <stdio.h>
int main() {
	int N, i, a[100];
	do{
		printf("Nhap n = ");scanf("%d",&N);
	}while(N <= 0 || N >= 100);
	for(i = 1;i <= N;i++){
		printf("So thu %d: ",i);scanf("%d",&a[i]);
	}
	int max = a[1];
		for (i = 1; i <= N; i++) {
			if (a[i] > max) {
				max = a[i];
			}
		}
	int min = a[1];
		for (i = 1; i <= N; i++) {
			if (a[i] < min) {
				min = a[i];
			}
		}
	printf("\nSo max = %d, so min = %d", max, min);
		int tong = 0;
		for (i = 1; i <= N; i++) {
			tong = tong + a[i];
		}
		printf("\nTrung binh cong day so: %g",(float) tong / N);
	return 0;
}
