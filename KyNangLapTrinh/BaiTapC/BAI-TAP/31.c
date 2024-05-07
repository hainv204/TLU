#include <stdio.h>
int main(){
	int n, i, a[100], dem = 0, dem2 = 0, j;
	printf("Nhap n = ");scanf("%d",&n);
	if(n > 0){
		for(i = 1; i <= n; i++){
			printf("So thu %d: ",i);scanf("%d",&a[i]);
		}
		for(i = 1; i<= n; i++){
			if(a[i] % 5 == 0){
				dem++;
			}
		}
		printf("\nCo %d so chia het cho 5.",dem);
		for (i = 1; i <= n; i++) {
			for (j = 0; ; j++) {
					if (j*j == a[i]) {
						dem2++;
					}
					if (j*j >= a[i]) {
						break;
					}
			}
		}
		printf("\nCo %i so chinh phuong.", dem2);
		
	}else{
		printf("n nhap khong dung!");
	}
	return 0;
}
