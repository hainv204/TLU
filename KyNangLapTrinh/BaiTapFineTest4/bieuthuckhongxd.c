#include<stdio.h>
#include<math.h>
int main() {
	int n;
	float y;
	printf("Nhap x = ");
	scanf("%d",&n);
	if(n>0 && n!=3) {
		y = (1+sqrt(n))/(n-3);
		printf("Ket qua: %g",y);
	} else {
		printf("Bieu thuc khong xac dinh");
	}
	return 0;
}