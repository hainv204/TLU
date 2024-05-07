#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	if(n<2) {
		printf("%d khong phai la so nguyen to\n",n);
	} else {
		int i,kiemtra=1;
		for(i=2; i<=sqrt(n); i++) {
			if(n%i==0) {
				kiemtra=0;
				break;
			}
		}
		if(kiemtra==1) {
			printf("%d la so nguyen to\n",n);
		} else {
			printf("%d khong phai la so nguyen to\n",n);
		}
	}
	return 0;
}
