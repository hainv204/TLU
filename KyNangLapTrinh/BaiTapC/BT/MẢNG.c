#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a[1000];
while(n<=0 || n>100){
	printf("Nhap N = "); scanf("%d",&n);
}
	for(i=1;i<=n;i++){
		printf("So thu %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nDay so:");
	for(i=1;i<=n;i++)
		printf(" %d",a[i]);
return 0;
}