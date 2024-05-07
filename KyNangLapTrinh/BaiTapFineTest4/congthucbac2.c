#include<stdio.h>
int main() {
	int a,b,c,d;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	if(b<=c) {
		d = a*a + 3*a -1;
		printf("Y = %d",d);
	} else {
		printf("Y = 0");
	}
	return 0;
}
