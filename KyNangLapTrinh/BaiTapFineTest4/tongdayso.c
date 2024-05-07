#include<stdio.h>
int main() {
	int i,n,s=0;
	printf("N = ");
	scanf("%d",&n);
	for(i=2; i<=n; i++) {
		s+=(i-1)*i*(i+1);
		printf("%d\n", s);

	}
	printf("A = %d\n",s);
	return 0;
}
