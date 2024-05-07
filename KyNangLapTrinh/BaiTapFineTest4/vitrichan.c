#include<stdio.h>
#include<conio.h>
int main() {
	int n,i;
	float A[2000];
	printf("N = ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%g",&A[i]);
	}
	printf("Cac phan tu o vi tri chan:");
	for(i=0; i<n; i++) {
		if(i%2==0)
			printf(" %g",A[i]);
	}
	return 0;
}

