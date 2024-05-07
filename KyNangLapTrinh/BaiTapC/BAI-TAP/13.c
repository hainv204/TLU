#include <stdio.h>
int main(){
	int n,i,tong=0,a[100];
	do{
		printf("Nhap n = ");scanf("%d",&n);
	}while(n <= 0 || n>50);
	for(i = 0;i < n;i++){
		printf("A[%d]=",i);scanf("%d",&a[i]);
	}
	printf("In day: ");
	for(i = 0; i < n; i++) {
		printf(" %i", a[i]);
	}
	for(i = 0;i < n;i++){
		if(a[i] % 3 == 0){
			tong = tong + a[i];
		}
	} 
	printf("\nTong cac so nguyen chia het cho 3: %d",tong);
	return 0;
}
