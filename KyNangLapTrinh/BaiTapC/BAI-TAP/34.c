#include <stdio.h>
int main() {
	int N, i;
	printf("Nhap (4<n<20) n = "); scanf("%i",&N);
	if (N > 4 && N < 20) {
		int A[N];
		for(i = 1; i <= N; i++) {
			printf("So thu %i = ", i); scanf("%i", &A[i]);
		}
		printf("\nIn so chan: ");
		for(i = 1; i <= N; i++){
		
		if(A[i] % 2 == 0){
			printf("%d ",A[i]);
		}
	}
		int j,dem = 0;
		for (i = 0; i < N; i++) {
			for (j = 0; ; j++) {
					if (j*j == A[i]) {
						dem++;
					}
					if (j*j >= A[i]) {
						break;
					}
			}
		}
		printf("\nDay co %i so chinh phuong!", dem);
	}else{
		printf("n khong hop le!");
	}
	return 0;
}
