#include<stdio.h>
int main() {
	int N,i;
	printf("N = ");
	scanf("%d",&N);
	printf("Day so: ");
	for(i=2*N; i<3*N; i++)
		printf("%d ",i);
	printf("%d",N*3);
	return 0;
}
