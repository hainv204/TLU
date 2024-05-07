#include <stdio.h>
int main(){
	int n,i,tong=0,a[100];
	do{
		printf("Nhap n = ");scanf("%d",&n);
	}while(n <= 0 || n>=100);
	for(i = 1;i <= n;i++){
		printf("So %d:",i);scanf("%d",&a[i]);
	}
	printf("In so le:");
	for(i = 1;i <= n;i++){
		if(a[i] % 2 != 0){
			printf(" %d",a[i]);
		}
	}
	return 0;
}
