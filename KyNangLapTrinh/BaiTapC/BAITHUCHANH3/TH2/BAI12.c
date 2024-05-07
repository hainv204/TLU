#include<stdio.h>
#include<math.h>
int main() {
	float a,b,t;
	printf("So luong : ");
	scanf("%f",&a);
	printf("Don gia : ");
	scanf("%f",&b);
	if(5<=a || a>=10)
		t=a*b*0.85;
	else
		t=a*b*0.80+ (a-5)*b*0.85;
	printf("so tien khach phai tra la : %.3f",t);
}

