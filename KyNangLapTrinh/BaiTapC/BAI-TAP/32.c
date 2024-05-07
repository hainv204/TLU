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
	printf("\nSo lon nhat: %d",max);
	int j,dem = 0;
	printf("\nCac so chinh phuong:");
	for (i = 1; i <= N; i++) {
		for (j = 0; ; j++) {
				if (j*j == a[i]) {
					printf(" %i", a[i]);
					}
					if (j*j >= a[i]) {
						break;
					}
			}
		}
	return 0;
}
