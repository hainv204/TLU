#include<stdio.h>
int main() {
	int n,i,dem=0;
	printf("N = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
			dem++;
	}
	printf("So %d co %d uoc so.",n,dem);
	return 0;
}
