#include<stdio.h>
int main() {
	int m,n,i,s=0;
	do {
		printf("M = ");
		scanf("%d",&m);
		printf("N = ");
		scanf("%d",&n);
	} while(m<=0 || m>=n);
	for(i=m; i<=n; i++) {
		s+=i;
	}
	printf("Tong cac so nguyen lien tiep tu M den N: %d",s);
	return 0;
}