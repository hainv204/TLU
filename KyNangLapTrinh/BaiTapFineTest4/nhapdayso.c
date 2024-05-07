#include<stdio.h>
int main() {
	int n,i,a[1000],demam=0;
	printf("N = ");
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Day A =");
for(i=0;i<n;i++){
	printf(" %d", a[i]);
}
printf("\n");
	for(i=0; i<n; i++) {
		if(a[i]<0)
			demam++;
	}
	printf("So so am trong A: %d",demam);
	return 0;
}
