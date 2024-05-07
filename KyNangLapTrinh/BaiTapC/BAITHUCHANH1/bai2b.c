#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float a,b,c;
	printf("Nhap x=");scanf("%f",&a);
	printf("\nNhap y=");scanf("%f",&b);
	c= a*b-pow(a,2)+a*pow(b,2)-pow(b,3);
	printf("G= %g",c);
	return 0;
}
