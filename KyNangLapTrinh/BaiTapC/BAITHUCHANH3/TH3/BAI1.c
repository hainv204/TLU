#include<stdio.h>
int main(){
	int m,n,i;
	do{
	printf("M = "); scanf("%d",&m);
	printf("N = "); scanf("%d",&n);
	}while(m<=0 || m>=n);
printf("Cac so nguyen lien tiep tu M den N tang dan:");
for(i=m;i<=n;i++){
	printf(" %d",i);
}
printf("\nCac so nguyen lien tiep tu M den N giam dan:");
for(i=n; i>=m;i--) {
	printf(" %d",i);
}
return 0;
}
