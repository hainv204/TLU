#include <stdio.h>
int main(){
	int n,i,tong=0,a[100];
	do{
		printf("Nhap n = ");scanf("%d",&n);
	}while(n <= 0 || n>=100);
	for(i = 1;i <= n;i++){
		printf("So %d:",i);scanf("%d",&a[i]);
	}
	printf("In day: ");
	for(i = 1; i <= n; i++) {
		printf(" %i", a[i]);
	}
	for(i = 1;i <= n;i++){
		if(a[i] % 2 == 0 && a[i] > 0){
			tong = tong + a[i];
		}
	} 
	if(tong != 0){
		printf("\nTong so duong chan: %d",tong);
	}else{
		printf("\nKhong co so duong chan!");
	}
	return 0;
}
