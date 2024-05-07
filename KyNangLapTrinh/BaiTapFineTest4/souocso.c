#include<stdio.h>
int main() {
	int n,i=1,dem=0;
	printf("N = ");
	scanf("%d",&n);
	while(i<=n) {
		if(n%i==0) {
			dem++;
		}
		i++;
	}
	printf("So %d co %d uoc so.",n,dem);
	return 0;
}
