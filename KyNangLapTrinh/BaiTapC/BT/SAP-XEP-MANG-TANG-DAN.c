#include<stdio.h>
int main() {
	int A[1000],tam;
	int N,i,j;
	do {
		printf("So phan tu [N<100],N= ");
		scanf("%d",&N);
	} while(N<=0 || N>100);
	printf("Hay nhap day so...\n");
	for(i=0; i<N; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	printf("\nDay vua nhap...\n");
	for(i=0; i<N-1; i++) {
		for(j=i+1; j<N; j++)
			if(A[i]>A[j]) {
				tam=A[i];
				A[i]=A[j];
				A[j]=tam;
			}
		printf("\nLuot %d : ",i+1);
		for(j=0; j<N; j++)
			printf("%4d",A[j]);
	}
	printf("\nDay sau sap xep:\n");
	for(i=0; i<N; i++)
		printf("%d ", A[i]);
	return 0;
}
