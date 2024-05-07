#include<stdio.h>
int main() {
	int n,s=0,i;
	printf("N = ");
	scanf("%d",&n);
	for(i=1; s+i<n; i++) {
		s+=i;
	}
	printf("m lon nhat = %d",i-1);
	return 0;
}
