#include<stdio.h>
int main() {
	int n,m;
	printf("M = ");
	scanf("%d",&m);
	printf("N = ");
	scanf("%d",&n);
	if(m==0 || n==0)
		return 0;
	for(int i=0; i<m; i++) {
		for(int j=1; j<n; j++)
			printf("0 ");
		printf("0\n");
	}
}